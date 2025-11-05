#include "pch-cpp.hpp"





struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3;
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E;
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40;
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
struct Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4;
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t41EA7A95FBAE1E11C685B8E76E3A864529B3A81A;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct _SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC;
struct _SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB;
struct _SkipWhile_t7CA71528CED94C4449564630DE2226956B2F4569;
struct _SkipWhileAwait_t3261CEA8582ACEFAC9A4E6FAB18EED7BED4FDD49;
struct _SkipWhileAwaitWithCancellation_tA83384329D0D5B6D1459C6FB7E9B34450B2734E0;
struct _SkipWhileInt_t9749062D1023F777C53E9658548D703A926403D1;
struct _SkipWhileIntAwait_t47F21E145F6B9E992804C6532E6713317A87DEDC;
struct _SkipWhileIntAwaitWithCancellation_tA1C5E68BF16E3E446290E8924BEFE128B987CCCE;
struct _Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3;
struct _TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF;
struct _TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE;
struct _TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367;
struct _TakeWhile_tB7EFBAF6C56239F64FDD35BFBDDB351A968FDDF9;
struct _TakeWhileAwait_tF51FB982522E761445D48C2E8EA2144EEECCF4F9;
struct _TakeWhileAwaitWithCancellation_t6A463E2DD8F277E4312F51984AB779F72742870C;
struct _TakeWhileInt_t62222C2506ECC87725A0846B5470892DF3B01799;
struct _TakeWhileIntAwait_t7E0C7910A8439AEE25BC1C85426049FC0AD24A57;
struct _TakeWhileIntAwaitWithCancellation_tE9F4EBE736E5104E9F7C5D798163F861115A6A19;
struct _Throw_t31523161D900C8CD120EB28568E6D96023963490;
struct _ToUniTaskAsyncEnumerable_tD04F39A74DE55C96DB5674C29B605C4080A01DE0;
struct _ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F;
struct _ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B;
struct _ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5;
struct _Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070;
struct _Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D;
struct _WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091;
struct _WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2;
struct _WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C;
struct _WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3;
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622;
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE;
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct MethodInfo_t;
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};
struct CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B  : public RuntimeObject
{
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
	bool ___result;
};
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source;
	int32_t ____index;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	bool ___result;
	RuntimeObject* ___error;
	int16_t ___version;
	bool ___hasUnhandledError;
	int32_t ___completedCount;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation;
	RuntimeObject* ___continuationState;
};
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source;
	bool ___result;
	int16_t ___token;
};
struct UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 
{
	RuntimeObject* ___source;
	int32_t ___result;
	int16_t ___token;
};
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	RuntimeObject* ___runnerPromise;
	Exception_t* ___ex;
};
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	RuntimeObject* ___runner;
};
struct AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A__padding[1];
	};
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source;
	int16_t ___token;
};
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder;
	_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* ___U3CU3E4__this;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 ___U3CU3Eu__1;
};
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
struct UniTask_1_tF16183324C23C2BED9F2F4151405F68DC5AD994A 
{
	RuntimeObject* ___source;
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A ___result;
	int16_t ___token;
};
struct _Throw_t31523161D900C8CD120EB28568E6D96023963490  : public RuntimeObject
{
	Exception_t* ___exception;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
};
struct _ToUniTaskAsyncEnumerable_tD04F39A74DE55C96DB5674C29B605C4080A01DE0  : public RuntimeObject
{
	RuntimeObject* ___source;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken;
	RuntimeObject* ___enumerator;
};
struct _ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B : public RuntimeObject {};
struct _ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5 : public RuntimeObject {};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource;
};
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	int32_t ___value__;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task;
};
struct U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder;
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
typedef Il2CppFullySharedGenericStruct U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B;
struct U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___other;
	_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56 
{
	int32_t ___U3CU3E1__state;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___other;
	_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* ___U3CU3E4__this;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1;
};
struct AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814  : public MulticastDelegate_t
{
};
struct Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3  : public MulticastDelegate_t
{
};
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E  : public MulticastDelegate_t
{
};
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40  : public MulticastDelegate_t
{
};
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};
struct Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4  : public MulticastDelegate_t
{
};
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25  : public MulticastDelegate_t
{
};
struct _SkipWhile_t7CA71528CED94C4449564630DE2226956B2F4569 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipWhileAwait_t3261CEA8582ACEFAC9A4E6FAB18EED7BED4FDD49 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipWhileAwaitWithCancellation_tA83384329D0D5B6D1459C6FB7E9B34450B2734E0 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipWhileInt_t9749062D1023F777C53E9658548D703A926403D1 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipWhileIntAwait_t47F21E145F6B9E992804C6532E6713317A87DEDC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipWhileIntAwaitWithCancellation_tA1C5E68BF16E3E446290E8924BEFE128B987CCCE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeWhile_tB7EFBAF6C56239F64FDD35BFBDDB351A968FDDF9 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeWhileAwait_tF51FB982522E761445D48C2E8EA2144EEECCF4F9 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeWhileAwaitWithCancellation_t6A463E2DD8F277E4312F51984AB779F72742870C : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeWhileInt_t62222C2506ECC87725A0846B5470892DF3B01799 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeWhileIntAwait_t7E0C7910A8439AEE25BC1C85426049FC0AD24A57 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeWhileIntAwaitWithCancellation_tE9F4EBE736E5104E9F7C5D798163F861115A6A19 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate;
};
struct CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields
{
	UniTask_1_tF16183324C23C2BED9F2F4151405F68DC5AD994A ___AsyncUnit;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___True;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___False;
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___Zero;
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___MinusOne;
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___One;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___setCurrentCallbackDelegate;
};
struct AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate;
};
struct _SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate;
};
struct _ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OnCanceledDelegate;
};
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
};
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_gshared (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_gshared (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC81E20AFD7731109F88802C7F08E108D5BAEC12E_gshared (bool ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255 (UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2* __this, const RuntimeMethod* method) ;
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B (Exception_t* ___0_ex, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (Exception_t*, const RuntimeMethod*))UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_gshared)(___0_ex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_gshared)(___0_cancellationToken, method);
}
inline void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_gshared)(__this, method);
}
inline int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline)(__this, method);
}
inline void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline)(__this, ___0_source, ___1_token, method);
}
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
inline void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline)(__this, ___0_continuation, ___1_state, method);
}
inline bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared)(__this, ___0_error, method);
}
inline bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method)
{
	return ((  bool (*) (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15, bool*, const RuntimeMethod*))MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_gshared)(__this, ___0_awaiter, ___1_result, method);
}
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared)(__this, ___0_result, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
inline bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_gshared)(__this, ___0_cancellationToken, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_left, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline)(method);
}
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline)(__this, ___0_continuation, method);
}
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE (Exception_t* ___0_ex, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC81E20AFD7731109F88802C7F08E108D5BAEC12E (bool ___0_value, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (bool, const RuntimeMethod*))UniTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC81E20AFD7731109F88802C7F08E108D5BAEC12E_gshared)(___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil__ctor_m267505BEA0DEC7A416FDB2702EAD286F53F48F83_gshared (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* __this, RuntimeObject* ___0_source, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___1_other, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:65>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:67>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:68>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken1;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:69>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:71>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___CancelDelegate1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_3, L_4, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_5);
	}

IL_002f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:75>
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ___1_other;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_7;
		L_7 = ((  UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 (*) (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_7;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:76>
		return;
	}
}
// Method Definition Index: 67154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_get_Current_m9909B0A1B8B3F7BF6BD36FED4696366D4DA31035_gshared (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:78>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10)), SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5);
		return;
	}
}
// Method Definition Index: 67155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_set_Current_m3137CB63CFA4F9501946A302D05651FBDC38CFF7_gshared (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:78>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_0, SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5);
		return;
	}
}
// Method Definition Index: 67156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipUntil_MoveNextAsync_m9F16AC8C85054C04210FD5ABEE090DE7D9FB7359_gshared (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:82>
		Exception_t* L_0 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:84>
		Exception_t* L_1 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_1, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:87>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:89>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65(L_4, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		return L_5;
	}

IL_002d:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:92>
		RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:94>
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_7, L_8);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_9);
	}

IL_004c:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:96>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_10 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_10, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:98>
		bool L_11 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:100>
		((  void (*) (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0065:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:102>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_12 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_13;
		L_13 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_12, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
		memset((&L_14), 0, sizeof(L_14));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_14), (RuntimeObject*)__this, L_13, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_14;
	}
}
// Method Definition Index: 67157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_SourceMoveNext_m76BB486842D20EDCFDAEBB904BE5A2B47DF18164_gshared (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	try
	{

IL_0000_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:110>
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:111>
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0044_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:113>
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), (bool)1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:114>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:115>
			bool L_4 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
			if (!L_4)
			{
				goto IL_0055_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:117>
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), (bool)0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:118>
			goto IL_0000_1;
		}

IL_0044_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:123>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7)))), L_5, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_0055_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:125>
			goto IL_0067;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:126>
		V_1 = L_6;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:128>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_8 = V_1;
		bool L_9;
		L_9 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_7, L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:129>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0067;
	}

IL_0067:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:130>
		return;
	}
}
// Method Definition Index: 67158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_MoveNextCore_m8B9B3B7E8BED14B3B70F74E19830FF8708087670_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t6B74CD54252BA952C6DFCF1E083AACD52E84A4B5);
	_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:134>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:136>
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_1 = V_0;
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:138>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:140>
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_6 = V_0;
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		NullCheck(L_8);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_9: *(void**)L_9));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:141>
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_10)->___completionSource);
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_11, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:142>
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_13 = V_0;
		bool L_14 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:144>
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_15 = V_0;
		NullCheck(L_15);
		((  void (*) (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}

IL_0047:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:149>
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_17, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0054:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:152>
		return;
	}
}
// Method Definition Index: 67159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 _SkipUntil_RunOther_mC461F30147DB819B9D2C36F4B39C6CD2182E9EFA_gshared (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___0_other, const RuntimeMethod* method) 
{
	U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runner), (void*)NULL);
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = ___0_other;
		(&V_0)->___other = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___other))->___source), (void*)NULL);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_2 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_3 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_4;
		L_4 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 67160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil_OnCanceled1_m5BA938CDC7C9F695895FF0FCBCEB8BCFF42BF885_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:171>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:172>
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1)->___completionSource);
		_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_3 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3));
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:173>
		return;
	}
}
// Method Definition Index: 67161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _SkipUntil_DisposeAsync_m94E06064F240087AE2D89643525BFF1FF2528D8A_gshared (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:178>
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:179>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:181>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_001f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:183>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 67162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntil__cctor_mCACDAC7403167088FC9650C6503382F7380AE2A2_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:52>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), NULL);
		((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntil.cs:53>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), NULL);
		((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled__ctor_m6FC893A1A8C443B409F2721C1A3FB385EF7C27FE_gshared (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:50>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:52>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:53>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken1;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:54>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken2;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:55>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken1), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:57>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___CancelDelegate1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_4, L_5, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_6);
	}

IL_0036:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:59>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken2), NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:61>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___CancelDelegate2;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_11, L_12, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_13);
	}

IL_005a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:64>
		return;
	}
}
// Method Definition Index: 67168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_get_Current_m48E326550C895A9B23E4BEFC6901E96AE4C501AC_gshared (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:66>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12)), SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF);
		return;
	}
}
// Method Definition Index: 67169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_set_Current_m7126267D90B9DD8438486D8F6E90069F37EE1710_gshared (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:66>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12), L_0, SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF);
		return;
	}
}
// Method Definition Index: 67170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipUntilCanceled_MoveNextAsync_mA67A90CC65355D6B3A751CF79564965E7B7F9139_gshared (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:70>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:72>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4)))), NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:72>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), 1);
	}

