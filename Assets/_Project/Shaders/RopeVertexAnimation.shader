Shader "TangleMaster/RopeVertexAnimation"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _MainTex ("Texture", 2D) = "white" {}
        _Smoothness ("Smoothness", Range(0,1)) = 0.3
        
        [Header(Wave Animation)]
        _WaveSpeed ("Wave Speed", Float) = 0.5
        _WaveAmount ("Wave Amount", Float) = 0.02
        _WaveFrequency ("Wave Frequency", Float) = 3.0
    }
    
    SubShader
    {
        Tags 
        { 
            "RenderType"="Opaque" 
            "RenderPipeline"="UniversalRenderPipeline"
        }

        Pass
        {
            Name "ForwardLit"
            Tags { "LightMode"="UniversalForward" }

            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog

            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"

            struct Attributes
            {
                float4 positionOS : POSITION;
                float3 normalOS : NORMAL;
                float2 uv : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionHCS : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 positionWS : TEXCOORD1;
                float3 normalWS : TEXCOORD2;
                float fogCoord : TEXCOORD3;
            };

            TEXTURE2D(_MainTex);
            SAMPLER(sampler_MainTex);

            CBUFFER_START(UnityPerMaterial)
                float4 _Color;
                float4 _MainTex_ST;
                float _Smoothness;
                float _WaveSpeed;
                float _WaveAmount;
                float _WaveFrequency;
            CBUFFER_END

            // Control points array (max 12 points)
            float4 _ControlPoints[12];
            int _ControlPointCount;

            Varyings vert(Attributes IN)
            {
                Varyings OUT;

                float3 posOS = IN.positionOS.xyz;

                // If we have control points, deform mesh
                if (_ControlPointCount >= 2)
                {
                    // Get t value (0-1) from UV.y
                    float t = IN.uv.y;
                    
                    // Find segment
                    float scaledT = t * (_ControlPointCount - 1);
                    int index = min((int)scaledT, _ControlPointCount - 2);
                    float localT = scaledT - index;
                    
                    // Simple lerp between control points
                    float3 p1 = _ControlPoints[index].xyz;
                    float3 p2 = _ControlPoints[index + 1].xyz;
                    float3 spinePos = lerp(p1, p2, localT);
                    
                    // Replace Y position with spine
                    posOS.y = spinePos.y;
                    posOS.x += spinePos.x;
                    posOS.z += spinePos.z;
                }

                // Add wave animation
                float time = _Time.y * _WaveSpeed;
                float wave = sin((IN.uv.y * _WaveFrequency + time) * 3.14159) * _WaveAmount;
                float edgeDamp = sin(IN.uv.y * 3.14159);
                posOS.x += wave * edgeDamp;

                // Transform to clip space
                VertexPositionInputs posInputs = GetVertexPositionInputs(posOS);
                VertexNormalInputs normInputs = GetVertexNormalInputs(IN.normalOS);

                OUT.positionHCS = posInputs.positionCS;
                OUT.positionWS = posInputs.positionWS;
                OUT.normalWS = normInputs.normalWS;
                OUT.uv = TRANSFORM_TEX(IN.uv, _MainTex);
                OUT.fogCoord = ComputeFogFactor(posInputs.positionCS.z);

                return OUT;
            }

            half4 frag(Varyings IN) : SV_Target
            {
                // Simple lighting
                half4 albedo = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, IN.uv) * _Color;
                
                Light mainLight = GetMainLight();
                half3 lightDir = mainLight.direction;
                half3 lightColor = mainLight.color;
                
                half NdotL = saturate(dot(IN.normalWS, lightDir));
                half3 diffuse = albedo.rgb * lightColor * NdotL;
                
                half3 ambient = SampleSH(IN.normalWS) * albedo.rgb * 0.5;
                
                half3 finalColor = diffuse + ambient;
                finalColor = MixFog(finalColor, IN.fogCoord);

                return half4(finalColor, albedo.a);
            }
            ENDHLSL
        }
    }
    
    FallBack "Universal Render Pipeline/Lit"
}