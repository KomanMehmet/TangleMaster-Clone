Shader "TangleMaster/RopeSimplest"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _StartPoint ("Start Point", Vector) = (0,0,0,0)
        _EndPoint ("End Point", Vector) = (0,5,0,0)
        _SagAmount ("Sag Amount", Float) = 0.5
    }
    
    SubShader
    {
        Tags { "RenderType"="Opaque" }

        Pass
        {
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            struct Attributes
            {
                float4 positionOS : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionHCS : SV_POSITION;
            };

            float4 _Color;
            float4 _StartPoint;
            float4 _EndPoint;
            float _SagAmount;

            Varyings vert(Attributes IN)
            {
                Varyings OUT;

                float t = IN.uv.y;
                
                float3 worldPos = lerp(_StartPoint.xyz, _EndPoint.xyz, t);
                
                // Simple sag
                float sag = sin(t * 3.14159) * _SagAmount;
                worldPos.y -= sag;
                
                // Add radial offset
                worldPos.x += IN.positionOS.x;
                worldPos.z += IN.positionOS.z;

                OUT.positionHCS = TransformWorldToHClip(worldPos);

                return OUT;
            }

            half4 frag(Varyings IN) : SV_Target
            {
                return _Color;
            }
            ENDHLSL
        }
    }
}