IL_001c:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:73>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5)))), NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:73>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), 1);
	}

IL_0030:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:74>
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_5);
	}

IL_0047:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:76>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_6, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:78>
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:80>
		((  void (*) (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0060:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:82>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_9;
		L_9 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_8, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
		memset((&L_10), 0, sizeof(L_10));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_10), (RuntimeObject*)__this, L_9, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 67171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_SourceMoveNext_m7A93C9561F441F726383AD9FB239117228AFD086_gshared (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	try
	{

IL_0000_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:90>
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:91>
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0044_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:93>
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11), (bool)1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:94>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:95>
			bool L_4 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11));
			if (!L_4)
			{
				goto IL_0055_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:97>
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11), (bool)0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:98>
			goto IL_0000_1;
		}

IL_0044_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:103>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10)))), L_5, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_0055_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:105>
			goto IL_0067;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:106>
		V_1 = L_6;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:108>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_8 = V_1;
		bool L_9;
		L_9 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_7, L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:109>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0067;
	}

IL_0067:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:110>
		return;
	}
}
// Method Definition Index: 67172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_MoveNextCore_mFEC14EEB1E03767ED621FBAE31915D7935D98B86_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t53391FED8FD9DB7570A102307C051F75BA502EDF);
	_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:114>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:116>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_1 = V_0;
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:118>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:120>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_6 = V_0;
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck(L_8);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_9: *(void**)L_9));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:121>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_10)->___completionSource);
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_11, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:122>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_13 = V_0;
		bool L_14 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11));
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:124>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_15 = V_0;
		NullCheck(L_15);
		((  void (*) (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}

IL_0047:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:129>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_17, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0054:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:132>
		return;
	}
}
// Method Definition Index: 67173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_OnCanceled1_mF949F920CF80A036B1878C5B359B87572BF798F8_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:136>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:137>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_1 = V_0;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:139>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_3 = V_0;
		int32_t L_4;
		L_4 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8)))), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:141>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_5 = V_0;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:142>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_6 = V_0;
		NullCheck(L_6);
		((  void (*) (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:145>
		return;
	}
}
// Method Definition Index: 67174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled_OnCanceled2_m211DA9FAF142883938CCE9681BF26F2DDF5B85A8_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:149>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:150>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_1 = V_0;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:152>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_3 = V_0;
		int32_t L_4;
		L_4 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8)))), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:154>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_5 = V_0;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:155>
		_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* L_6 = V_0;
		NullCheck(L_6);
		((  void (*) (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:158>
		return;
	}
}
// Method Definition Index: 67175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _SkipUntilCanceled_DisposeAsync_mCC4DBC0A9EC4F857D70DBB4619E30AFE3A979648_gshared (_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:163>
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:164>
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:165>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:167>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_002a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:169>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 67176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipUntilCanceled__cctor_m3220CB5FFAAE990C3B74ED7901DAD471065E9D43_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:35>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:36>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), NULL);
		((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate2), (void*)L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipUntilCanceled.cs:37>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), NULL);
		((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_SkipUntilCanceled_tA28965C94E5DA519030B1235C1CBE199CA3E02BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhile__ctor_m7CBE12F6F2B0E5E0A6B7F91C99E6FDA6657E93DC_gshared (_SkipWhile_t7CA71528CED94C4449564630DE2226956B2F4569* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:80>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:82>
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:83>
		return;
	}
}
// Method Definition Index: 67180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhile_TryMoveNextCore_m42B24E0918B0ACD2196C05D7D566050A40128DFF_gshared (_SkipWhile_t7CA71528CED94C4449564630DE2226956B2F4569* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t660DBCF84CA881F30EAF3F13FB644FA740502C55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t660DBCF84CA881F30EAF3F13FB644FA740502C55);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:87>
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:89>
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_3);
		NullCheck(L_2);
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_3: *(void**)L_3));
		if (L_4)
		{
			goto IL_0036;
		}
	}

IL_001e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:91>
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:92>
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_5);
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_5: *(void**)L_5));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:93>
		bool* L_6 = ___1_result;
		*((int8_t*)L_6) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:94>
		return (bool)1;
	}

IL_0036:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:98>
		bool* L_7 = ___1_result;
		*((int8_t*)L_7) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:99>
		return (bool)0;
	}

IL_003b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:103>
		bool* L_8 = ___1_result;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:104>
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwait__ctor_mD477BED1AC3BEB9D68EF31208480A24FAC0AF478_gshared (_SkipWhileAwait_t3261CEA8582ACEFAC9A4E6FAB18EED7BED4FDD49* __this, RuntimeObject* ___0_source, Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:183>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:185>
		Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:186>
		return;
	}
}
// Method Definition Index: 67188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileAwait_TransformAsync_mA886DECE73C10C4449B1550248D90BB86389FBCC_gshared (_SkipWhileAwait_t3261CEA8582ACEFAC9A4E6FAB18EED7BED4FDD49* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC03B1288315E5DC732A44AB1F01726025F9EC17F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_tC03B1288315E5DC732A44AB1F01726025F9EC17F);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:190>
		Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_0 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:192>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:195>
		Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_2 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_tC03B1288315E5DC732A44AB1F01726025F9EC17F);
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_4;
		L_4 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3));
		return L_4;
	}
}
// Method Definition Index: 67189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwait_TrySetCurrentCore_mE4822806652689FB159830DE793CD84D651EF8C3_gshared (_SkipWhileAwait_t3261CEA8582ACEFAC9A4E6FAB18EED7BED4FDD49* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tC03B1288315E5DC732A44AB1F01726025F9EC17F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_tC03B1288315E5DC732A44AB1F01726025F9EC17F);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:200>
		bool L_0 = ___0_awaitResult;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:202>
		il2cpp_codegen_write_instance_field_data<Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:203>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:204>
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:205>
		return (bool)1;
	}

IL_001b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:209>
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:210>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwaitWithCancellation__ctor_mAE7A11A4F1BF7423FB5C825B5E8F971EA4EEC6A5_gshared (_SkipWhileAwaitWithCancellation_tA83384329D0D5B6D1459C6FB7E9B34450B2734E0* __this, RuntimeObject* ___0_source, Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:293>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:295>
		Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:296>
		return;
	}
}
// Method Definition Index: 67198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileAwaitWithCancellation_TransformAsync_m161E7B67B6ED5BBE9E8D82C8E306512663E58A9C_gshared (_SkipWhileAwaitWithCancellation_tA83384329D0D5B6D1459C6FB7E9B34450B2734E0* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t2840A1CEBEE2A6F48F44343BF09041D8B48CBA98 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t2840A1CEBEE2A6F48F44343BF09041D8B48CBA98);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:300>
		Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_0 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:302>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:305>
		Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_2 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t2840A1CEBEE2A6F48F44343BF09041D8B48CBA98);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),3));
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3), L_4);
		return L_5;
	}
}
// Method Definition Index: 67199
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwaitWithCancellation_TrySetCurrentCore_mAAB170B61B23C5F478A2AD578FBE1958DFE0AF2D_gshared (_SkipWhileAwaitWithCancellation_tA83384329D0D5B6D1459C6FB7E9B34450B2734E0* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t2840A1CEBEE2A6F48F44343BF09041D8B48CBA98 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t2840A1CEBEE2A6F48F44343BF09041D8B48CBA98);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:310>
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:311>
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:313>
		il2cpp_codegen_write_instance_field_data<Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:314>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_2: *(void**)L_2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:315>
		return (bool)1;
	}

IL_001b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:319>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileInt__ctor_m50FEB78ACD659E4EB3554F3AD2A052F8330879A1_gshared (_SkipWhileInt_t9749062D1023F777C53E9658548D703A926403D1* __this, RuntimeObject* ___0_source, Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:132>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:134>
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:135>
		return;
	}
}
// Method Definition Index: 67184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileInt_TryMoveNextCore_m717AC7CFDD064AE80A27CAC3A1051F20A5F84B9E_gshared (_SkipWhileInt_t9749062D1023F777C53E9658548D703A926403D1* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tF2C71609617C18BC931D6E3C8C28A187DCEF6EAD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_tF2C71609617C18BC931D6E3C8C28A187DCEF6EAD);
	const Il2CppFullySharedGenericAny L_8 = L_3;
	int32_t V_0 = 0;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:139>
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:141>
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_2 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_3);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		bool L_7;
		L_7 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_3: *(void**)L_3), L_6);
		if (L_7)
		{
			goto IL_0047;
		}
	}

IL_002f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:143>
		il2cpp_codegen_write_instance_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:144>
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_8: *(void**)L_8));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:145>
		bool* L_9 = ___1_result;
		*((int8_t*)L_9) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:146>
		return (bool)1;
	}

IL_0047:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:150>
		bool* L_10 = ___1_result;
		*((int8_t*)L_10) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:151>
		return (bool)0;
	}

IL_004c:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:155>
		bool* L_11 = ___1_result;
		*((int8_t*)L_11) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:156>
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwait__ctor_mB8B055C8EAF52B5F59FD734A141E934F49DF920A_gshared (_SkipWhileIntAwait_t47F21E145F6B9E992804C6532E6713317A87DEDC* __this, RuntimeObject* ___0_source, Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:239>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:241>
		Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:242>
		return;
	}
}
// Method Definition Index: 67193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileIntAwait_TransformAsync_mE9E64FF369E416EB39EFD5BBCFCC7B02DB2694AC_gshared (_SkipWhileIntAwait_t47F21E145F6B9E992804C6532E6713317A87DEDC* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7D8A097151FBE3123FA7278E2DCDCEC0E04934D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t7D8A097151FBE3123FA7278E2DCDCEC0E04934D2);
	int32_t V_0 = 0;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:246>
		Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* L_0 = *(Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:248>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:251>
		Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* L_2 = *(Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t7D8A097151FBE3123FA7278E2DCDCEC0E04934D2);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7;
		L_7 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3), L_6);
		return L_7;
	}
}
// Method Definition Index: 67194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwait_TrySetCurrentCore_mF6998B9B7F1DCD271EA8A466A485885036578E70_gshared (_SkipWhileIntAwait_t47F21E145F6B9E992804C6532E6713317A87DEDC* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t7D8A097151FBE3123FA7278E2DCDCEC0E04934D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t7D8A097151FBE3123FA7278E2DCDCEC0E04934D2);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:256>
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:257>
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:259>
		il2cpp_codegen_write_instance_field_data<Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:260>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_2: *(void**)L_2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:261>
		return (bool)1;
	}

IL_001b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:265>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwaitWithCancellation__ctor_mAE108B05CF4EC781DF41E8C7B7A455A75539E580_gshared (_SkipWhileIntAwaitWithCancellation_tA1C5E68BF16E3E446290E8924BEFE128B987CCCE* __this, RuntimeObject* ___0_source, Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:348>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:350>
		Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:351>
		return;
	}
}
// Method Definition Index: 67203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _SkipWhileIntAwaitWithCancellation_TransformAsync_m0DCFDE7E5490CA8F447DB0F98A01C74246F78D08_gshared (_SkipWhileIntAwaitWithCancellation_tA1C5E68BF16E3E446290E8924BEFE128B987CCCE* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t2986EA4A9B04E2BD1CDBF7DA211DE38B96FC091A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TSource_t2986EA4A9B04E2BD1CDBF7DA211DE38B96FC091A);
	int32_t V_0 = 0;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:355>
		Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_0 = *(Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:357>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:360>
		Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_2 = *(Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t2986EA4A9B04E2BD1CDBF7DA211DE38B96FC091A);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		int32_t L_6 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),3));
		NullCheck(L_2);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_8;
		L_8 = InvokerFuncInvoker3< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3), L_6, L_7);
		return L_8;
	}
}
// Method Definition Index: 67204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwaitWithCancellation_TrySetCurrentCore_mA5B752886DE036C42908723EBEBAE7478616DA03_gshared (_SkipWhileIntAwaitWithCancellation_tA1C5E68BF16E3E446290E8924BEFE128B987CCCE* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t2986EA4A9B04E2BD1CDBF7DA211DE38B96FC091A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t2986EA4A9B04E2BD1CDBF7DA211DE38B96FC091A);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:365>
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:366>
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:368>
		il2cpp_codegen_write_instance_field_data<Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:369>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_2: *(void**)L_2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:370>
		return (bool)1;
	}

IL_001b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/SkipWhile.cs:374>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__ctor_m34D8348E28AC88B44AD51079E5CED2AA4092D6C6_gshared (_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:45>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:47>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:48>
		int32_t L_1 = ___1_count;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:49>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:51>
		return;
	}
}
// Method Definition Index: 67354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_get_Current_m11D2C3EC5CA79E188C3EC3FD7336835BFD21AE39_gshared (_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:53>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7)), SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED);
		return;
	}
}
// Method Definition Index: 67355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_set_Current_m4A68DB3EC9C05988C59CCFF82AF0D78B546CDEBC_gshared (_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:53>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_0, SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED);
		return;
	}
}
// Method Definition Index: 67356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Take_MoveNextAsync_mF700F4691888EA52595C4C4BE88D86B24FC5F745_gshared (_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:57>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:59>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:61>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_3);
	}

IL_002a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:64>
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:66>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_6;
	}

IL_003e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:69>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_7, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:70>
		((  void (*) (_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:71>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_9;
		L_9 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_8, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
		memset((&L_10), 0, sizeof(L_10));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_10), (RuntimeObject*)__this, L_9, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 67357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_SourceMoveNext_m7FB984EDB61C1FC62216A81BD1B2E434F81819DF_gshared (_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:78>
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:79>
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_002e_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:81>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:85>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 8)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5)))), L_4, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_003f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:87>
			goto IL_0051;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:88>
		V_1 = L_5;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:90>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_7 = V_1;
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_6, L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:91>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}

IL_0051:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:92>
		return;
	}
}
// Method Definition Index: 67358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_MoveNextCore_mFBD2348CF2D719FF7C75505FA65286F280F9D61A_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t17580974744063A35AFAA5D6F994CA8BB9941BED);
	_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:96>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:98>
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_1 = V_0;
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:100>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:102>
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_6 = V_0;
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_7 = L_6;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		NullCheck(L_7);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6), ((int32_t)il2cpp_codegen_add(L_8, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:103>
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_9 = V_0;
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_10 = V_0;
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4));
		NullCheck(L_11);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
		NullCheck(L_9);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_12: *(void**)L_12));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:104>
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_13 = V_0;
		NullCheck(L_13);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_14 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_13)->___completionSource);
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_14, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0047:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:108>
		_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_17, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0054:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:111>
		return;
	}
}
// Method Definition Index: 67359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Take_DisposeAsync_m66BA58D925C6402D2B777979F69809AF8F370827_gshared (_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:116>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:118>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:120>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 67360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__cctor_m7E4017ECAF7A156500F4F3152E1829BB2B45DA3A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Take.cs:35>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), NULL);
		((_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->___MoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Take_t3E1A728C8ECFA76A24089873209C5DEB8DEE09B3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->___MoveNextCoreDelegate), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__ctor_m01A033520AF054F7E00D84BAD694228AFF8D3F99_gshared (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:55>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:57>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:58>
		int32_t L_1 = ___1_count;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:59>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:61>
		return;
	}
}
// Method Definition Index: 67364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_get_Current_mAAFF16F6DDBBE862256C9268DD4F4AE394DC33B9_gshared (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:63>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9)), SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
		return;
	}
}
// Method Definition Index: 67365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_set_Current_mB3942A240A1BD8C440F836229F8E6C0FAF4D46AD_gshared (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:63>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_0, SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
		return;
	}
}
// Method Definition Index: 67366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeLast_MoveNextAsync_m733EB8568C7613A03EC3379CDF340E636C4DD6B3_gshared (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:67>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:69>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:71>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:72>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		il2cpp_codegen_write_instance_field_data<Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_4);
	}

IL_0035:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:75>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_5, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:76>
		((  void (*) (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:77>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_7;
		L_7 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_6, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_8;
		memset((&L_8), 0, sizeof(L_8));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_8), (RuntimeObject*)__this, L_7, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 67367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_SourceMoveNext_mED7101D5EAA6FE7E1390CA76A9A7C43BFEF89E9C_gshared (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:82>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:84>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:86>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_3, (Il2CppFullySharedGenericAny*)L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_4: *(void**)L_4));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:87>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_5, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:91>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_7, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:94>
		return;
	}

IL_0043:
	{
	}

IL_0044:
	try
	{

IL_0044_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:100>
			RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
			NullCheck(L_9);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
			L_10 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9);
			V_0 = L_10;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_11;
			L_11 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_11);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:101>
			bool L_12;
			L_12 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_12)
			{
				goto IL_0088_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:103>
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), (bool)1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:104>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:105>
			bool L_13 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
			if (!L_13)
			{
				goto IL_0099_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:107>
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), (bool)0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:108>
			goto IL_0044_1;
		}

IL_0088_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:113>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 13)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5)))), L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_0099_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:115>
			goto IL_00ab;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{
		Exception_t* L_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:116>
		V_1 = L_15;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:118>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_16 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_17 = V_1;
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:119>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ab;
	}

IL_00ab:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:120>
		return;
	}
}
// Method Definition Index: 67368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_MoveNextCore_mBF4B7CB3EDC8D9E0EF354C43C3E17F3CD9035BDD_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
	const Il2CppFullySharedGenericAny L_21 = L_15;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TSource_t899D237C35D83F8764EB6274B48FC3E11FEE8254);
	_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:125>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:127>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_1 = V_0;
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_009b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:129>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:131>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_6 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_9 = V_0;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:133>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_11 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_13 = V_0;
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4));
		NullCheck(L_14);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_14, (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_15: *(void**)L_15));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:135>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_16 = V_0;
		bool L_17 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (L_17)
		{
			goto IL_00a2;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:137>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_18 = V_0;
		NullCheck(L_18);
		((  void (*) (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}

IL_0055:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:142>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_19 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_20 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		NullCheck(L_20);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_20, (Il2CppFullySharedGenericAny*)L_21);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:143>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_22 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_23 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_24 = V_0;
		RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4));
		NullCheck(L_25);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_25, (Il2CppFullySharedGenericAny*)L_26);
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_26: *(void**)L_26));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:145>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_27 = V_0;
		bool L_28 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (L_28)
		{
			goto IL_00a2;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:147>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_29 = V_0;
		NullCheck(L_29);
		((  void (*) (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_29, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}

IL_0086:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:153>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_30 = V_0;
		NullCheck(L_30);
		il2cpp_codegen_write_instance_field_data<bool>(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8), (bool)0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:154>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_31 = V_0;
		NullCheck(L_31);
		il2cpp_codegen_write_instance_field_data<bool>(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7), (bool)1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:155>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_32 = V_0;
		NullCheck(L_32);
		((  void (*) (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}

IL_009b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:160>
		_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* L_33 = V_0;
		NullCheck(L_33);
		il2cpp_codegen_write_instance_field_data<bool>(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8), (bool)0);
	}

IL_00a2:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:162>
		return;
	}
}
// Method Definition Index: 67369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _TakeLast_DisposeAsync_m173AA5CF49F1D50B40CF6D22B6B5506DFA60D938_gshared (_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:167>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:169>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:171>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 67370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__cctor_m7B31E72096AB5975AD39579448EAC634B0D9AE3B_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeLast.cs:42>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), NULL);
		((_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->___MoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeLast_tE30632588E62BAF4BF828DF5A59E222D11CB40DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->___MoveNextCoreDelegate), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__ctor_mED3F203D50BF53F711113B9992D4C04308D0FC2D_gshared (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* __this, RuntimeObject* ___0_source, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___1_other, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:64>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:66>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:67>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken1;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:69>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:71>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___CancelDelegate1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_3, L_4, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_5);
	}

IL_002f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:76>
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ___1_other;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_7;
		L_7 = ((  UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 (*) (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_7;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:77>
		return;
	}
}
// Method Definition Index: 67374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_get_Current_mE490F2D36C5104FB80065FBFF3BCAB466AA23106_gshared (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:79>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9)), SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1);
		return;
	}
}
// Method Definition Index: 67375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_set_Current_m514B26F26ACBC1BB39AB36285AA8DD77FFF39E66_gshared (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:79>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_0, SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1);
		return;
	}
}
// Method Definition Index: 67376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeUntil_MoveNextAsync_m54A0D41B755DDC2618707F3269226DEB1EF7B004_gshared (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:83>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:85>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_1;
	}

IL_000e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:88>
		Exception_t* L_2 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:90>
		Exception_t* L_3 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_4;
		L_4 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_3, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		return L_4;
	}

IL_0022:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:93>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:95>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7;
		L_7 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65(L_6, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		return L_7;
	}

IL_003b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:98>
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		if (L_8)
		{
			goto IL_005a;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:100>
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_9, L_10);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_11);
	}

IL_005a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:103>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_12 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_12, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:104>
		((  void (*) (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:105>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// Method Definition Index: 67377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_SourceMoveNext_mB0B69C2B7367484BA81947B11B24DC0C8F4B5203_gshared (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:112>
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), L_2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:113>
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_002e_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:115>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:119>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8)))), L_4, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_003f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:121>
			goto IL_0051;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:122>
		V_1 = L_5;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:124>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_7 = V_1;
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_6, L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:125>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}

IL_0051:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:126>
		return;
	}
}
// Method Definition Index: 67378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_MoveNextCore_mF8648A859A3ECC8CAC62906ADC86D969B44024E9_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TSource_tCB512713FA1C3ADE58DD97F576D0CDEA827F7BE1);
	_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:130>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:132>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_1 = V_0;
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:134>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:136>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_6 = V_0;
		Exception_t* L_7 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:138>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_8)->___completionSource);
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_10 = V_0;
		Exception_t* L_11 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_9, L_11, UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:140>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))), NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:142>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_16 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_15)->___completionSource);
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_17 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3));
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_16, L_18, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_0055:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:146>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_20 = V_0;
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_21 = V_0;
		RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
		NullCheck(L_22);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_22, (Il2CppFullySharedGenericAny*)L_23);
		NullCheck(L_20);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_23: *(void**)L_23));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:147>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0074:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:152>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_27 = V_0;
		NullCheck(L_27);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_28 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_27)->___completionSource);
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_28, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0081:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:155>
		return;
	}
}
// Method Definition Index: 67379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 _TakeUntil_RunOther_mEDBACA6B817FD24AD6B5C3D8025A63E98F905B15_gshared (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___0_other, const RuntimeMethod* method) 
{
	U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runner), (void*)NULL);
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = ___0_other;
		(&V_0)->___other = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___other))->___source), (void*)NULL);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_2 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_3 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_4;
		L_4 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 67380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_OnCanceled1_mC33EBD88D28A8BF4BDFB0A8DC8DD6F8B2A07E1F4_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:174>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:175>
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1)->___completionSource);
		_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_3 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3));
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:176>
		return;
	}
}
// Method Definition Index: 67381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _TakeUntil_DisposeAsync_m0A067DCDDCB2192FC9AEB3C2F755A368EE3CBA6F_gshared (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:181>
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:182>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:184>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_001f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:186>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 67382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__cctor_m308CD5D49811BDB5DC6CF86D0B0F3BF598DD6AB2_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:52>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), NULL);
		((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntil.cs:53>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), NULL);
		((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__ctor_mCB1AB9C6557523662A0AE8A4594D480FA1EB71D8_gshared (_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:49>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:51>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:52>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken1;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:53>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken2;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:55>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken1), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:57>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___CancelDelegate1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_4, L_5, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_6);
	}

IL_0036:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:60>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken2), NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:62>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___CancelDelegate2;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_11, L_12, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_13);
	}

IL_005a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:65>
		return;
	}
}
// Method Definition Index: 67388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_get_Current_m7C7C06253ED667DEA640A9D4CC05BDF1B1BB4E88_gshared (_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:67>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11)), SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC);
		return;
	}
}
// Method Definition Index: 67389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_set_Current_m3E875A6766067332D699D43D2A474497909783B2_gshared (_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:67>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11), L_0, SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC);
		return;
	}
}
// Method Definition Index: 67390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeUntilCanceled_MoveNextAsync_m71274CCD83444CDEA682C8E3BAFBC53E0ACF9B86_gshared (_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:71>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4)))), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:71>
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), (bool)1);
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:72>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5)))), NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:72>
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), (bool)1);
	}

IL_0028:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:74>
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:76>
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_5);
	}

IL_0047:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:79>
		bool L_6 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:79>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_7;
	}

IL_0055:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:81>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_8, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:82>
		((  void (*) (_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:83>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_10;
		L_10 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_9, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
		memset((&L_11), 0, sizeof(L_11));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_11), (RuntimeObject*)__this, L_10, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_11;
	}
}
// Method Definition Index: 67391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_SourceMoveNext_m809140F9B9AA845ED68424CFA6F307FFB7DCBD6C_gshared (_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:90>
			RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
			NullCheck(L_0);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			V_0 = L_1;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_2;
			L_2 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:91>
			bool L_3;
			L_3 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_002e_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:93>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:97>
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___MoveNextCoreDelegate;
			Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10)))), L_4, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		}

IL_003f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:99>
			goto IL_0051;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:100>
		V_1 = L_5;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:102>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_7 = V_1;
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_6, L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:103>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0051;
	}

IL_0051:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:104>
		return;
	}
}
// Method Definition Index: 67392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_MoveNextCore_m35542FF149C7BAB6F49616F731F8D4618B87473B_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t5EAE1A42BA8826133D0C5781886E7755F058B4FC);
	_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:108>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:110>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_1 = V_0;
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:112>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:114>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_6 = V_0;
		bool L_7 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:116>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_8)->___completionSource);
		bool L_10;
		L_10 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_9, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0030:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:120>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_11 = V_0;
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_12 = V_0;
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck(L_13);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_13, (Il2CppFullySharedGenericAny*)L_14);
		NullCheck(L_11);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_14: *(void**)L_14));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:121>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_16 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_15)->___completionSource);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_16, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_004f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:126>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_18 = V_0;
		NullCheck(L_18);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_19 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_18)->___completionSource);
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_19, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_005c:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:129>
		return;
	}
}
// Method Definition Index: 67393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled1_m0DCDF221E084880DF8011BE1FD2861DAFC86760F_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:133>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:134>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_1 = V_0;
		bool L_2 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:136>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_3 = V_0;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:137>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_4 = V_0;
		NullCheck(L_4);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_4)->___completionSource);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_5, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0027:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:139>
		return;
	}
}
// Method Definition Index: 67394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled2_m44728D6FDE5B00A8D1620E17E6A28DF3DEF39BE7_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:143>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:144>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_1 = V_0;
		bool L_2 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:146>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_3 = V_0;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:147>
		_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* L_4 = V_0;
		NullCheck(L_4);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_4)->___completionSource);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_5, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0027:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:149>
		return;
	}
}
// Method Definition Index: 67395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _TakeUntilCanceled_DisposeAsync_m183C73D92568CAFBEE99C2BC92DA625F0E76CF23_gshared (_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:154>
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:155>
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:156>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:158>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
		NullCheck((RuntimeObject*)L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_002a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:160>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 67396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__cctor_m4B27A522A38B19635403D0349202E7CF14E608C6_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:35>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate1), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:36>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), NULL);
		((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___CancelDelegate2), (void*)L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeUntilCanceled.cs:37>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), NULL);
		((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_t04A4394518C749880AEB93B05DEBBC018E397367_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___MoveNextCoreDelegate), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhile__ctor_m2ADF754E51C48EB3891E2078B6B65FBCED700E8F_gshared (_TakeWhile_tB7EFBAF6C56239F64FDD35BFBDDB351A968FDDF9* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:80>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:82>
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:83>
		return;
	}
}
// Method Definition Index: 67400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhile_TryMoveNextCore_m19456309FDE640DF1348C5AF79B8C475F65B813D_gshared (_TakeWhile_tB7EFBAF6C56239F64FDD35BFBDDB351A968FDDF9* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t47C32639E19C7E444E75299FCDCEB1DB4B74BBF2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_t47C32639E19C7E444E75299FCDCEB1DB4B74BBF2);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:87>
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:89>
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck(L_1);
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_2: *(void**)L_2));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:91>
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_4: *(void**)L_4));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:92>
		bool* L_5 = ___1_result;
		*((int8_t*)L_5) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:93>
		return (bool)1;
	}

IL_0027:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:97>
		bool* L_6 = ___1_result;
		*((int8_t*)L_6) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:98>
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwait__ctor_mB757084CEED5D8391FB30C12699D6A7D0E286AB8_gshared (_TakeWhileAwait_tF51FB982522E761445D48C2E8EA2144EEECCF4F9* __this, RuntimeObject* ___0_source, Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:170>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:172>
		Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:173>
		return;
	}
}
// Method Definition Index: 67408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileAwait_TransformAsync_mA8810B4D51E9749781F0B1327358F4ECD8BF3D40_gshared (_TakeWhileAwait_tF51FB982522E761445D48C2E8EA2144EEECCF4F9* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t81694EFFF19DB938B4336759B58B423556D8D9A4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t81694EFFF19DB938B4336759B58B423556D8D9A4);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:177>
		Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_0 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t81694EFFF19DB938B4336759B58B423556D8D9A4);
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 67409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwait_TrySetCurrentCore_m1E2A3EA1AFED50B5973CA47F48776436442BFD7D_gshared (_TakeWhileAwait_tF51FB982522E761445D48C2E8EA2144EEECCF4F9* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t81694EFFF19DB938B4336759B58B423556D8D9A4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t81694EFFF19DB938B4336759B58B423556D8D9A4);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:182>
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:184>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:185>
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:186>
		return (bool)1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:190>
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:191>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67417
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwaitWithCancellation__ctor_m2F7450441BC206B26588E2A04C487A90733A169D_gshared (_TakeWhileAwaitWithCancellation_t6A463E2DD8F277E4312F51984AB779F72742870C* __this, RuntimeObject* ___0_source, Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:267>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:269>
		Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:270>
		return;
	}
}
// Method Definition Index: 67418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileAwaitWithCancellation_TransformAsync_mB16F6452E430B287C535CCD321749495DEC41FC6_gshared (_TakeWhileAwaitWithCancellation_t6A463E2DD8F277E4312F51984AB779F72742870C* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t887C60A7FC0C4B7247D5A0DD5EF8FA5E52DF0B15 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t887C60A7FC0C4B7247D5A0DD5EF8FA5E52DF0B15);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:274>
		Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_0 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t887C60A7FC0C4B7247D5A0DD5EF8FA5E52DF0B15);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),3));
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_3;
		L_3 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1), L_2);
		return L_3;
	}
}
// Method Definition Index: 67419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwaitWithCancellation_TrySetCurrentCore_m79404E65B58AFAEE0AEBECDC07571C81847DEAB3_gshared (_TakeWhileAwaitWithCancellation_t6A463E2DD8F277E4312F51984AB779F72742870C* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t887C60A7FC0C4B7247D5A0DD5EF8FA5E52DF0B15 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t887C60A7FC0C4B7247D5A0DD5EF8FA5E52DF0B15);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:279>
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:281>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:282>
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:283>
		return (bool)1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:287>
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:288>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileInt__ctor_mFD075354BF4EDF4299E9EDF05838CA4A5E05FF64_gshared (_TakeWhileInt_t62222C2506ECC87725A0846B5470892DF3B01799* __this, RuntimeObject* ___0_source, Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:126>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:128>
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:129>
		return;
	}
}
// Method Definition Index: 67404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileInt_TryMoveNextCore_m2CCB427E06D365919284040454A8633982A01F2F_gshared (_TakeWhileInt_t62222C2506ECC87725A0846B5470892DF3B01799* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tFFE338CCC8038CF92935ACD0A51E5C322C963712 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TSource_tFFE338CCC8038CF92935ACD0A51E5C322C963712);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	int32_t V_0 = 0;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:133>
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:135>
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_2);
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (((int64_t)L_4 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_4 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), ((int32_t)il2cpp_codegen_add(L_4, 1)));
		int32_t L_5 = V_0;
		NullCheck(L_1);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_2: *(void**)L_2), L_5);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:137>
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck((AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorBase_2_t3E3A11F8F6B1F99AAA08F89B88CCBF486EBE099A*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_7: *(void**)L_7));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:138>
		bool* L_8 = ___1_result;
		*((int8_t*)L_8) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:139>
		return (bool)1;
	}

IL_0038:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:143>
		bool* L_9 = ___1_result;
		*((int8_t*)L_9) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:144>
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwait__ctor_m06849CBE5915476D091DB1ADCA71F8B4D79CD27F_gshared (_TakeWhileIntAwait_t7E0C7910A8439AEE25BC1C85426049FC0AD24A57* __this, RuntimeObject* ___0_source, Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:219>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:221>
		Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:222>
		return;
	}
}
// Method Definition Index: 67413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileIntAwait_TransformAsync_mD15FA33265C837973758D1121687F579A023C0FF_gshared (_TakeWhileIntAwait_t7E0C7910A8439AEE25BC1C85426049FC0AD24A57* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t6D47F7184690E5CCFA0652C4D975CBDB51FF8C3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t6D47F7184690E5CCFA0652C4D975CBDB51FF8C3A);
	int32_t V_0 = 0;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:226>
		Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* L_0 = *(Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t6D47F7184690E5CCFA0652C4D975CBDB51FF8C3A);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), ((int32_t)il2cpp_codegen_add(L_3, 1)));
		int32_t L_4 = V_0;
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1), L_4);
		return L_5;
	}
}
// Method Definition Index: 67414
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwait_TrySetCurrentCore_m95E2F4596C39C8E8A23DFF6D8C4ADC4ADAFC3744_gshared (_TakeWhileIntAwait_t7E0C7910A8439AEE25BC1C85426049FC0AD24A57* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t6D47F7184690E5CCFA0652C4D975CBDB51FF8C3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t6D47F7184690E5CCFA0652C4D975CBDB51FF8C3A);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:231>
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:233>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:234>
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:235>
		return (bool)1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:239>
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:240>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwaitWithCancellation__ctor_m3406DDA37434DA8BF89724D42CD295233EA0AF27_gshared (_TakeWhileIntAwaitWithCancellation_tE9F4EBE736E5104E9F7C5D798163F861115A6A19* __this, RuntimeObject* ___0_source, Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:316>
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:318>
		Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_2 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:319>
		return;
	}
}
// Method Definition Index: 67423
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TakeWhileIntAwaitWithCancellation_TransformAsync_m04AF93C701330240C15C6C39D037BB15137C1D53_gshared (_TakeWhileIntAwaitWithCancellation_tE9F4EBE736E5104E9F7C5D798163F861115A6A19* __this, Il2CppFullySharedGenericAny ___0_sourceCurrent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t5BE85075B445F7C6CA6A23526ADB940250049B35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t5BE85075B445F7C6CA6A23526ADB940250049B35);
	int32_t V_0 = 0;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:323>
		Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_0 = *(Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_sourceCurrent : &___0_sourceCurrent), SizeOf_TSource_t5BE85075B445F7C6CA6A23526ADB940250049B35);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), ((int32_t)il2cpp_codegen_add(L_3, 1)));
		int32_t L_4 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),3));
		NullCheck(L_0);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
		L_6 = InvokerFuncInvoker3< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1), L_4, L_5);
		return L_6;
	}
}
// Method Definition Index: 67424
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwaitWithCancellation_TrySetCurrentCore_mB24360C17AD3FEEEF5A9FF5D16DB0600E2A71427_gshared (_TakeWhileIntAwaitWithCancellation_tE9F4EBE736E5104E9F7C5D798163F861115A6A19* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t5BE85075B445F7C6CA6A23526ADB940250049B35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TSource_t5BE85075B445F7C6CA6A23526ADB940250049B35);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:328>
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:330>
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (Il2CppFullySharedGenericAny*)L_1);
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (AsyncEnumeratorAwaitSelectorBase_3_tD24E1DBF42054A1774E7D06947B8FEC44DC7AE02*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:331>
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:332>
		return (bool)1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:336>
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/TakeWhile.cs:337>
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Throw__ctor_mFB25534B25E3C2333831E3F9536355EAF07A3480_gshared (_Throw_t31523161D900C8CD120EB28568E6D96023963490* __this, Exception_t* ___0_exception, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:34>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:36>
		Exception_t* L_0 = ___0_exception;
		__this->___exception = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:37>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken))->____source), (void*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:38>
		return;
	}
}
// Method Definition Index: 67428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Throw_get_Current_mB2346D03D4ACD9F6F0F7D573C5241D6AAAC76AB2_gshared (_Throw_t31523161D900C8CD120EB28568E6D96023963490* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t0BFD55708B7B37A8ACE07F6FBD42B42DFCF23956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t0BFD55708B7B37A8ACE07F6FBD42B42DFCF23956);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t0BFD55708B7B37A8ACE07F6FBD42B42DFCF23956);
	memset(V_0, 0, SizeOf_TValue_t0BFD55708B7B37A8ACE07F6FBD42B42DFCF23956);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:40>
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t0BFD55708B7B37A8ACE07F6FBD42B42DFCF23956);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_TValue_t0BFD55708B7B37A8ACE07F6FBD42B42DFCF23956);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t0BFD55708B7B37A8ACE07F6FBD42B42DFCF23956);
		return;
	}
}
// Method Definition Index: 67429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Throw_MoveNextAsync_m906E5AC257BCCB9BBEDDB4CC48FD31896881BDCB_gshared (_Throw_t31523161D900C8CD120EB28568E6D96023963490* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:44>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:45>
		Exception_t* L_1 = __this->___exception;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_1, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		return L_2;
	}
}
// Method Definition Index: 67430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Throw_DisposeAsync_mAAC6DBA0C7C4600EEC12F3DD653DD1ED2065DB79_gshared (_Throw_t31523161D900C8CD120EB28568E6D96023963490* __this, const RuntimeMethod* method) 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Throw.cs:50>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerable__ctor_m0AE3DD75A1083D2348E4112F381FF87F94FE692D_gshared (_ToUniTaskAsyncEnumerable_tD04F39A74DE55C96DB5674C29B605C4080A01DE0* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:61>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:63>
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:64>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken))->____source), (void*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:65>
		return;
	}
}
// Method Definition Index: 67517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerable_get_Current_m14CD97C57A9B7605F009127E0CBE1A5069E785F1_gshared (_ToUniTaskAsyncEnumerable_tD04F39A74DE55C96DB5674C29B605C4080A01DE0* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF5CBE4E8CA1B05B7EE0B25C8E1246F1159D4882D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF5CBE4E8CA1B05B7EE0B25C8E1246F1159D4882D);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:67>
		RuntimeObject* L_0 = __this->___enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tF5CBE4E8CA1B05B7EE0B25C8E1246F1159D4882D);
		return;
	}
}
// Method Definition Index: 67518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerable_MoveNextAsync_mCEB62A96C2125BC6E06164BE8B1BDDDFC9827D34_gshared (_ToUniTaskAsyncEnumerable_tD04F39A74DE55C96DB5674C29B605C4080A01DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:71>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:73>
		RuntimeObject* L_1 = __this->___enumerator;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:75>
		RuntimeObject* L_2 = __this->___source;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2);
		__this->___enumerator = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_3);
	}

IL_0024:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:78>
		RuntimeObject* L_4 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:80>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___True;
		return L_6;
	}

IL_0037:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:83>
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
		return L_7;
	}
}
// Method Definition Index: 67519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerable_DisposeAsync_m42D011F2DB303F4D071F348CE5BD173264B3EA23_gshared (_ToUniTaskAsyncEnumerable_tD04F39A74DE55C96DB5674C29B605C4080A01DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:88>
		RuntimeObject* L_0 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:89>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__ctor_mD926B5BFA4B7EC64C49A46F66C713FCD37B2C853_gshared (_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:230>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:232>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:233>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:234>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:236>
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken), NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:238>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___OnCanceledDelegate;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(L_4, L_5, (RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_6);
	}

IL_003a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:240>
		return;
	}
}
// Method Definition Index: 67539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_get_Current_m3CB6A84E180F68F6B8C7E10AD9C4B9388741EA40_gshared (_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_11 = L_1;
	const Il2CppFullySharedGenericAny L_12 = L_1;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
	memset(V_2, 0, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
	memset(V_3, 0, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:246>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:248>
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4)), SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
		return;
	}

IL_000f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:251>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0063;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0063:
				{
					return;
				}
			}
		});
		try
		{
			{
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_1), NULL);
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:253>
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				NullCheck(L_6);
				int32_t L_7;
				L_7 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				if (!L_7)
				{
					goto IL_004e_1;
				}
			}
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:255>
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				NullCheck(L_8);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_9, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:256>
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)1);
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:257>
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4)), SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
				il2cpp_codegen_memcpy(V_2, L_10, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
				goto IL_0064;
			}

IL_004e_1:
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:261>
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
				il2cpp_codegen_memcpy(L_11, V_3, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
				il2cpp_codegen_memcpy(V_2, L_11, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:264>
		il2cpp_codegen_memcpy(L_12, V_2, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
		return;
	}
}
// Method Definition Index: 67540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerableObservable_MoveNextAsync_mCE210117D29BDD78A4F6BBDCCC495A379D9828D8_gshared (_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:269>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00b0;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_00b0:
				{
					return;
				}
			}
		});
		try
		{
			{
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:271>
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)0);
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:273>
				il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2)))), NULL);
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:275>
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
				L_6 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65(L_5, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDE85A6B5D808E94241B676BFC770EC103669AB65_RuntimeMethod_var);
				V_2 = L_6;
				goto IL_00b1;
			}

IL_0033_1:
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:278>
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
				if (L_7)
				{
					goto IL_004d_1;
				}
			}
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:280>
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_8, (RuntimeObject*)__this);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), L_9);
			}

IL_004d_1:
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:283>
				Exception_t* L_10 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
				if (!L_10)
				{
					goto IL_0063_1;
				}
			}
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:285>
				Exception_t* L_11 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_11, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B_RuntimeMethod_var);
				V_2 = L_12;
				goto IL_00b1;
			}

IL_0063_1:
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:288>
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_13 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
				NullCheck(L_13);
				int32_t L_14;
				L_14 = ((  int32_t (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				if (!L_14)
				{
					goto IL_0078_1;
				}
			}
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:290>
				il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___True;
				V_2 = L_15;
				goto IL_00b1;
			}

IL_0078_1:
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:293>
				bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
				if (!L_16)
				{
					goto IL_0088_1;
				}
			}
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:295>
				il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False;
				V_2 = L_17;
				goto IL_00b1;
			}

IL_0088_1:
			{
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:298>
				UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
				UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_18, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
				//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:299>
				UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_19 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
				int16_t L_20;
				L_20 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_19, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_21;
				memset((&L_21), 0, sizeof(L_21));
				UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_21), (RuntimeObject*)__this, L_20, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
				V_2 = L_21;
				goto IL_00b1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b1:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:301>
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22 = V_2;
		return L_22;
	}
}
// Method Definition Index: 67541
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerableObservable_DisposeAsync_mF44F127F1B64FC1E5E51ADCE40DF170168030B0E_gshared (_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:305>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8));
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:306>
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9)))), NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:307>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_1 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_1, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:308>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 67542
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCompleted_mD7C8E9FD2D598A6C39185525AE3DC5E55B70B188_gshared (_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:313>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:315>
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), (bool)1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:316>
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_4 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
			bool L_5;
			L_5 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_4, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:317>
			goto IL_0031;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:318>
		return;
	}
}
// Method Definition Index: 67543
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnError_m137DE883F9355458CDF067BC1BE7CDD2BDDC04C8_gshared (_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:322>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:324>
			Exception_t* L_4 = ___0_error;
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_4);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:325>
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
			Exception_t* L_6 = ___0_error;
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_5, L_6, UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:326>
			goto IL_0031;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:327>
		return;
	}
}
// Method Definition Index: 67544
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnNext_m987B3B90CB6594B5415DB0768A0E508982241FB7_gshared (_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:331>
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0035:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:333>
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
			il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_T_t7DB57ADFCF84D1FF7AE72A686854E93CBF470C2E);
			NullCheck(L_4);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_5: *(void**)L_5));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:334>
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_6, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:335>
			goto IL_0036;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:336>
		return;
	}
}
// Method Definition Index: 67545
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCanceled_mDFC0CDEF1CD6FF482BCEEEF885554E393859B68B_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_1 = NULL;
	bool V_2 = false;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:340>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:341>
		_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* L_1 = V_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_instance_field_data_pointer(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0035:
				{
					return;
				}
			}
		});
		try
		{
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_2), NULL);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:343>
			_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* L_6 = V_0;
			NullCheck(L_6);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_7 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_6)->___completionSource);
			_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F* L_8 = V_0;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
			bool L_10;
			L_10 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_7, L_9, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:344>
			goto IL_0036;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:345>
		return;
	}
}
// Method Definition Index: 67546
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__cctor_m5716EA335AC8C559DBF632E79EAA6817ADB8C0D0_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:216>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___OnCanceledDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ToUniTaskAsyncEnumerableObservable_t9C4F432B01AEA7E35EB5661961044DBA6B826F7F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->___OnCanceledDelegate), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableTask__ctor_mE8C708BBF5A124226C38C566AAFA62948B315AC4_gshared (_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:116>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:118>
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:119>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:121>
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:122>
		return;
	}
}
// Method Definition Index: 67523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableTask_get_Current_mDD3D87E55301DDD76775FA32FBF4D56760FC6FAD_gshared (_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFF9D783431A09D45E188D5BE2C90B71CD0B41FAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tFF9D783431A09D45E188D5BE2C90B71CD0B41FAE);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:124>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2)), SizeOf_T_tFF9D783431A09D45E188D5BE2C90B71CD0B41FAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tFF9D783431A09D45E188D5BE2C90B71CD0B41FAE);
		return;
	}
}
// Method Definition Index: 67524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerableTask_MoveNextAsync_mBFE932EBC6A5B23E476DFF518D9F390F2CF0F8B9_gshared (_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline(AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_1 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_2 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_3;
		L_3 = AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline(L_2, AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		return L_3;
	}
}
// Method Definition Index: 67525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerableTask_DisposeAsync_m29E4B2FA283007DDD94D36872B58EEC0CB045EDB_gshared (_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* __this, const RuntimeMethod* method) 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:142>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67530
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableUniTask__ctor_m131E927E4A5E85141566B136BCC85FAA9F5AFE4C_gshared (_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* __this, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_UniTask_1_t7E587765F0C28E4F1279FBCABFD2B2F4F3BFDEBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_0 = alloca(SizeOf_UniTask_1_t7E587765F0C28E4F1279FBCABFD2B2F4F3BFDEBB);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:169>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:171>
		il2cpp_codegen_memcpy(L_0, ___0_source, SizeOf_UniTask_1_t7E587765F0C28E4F1279FBCABFD2B2F4F3BFDEBB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_0, SizeOf_UniTask_1_t7E587765F0C28E4F1279FBCABFD2B2F4F3BFDEBB);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:172>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:174>
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:175>
		return;
	}
}
// Method Definition Index: 67531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableUniTask_get_Current_m65AB0249E5EB6B9E8D0B9BC35F1FA7F42FEB522E_gshared (_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t13696A14EB1484D0FFCA8621379262D361B30036 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t13696A14EB1484D0FFCA8621379262D361B30036);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:177>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2)), SizeOf_T_t13696A14EB1484D0FFCA8621379262D361B30036);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t13696A14EB1484D0FFCA8621379262D361B30036);
		return;
	}
}
// Method Definition Index: 67532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ToUniTaskAsyncEnumerableUniTask_MoveNextAsync_mB845168064F208354AC8BC8FAC227EEBBCA2234C_gshared (_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_U3CMoveNextAsyncU3Ed__7_t28B4890D1E68CE6C789C42FEC6B355F50B3DFAD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B V_0 = alloca(SizeOf_U3CMoveNextAsyncU3Ed__7_t28B4890D1E68CE6C789C42FEC6B355F50B3DFAD1);
	memset(V_0, 0, SizeOf_U3CMoveNextAsyncU3Ed__7_t28B4890D1E68CE6C789C42FEC6B355F50B3DFAD1);
	{
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_inline(AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_RuntimeMethod_var);
		il2cpp_codegen_write_instance_field_data<AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3>((U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_0);
		il2cpp_codegen_write_instance_field_data<_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5*>((U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), __this);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), (-1));
		((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer((U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))), (U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1;
		L_1 = AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer((U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))), AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_RuntimeMethod_var);
		return L_1;
	}
}
// Method Definition Index: 67533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ToUniTaskAsyncEnumerableUniTask_DisposeAsync_mA99A2C6DD24ED4F6C0254665A4E60BA9BBF340DE_gshared (_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* __this, const RuntimeMethod* method) 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/ToUniTaskAsyncEnumerable.cs:195>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67607
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_m40D4013A586B0D16DC7560FFAA13413E6CE4B66D_gshared (_Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070* __this, RuntimeObject* ___0_source, Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:197>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (-1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:203>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:205>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:206>
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:207>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:208>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:210>
		return;
	}
}
// Method Definition Index: 67608
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_get_Current_m5BFE92ECF285246540CC1CCF1F0A7D907882BB8D_gshared (_Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:212>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
		return;
	}
}
// Method Definition Index: 67609
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_m1EE26BB3061EBC52FC1A2157FDCA1414B72AA99A_gshared (_Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:212>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_0, SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
		return;
	}
}
// Method Definition Index: 67610
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Where_MoveNextAsync_mE8CB1E1B3A3BBA838F0ED8622AA656F17CFDD62D_gshared (_Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:216>
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:216>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:218>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:219>
		((  void (*) (_Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:220>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 67611
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_m6CDFE94FA088F253BD8325F3F2A48571EDB0BF51_gshared (_Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t52E2A539982D63C4EE7A8F365E97175AAA092BDC);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:228>
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00cb_1;
		}

IL_0021_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:231>
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_4);
		}

IL_0038_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:234>
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:235>
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007b_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:241>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:242>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:243>
			goto IL_0110;
		}

IL_007b_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:246>
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00cb_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:248>
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:249>
			Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_13 = *(Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_2 = L_15;
			int32_t L_16 = V_2;
			if (((int64_t)L_16 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			int32_t L_17 = V_2;
			NullCheck(L_13);
			bool L_18;
			L_18 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), L_17);
			if (!L_18)
			{
				goto IL_00bf_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:251>
			goto IL_00fb;
		}

IL_00bf_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:255>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:256>
			goto IL_0000;
		}

IL_00cb_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:264>
			goto IL_00e5;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cd;
		}
		throw e;
	}

CATCH_00cd:
	{
		Exception_t* L_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:267>
		V_3 = L_19;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:269>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:270>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_20 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_21 = V_3;
		bool L_22;
		L_22 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:271>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0110;
	}

IL_00e5:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:275>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:276>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_23, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:277>
		return;
	}

IL_00fb:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:280>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:281>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:282>
		return;
	}

IL_0110:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:283>
		return;
	}
}
// Method Definition Index: 67612
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Where_DisposeAsync_mB12650114AF5C04B6B653F410D7F03CAA684A09F_gshared (_Where_t2B111E6C0A7A82A8F0C54EF8BDC063E6E328A070* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:288>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67599
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_m3D5A7571E47DABF0A9922039D5919467E834F024_gshared (_Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:80>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (-1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:85>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:87>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:88>
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:89>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:90>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:92>
		return;
	}
}
// Method Definition Index: 67600
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_get_Current_mE2E28DDD4D5F70F96EB025356C2ABE99DE834612_gshared (_Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:94>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
		return;
	}
}
// Method Definition Index: 67601
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_mD833EBFB2019C40F5869F770E35FE46F8DC7D758_gshared (_Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:94>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_0, SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
		return;
	}
}
// Method Definition Index: 67602
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Where_MoveNextAsync_m400347836A6E0A06DF3DBD8632595CA80F268B47_gshared (_Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:98>
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:98>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:100>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:101>
		((  void (*) (_Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:102>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 67603
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_m71254D60AC4859F19E371BE4AB8FB95354B5923A_gshared (_Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t57284EBBEC653CAD6F273C589FF76DC548545AF6);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:110>
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00ba_1;
		}

IL_0021_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:113>
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_4);
		}

IL_0038_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:116>
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:117>
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007b_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:123>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:124>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:125>
			goto IL_00ff;
		}

IL_007b_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:128>
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00ba_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:130>
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:131>
			Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_13 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_13);
			bool L_15;
			L_15 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14));
			if (!L_15)
			{
				goto IL_00ae_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:133>
			goto IL_00ea;
		}

IL_00ae_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:137>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:138>
			goto IL_0000;
		}

IL_00ba_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:146>
			goto IL_00d4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:149>
		V_2 = L_16;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:151>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:152>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_18 = V_2;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:153>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ff;
	}

IL_00d4:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:157>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:158>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_20 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_21;
		L_21 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_20, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:159>
		return;
	}

IL_00ea:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:162>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:163>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_22 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_22, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:164>
		return;
	}

IL_00ff:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:165>
		return;
	}
}
// Method Definition Index: 67604
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Where_DisposeAsync_m337A8B8FA23978EA16033A38EA493B5AFC954B6C_gshared (_Where_t24E02FCB5BAD7DF0EAFE8BC7DB0F31FC29CE4C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:170>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67615
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_m34B906CABF69CF18E4A667541319A00F42D97C19_gshared (_WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091* __this, RuntimeObject* ___0_source, Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:315>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (-1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:321>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:323>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:324>
		Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:325>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:326>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:328>
		return;
	}
}
// Method Definition Index: 67616
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_get_Current_mE91B5C955AB89C018852B5C4BFFBAD8712872F0D_gshared (_WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:330>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
		return;
	}
}
// Method Definition Index: 67617
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_m1081504A086C0F3ABEA2C13C132A988C6E25FFA0_gshared (_WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:330>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_0, SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
		return;
	}
}
// Method Definition Index: 67618
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwait_MoveNextAsync_m4667CBE3D79B9F9DBFDE33EE244D79F20AF0A752_gshared (_WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:334>
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:334>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:336>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:337>
		((  void (*) (_WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:338>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 67619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_mE70313E0A6620C066B225FA017CFDBCB83EB757F_gshared (_WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_t2E6FAE94640F63AE676D20A1F7372F5B1BB40016);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:346>
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00e5_1;
				}
			}
		}
		{
			goto IL_0100_1;
		}

IL_0025_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:349>
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_4);
		}

IL_003c_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:352>
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:353>
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:359>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:360>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:361>
			goto IL_0145;
		}

IL_007f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:364>
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00e3_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:366>
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:368>
			Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_13 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_13);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
			L_15 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14));
			V_1 = L_15;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
			L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_16);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:369>
			bool L_17;
			L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_00e5_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:375>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:376>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), L_18, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:377>
			goto IL_0145;
		}

IL_00e3_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:382>
			goto IL_011a;
		}

IL_00e5_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:385>
			bool L_19;
			L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_19)
			{
				goto IL_00f4_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:387>
			goto IL_0130;
		}

IL_00f4_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:391>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:392>
			goto IL_0000;
		}

IL_0100_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:395>
			goto IL_011a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0102;
		}
		throw e;
	}

CATCH_0102:
	{
		Exception_t* L_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:398>
		V_2 = L_20;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:400>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:401>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_21 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_22 = V_2;
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_21, L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:402>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0145;
	}

IL_011a:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:406>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:407>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_24 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_24, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:408>
		return;
	}

IL_0130:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:411>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:412>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_26 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_26, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:413>
		return;
	}

IL_0145:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:414>
		return;
	}
}
// Method Definition Index: 67620
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwait_DisposeAsync_m33FA34F3EC7C5E7B0D7C3F1BB867402839BC8087_gshared (_WhereAwait_t04C910D8C8680A091B716A1828402FE36FBFF091* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:419>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_mC24323851D1706D2F32ADB9050B88B06F85ED0AA_gshared (_WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2* __this, RuntimeObject* ___0_source, Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:446>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (-1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:453>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:455>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:456>
		Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:457>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:458>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:460>
		return;
	}
}
// Method Definition Index: 67624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_get_Current_m42E239DBC388061A8233408BEED673BB20482B91_gshared (_WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:462>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
		return;
	}
}
// Method Definition Index: 67625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_m2B2598F8DA3773153EF22A4CC58A89D5E5896742_gshared (_WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:462>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_0, SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
		return;
	}
}
// Method Definition Index: 67626
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwait_MoveNextAsync_m511EC6FEE8B2B20A9BCA9ADEFBE5F0E4614C82BC_gshared (_WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:466>
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:466>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:468>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:469>
		((  void (*) (_WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:470>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 67627
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_mA59F2E71171C9486D71A5DB6A140F06A728A5628_gshared (_WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tD73D92E91C5859BEF64A27E08FCCF94D1BF87535);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:478>
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00f6_1;
				}
			}
		}
		{
			goto IL_0111_1;
		}

IL_0025_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:481>
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_4);
		}

IL_003c_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:484>
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:485>
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:491>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:492>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:493>
			goto IL_0156;
		}

IL_007f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:496>
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00f4_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:498>
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:500>
			Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3* L_13 = *(Func_3_t0BF4F9DBA6648706EBCB101435E998AEA222A5C3**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_2 = L_15;
			int32_t L_16 = V_2;
			if (((int64_t)L_16 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			int32_t L_17 = V_2;
			NullCheck(L_13);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_18;
			L_18 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), L_17);
			V_1 = L_18;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19;
			L_19 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_19);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:501>
			bool L_20;
			L_20 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00f6_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:507>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:508>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), L_21, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:509>
			goto IL_0156;
		}

IL_00f4_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:514>
			goto IL_012b;
		}

IL_00f6_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:517>
			bool L_22;
			L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_22)
			{
				goto IL_0105_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:519>
			goto IL_0141;
		}

IL_0105_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:523>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:524>
			goto IL_0000;
		}

IL_0111_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:527>
			goto IL_012b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0113;
		}
		throw e;
	}

CATCH_0113:
	{
		Exception_t* L_23 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:530>
		V_3 = L_23;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:532>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:533>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_24 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_25 = V_3;
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_24, L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:534>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0156;
	}

IL_012b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:538>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:539>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_27 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_27, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:540>
		return;
	}

IL_0141:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:543>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:544>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_29 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_29, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:545>
		return;
	}

IL_0156:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:546>
		return;
	}
}
// Method Definition Index: 67628
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwait_DisposeAsync_mD87C892B139B11AC7D321B0AD9184CC06F0FE60D_gshared (_WhereAwait_t9A2236097CD9C23420358B436E67F3B9F929B4C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:551>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67631
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_mE8D2DB6243CF6C70D6BF4DB4893E6639C28E06C0_gshared (_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, RuntimeObject* ___0_source, Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:578>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (-1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:584>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:586>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:587>
		Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:588>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:589>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:591>
		return;
	}
}
// Method Definition Index: 67632
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_get_Current_mBE5B7F7A113A55845FB8E087A38FBDF28BB09363_gshared (_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:593>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		return;
	}
}
// Method Definition Index: 67633
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m3F8CBFB3E156CF9EF8D0FA3E8C97F8157EE50B35_gshared (_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:593>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_0, SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		return;
	}
}
// Method Definition Index: 67634
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwaitWithCancellation_MoveNextAsync_m644404E70E7FCAEF2F7F60E0CE36A0F2F2104B05_gshared (_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:597>
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:597>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:599>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:600>
		((  void (*) (_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:601>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 67635
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m44CD9A72ACC9A375BE8989CF0F6B3EA286C3ADF5_gshared (_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:609>
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00eb_1;
				}
			}
		}
		{
			goto IL_0106_1;
		}

IL_0025_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:612>
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_4);
		}

IL_003c_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:615>
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:616>
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:622>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:623>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:624>
			goto IL_014b;
		}

IL_007f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:627>
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00e9_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:629>
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:631>
			Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_13 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_13);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_16;
			L_16 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), L_15);
			V_1 = L_16;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17;
			L_17 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_17);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:632>
			bool L_18;
			L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:638>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:639>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), L_19, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:640>
			goto IL_014b;
		}

IL_00e9_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:645>
			goto IL_0120;
		}

IL_00eb_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:648>
			bool L_20;
			L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_20)
			{
				goto IL_00fa_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:650>
			goto IL_0136;
		}

IL_00fa_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:654>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:655>
			goto IL_0000;
		}

IL_0106_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:658>
			goto IL_0120;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{
		Exception_t* L_21 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:661>
		V_2 = L_21;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:663>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:664>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_22 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_23 = V_2;
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_22, L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:665>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_014b;
	}

IL_0120:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:669>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:670>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_25, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:671>
		return;
	}

IL_0136:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:674>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:675>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_27 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_27, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:676>
		return;
	}

IL_014b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:677>
		return;
	}
}
// Method Definition Index: 67636
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwaitWithCancellation_DisposeAsync_m565B4734A1DA42B4B318165CDCC8C3AE57818B4E_gshared (_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:682>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67639
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m6DD3B9E752176D83924BE13A6083F17B7F28F9F9_gshared (_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, RuntimeObject* ___0_source, Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:709>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (-1));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:716>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:718>
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:719>
		Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:720>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:721>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:723>
		return;
	}
}
// Method Definition Index: 67640
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_get_Current_m0D34BFD0E7830B3B0892D623A5505D9329DE942C_gshared (_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:725>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		return;
	}
}
// Method Definition Index: 67641
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_mE8C045D5987B8C232753235DF433D7D8FB47897D_gshared (_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:725>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_0, SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		return;
	}
}
// Method Definition Index: 67642
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwaitWithCancellation_MoveNextAsync_m89138177FC15D54858D48514545B86A6E4733189_gshared (_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:729>
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:729>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:731>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:732>
		((  void (*) (_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:733>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 67643
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m69D268D3E8A0A50E2E3086215CAE13817E4360E1_gshared (_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:741>
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00fc_1;
				}
			}
		}
		{
			goto IL_0117_1;
		}

IL_0025_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:744>
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_4);
		}

IL_003c_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:747>
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:748>
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:754>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 1);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:755>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:756>
			goto IL_015c;
		}

IL_007f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:759>
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00fa_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:761>
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:763>
			Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_13 = *(Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_2 = L_15;
			int32_t L_16 = V_2;
			if (((int64_t)L_16 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			int32_t L_17 = V_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_13);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_19;
			L_19 = InvokerFuncInvoker3< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), L_17, L_18);
			V_1 = L_19;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20;
			L_20 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_20);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:764>
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_00fc_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:770>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 2);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:771>
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), L_22, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:772>
			goto IL_015c;
		}

IL_00fa_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:777>
			goto IL_0131;
		}

IL_00fc_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:780>
			bool L_23;
			L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_23)
			{
				goto IL_010b_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:782>
			goto IL_0147;
		}

IL_010b_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:786>
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:787>
			goto IL_0000;
		}

IL_0117_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:790>
			goto IL_0131;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{
		Exception_t* L_24 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:793>
		V_3 = L_24;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:795>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:796>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		Exception_t* L_26 = V_3;
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_25, L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:797>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_015c;
	}

IL_0131:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:801>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:802>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_28 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_28, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:803>
		return;
	}

IL_0147:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:806>
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), 0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:807>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_30, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:808>
		return;
	}

IL_015c:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:809>
		return;
	}
}
// Method Definition Index: 67644
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwaitWithCancellation_DisposeAsync_m531DA7D68DBC74B5DDCA68CD356B88E27D6AEBD8_gshared (_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Where.cs:814>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_mB692F6213BAA8EBED4D8005D652800B0485975D8_gshared (_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:81>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:83>
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:84>
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:85>
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_instance_field_data<Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:86>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:88>
		return;
	}
}
// Method Definition Index: 67648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_get_Current_m62910938E588D5086952BA94CFCAA873D0059F55_gshared (_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:90>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10)), SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		return;
	}
}
// Method Definition Index: 67649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_mBD4E5B43D994136DCB4D57369DD45C1EC625FE7D_gshared (_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:90>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),10), L_0, SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		return;
	}
}
// Method Definition Index: 67650
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Zip_MoveNextAsync_mBEA800D017300E4B7D2B656102B10FED6473DC92_gshared (_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:94>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:96>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:98>
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_4);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:99>
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_7);
	}

IL_0041:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:102>
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), L_10);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:104>
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:106>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		goto IL_0080;
	}

IL_006f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:110>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___firstMoveNextCoreDelegate;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8)))), L_12, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:113>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// Method Definition Index: 67651
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m077741C6E53CC87BF3CFD5E6F53A427B2D4BFBCF_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:118>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:120>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_1 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:122>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:126>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_6 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9), L_10);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:127>
		goto IL_0045;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:128>
		V_3 = L_11;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:130>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:131>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}

IL_0045:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:134>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_16 = V_0;
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:136>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((RuntimeObject*)L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0059:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:140>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_21 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9)))), L_20, (RuntimeObject*)L_21, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:145>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_22 = V_0;
		NullCheck(L_22);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_22)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_23, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:148>
		return;
	}
}
// Method Definition Index: 67652
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_m284ED42AF10DA3B5B2DDD0007B58B2D58343B8F0_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TFirst_t317AA2ADCA0BB067182BED68F108F3AE9EC104C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_t317AA2ADCA0BB067182BED68F108F3AE9EC104C1);
	const uint32_t SizeOf_TSecond_t4AE51079439DA81CAAA343D2371B07731C564456 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t4AE51079439DA81CAAA343D2371B07731C564456);
	const uint32_t SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:152>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:154>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_1 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:156>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:160>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_6 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_7 = V_0;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_8 = *(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4));
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_9 = V_0;
		RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		NullCheck(L_10);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_10, (Il2CppFullySharedGenericAny*)L_11);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_12 = V_0;
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
		NullCheck(L_13);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_13, (Il2CppFullySharedGenericAny*)L_14);
		NullCheck(L_8);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 17)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_15: *(void**)L_15));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:161>
		goto IL_0053;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:162>
		V_2 = L_16;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:164>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_17 = V_0;
		NullCheck(L_17);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_17)->___completionSource);
		Exception_t* L_19 = V_2;
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:165>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:167>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),5)))), NULL);
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:169>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_24 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_23)->___completionSource);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_25 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_26 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_24, L_26, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_0073:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:173>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_29 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_28)->___completionSource);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_29, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0081:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:178>
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_31)->___completionSource);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_32, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_008e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:181>
		return;
	}
}
// Method Definition Index: 67653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Zip_DisposeAsync_m085F66BB5E383AD3EDBDB820FAF22D7B36AC0D63_gshared (_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 67654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_mD4F46B2D7B5C4559B54E319CA447E61CE027A0EE_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:66>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:67>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), NULL);
		((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__ctor_mF1CE95B58A74644D701BD4551CD8DC597E669FD1_gshared (_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:235>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:237>
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:238>
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:239>
		Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_instance_field_data<Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:240>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:242>
		return;
	}
}
// Method Definition Index: 67660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_get_Current_m13B5D3EBB8319A134C036B1670EC5E497B5BEF58_gshared (_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:244>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12)), SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		return;
	}
}
// Method Definition Index: 67661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_set_Current_m043719D8848591804F48C2E477C1D4AC20BB9354_gshared (_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:244>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12), L_0, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		return;
	}
}
// Method Definition Index: 67662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ZipAwait_MoveNextAsync_mDB1305C327A8EAFF1101604E2F150873723D47F5_gshared (_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:248>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:250>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:252>
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_4);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:253>
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), L_7);
	}

IL_0041:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:256>
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_10);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:258>
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:260>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		goto IL_0080;
	}

IL_006f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:264>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___firstMoveNextCoreDelegate;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9)))), L_12, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:267>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// Method Definition Index: 67663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_FirstMoveNextCore_mCEB8AE84A43214922A72AE9871C97C1D50619C1D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:272>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:274>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_1 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:276>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:280>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_6 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10), L_10);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:281>
		goto IL_0045;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:282>
		V_3 = L_11;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:284>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:285>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}

IL_0045:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:288>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_16 = V_0;
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:290>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((RuntimeObject*)L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0059:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:294>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_21 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), L_20, (RuntimeObject*)L_21, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:299>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_22 = V_0;
		NullCheck(L_22);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_22)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_23, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:302>
		return;
	}
}
// Method Definition Index: 67664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_SecondMoveNextCore_mB21C5B05A28210DB6CFBCC41056317991C1CB951_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	const uint32_t SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
	const uint32_t SizeOf_TFirst_t0675C576F3A81C5446C362ECE1B183613D51FD0B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_t0675C576F3A81C5446C362ECE1B183613D51FD0B);
	const uint32_t SizeOf_TSecond_t0C457326CBCD8507337B5D00B163DC11506BCC74 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t0C457326CBCD8507337B5D00B163DC11506BCC74);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = alloca(SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_15 = alloca(SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_2 = alloca(SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
	memset(V_2, 0, SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:306>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:308>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_1 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:310>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:314>
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_6 = V_0;
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_7 = V_0;
			Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* L_8 = *(Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_9 = V_0;
			RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck(L_10);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_10, (Il2CppFullySharedGenericAny*)L_11);
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_12 = V_0;
			RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			NullCheck(L_13);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_13, (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_8);
			InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 17)) ? L_14: *(void**)L_14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_15);
			il2cpp_codegen_memcpy(V_2, L_15, SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_16);
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11), L_16, SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:315>
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_17 = V_0;
			bool L_18;
			L_18 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)))((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
			if (!L_18)
			{
				goto IL_005e_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:317>
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_19 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)))((RuntimeObject*)L_19, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
			goto IL_006f_1;
		}

IL_005e_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:321>
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_20 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate;
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_22 = V_0;
			((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26)))((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))), L_21, (RuntimeObject*)L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		}

IL_006f_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:323>
			goto IL_008e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{
		Exception_t* L_23 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:324>
		V_3 = L_23;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:326>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_24 = V_0;
		NullCheck(L_24);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_25 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_24)->___completionSource);
		Exception_t* L_26 = V_3;
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_25, L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:327>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_008e;
	}

IL_0081:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:331>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_29 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_28)->___completionSource);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_29, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_008e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:334>
		return;
	}
}
// Method Definition Index: 67665
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_ResultAwaitCore_m4BAE2A3D3BA4EDA89F86884D15FD2B96DCF34529_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	memset(V_1, 0, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:338>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:340>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_1 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)), SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27), (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (Il2CppFullySharedGenericAny*)V_1);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:342>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_6: *(void**)L_6));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:344>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6)))), NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:346>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_9 = V_0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_10 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_9)->___completionSource);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_11 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		bool L_13;
		L_13 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_10, L_12, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:350>
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_14 = V_0;
		NullCheck(L_14);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_14)->___completionSource);
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_15, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_004b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:353>
		return;
	}
}
// Method Definition Index: 67666
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ZipAwait_DisposeAsync_m63A584A92684AB3A962ED9F0DEA776420EB851A1_gshared (_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 67667
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__cctor_mB5CB84AC8DB746383C647B71C48A30619A45D800_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:218>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:219>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), NULL);
		((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate), (void*)L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:220>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)), NULL);
		((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67672
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__ctor_mF8BB9E50DA616F1901D143F5CF042B2FACE6A12C_gshared (_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:407>
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:409>
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:410>
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:411>
		Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_instance_field_data<Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), L_2);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:412>
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6), L_3);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:414>
		return;
	}
}
// Method Definition Index: 67673
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_get_Current_m8DEEC64609F29A5765F0963F233D19EC963A1CEE_gshared (_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:416>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12)), SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		return;
	}
}
// Method Definition Index: 67674
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_set_Current_mE80E6FF8588006E09BB7F0B02971CCE10B7549B1_gshared (_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:416>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),12), L_0, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		return;
	}
}
// Method Definition Index: 67675
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ZipAwaitWithCancellation_MoveNextAsync_m80F80FD3AEF850E09F8D997B57E81CB42FBFF7AE_gshared (_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:420>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:422>
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:424>
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7), L_4);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:425>
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),8), L_7);
	}

IL_0041:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:428>
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),7));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9), L_10);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:430>
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:432>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		goto IL_0080;
	}

IL_006f:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:436>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___firstMoveNextCoreDelegate;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9)))), L_12, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:439>
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// Method Definition Index: 67676
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_FirstMoveNextCore_m310F4C42E4F5F41ABC3778FCC4487EF0B40CEC7D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:444>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:446>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:448>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:452>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_6 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10), L_10);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:453>
		goto IL_0045;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:454>
		V_3 = L_11;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:456>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_12 = V_0;
		NullCheck(L_12);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_12)->___completionSource);
		Exception_t* L_14 = V_3;
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:457>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}

IL_0045:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:460>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_16 = V_0;
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:462>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((RuntimeObject*)L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0059:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:466>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_21 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), L_20, (RuntimeObject*)L_21, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:471>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_22 = V_0;
		NullCheck(L_22);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_22)->___completionSource);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_23, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:474>
		return;
	}
}
// Method Definition Index: 67677
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_SecondMoveNextCore_m777D8927D59498B231403C2A66DB777CC1DA6F9E_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	const uint32_t SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
	const uint32_t SizeOf_TFirst_tD546F5F999348E2FE6E2B8256F3401B0EAFC8D85 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_tD546F5F999348E2FE6E2B8256F3401B0EAFC8D85);
	const uint32_t SizeOf_TSecond_t464A57B793D07C4BF70A8E8AF54A0BE8F72FFE77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t464A57B793D07C4BF70A8E8AF54A0BE8F72FFE77);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = alloca(SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_17 = alloca(SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_2 = alloca(SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
	memset(V_2, 0, SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:478>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:480>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:482>
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	try
	{
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:486>
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_6 = V_0;
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_7 = V_0;
			Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* L_8 = *(Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_9 = V_0;
			RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck(L_10);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_10, (Il2CppFullySharedGenericAny*)L_11);
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_12 = V_0;
			RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			NullCheck(L_13);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_13, (Il2CppFullySharedGenericAny*)L_14);
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_15 = V_0;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
			NullCheck(L_8);
			InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 17)) ? L_14: *(void**)L_14), L_16, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_17);
			il2cpp_codegen_memcpy(V_2, L_17, SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_18);
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11), L_18, SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:487>
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_19 = V_0;
			bool L_20;
			L_20 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)))((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
			if (!L_20)
			{
				goto IL_0064_1;
			}
		}
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:489>
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_21 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)))((RuntimeObject*)L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
			goto IL_0075_1;
		}

IL_0064_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:493>
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_22 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate;
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_24 = V_0;
			((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26)))((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))), L_23, (RuntimeObject*)L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		}

IL_0075_1:
		{
			//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:495>
			goto IL_0094;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{
		Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:496>
		V_3 = L_25;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:498>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_26 = V_0;
		NullCheck(L_26);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_27 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_26)->___completionSource);
		Exception_t* L_28 = V_3;
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:499>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0094;
	}

IL_0087:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:503>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_30 = V_0;
		NullCheck(L_30);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_31 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_30)->___completionSource);
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_31, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0094:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:506>
		return;
	}
}
// Method Definition Index: 67678
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_ResultAwaitCore_m4609AF33DE0033D65660A50D6EF19E24D4B47FA1_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 22));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	memset(V_1, 0, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:510>
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:512>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)), SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27), (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (Il2CppFullySharedGenericAny*)V_1);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:514>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_6: *(void**)L_6));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:516>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6)))), NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:518>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_9 = V_0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_10 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_9)->___completionSource);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_11 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		bool L_13;
		L_13 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_10, L_12, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:522>
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_14 = V_0;
		NullCheck(L_14);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_14)->___completionSource);
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_15, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_004b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:525>
		return;
	}
}
// Method Definition Index: 67679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ZipAwaitWithCancellation_DisposeAsync_m6A7E1F40BD7B99062A88656D405DE2DD4A524B5E_gshared (_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___runnerPromise), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___ex), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder);
		((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 67680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__cctor_mFFAA1B5A4E3B2AD299FFD7ED6CAC1A67EFCF192A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:390>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:391>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), NULL);
		((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate), (void*)L_1);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/Linq/Zip.cs:392>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)), NULL);
		((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 71079
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskVoidMethodBuilder.cs:22>
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 71080
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskVoidMethodBuilder.cs:32>
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 71063
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:23>
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 71064
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:33>
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:35>
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:37>
		Exception_t* L_3 = __this->___ex;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:39>
		Exception_t* L_4 = __this->___ex;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:43>
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask;
		return L_6;
	}
}
// Method Definition Index: 69436
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_gshared_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTaskCompletionSource.cs:196>
		int16_t L_0 = __this->___version;
		return L_0;
	}
}
// Method Definition Index: 69318
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:390>
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:391>
		int16_t L_1 = ___1_token;
		__this->___token = L_1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:392>
		bool* L_2 = (bool*)(&__this->___result);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:393>
		return;
	}
}
// Method Definition Index: 69320
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:409>
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_0;
	}
}
// Method Definition Index: 69340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:642>
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 69344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:698>
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:699>
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:701>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_continuation;
		RuntimeObject* L_4 = ___1_state;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:705>
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___0_continuation;
		RuntimeObject* L_7 = ___1_state;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_8 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int16_t L_9 = L_8->___token;
		NullCheck(L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_5, L_6, L_7, L_9);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:707>
		return;
	}
}
// Method Definition Index: 71071
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 AsyncUniTaskMethodBuilder_1_Create_m541E96A720B74646A67D392E54DECC686529143A_gshared_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:150>
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3));
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 71072
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 AsyncUniTaskMethodBuilder_1_get_Task_m987FF39A55DF01CB856D3CD4C0DF8AC06F4E338C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:160>
		RuntimeObject* L_0 = __this->___runnerPromise;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:162>
		RuntimeObject* L_1 = __this->___runnerPromise;
		NullCheck(L_1);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_1);
		return L_2;
	}

IL_0014:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:164>
		Exception_t* L_3 = __this->___ex;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:166>
		Exception_t* L_4 = __this->___ex;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		L_5 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m912651939DD2687DA55E7235EC371A3B172DB05B(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_5;
	}

IL_0028:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/CompilerServices/AsyncUniTaskMethodBuilder.cs:170>
		bool L_6 = __this->___result;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_7;
		L_7 = UniTask_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC81E20AFD7731109F88802C7F08E108D5BAEC12E(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_7;
	}
}
// Method Definition Index: 69343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:680>
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:681>
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:683>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_continuation;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:687>
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_continuation;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_7 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int16_t L_8 = L_7->___token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_4, L_5, (RuntimeObject*)L_6, L_8);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:689>
		return;
	}
}
// Method Definition Index: 69341
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:650>
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		RuntimeObject* L_1 = L_0->___source;
		V_0 = L_1;
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:651>
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:653>
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_3 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		bool L_4 = L_3->___result;
		return L_4;
	}

IL_001b:
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:657>
		RuntimeObject* L_5 = V_0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_6 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task);
		int16_t L_7 = L_6->___token;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_5, L_7);
		return L_8;
	}
}
// Method Definition Index: 67982
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/IUniTaskSource.cs:102>
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 917
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 69339
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:633>
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___0_task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task))->___source), (void*)NULL);
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:634>
		return;
	}
}
// Method Definition Index: 69319
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/Tangle Master 3D Clone/Assets/Plugins/UniTask/Runtime/UniTask.cs:401>
		RuntimeObject* L_0 = __this->___source;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___source;
		int16_t L_2 = __this->___token;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
// Method Definition Index: 919
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
