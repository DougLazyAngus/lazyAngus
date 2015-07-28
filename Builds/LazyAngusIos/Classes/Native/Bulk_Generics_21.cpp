#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMouseEvents/HitInfo>::set_Item(System.Int32,T)
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_genMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen.h"
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_2_genMethodDeclarations.h"
struct BaseInvokableCall_t2825;
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m63763_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m63763(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m63763_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_2__ctor_m61854_gshared (InvokableCall_2_t8472 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2825 *)__this);
		BaseInvokableCall__ctor_m9711((BaseInvokableCall_t2825 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_3 = ___target;
		MethodInfo_t * L_4 = ___theFunction;
		Delegate_t667 * L_5 = Delegate_CreateDelegate_m9867(NULL /*static, unused*/, (Type_t *)L_2, (Object_t *)L_3, (MethodInfo_t *)L_4, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_2_t8471 *)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_2_Invoke_m61855_gshared (InvokableCall_2_t8472 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t654 * L_1 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_1, (String_t*)(String_t*) &_stringLiteral1967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t627* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t627* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		UnityAction_2_t8471 * L_6 = (UnityAction_2_t8471 *)(__this->___Delegate_0);
		bool L_7 = BaseInvokableCall_AllowInvoke_m9712(NULL /*static, unused*/, (Delegate_t667 *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		UnityAction_2_t8471 * L_8 = (UnityAction_2_t8471 *)(__this->___Delegate_0);
		ObjectU5BU5D_t627* L_9 = ___args;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		ObjectU5BU5D_t627* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((UnityAction_2_t8471 *)L_8);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1) */, (UnityAction_2_t8471 *)L_8, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_10)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))));
	}

IL_004f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m61856_gshared (InvokableCall_2_t8472 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t8471 * L_0 = (UnityAction_2_t8471 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3457((Delegate_t667 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_2_t8471 * L_3 = (UnityAction_2_t8471 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m9866((Delegate_t667 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_2__ctor_m61857_gshared (UnityAction_2_t8471 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" void UnityAction_2_Invoke_m61858_gshared (UnityAction_2_t8471 * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_2_Invoke_m61858((UnityAction_2_t8471 *)__this->___prev_9,___arg0, ___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_2_BeginInvoke_m61859_gshared (UnityAction_2_t8471 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_2_EndInvoke_m61860_gshared (UnityAction_2_t8471 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_gen.h"
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_3_genMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_3__ctor_m61861_gshared (InvokableCall_3_t8474 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2825 *)__this);
		BaseInvokableCall__ctor_m9711((BaseInvokableCall_t2825 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_3_t8473 * L_2 = (UnityAction_3_t8473 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t667 * L_6 = Delegate_CreateDelegate_m9867(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t667 * L_7 = Delegate_Combine_m3465(NULL /*static, unused*/, (Delegate_t667 *)L_2, (Delegate_t667 *)((UnityAction_3_t8473 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_3_t8473 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_3_Invoke_m61862_gshared (InvokableCall_3_t8474 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t654 * L_1 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_1, (String_t*)(String_t*) &_stringLiteral1967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t627* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t627* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t627* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		UnityAction_3_t8473 * L_8 = (UnityAction_3_t8473 *)(__this->___Delegate_0);
		bool L_9 = BaseInvokableCall_AllowInvoke_m9712(NULL /*static, unused*/, (Delegate_t667 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		UnityAction_3_t8473 * L_10 = (UnityAction_3_t8473 *)(__this->___Delegate_0);
		ObjectU5BU5D_t627* L_11 = ___args;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		ObjectU5BU5D_t627* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		int32_t L_14 = 1;
		ObjectU5BU5D_t627* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		int32_t L_16 = 2;
		NullCheck((UnityAction_3_t8473 *)L_10);
		VirtActionInvoker3< Object_t *, Object_t *, Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2) */, (UnityAction_3_t8473 *)L_10, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_12)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))));
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m61863_gshared (InvokableCall_3_t8474 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t8473 * L_0 = (UnityAction_3_t8473 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3457((Delegate_t667 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_3_t8473 * L_3 = (UnityAction_3_t8473 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m9866((Delegate_t667 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_3__ctor_m61864_gshared (UnityAction_3_t8473 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m61865_gshared (UnityAction_3_t8473 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_3_Invoke_m61865((UnityAction_3_t8473 *)__this->___prev_9,___arg0, ___arg1, ___arg2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_3_BeginInvoke_m61866_gshared (UnityAction_3_t8473 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m61867_gshared (UnityAction_3_t8473 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_genMethodDeclarations.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_gen.h"
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_genMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_4__ctor_m61868_gshared (InvokableCall_4_t8476 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2825 *)__this);
		BaseInvokableCall__ctor_m9711((BaseInvokableCall_t2825 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_4_t8475 * L_2 = (UnityAction_4_t8475 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t667 * L_6 = Delegate_CreateDelegate_m9867(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t667 * L_7 = Delegate_Combine_m3465(NULL /*static, unused*/, (Delegate_t667 *)L_2, (Delegate_t667 *)((UnityAction_4_t8475 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_4_t8475 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_4_Invoke_m61869_gshared (InvokableCall_4_t8476 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t654 * L_1 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_1, (String_t*)(String_t*) &_stringLiteral1967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t627* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		ObjectU5BU5D_t627* L_4 = ___args;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		int32_t L_5 = 1;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		ObjectU5BU5D_t627* L_6 = ___args;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		int32_t L_7 = 2;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		ObjectU5BU5D_t627* L_8 = ___args;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		int32_t L_9 = 3;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		UnityAction_4_t8475 * L_10 = (UnityAction_4_t8475 *)(__this->___Delegate_0);
		bool L_11 = BaseInvokableCall_AllowInvoke_m9712(NULL /*static, unused*/, (Delegate_t667 *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		UnityAction_4_t8475 * L_12 = (UnityAction_4_t8475 *)(__this->___Delegate_0);
		ObjectU5BU5D_t627* L_13 = ___args;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		ObjectU5BU5D_t627* L_15 = ___args;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		int32_t L_16 = 1;
		ObjectU5BU5D_t627* L_17 = ___args;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		int32_t L_18 = 2;
		ObjectU5BU5D_t627* L_19 = ___args;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		int32_t L_20 = 3;
		NullCheck((UnityAction_4_t8475 *)L_12);
		VirtActionInvoker4< Object_t *, Object_t *, Object_t *, Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3) */, (UnityAction_4_t8475 *)L_12, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_16)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))), (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
	}

IL_006f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m61870_gshared (InvokableCall_4_t8476 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_t8475 * L_0 = (UnityAction_4_t8475 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3457((Delegate_t667 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_4_t8475 * L_3 = (UnityAction_4_t8475 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m9866((Delegate_t667 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_4__ctor_m61871_gshared (UnityAction_4_t8475 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m61872_gshared (UnityAction_4_t8475 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_4_Invoke_m61872((UnityAction_4_t8475 *)__this->___prev_9,___arg0, ___arg1, ___arg2, ___arg3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_4_BeginInvoke_m61873_gshared (UnityAction_4_t8475 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	__d_args[3] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m61874_gshared (UnityAction_4_t8475 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m61875_gshared (CachedInvokableCall_1_t8477 * __this, Object_t645 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		Object_t645 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t5716 *)__this);
		(( void (*) (InvokableCall_1_t5716 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t5716 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t627* L_2 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		Object_t * L_3 = ___argument;
		Object_t * L_4 = L_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, ((Object_t *)L_4));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)((Object_t *)L_4);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61876_gshared (CachedInvokableCall_1_t8477 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t627* L_0 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t5716 *)__this);
		(( void (*) (InvokableCall_1_t5716 *, ObjectU5BU5D_t627*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((InvokableCall_1_t5716 *)__this, (ObjectU5BU5D_t627*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m9868_gshared (CachedInvokableCall_1_t2898 * __this, Object_t645 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		Object_t645 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t5803 *)__this);
		(( void (*) (InvokableCall_1_t5803 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t5803 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t627* L_2 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		float L_3 = ___argument;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61877_gshared (CachedInvokableCall_1_t2898 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t627* L_0 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t5803 *)__this);
		(( void (*) (InvokableCall_1_t5803 *, ObjectU5BU5D_t627*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((InvokableCall_1_t5803 *)__this, (ObjectU5BU5D_t627*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_4MethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m9869_gshared (CachedInvokableCall_1_t2899 * __this, Object_t645 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		Object_t645 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t8478 *)__this);
		(( void (*) (InvokableCall_1_t8478 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t8478 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t627* L_2 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		int32_t L_3 = ___argument;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61878_gshared (CachedInvokableCall_1_t2899 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t627* L_0 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t8478 *)__this);
		(( void (*) (InvokableCall_1_t8478 *, ObjectU5BU5D_t627*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((InvokableCall_1_t8478 *)__this, (ObjectU5BU5D_t627*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12.h"
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12MethodDeclarations.h"
struct BaseInvokableCall_t2825;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t82_m65280_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t82_m65280(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t82_m65280_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m61879_gshared (InvokableCall_1_t8478 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2825 *)__this);
		BaseInvokableCall__ctor_m9711((BaseInvokableCall_t2825 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t8479 * L_2 = (UnityAction_1_t8479 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t667 * L_6 = Delegate_CreateDelegate_m9867(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t667 * L_7 = Delegate_Combine_m3465(NULL /*static, unused*/, (Delegate_t667 *)L_2, (Delegate_t667 *)((UnityAction_1_t8479 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t8479 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m61880_gshared (InvokableCall_1_t8478 * __this, UnityAction_1_t8479 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t2825 *)__this);
		BaseInvokableCall__ctor_m9710((BaseInvokableCall_t2825 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t8479 * L_0 = (UnityAction_1_t8479 *)(__this->___Delegate_0);
		UnityAction_1_t8479 * L_1 = ___callback;
		Delegate_t667 * L_2 = Delegate_Combine_m3465(NULL /*static, unused*/, (Delegate_t667 *)L_0, (Delegate_t667 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t8479 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1_Invoke_m61881_gshared (InvokableCall_1_t8478 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t654 * L_1 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_1, (String_t*)(String_t*) &_stringLiteral1967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t627* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t8479 * L_4 = (UnityAction_1_t8479 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m9712(NULL /*static, unused*/, (Delegate_t667 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t8479 * L_6 = (UnityAction_1_t8479 *)(__this->___Delegate_0);
		ObjectU5BU5D_t627* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t8479 *)L_6);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0) */, (UnityAction_1_t8479 *)L_6, (int32_t)((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m61882_gshared (InvokableCall_1_t8478 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t8479 * L_0 = (UnityAction_1_t8479 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3457((Delegate_t667 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t8479 * L_3 = (UnityAction_1_t8479 *)(__this->___Delegate_0);
		NullCheck((Delegate_t667 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m9866((Delegate_t667 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m61883_gshared (UnityAction_1_t8479 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m61884_gshared (UnityAction_1_t8479 * __this, int32_t ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m61884((UnityAction_1_t8479 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m61885_gshared (UnityAction_1_t8479 * __this, int32_t ___arg0, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m61886_gshared (UnityAction_1_t8479 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_4MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m61892_gshared (CachedInvokableCall_1_t8482 * __this, Object_t645 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		Object_t645 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((InvokableCall_1_t5826 *)__this);
		(( void (*) (InvokableCall_1_t5826 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InvokableCall_1_t5826 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t627* L_2 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		uint8_t L_3 = ___argument;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61894_gshared (CachedInvokableCall_1_t8482 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t627* L_0 = (ObjectU5BU5D_t627*)(__this->___m_Arg1_1);
		NullCheck((InvokableCall_1_t5826 *)__this);
		(( void (*) (InvokableCall_1_t5826 *, ObjectU5BU5D_t627*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((InvokableCall_1_t5826 *)__this, (ObjectU5BU5D_t627*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_genMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_2__ctor_m62097_gshared (UnityEvent_2_t8493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 2));
		NullCheck((UnityEventBase_t2833 *)__this);
		UnityEventBase__ctor_m9733((UnityEventBase_t2833 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m62098_gshared (UnityEvent_2_t8493 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1142* L_2 = (TypeU5BU5D_t1142*)((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t1142* L_4 = (TypeU5BU5D_t1142*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1142*)L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2825 * UnityEvent_2_GetDelegate_m62099_gshared (UnityEvent_2_t8493 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_2_t8472 * L_2 = (InvokableCall_2_t8472 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_2_t8472 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_genMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_3__ctor_m62100_gshared (UnityEvent_3_t8494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 3));
		NullCheck((UnityEventBase_t2833 *)__this);
		UnityEventBase__ctor_m9733((UnityEventBase_t2833 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m62101_gshared (UnityEvent_3_t8494 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1142* L_2 = (TypeU5BU5D_t1142*)((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t1142* L_4 = (TypeU5BU5D_t1142*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t1142* L_6 = (TypeU5BU5D_t1142*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1142*)L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2825 * UnityEvent_3_GetDelegate_m62102_gshared (UnityEvent_3_t8494 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_3_t8474 * L_2 = (InvokableCall_3_t8474 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_3_t8474 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_genMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_4__ctor_m62103_gshared (UnityEvent_4_t8495 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 4));
		NullCheck((UnityEventBase_t2833 *)__this);
		UnityEventBase__ctor_m9733((UnityEventBase_t2833 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m62104_gshared (UnityEvent_4_t8495 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1142* L_2 = (TypeU5BU5D_t1142*)((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t1142* L_4 = (TypeU5BU5D_t1142*)L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t1142* L_6 = (TypeU5BU5D_t1142*)L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		TypeU5BU5D_t1142* L_8 = (TypeU5BU5D_t1142*)L_6;
		Type_t * L_9 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 3)) = (Type_t *)L_9;
		MethodInfo_t * L_10 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1142*)L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2825 * UnityEvent_4_GetDelegate_m62105_gshared (UnityEvent_4_t8495 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_4_t8476 * L_2 = (InvokableCall_4_t8476 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (InvokableCall_4_t8476 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Xml.XmlNamespaceManager/NsDecl
#include "System_Xml_System_Xml_XmlNamespaceManager_NsDecl.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Current()
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_98.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_98MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsDecl>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsDecl>(System.Int32)
extern "C" NsDecl_t3179  Array_InternalArray__get_Item_TisNsDecl_t3179_m65282_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisNsDecl_t3179_m65282(__this, p0, method) (( NsDecl_t3179  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisNsDecl_t3179_m65282_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62194_gshared (InternalEnumerator_1_t8502 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62195_gshared (InternalEnumerator_1_t8502 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62196_gshared (InternalEnumerator_1_t8502 * __this, const MethodInfo* method)
{
	{
		NsDecl_t3179  L_0 = (( NsDecl_t3179  (*) (InternalEnumerator_1_t8502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NsDecl_t3179  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62197_gshared (InternalEnumerator_1_t8502 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62198_gshared (InternalEnumerator_1_t8502 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" NsDecl_t3179  InternalEnumerator_1_get_Current_m62199_gshared (InternalEnumerator_1_t8502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		NsDecl_t3179  L_8 = (( NsDecl_t3179  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System.Xml_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsDecl>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Xml.XmlNamespaceManager/NsScope
#include "System_Xml_System_Xml_XmlNamespaceManager_NsScope.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::get_Current()
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsScope>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsScope>(System.Int32)
extern "C" NsScope_t3180  Array_InternalArray__get_Item_TisNsScope_t3180_m65293_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisNsScope_t3180_m65293(__this, p0, method) (( NsScope_t3180  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisNsScope_t3180_m65293_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62200_gshared (InternalEnumerator_1_t8503 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62201_gshared (InternalEnumerator_1_t8503 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62202_gshared (InternalEnumerator_1_t8503 * __this, const MethodInfo* method)
{
	{
		NsScope_t3180  L_0 = (( NsScope_t3180  (*) (InternalEnumerator_1_t8503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8503 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NsScope_t3180  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62203_gshared (InternalEnumerator_1_t8503 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62204_gshared (InternalEnumerator_1_t8503 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" NsScope_t3180  InternalEnumerator_1_get_Current_m62205_gshared (InternalEnumerator_1_t8503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		NsScope_t3180  L_8 = (( NsScope_t3180  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsScope>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// Mono.Xml2.XmlTextReader/TagName
#include "System_Xml_Mono_Xml2_XmlTextReader_TagName.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_101.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_101MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Xml2.XmlTextReader/TagName>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Xml2.XmlTextReader/TagName>(System.Int32)
extern "C" TagName_t3208  Array_InternalArray__get_Item_TisTagName_t3208_m65304_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTagName_t3208_m65304(__this, p0, method) (( TagName_t3208  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTagName_t3208_m65304_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62212_gshared (InternalEnumerator_1_t8505 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62213_gshared (InternalEnumerator_1_t8505 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62214_gshared (InternalEnumerator_1_t8505 * __this, const MethodInfo* method)
{
	{
		TagName_t3208  L_0 = (( TagName_t3208  (*) (InternalEnumerator_1_t8505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8505 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TagName_t3208  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62215_gshared (InternalEnumerator_1_t8505 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62216_gshared (InternalEnumerator_1_t8505 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Xml2.XmlTextReader/TagName>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" TagName_t3208  InternalEnumerator_1_get_Current_m62217_gshared (InternalEnumerator_1_t8505 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		TagName_t3208  L_8 = (( TagName_t3208  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml2.XmlTextReader/TagName>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml2.XmlTextReader/TagName>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml2.XmlTextReader/TagName>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml2.XmlTextReader/TagName>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml2.XmlTextReader/TagName>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml2.XmlTextReader/TagName>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml2.XmlTextReader/TagName>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml2.XmlTextReader/TagName>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<Mono.Xml2.XmlTextReader/TagName>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml2.XmlTextReader/TagName>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml2.XmlTextReader/TagName>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Xml2.XmlTextReader/TagName>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Xml2.XmlTextReader/TagName>::set_Item(System.Int32,T)
// System.Nullable`1<System.Byte>
#include "mscorlib_System_Nullable_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Nullable`1<System.Byte>
#include "mscorlib_System_Nullable_1_gen_5MethodDeclarations.h"

// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Nullable`1<System.Byte>::.ctor(T)
extern "C" void Nullable_1__ctor_m62327_gshared (Nullable_1_t8508 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		uint8_t L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m62329_gshared (Nullable_1_t8508 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.Byte>::get_Value()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" uint8_t Nullable_1_get_Value_m62331_gshared (Nullable_1_t8508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3670, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		uint8_t L_2 = (uint8_t)(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m62333_gshared (Nullable_1_t8508 * __this, Object_t * ___other, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = (bool)(__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t8508 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t8508 *, Nullable_1_t8508 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t8508 *)__this, (Nullable_1_t8508 )((*(Nullable_1_t8508 *)((Nullable_1_t8508 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m62335_gshared (Nullable_1_t8508 * __this, Nullable_1_t8508  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&___other)->___has_value_1);
		bool L_1 = (bool)(__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (bool)(__this->___has_value_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		uint8_t* L_3 = (uint8_t*)&((&___other)->___value_0);
		uint8_t L_4 = (uint8_t)(__this->___value_0);
		uint8_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t1068 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t1068 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.Byte>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m62337_gshared (Nullable_1_t8508 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		uint8_t* L_1 = (uint8_t*)&(__this->___value_0);
		NullCheck((ValueType_t1068 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t1068 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// T System.Nullable`1<System.Byte>::GetValueOrDefault()
extern TypeInfo* Byte_t684_il2cpp_TypeInfo_var;
extern "C" uint8_t Nullable_1_GetValueOrDefault_m62339_gshared (Nullable_1_t8508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t G_B3_0 = 0x0;
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t L_1 = (uint8_t)(__this->___value_0);
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0010:
	{
		Initobj (Byte_t684_il2cpp_TypeInfo_var, (&V_0));
		uint8_t L_2 = V_0;
		G_B3_0 = L_2;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String System.Nullable`1<System.Byte>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m62341_gshared (Nullable_1_t8508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)&(__this->___value_0);
		NullCheck((ValueType_t1068 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.ValueType::ToString() */, (ValueType_t1068 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_46.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_46MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_91.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_88.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
#include "System.Core_ArrayTypes.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_141.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_118.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_119.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__72.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_13.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_29.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_91MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_88MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_141MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_118MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_119MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__72MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_13MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_29MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t3307;
struct DictionaryEntryU5BU5D_t9632;
struct Transform_1_t8515;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2080_TisDictionaryEntry_t2080_m65344_gshared (Dictionary_2_t3307 * __this, DictionaryEntryU5BU5D_t9632* p0, int32_t p1, Transform_1_t8515 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2080_TisDictionaryEntry_t2080_m65344(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3307 *, DictionaryEntryU5BU5D_t9632*, int32_t, Transform_1_t8515 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2080_TisDictionaryEntry_t2080_m65344_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3307;
struct Array_t;
struct Transform_1_t8526;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8516_m65346_gshared (Dictionary_2_t3307 * __this, Array_t * p0, int32_t p1, Transform_1_t8526 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8516_m65346(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, Transform_1_t8526 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8516_m65346_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3307;
struct KeyValuePair_2U5BU5D_t9601;
struct Transform_1_t8526;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8516_TisKeyValuePair_2_t8516_m65347_gshared (Dictionary_2_t3307 * __this, KeyValuePair_2U5BU5D_t9601* p0, int32_t p1, Transform_1_t8526 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8516_TisKeyValuePair_2_t8516_m65347(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3307 *, KeyValuePair_2U5BU5D_t9601*, int32_t, Transform_1_t8526 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8516_TisKeyValuePair_2_t8516_m65347_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor()
extern "C" void Dictionary_2__ctor_m62456_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m62457_gshared (Dictionary_2_t3307 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m62458_gshared (Dictionary_2_t3307 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t3307 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11540_gshared (Dictionary_2_t3307 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m62459_gshared (Dictionary_2_t3307 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t8516  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral3745, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t8516  L_9 = (KeyValuePair_2_t8516 )InterfaceFuncInvoker0< KeyValuePair_2_t8516  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t8516 )L_9;
			int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8516 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			TimeType_t3299  L_11 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8516 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t3307 *)__this);
			VirtActionInvoker2< int32_t, TimeType_t3299  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(TKey,TValue) */, (Dictionary_2_t3307 *)__this, (int32_t)L_10, (TimeType_t3299 )L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m62460_gshared (Dictionary_2_t3307 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t2861 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m62461_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3307 *)__this);
		KeyCollection_t8519 * L_0 = (( KeyCollection_t8519 * (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m62462_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3307 *)__this);
		ValueCollection_t8523 * L_0 = (( ValueCollection_t8523 * (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m62463_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3307 *)__this);
		KeyCollection_t8519 * L_0 = (( KeyCollection_t8519 * (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m62464_gshared (Dictionary_2_t3307 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t3307 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKey(TKey) */, (Dictionary_2_t3307 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3307 *)__this);
		int32_t L_4 = (( int32_t (*) (Dictionary_2_t3307 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3307 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t3307 *)__this);
		TimeType_t3299  L_5 = (TimeType_t3299 )VirtFuncInvoker1< TimeType_t3299 , int32_t >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(TKey) */, (Dictionary_2_t3307 *)__this, (int32_t)L_4);
		TimeType_t3299  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m62465_gshared (Dictionary_2_t3307 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3307 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t3307 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3307 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3307 *)__this);
		TimeType_t3299  L_3 = (( TimeType_t3299  (*) (Dictionary_2_t3307 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3307 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3307 *)__this);
		VirtActionInvoker2< int32_t, TimeType_t3299  >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::set_Item(TKey,TValue) */, (Dictionary_2_t3307 *)__this, (int32_t)L_1, (TimeType_t3299 )L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m62466_gshared (Dictionary_2_t3307 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3307 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t3307 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3307 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3307 *)__this);
		TimeType_t3299  L_3 = (( TimeType_t3299  (*) (Dictionary_2_t3307 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3307 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3307 *)__this);
		VirtActionInvoker2< int32_t, TimeType_t3299  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(TKey,TValue) */, (Dictionary_2_t3307 *)__this, (int32_t)L_1, (TimeType_t3299 )L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m62467_gshared (Dictionary_2_t3307 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3307 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKey(TKey) */, (Dictionary_2_t3307 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m62468_gshared (Dictionary_2_t3307 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3307 *)__this);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Remove(TKey) */, (Dictionary_2_t3307 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m62469_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m62470_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m62471_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m62472_gshared (Dictionary_2_t3307 * __this, KeyValuePair_2_t8516  ___keyValuePair, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8516 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		TimeType_t3299  L_1 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8516 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3307 *)__this);
		VirtActionInvoker2< int32_t, TimeType_t3299  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(TKey,TValue) */, (Dictionary_2_t3307 *)__this, (int32_t)L_0, (TimeType_t3299 )L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m62473_gshared (Dictionary_2_t3307 * __this, KeyValuePair_2_t8516  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8516  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3307 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3307 *, KeyValuePair_2_t8516 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3307 *)__this, (KeyValuePair_2_t8516 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62474_gshared (Dictionary_2_t3307 * __this, KeyValuePair_2U5BU5D_t9601* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9601* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, KeyValuePair_2U5BU5D_t9601*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3307 *)__this, (KeyValuePair_2U5BU5D_t9601*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m62475_gshared (Dictionary_2_t3307 * __this, KeyValuePair_2_t8516  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8516  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3307 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3307 *, KeyValuePair_2_t8516 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3307 *)__this, (KeyValuePair_2_t8516 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8516 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3307 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Remove(TKey) */, (Dictionary_2_t3307 *)__this, (int32_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t9632_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m62476_gshared (Dictionary_2_t3307 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t9632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14784);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9601* V_0 = {0};
	DictionaryEntryU5BU5D_t9632* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t9632* G_B5_1 = {0};
	Dictionary_2_t3307 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t9632* G_B4_1 = {0};
	Dictionary_2_t3307 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t9601*)((KeyValuePair_2U5BU5D_t9601*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t9601* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9601* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, KeyValuePair_2U5BU5D_t9601*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3307 *)__this, (KeyValuePair_2U5BU5D_t9601*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3307 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t9632*)((DictionaryEntryU5BU5D_t9632*)IsInst(L_6, DictionaryEntryU5BU5D_t9632_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t9632* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t9632* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t8515 * L_10 = ((Dictionary_2_t3307_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3307 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3307 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t8515 * L_12 = (Transform_1_t8515 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t8515 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3307_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3307 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t8515 * L_13 = ((Dictionary_2_t3307_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t3307 *)G_B5_2);
		(( void (*) (Dictionary_2_t3307 *, DictionaryEntryU5BU5D_t9632*, int32_t, Transform_1_t8515 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t3307 *)G_B5_2, (DictionaryEntryU5BU5D_t9632*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t8515 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t8526 * L_17 = (Transform_1_t8526 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t8526 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, Transform_1_t8526 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t3307 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t8526 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m62477_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521  L_0 = {0};
		(( void (*) (Enumerator_t8521 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t8521  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m62478_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521  L_0 = {0};
		(( void (*) (Enumerator_t8521 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t8521  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m62479_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t8527 * L_0 = (ShimEnumerator_t8527 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t8527 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m62480_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t4376_il2cpp_TypeInfo_var;
extern "C" TimeType_t3299  Dictionary_2_get_Item_m62481_gshared (Dictionary_2_t3307 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		KeyNotFoundException_t4376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8840);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t540* L_7 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t5336* L_11 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		TimeTypeU5BU5D_t8514* L_21 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(TimeType_t3299 *)(TimeType_t3299 *)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t5336* L_24 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t4376 * L_28 = (KeyNotFoundException_t4376 *)il2cpp_codegen_object_new (KeyNotFoundException_t4376_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m16469(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m62482_gshared (Dictionary_2_t3307 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t540* L_8 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t5336* L_13 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_18 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), (int32_t)L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t5336* L_24 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		int32_t L_30 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = (int32_t)L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t540* L_34 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_34);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_38 = (int32_t)L_37;
		V_4 = (int32_t)L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = (int32_t)L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t5336* L_40 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t5336* L_43 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t540* L_45 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t540* L_48 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t5336* L_51 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int32U5BU5D_t540* L_54 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		int32_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t5336* L_58 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t5336* L_60 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t5336* L_63 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t540* L_65 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t540* L_68 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		TimeTypeU5BU5D_t8514* L_71 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		TimeType_t3299  L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((TimeType_t3299 *)(TimeType_t3299 *)SZArrayLdElema(L_71, L_72)) = (TimeType_t3299 )L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5356_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m62483_gshared (Dictionary_2_t3307 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		EqualityComparer_1_t5356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10237);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3307 * G_B4_0 = {0};
	Dictionary_2_t3307 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3307 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_1 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_1, (String_t*)(String_t*) &_stringLiteral2429, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3307 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3307 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3307 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5356_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5356 * L_5 = (( EqualityComparer_1_t5356 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3307 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3307 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t540_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5336_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m62484_gshared (Dictionary_2_t3307 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		LinkU5BU5D_t5336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14785);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t540*)SZArrayNew(Int32U5BU5D_t540_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t5336*)SZArrayNew(LinkU5BU5D_t5336_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int32U5BU5D_t540*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((TimeTypeU5BU5D_t8514*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t540* L_4 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t540* L_6 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m62485_gshared (Dictionary_2_t3307 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1898, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_3 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_3, (String_t*)(String_t*) &_stringLiteral2240, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t654 * L_7 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_7, (String_t*)(String_t*) &_stringLiteral2430, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m14744((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t3307 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count() */, (Dictionary_2_t3307 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t654 * L_12 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_12, (String_t*)(String_t*) &_stringLiteral2431, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8516  Dictionary_2_make_pair_m62486_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		TimeType_t3299  L_1 = ___value;
		KeyValuePair_2_t8516  L_2 = {0};
		(( void (*) (KeyValuePair_2_t8516 *, int32_t, TimeType_t3299 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int32_t)L_0, (TimeType_t3299 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m62487_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::pick_value(TKey,TValue)
extern "C" TimeType_t3299  Dictionary_2_pick_value_m62488_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m62489_gshared (Dictionary_2_t3307 * __this, KeyValuePair_2U5BU5D_t9601* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9601* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3307 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t9601* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t8526 * L_5 = (Transform_1_t8526 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t8526 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, KeyValuePair_2U5BU5D_t9601*, int32_t, Transform_1_t8526 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t3307 *)__this, (KeyValuePair_2U5BU5D_t9601*)L_2, (int32_t)L_3, (Transform_1_t8526 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Resize()
extern TypeInfo* Hashtable_t1268_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t540_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5336_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m62490_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3216);
		Int32U5BU5D_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		LinkU5BU5D_t5336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14785);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t540* V_1 = {0};
	LinkU5BU5D_t5336* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t540* V_7 = {0};
	TimeTypeU5BU5D_t8514* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t540* L_0 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1268_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m16697(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t540*)((Int32U5BU5D_t540*)SZArrayNew(Int32U5BU5D_t540_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t5336*)((LinkU5BU5D_t5336*)SZArrayNew(LinkU5BU5D_t5336_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t540* L_4 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t5336* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_10 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t5336* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t540* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t540* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t5336* L_26 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t540* L_32 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t540* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t5336* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int32U5BU5D_t540*)((Int32U5BU5D_t540*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (TimeTypeU5BU5D_t8514*)((TimeTypeU5BU5D_t8514*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		Int32U5BU5D_t540* L_37 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		Int32U5BU5D_t540* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		TimeTypeU5BU5D_t8514* L_40 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		TimeTypeU5BU5D_t8514* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int32U5BU5D_t540* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		TimeTypeU5BU5D_t8514* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m62491_gshared (Dictionary_2_t3307 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t540* L_8 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t5336* L_12 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_17 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int32_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19)), (int32_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t654 * L_22 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_22, (String_t*)(String_t*) &_stringLiteral3747, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t5336* L_23 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t540* L_32 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_3 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = (int32_t)L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t5336* L_38 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t5336* L_41 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t5336* L_44 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t540* L_46 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t540* L_49 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int32U5BU5D_t540* L_52 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int32_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53)) = (int32_t)L_54;
		TimeTypeU5BU5D_t8514* L_55 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		TimeType_t3299  L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((TimeType_t3299 *)(TimeType_t3299 *)SZArrayLdElema(L_55, L_56)) = (TimeType_t3299 )L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Clear()
extern "C" void Dictionary_2_Clear_m62492_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t540* L_0 = (Int32U5BU5D_t540*)(__this->___table_4);
		Int32U5BU5D_t540* L_1 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t540* L_2 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		Int32U5BU5D_t540* L_3 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		TimeTypeU5BU5D_t8514* L_4 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		TimeTypeU5BU5D_t8514* L_5 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t5336* L_6 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		LinkU5BU5D_t5336* L_7 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m62493_gshared (Dictionary_2_t3307 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t540* L_7 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t5336* L_11 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t5336* L_21 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = (int32_t)L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t8528_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m62494_gshared (Dictionary_2_t3307 * __this, TimeType_t3299  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t8528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14479);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t8528_il2cpp_TypeInfo_var);
		EqualityComparer_1_t8528 * L_0 = (( EqualityComparer_1_t8528 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t540* L_1 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		TimeTypeU5BU5D_t8514* L_5 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		TimeType_t3299  L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, TimeType_t3299 , TimeType_t3299  >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeZoneInfo/TimeType>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (TimeType_t3299 )(*(TimeType_t3299 *)(TimeType_t3299 *)SZArrayLdElema(L_5, L_7)), (TimeType_t3299 )L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t5336* L_10 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m62495_gshared (Dictionary_2_t3307 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9601* V_0 = {0};
	{
		SerializationInfo_t2861 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral2858, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t2861 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t2861 *)L_2);
		SerializationInfo_AddValue_m11145((SerializationInfo_t2861 *)L_2, (String_t*)(String_t*) &_stringLiteral2860, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t2861 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t2861 *)L_4);
		SerializationInfo_AddValue_m11146((SerializationInfo_t2861 *)L_4, (String_t*)(String_t*) &_stringLiteral2862, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t9601*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t9601*)((KeyValuePair_2U5BU5D_t9601*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t9601* L_8 = V_0;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, KeyValuePair_2U5BU5D_t9601*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3307 *)__this, (KeyValuePair_2U5BU5D_t9601*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t2861 * L_9 = ___info;
		Int32U5BU5D_t540* L_10 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t2861 *)L_9);
		SerializationInfo_AddValue_m11145((SerializationInfo_t2861 *)L_9, (String_t*)(String_t*) &_stringLiteral3748, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t2861 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t9601* L_12 = V_0;
		NullCheck((SerializationInfo_t2861 *)L_11);
		SerializationInfo_AddValue_m11146((SerializationInfo_t2861 *)L_11, (String_t*)(String_t*) &_stringLiteral3749, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m62496_gshared (Dictionary_2_t3307 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t9601* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t2861 * L_0 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t2861 * L_1 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2861 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11141((SerializationInfo_t2861 *)L_1, (String_t*)(String_t*) &_stringLiteral2860, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t2861 * L_3 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2861 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11143((SerializationInfo_t2861 *)L_3, (String_t*)(String_t*) &_stringLiteral2862, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t2861 * L_6 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2861 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11141((SerializationInfo_t2861 *)L_6, (String_t*)(String_t*) &_stringLiteral3748, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t2861 * L_8 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2861 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11143((SerializationInfo_t2861 *)L_8, (String_t*)(String_t*) &_stringLiteral3749, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t9601*)((KeyValuePair_2U5BU5D_t9601*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t3307 *)__this);
		(( void (*) (Dictionary_2_t3307 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3307 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t9601* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t9601* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8516 *)((KeyValuePair_2_t8516 *)(KeyValuePair_2_t8516 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t9601* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		TimeType_t3299  L_19 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8516 *)((KeyValuePair_2_t8516 *)(KeyValuePair_2_t8516 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3307 *)__this);
		VirtActionInvoker2< int32_t, TimeType_t3299  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(TKey,TValue) */, (Dictionary_2_t3307 *)__this, (int32_t)L_16, (TimeType_t3299 )L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t9601* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t2861 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* TimeType_t3299_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m62497_gshared (Dictionary_2_t3307 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		TimeType_t3299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5871);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TimeType_t3299  V_5 = {0};
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t540* L_8 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t5336* L_13 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_18 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), (int32_t)L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t5336* L_24 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t540* L_31 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t5336* L_33 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t5336* L_36 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t5336* L_38 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t5336* L_41 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t5336* L_45 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int32U5BU5D_t540* L_47 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (Int32_t82_il2cpp_TypeInfo_var, (&V_4));
		int32_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)L_49;
		TimeTypeU5BU5D_t8514* L_50 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (TimeType_t3299_il2cpp_TypeInfo_var, (&V_5));
		TimeType_t3299  L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((TimeType_t3299 *)(TimeType_t3299 *)SZArrayLdElema(L_50, L_51)) = (TimeType_t3299 )L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* TimeType_t3299_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m62498_gshared (Dictionary_2_t3307 * __this, int32_t ___key, TimeType_t3299 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		TimeType_t3299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5871);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeType_t3299  V_2 = {0};
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t540* L_7 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t5336* L_11 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		TimeType_t3299 * L_21 = ___value;
		TimeTypeU5BU5D_t8514* L_22 = (TimeTypeU5BU5D_t8514*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(TimeType_t3299 *)(TimeType_t3299 *)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t5336* L_25 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = (int32_t)L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		TimeType_t3299 * L_29 = ___value;
		Initobj (TimeType_t3299_il2cpp_TypeInfo_var, (&V_2));
		TimeType_t3299  L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Keys()
extern "C" KeyCollection_t8519 * Dictionary_2_get_Keys_m62499_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t8519 * L_0 = (KeyCollection_t8519 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t8519 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Values()
extern "C" ValueCollection_t8523 * Dictionary_2_get_Values_m62500_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t8523 * L_0 = (ValueCollection_t8523 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t8523 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_ToTKey_m62501_gshared (Dictionary_2_t3307 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3750, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t654 * L_6 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3420(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TimeType_t3299_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" TimeType_t3299  Dictionary_2_ToTValue_m62502_gshared (Dictionary_2_t3307 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TimeType_t3299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5871);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	TimeType_t3299  V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (TimeType_t3299_il2cpp_TypeInfo_var, (&V_0));
		TimeType_t3299  L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3750, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t654 * L_8 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3420(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1297, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(TimeType_t3299 *)((TimeType_t3299 *)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t8528_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m62503_gshared (Dictionary_2_t3307 * __this, KeyValuePair_2_t8516  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t8528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14479);
		s_Il2CppMethodIntialized = true;
	}
	TimeType_t3299  V_0 = {0};
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8516 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3307 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, TimeType_t3299 * >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t3307 *)__this, (int32_t)L_0, (TimeType_t3299 *)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t8528_il2cpp_TypeInfo_var);
		EqualityComparer_1_t8528 * L_2 = (( EqualityComparer_1_t8528 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		TimeType_t3299  L_3 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8516 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		TimeType_t3299  L_4 = V_0;
		NullCheck((EqualityComparer_1_t8528 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, TimeType_t3299 , TimeType_t3299  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::Equals(T,T) */, (EqualityComparer_1_t8528 *)L_2, (TimeType_t3299 )L_3, (TimeType_t3299 )L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C" Enumerator_t8521  Dictionary_2_GetEnumerator_m62504_gshared (Dictionary_2_t3307 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521  L_0 = {0};
		(( void (*) (Enumerator_t8521 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2080  Dictionary_2_U3CCopyToU3Em__0_m62505_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		TimeType_t3299  L_3 = ___value;
		TimeType_t3299  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t2080  L_6 = {0};
		DictionaryEntry__ctor_m14743(&L_6, (Object_t *)L_2, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32)
extern "C" KeyValuePair_2_t8516  Array_InternalArray__get_Item_TisKeyValuePair_2_t8516_m65317_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t8516_m65317(__this, p0, method) (( KeyValuePair_2_t8516  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t8516_m65317_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62506_gshared (InternalEnumerator_1_t8517 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62507_gshared (InternalEnumerator_1_t8517 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62508_gshared (InternalEnumerator_1_t8517 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8516  L_0 = (( KeyValuePair_2_t8516  (*) (InternalEnumerator_1_t8517 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8517 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8516  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62509_gshared (InternalEnumerator_1_t8517 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62510_gshared (InternalEnumerator_1_t8517 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t8516  InternalEnumerator_1_get_Current_m62511_gshared (InternalEnumerator_1_t8517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t8516  L_8 = (( KeyValuePair_2_t8516  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m62512_gshared (KeyValuePair_2_t8516 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t8516 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t8516 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TimeType_t3299  L_1 = ___value;
		(( void (*) (KeyValuePair_2_t8516 *, TimeType_t3299 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t8516 *)__this, (TimeType_t3299 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m62513_gshared (KeyValuePair_2_t8516 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m62514_gshared (KeyValuePair_2_t8516 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" TimeType_t3299  KeyValuePair_2_get_Value_m62515_gshared (KeyValuePair_2_t8516 * __this, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = (TimeType_t3299 )(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m62516_gshared (KeyValuePair_2_t8516 * __this, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m62517_gshared (KeyValuePair_2_t8516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	TimeType_t3299  V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t75* G_B2_1 = {0};
	StringU5BU5D_t75* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t75* G_B1_1 = {0};
	StringU5BU5D_t75* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t75* G_B3_2 = {0};
	StringU5BU5D_t75* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t75* G_B5_1 = {0};
	StringU5BU5D_t75* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t75* G_B4_1 = {0};
	StringU5BU5D_t75* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t75* G_B6_2 = {0};
	StringU5BU5D_t75* G_B6_3 = {0};
	{
		StringU5BU5D_t75* L_0 = (StringU5BU5D_t75*)((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1196);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1196;
		StringU5BU5D_t75* L_1 = (StringU5BU5D_t75*)L_0;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t8516 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t8516 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_5;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t75* L_8 = (StringU5BU5D_t75*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral120);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral120;
		StringU5BU5D_t75* L_9 = (StringU5BU5D_t75*)L_8;
		TimeType_t3299  L_10 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8516 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		TimeType_t3299  L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		TimeType_t3299  L_13 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8516 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (TimeType_t3299 )L_13;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t75* L_16 = (StringU5BU5D_t75*)G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral123;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m450(NULL /*static, unused*/, (StringU5BU5D_t75*)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Values()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeZoneInfo/TimeType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/TimeType>::get_Current()
// System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_106.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_106MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TimeZoneInfo/TimeType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TimeZoneInfo/TimeType>(System.Int32)
extern "C" TimeType_t3299  Array_InternalArray__get_Item_TisTimeType_t3299_m65328_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeType_t3299_m65328(__this, p0, method) (( TimeType_t3299  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTimeType_t3299_m65328_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62518_gshared (InternalEnumerator_1_t8518 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62519_gshared (InternalEnumerator_1_t8518 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62520_gshared (InternalEnumerator_1_t8518 * __this, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = (( TimeType_t3299  (*) (InternalEnumerator_1_t8518 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8518 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TimeType_t3299  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62521_gshared (InternalEnumerator_1_t8518 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62522_gshared (InternalEnumerator_1_t8518 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" TimeType_t3299  InternalEnumerator_1_get_Current_m62523_gshared (InternalEnumerator_1_t8518 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		TimeType_t3299  L_8 = (( TimeType_t3299  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.TimeZoneInfo/TimeType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TimeZoneInfo/TimeType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TimeZoneInfo/TimeType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TimeZoneInfo/TimeType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TimeZoneInfo/TimeType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_92.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_116.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_116MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_92MethodDeclarations.h"
struct Dictionary_2_t3307;
struct Array_t;
struct Transform_1_t8522;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65339_gshared (Dictionary_2_t3307 * __this, Array_t * p0, int32_t p1, Transform_1_t8522 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65339(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, Transform_1_t8522 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65339_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3307;
struct Int32U5BU5D_t540;
struct Transform_1_t8522;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65340_gshared (Dictionary_2_t3307 * __this, Int32U5BU5D_t540* p0, int32_t p1, Transform_1_t8522 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65340(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3307 *, Int32U5BU5D_t540*, int32_t, Transform_1_t8522 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65340_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m62524_gshared (KeyCollection_t8519 * __this, Dictionary_2_t3307 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3307 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral3745, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3307 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m62525_gshared (KeyCollection_t8519 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m62526_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m62527_gshared (KeyCollection_t8519 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t3307 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKey(TKey) */, (Dictionary_2_t3307 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m62528_gshared (KeyCollection_t8519 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m62529_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t8519 *)__this);
		Enumerator_t8520  L_0 = (( Enumerator_t8520  (*) (KeyCollection_t8519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t8519 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8520  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m62530_gshared (KeyCollection_t8519 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t540* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t540*)((Int32U5BU5D_t540*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t540* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t540* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t8519 *)__this);
		VirtActionInvoker2< Int32U5BU5D_t540*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t8519 *)__this, (Int32U5BU5D_t540*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3307 * L_4 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3307 *)L_4);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3307 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3307 * L_7 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8522 * L_11 = (Transform_1_t8522 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8522 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3307 *)L_7);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, Transform_1_t8522 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3307 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t8522 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m62531_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t8519 *)__this);
		Enumerator_t8520  L_0 = (( Enumerator_t8520  (*) (KeyCollection_t8519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t8519 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8520  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m62532_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m62533_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t697_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m62534_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t697_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m62535_gshared (KeyCollection_t8519 * __this, Int32U5BU5D_t540* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Int32U5BU5D_t540* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3307 *)L_0);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3307 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3307 * L_3 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Int32U5BU5D_t540* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8522 * L_7 = (Transform_1_t8522 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8522 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3307 *)L_3);
		(( void (*) (Dictionary_2_t3307 *, Int32U5BU5D_t540*, int32_t, Transform_1_t8522 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3307 *)L_3, (Int32U5BU5D_t540*)L_4, (int32_t)L_5, (Transform_1_t8522 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C" Enumerator_t8520  KeyCollection_GetEnumerator_m62536_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Enumerator_t8520  L_1 = {0};
		(( void (*) (Enumerator_t8520 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3307 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m62537_gshared (KeyCollection_t8519 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3307 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count() */, (Dictionary_2_t3307 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62538_gshared (Enumerator_t8520 * __this, Dictionary_2_t3307 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = ___host;
		NullCheck((Dictionary_2_t3307 *)L_0);
		Enumerator_t8521  L_1 = (( Enumerator_t8521  (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62539_gshared (Enumerator_t8520 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62540_gshared (Enumerator_t8520 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62541_gshared (Enumerator_t8520 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62542_gshared (Enumerator_t8520 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" int32_t Enumerator_get_Current_m62543_gshared (Enumerator_t8520 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8516 * L_1 = (KeyValuePair_2_t8516 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8516 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62544_gshared (Enumerator_t8521 * __this, Dictionary_2_t3307 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3307 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62545_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8516  L_0 = (KeyValuePair_2_t8516 )(__this->___current_3);
		KeyValuePair_2_t8516  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62546_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2080  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m62547_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8516 * L_0 = (KeyValuePair_2_t8516 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t8516 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		KeyValuePair_2_t8516 * L_4 = (KeyValuePair_2_t8516 *)&(__this->___current_3);
		TimeType_t3299  L_5 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8516 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		TimeType_t3299  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_6);
		DictionaryEntry_t2080  L_8 = {0};
		DictionaryEntry__ctor_m14743(&L_8, (Object_t *)L_3, (Object_t *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m62548_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m62549_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = (( TimeType_t3299  (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		TimeType_t3299  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62550_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t3307 * L_4 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t5336* L_5 = (LinkU5BU5D_t5336*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3307 * L_8 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck(L_8);
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3307 * L_12 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck(L_12);
		TimeTypeU5BU5D_t8514* L_13 = (TimeTypeU5BU5D_t8514*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t8516  L_16 = {0};
		(( void (*) (KeyValuePair_2_t8516 *, int32_t, TimeType_t3299 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(&L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (TimeType_t3299 )(*(TimeType_t3299 *)(TimeType_t3299 *)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t3307 * L_18 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t8516  Enumerator_get_Current_m62551_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8516  L_0 = (KeyValuePair_2_t8516 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m62552_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8516 * L_0 = (KeyValuePair_2_t8516 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t8516 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3299  Enumerator_get_CurrentValue_m62553_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8516 * L_0 = (KeyValuePair_2_t8516 *)&(__this->___current_3);
		TimeType_t3299  L_1 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8516 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void Enumerator_Reset_m62554_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___next_1 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3239_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m62555_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5352);
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t3239 * L_1 = (ObjectDisposedException_t3239 *)il2cpp_codegen_object_new (ObjectDisposedException_t3239_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11505(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3307 * L_2 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1370 * L_5 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_5, (String_t*)(String_t*) &_stringLiteral3751, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m62556_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8521 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral2432, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62557_gshared (Enumerator_t8521 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3307 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m62558_gshared (Transform_1_t8522 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m62559_gshared (Transform_1_t8522 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m62559((Transform_1_t8522 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* TimeType_t3299_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m62560_gshared (Transform_1_t8522 * __this, int32_t ___key, TimeType_t3299  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		TimeType_t3299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5871);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(TimeType_t3299_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m62561_gshared (Transform_1_t8522 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_89.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_117.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_117MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_89MethodDeclarations.h"
struct Dictionary_2_t3307;
struct Array_t;
struct Transform_1_t8525;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.TimeZoneInfo/TimeType>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.TimeZoneInfo/TimeType>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisTimeType_t3299_m65342_gshared (Dictionary_2_t3307 * __this, Array_t * p0, int32_t p1, Transform_1_t8525 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisTimeType_t3299_m65342(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, Transform_1_t8525 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisTimeType_t3299_m65342_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3307;
struct TimeTypeU5BU5D_t8514;
struct Transform_1_t8525;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisTimeType_t3299_TisTimeType_t3299_m65343_gshared (Dictionary_2_t3307 * __this, TimeTypeU5BU5D_t8514* p0, int32_t p1, Transform_1_t8525 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisTimeType_t3299_TisTimeType_t3299_m65343(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3307 *, TimeTypeU5BU5D_t8514*, int32_t, Transform_1_t8525 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisTimeType_t3299_TisTimeType_t3299_m65343_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m62562_gshared (ValueCollection_t8523 * __this, Dictionary_2_t3307 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3307 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral3745, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3307 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62563_gshared (ValueCollection_t8523 * __this, TimeType_t3299  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62564_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62565_gshared (ValueCollection_t8523 * __this, TimeType_t3299  ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		TimeType_t3299  L_1 = ___item;
		NullCheck((Dictionary_2_t3307 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3307 *, TimeType_t3299 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)L_0, (TimeType_t3299 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62566_gshared (ValueCollection_t8523 * __this, TimeType_t3299  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62567_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t8523 *)__this);
		Enumerator_t8524  L_0 = (( Enumerator_t8524  (*) (ValueCollection_t8523 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t8523 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8524  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m62568_gshared (ValueCollection_t8523 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	TimeTypeU5BU5D_t8514* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (TimeTypeU5BU5D_t8514*)((TimeTypeU5BU5D_t8514*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		TimeTypeU5BU5D_t8514* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		TimeTypeU5BU5D_t8514* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t8523 *)__this);
		VirtActionInvoker2< TimeTypeU5BU5D_t8514*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t8523 *)__this, (TimeTypeU5BU5D_t8514*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3307 * L_4 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3307 *)L_4);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3307 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3307 * L_7 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8525 * L_11 = (Transform_1_t8525 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8525 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3307 *)L_7);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, Transform_1_t8525 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3307 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t8525 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62569_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t8523 *)__this);
		Enumerator_t8524  L_0 = (( Enumerator_t8524  (*) (ValueCollection_t8523 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t8523 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8524  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62570_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62571_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t697_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m62572_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t697_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m62573_gshared (ValueCollection_t8523 * __this, TimeTypeU5BU5D_t8514* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		TimeTypeU5BU5D_t8514* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3307 *)L_0);
		(( void (*) (Dictionary_2_t3307 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3307 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3307 * L_3 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		TimeTypeU5BU5D_t8514* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8525 * L_7 = (Transform_1_t8525 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8525 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3307 *)L_3);
		(( void (*) (Dictionary_2_t3307 *, TimeTypeU5BU5D_t8514*, int32_t, Transform_1_t8525 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3307 *)L_3, (TimeTypeU5BU5D_t8514*)L_4, (int32_t)L_5, (Transform_1_t8525 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C" Enumerator_t8524  ValueCollection_GetEnumerator_m62574_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		Enumerator_t8524  L_1 = {0};
		(( void (*) (Enumerator_t8524 *, Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3307 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m62575_gshared (ValueCollection_t8523 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = (Dictionary_2_t3307 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3307 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count() */, (Dictionary_2_t3307 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m62576_gshared (Enumerator_t8524 * __this, Dictionary_2_t3307 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3307 * L_0 = ___host;
		NullCheck((Dictionary_2_t3307 *)L_0);
		Enumerator_t8521  L_1 = (( Enumerator_t8521  (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62577_gshared (Enumerator_t8524 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		TimeType_t3299  L_1 = (( TimeType_t3299  (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		TimeType_t3299  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62578_gshared (Enumerator_t8524 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m62579_gshared (Enumerator_t8524 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62580_gshared (Enumerator_t8524 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3299  Enumerator_get_Current_m62581_gshared (Enumerator_t8524 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8516 * L_1 = (KeyValuePair_2_t8516 *)&(L_0->___current_3);
		TimeType_t3299  L_2 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8516 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m62582_gshared (Transform_1_t8525 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::Invoke(TKey,TValue)
extern "C" TimeType_t3299  Transform_1_Invoke_m62583_gshared (Transform_1_t8525 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m62583((Transform_1_t8525 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef TimeType_t3299  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef TimeType_t3299  (*FunctionPointerType) (Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* TimeType_t3299_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m62584_gshared (Transform_1_t8525 * __this, int32_t ___key, TimeType_t3299  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		TimeType_t3299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5871);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(TimeType_t3299_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::EndInvoke(System.IAsyncResult)
extern "C" TimeType_t3299  Transform_1_EndInvoke_m62585_gshared (Transform_1_t8525 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(TimeType_t3299 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m62586_gshared (Transform_1_t8515 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2080  Transform_1_Invoke_m62587_gshared (Transform_1_t8515 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m62587((Transform_1_t8515 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t2080  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t2080  (*FunctionPointerType) (Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* TimeType_t3299_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m62588_gshared (Transform_1_t8515 * __this, int32_t ___key, TimeType_t3299  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		TimeType_t3299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5871);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(TimeType_t3299_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2080  Transform_1_EndInvoke_m62589_gshared (Transform_1_t8515 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t2080 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m62590_gshared (Transform_1_t8526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t8516  Transform_1_Invoke_m62591_gshared (Transform_1_t8526 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m62591((Transform_1_t8526 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t8516  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t8516  (*FunctionPointerType) (Object_t * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* TimeType_t3299_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m62592_gshared (Transform_1_t8526 * __this, int32_t ___key, TimeType_t3299  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		TimeType_t3299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5871);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(TimeType_t3299_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t8516  Transform_1_EndInvoke_m62593_gshared (Transform_1_t8526 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t8516 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m62594_gshared (ShimEnumerator_t8527 * __this, Dictionary_2_t3307 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3307 * L_0 = ___host;
		NullCheck((Dictionary_2_t3307 *)L_0);
		Enumerator_t8521  L_1 = (( Enumerator_t8521  (*) (Dictionary_2_t3307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3307 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m62595_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t3902_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t2080  ShimEnumerator_get_Entry_m62596_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t3902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6869);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t8521  L_0 = (Enumerator_t8521 )(__this->___host_enumerator_0);
		Enumerator_t8521  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t2080  L_3 = (DictionaryEntry_t2080 )InterfaceFuncInvoker0< DictionaryEntry_t2080  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t3902_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m62597_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t8516  V_0 = {0};
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8516  L_1 = (( KeyValuePair_2_t8516  (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t8516 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8516 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m62598_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t8516  V_0 = {0};
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8516  L_1 = (( KeyValuePair_2_t8516  (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t8516 )L_1;
		TimeType_t3299  L_2 = (( TimeType_t3299  (*) (KeyValuePair_2_t8516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8516 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		TimeType_t3299  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern TypeInfo* DictionaryEntry_t2080_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m62599_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t2080_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3211);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t8527 *)__this);
		DictionaryEntry_t2080  L_0 = (DictionaryEntry_t2080 )VirtFuncInvoker0< DictionaryEntry_t2080  >::Invoke(7 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry() */, (ShimEnumerator_t8527 *)__this);
		DictionaryEntry_t2080  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t2080_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m62600_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8521 * L_0 = (Enumerator_t8521 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8521 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeZoneInfo/TimeType>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeZoneInfo/TimeType>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_29.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_29MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::.ctor()
extern "C" void EqualityComparer_1__ctor_m62601_gshared (EqualityComparer_1_t8528 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t4882_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m62602_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t4882_0_0_0_var = il2cpp_codegen_type_from_index(8822);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(GenericEqualityComparer_1_t4882_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1142* L_4 = (TypeU5BU5D_t1142*)((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1142* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1142*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7143(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t8528_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t8528 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t8529 * L_8 = (DefaultComparer_t8529 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t8529 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t8528_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m62603_gshared (EqualityComparer_1_t8528 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t8528 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TimeType_t3299  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::GetHashCode(T) */, (EqualityComparer_1_t8528 *)__this, (TimeType_t3299 )((*(TimeType_t3299 *)((TimeType_t3299 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m62604_gshared (EqualityComparer_1_t8528 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t8528 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, TimeType_t3299 , TimeType_t3299  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::Equals(T,T) */, (EqualityComparer_1_t8528 *)__this, (TimeType_t3299 )((*(TimeType_t3299 *)((TimeType_t3299 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (TimeType_t3299 )((*(TimeType_t3299 *)((TimeType_t3299 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeZoneInfo/TimeType>::get_Default()
extern "C" EqualityComparer_1_t8528 * EqualityComparer_1_get_Default_m62605_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t8528 * L_0 = ((EqualityComparer_1_t8528_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.TimeZoneInfo/TimeType>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::.ctor()
extern TypeInfo* EqualityComparer_1_t8528_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m62606_gshared (DefaultComparer_t8529 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t8528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14479);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t8528 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t8528_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t8528 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t8528 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m62607_gshared (DefaultComparer_t8529 * __this, TimeType_t3299  ___obj, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = ___obj;
		TimeType_t3299  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m62608_gshared (DefaultComparer_t8529 * __this, TimeType_t3299  ___x, TimeType_t3299  ___y, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = ___x;
		TimeType_t3299  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TimeType_t3299  L_3 = ___y;
		TimeType_t3299  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeType_t3299  L_6 = ___y;
		TimeType_t3299  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_gen_58MethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_103.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_107.h"
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Predicate_1_gen_103.h"
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_29.h"
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Comparison_1_gen_104.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_107MethodDeclarations.h"
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Predicate_1_gen_103MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_103MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_29MethodDeclarations.h"
struct Array_t;
struct KeyValuePair_2U5BU5D_t8530;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisKeyValuePair_2_t3322_m65360_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t8530** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisKeyValuePair_2_t3322_m65360(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530**, int32_t, const MethodInfo*))Array_Resize_TisKeyValuePair_2_t3322_m65360_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t8530;
// Declaration System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisKeyValuePair_2_t3322_m65361_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t8530* p0, KeyValuePair_2_t3322  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisKeyValuePair_2_t3322_m65361(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, KeyValuePair_2_t3322 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisKeyValuePair_2_t3322_m65361_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t8530;
struct IComparer_1_t9607;
// Declaration System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisKeyValuePair_2_t3322_m65363_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t8530* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisKeyValuePair_2_t3322_m65363(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisKeyValuePair_2_t3322_m65363_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t8530;
struct Comparison_1_t8541;
// Declaration System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisKeyValuePair_2_t3322_m65369_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t8530* p0, int32_t p1, Comparison_1_t8541 * p2, const MethodInfo* method);
#define Array_Sort_TisKeyValuePair_2_t3322_m65369(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, int32_t, Comparison_1_t8541 *, const MethodInfo*))Array_Sort_TisKeyValuePair_2_t3322_m65369_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m62609_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t8530* L_0 = ((List_1_t3308_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m62610_gshared (List_1_t3308 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t3308 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t8530* L_3 = ((List_1_t3308_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t3308 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((KeyValuePair_2U5BU5D_t8530*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t3308 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m11541_gshared (List_1_t3308 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_1 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_1, (String_t*)(String_t*) &_stringLiteral2429, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((KeyValuePair_2U5BU5D_t8530*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m62611_gshared (List_1_t3308 * __this, KeyValuePair_2U5BU5D_t8530* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t8530* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m62612_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t3308_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((KeyValuePair_2U5BU5D_t8530*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62613_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t3308 *)__this);
		Enumerator_t8532  L_0 = (( Enumerator_t8532  (*) (List_1_t3308 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t3308 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t8532  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m62614_gshared (List_1_t3308 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m62615_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t3308 *)__this);
		Enumerator_t8532  L_0 = (( Enumerator_t8532  (*) (List_1_t3308 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t3308 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t8532  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t710_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1387_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m62616_gshared (List_1_t3308 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2369);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t3308 *)__this);
			VirtActionInvoker1< KeyValuePair_2_t3322  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T) */, (List_1_t3308 *)__this, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t710_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1387_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t654 * L_2 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_2, (String_t*)(String_t*) &_stringLiteral3754, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t710_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1387_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m62617_gshared (List_1_t3308 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2369);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t3308 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T) */, (List_1_t3308 *)__this, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t710_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1387_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t710_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1387_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m62618_gshared (List_1_t3308 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2369);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t3308 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, (List_1_t3308 *)__this, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t710_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1387_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t710_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1387_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m62619_gshared (List_1_t3308 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2369);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t3308 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t3308 *)__this);
			VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T) */, (List_1_t3308 *)__this, (int32_t)L_1, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t710_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1387_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t654 * L_3 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_3, (String_t*)(String_t*) &_stringLiteral3754, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t710_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1387_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m62620_gshared (List_1_t3308 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2369);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t3308 *)__this);
			VirtFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T) */, (List_1_t3308 *)__this, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t710_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1387_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62621_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m62622_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m62623_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m62624_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m62625_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m62626_gshared (List_1_t3308 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t3308 *)__this);
		KeyValuePair_2_t3322  L_1 = (KeyValuePair_2_t3322 )VirtFuncInvoker1< KeyValuePair_2_t3322 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32) */, (List_1_t3308 *)__this, (int32_t)L_0);
		KeyValuePair_2_t3322  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t710_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1387_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m62627_gshared (List_1_t3308 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2369);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t3308 *)__this);
			VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T) */, (List_1_t3308 *)__this, (int32_t)L_0, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t710_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1387_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t654 * L_2 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_2, (String_t*)(String_t*) &_stringLiteral1297, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m62628_gshared (List_1_t3308 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		KeyValuePair_2U5BU5D_t8530* L_1 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t3308 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		KeyValuePair_2U5BU5D_t8530* L_2 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		KeyValuePair_2_t3322  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_2, L_5)) = (KeyValuePair_2_t3322 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m62629_gshared (List_1_t3308 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		KeyValuePair_2U5BU5D_t8530* L_3 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t3308 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t3308 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t3308 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m11159(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m11159(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t3308 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m62630_gshared (List_1_t3308 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___idx;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_1 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_1, (String_t*)(String_t*) &_stringLiteral2240, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_3 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_3, (String_t*)(String_t*) &_stringLiteral632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___idx;
		int32_t L_5 = ___count;
		int32_t L_6 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))) > ((uint32_t)L_6))))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t654 * L_7 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_7, (String_t*)(String_t*) &_stringLiteral3755, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m62631_gshared (List_1_t3308 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t3308 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		KeyValuePair_2U5BU5D_t8530* L_5 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t8530*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (KeyValuePair_2U5BU5D_t8530*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m62632_gshared (List_1_t3308 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t3322  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			KeyValuePair_2_t3322  L_3 = (KeyValuePair_2_t3322 )InterfaceFuncInvoker0< KeyValuePair_2_t3322  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (KeyValuePair_2_t3322 )L_3;
			KeyValuePair_2_t3322  L_4 = V_0;
			NullCheck((List_1_t3308 *)__this);
			VirtActionInvoker1< KeyValuePair_2_t3322  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T) */, (List_1_t3308 *)__this, (KeyValuePair_2_t3322 )L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m62633_gshared (List_1_t3308 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t3308 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t3308 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t3308 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8534 * List_1_AsReadOnly_m62634_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t8534 * L_0 = (ReadOnlyCollection_1_t8534 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t8534 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m62635_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		KeyValuePair_2U5BU5D_t8530* L_1 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m62636_gshared (List_1_t3308 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		KeyValuePair_2_t3322  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, KeyValuePair_2_t3322 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t8530*)L_0, (KeyValuePair_2_t3322 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m62637_gshared (List_1_t3308 * __this, KeyValuePair_2U5BU5D_t8530* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		KeyValuePair_2U5BU5D_t8530* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t3308_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t3322_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3322  List_1_Find_m62638_gshared (List_1_t3308 * __this, Predicate_1_t8538 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5875);
		KeyValuePair_2_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5874);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3322  V_1 = {0};
	KeyValuePair_2_t3322  G_B3_0 = {0};
	{
		Predicate_1_t8538 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t3308_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t8538 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t8538 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t8538 * L_2 = ___match;
		NullCheck((List_1_t3308 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t3308 *, int32_t, int32_t, Predicate_1_t8538 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t3308 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t8538 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8530* L_5 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (KeyValuePair_2_t3322_il2cpp_TypeInfo_var, (&V_1));
		KeyValuePair_2_t3322  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m62639_gshared (Object_t * __this /* static, unused */, Predicate_1_t8538 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t8538 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral3630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m62640_gshared (List_1_t3308 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8538 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t8538 * L_3 = ___match;
		KeyValuePair_2U5BU5D_t8530* L_4 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t8538 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T) */, (Predicate_1_t8538 *)L_3, (KeyValuePair_2_t3322 )(*(KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t8532  List_1_GetEnumerator_m62641_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8532  L_0 = {0};
		(( void (*) (Enumerator_t8532 *, List_1_t3308 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t3308 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3308 * List_1_GetRange_m62642_gshared (List_1_t3308 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t8530* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t3308 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		V_0 = (KeyValuePair_2U5BU5D_t8530*)((KeyValuePair_2U5BU5D_t8530*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		KeyValuePair_2U5BU5D_t8530* L_3 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_4 = ___index;
		KeyValuePair_2U5BU5D_t8530* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t8530* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t3308 * L_9 = (List_1_t3308 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t3308 *, KeyValuePair_2U5BU5D_t8530*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (KeyValuePair_2U5BU5D_t8530*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m62643_gshared (List_1_t3308 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		KeyValuePair_2_t3322  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, KeyValuePair_2_t3322 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t8530*)L_0, (KeyValuePair_2_t3322 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m62644_gshared (List_1_t3308 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8530* L_5 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_6 = ___start;
		KeyValuePair_2U5BU5D_t8530* L_7 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8530* L_15 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m62645_gshared (List_1_t3308 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1414 * L_3 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_3, (String_t*)(String_t*) &_stringLiteral2240, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m62646_gshared (List_1_t3308 * __this, int32_t ___index, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t3308 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		KeyValuePair_2U5BU5D_t8530* L_2 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t3308 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t3308 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		KeyValuePair_2U5BU5D_t8530* L_4 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_5 = ___index;
		KeyValuePair_2_t3322  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_4, L_5)) = (KeyValuePair_2_t3322 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m62647_gshared (List_1_t3308 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral2428, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m62648_gshared (List_1_t3308 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t8530* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t3308 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t3308 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t3308 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (KeyValuePair_2U5BU5D_t8530*)((KeyValuePair_2U5BU5D_t8530*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		KeyValuePair_2U5BU5D_t8530* L_4 = V_0;
		NullCheck((List_1_t3308 *)__this);
		VirtActionInvoker2< KeyValuePair_2U5BU5D_t8530*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32) */, (List_1_t3308 *)__this, (KeyValuePair_2U5BU5D_t8530*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t3308 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		KeyValuePair_2U5BU5D_t8530* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t3308 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		KeyValuePair_2U5BU5D_t8530* L_8 = V_0;
		KeyValuePair_2U5BU5D_t8530* L_9 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_10 = ___index;
		KeyValuePair_2U5BU5D_t8530* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (int32_t)0, (Array_t *)(Array_t *)L_9, (int32_t)L_10, (int32_t)(((int32_t)(((Array_t *)L_11)->max_length))), /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_004f:
	{
		Object_t* L_12 = ___collection;
		V_1 = (Object_t*)((Object_t*)IsInst(L_12, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = ___index;
		Object_t* L_15 = V_1;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t3308 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t3308 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m62649_gshared (List_1_t3308 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t3308 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t3308 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Object_t* L_5 = ___collection;
		KeyValuePair_2U5BU5D_t8530* L_6 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t8530*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (KeyValuePair_2U5BU5D_t8530*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m62650_gshared (List_1_t3308 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t3322  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			KeyValuePair_2_t3322  L_3 = (KeyValuePair_2_t3322 )InterfaceFuncInvoker0< KeyValuePair_2_t3322  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (KeyValuePair_2_t3322 )L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			KeyValuePair_2_t3322  L_6 = V_0;
			NullCheck((List_1_t3308 *)__this);
			VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T) */, (List_1_t3308 *)__this, (int32_t)L_5, (KeyValuePair_2_t3322 )L_6);
		}

IL_001f:
		{
			Object_t* L_7 = V_1;
			NullCheck((Object_t *)L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
			if (L_8)
			{
				goto IL_0009;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			Object_t* L_9 = V_1;
			if (L_9)
			{
				goto IL_002d;
			}
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(41)
		}

IL_002d:
		{
			Object_t* L_10 = V_1;
			NullCheck((Object_t *)L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m62651_gshared (List_1_t3308 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		KeyValuePair_2_t3322  L_0 = ___item;
		NullCheck((List_1_t3308 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, (List_1_t3308 *)__this, (KeyValuePair_2_t3322 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t3308 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32) */, (List_1_t3308 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t3308_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m62652_gshared (List_1_t3308 * __this, Predicate_1_t8538 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5875);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8538 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t3308_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t8538 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t8538 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t8538 * L_1 = ___match;
		KeyValuePair_2U5BU5D_t8530* L_2 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t8538 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T) */, (Predicate_1_t8538 *)L_1, (KeyValuePair_2_t3322 )(*(KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t8538 * L_13 = ___match;
		KeyValuePair_2U5BU5D_t8530* L_14 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t8538 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(11 /* System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T) */, (Predicate_1_t8538 *)L_13, (KeyValuePair_2_t3322 )(*(KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8530* L_18 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		KeyValuePair_2U5BU5D_t8530* L_21 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_18, L_20)) = (KeyValuePair_2_t3322 )(*(KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8530* L_29 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m62653_gshared (List_1_t3308 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1414 * L_3 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_3, (String_t*)(String_t*) &_stringLiteral2240, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t3308 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		KeyValuePair_2U5BU5D_t8530* L_5 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m62654_gshared (List_1_t3308 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t3308 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t3308 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		KeyValuePair_2U5BU5D_t8530* L_5 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		int32_t L_7 = ___count;
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		int32_t L_8 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m62655_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m12842(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern TypeInfo* Comparer_1_t8539_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m62656_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t8539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14495);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t8539_il2cpp_TypeInfo_var);
		Comparer_1_t8539 * L_2 = (( Comparer_1_t8539 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t8530*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m62657_gshared (List_1_t3308 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t8530*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m62658_gshared (List_1_t3308 * __this, Comparison_1_t8541 * ___comparison, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t8541 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530*, int32_t, Comparison_1_t8541 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t8530*)L_0, (int32_t)L_1, (Comparison_1_t8541 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8530* List_1_ToArray_m62659_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t8530* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (KeyValuePair_2U5BU5D_t8530*)((KeyValuePair_2U5BU5D_t8530*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		KeyValuePair_2U5BU5D_t8530* L_1 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		KeyValuePair_2U5BU5D_t8530* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11134(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t8530* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m62660_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t3308 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m62661_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t8530* L_0 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m62662_gshared (List_1_t3308 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_2 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11164(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		KeyValuePair_2U5BU5D_t8530** L_3 = (KeyValuePair_2U5BU5D_t8530**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t8530**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t8530**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m62663_gshared (List_1_t3308 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3322  List_1_get_Item_m62664_gshared (List_1_t3308 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_2 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_2, (String_t*)(String_t*) &_stringLiteral2240, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t8530* L_3 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m62665_gshared (List_1_t3308 * __this, int32_t ___index, KeyValuePair_2_t3322  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t3308 *)__this);
		(( void (*) (List_1_t3308 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t3308 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_3 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_3, (String_t*)(String_t*) &_stringLiteral2240, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		KeyValuePair_2U5BU5D_t8530* L_4 = (KeyValuePair_2U5BU5D_t8530*)(__this->____items_1);
		int32_t L_5 = ___index;
		KeyValuePair_2_t3322  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_4, L_5)) = (KeyValuePair_2_t3322 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_107.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_107MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32)
extern "C" KeyValuePair_2_t3322  Array_InternalArray__get_Item_TisKeyValuePair_2_t3322_m65349_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3322_m65349(__this, p0, method) (( KeyValuePair_2_t3322  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3322_m65349_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62666_gshared (InternalEnumerator_1_t8531 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62667_gshared (InternalEnumerator_1_t8531 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62668_gshared (InternalEnumerator_1_t8531 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3322  L_0 = (( KeyValuePair_2_t3322  (*) (InternalEnumerator_1_t8531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3322  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62669_gshared (InternalEnumerator_1_t8531 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62670_gshared (InternalEnumerator_1_t8531 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3322  InternalEnumerator_1_get_Current_m62671_gshared (InternalEnumerator_1_t8531 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t3322  L_8 = (( KeyValuePair_2_t3322  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m62672_gshared (Enumerator_t8532 * __this, List_1_t3308 * ___l, const MethodInfo* method)
{
	{
		List_1_t3308 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t3308 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m62673_gshared (Enumerator_t8532 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8532 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m62674_gshared (Enumerator_t8532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t8532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8532 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11163(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		KeyValuePair_2_t3322  L_2 = (KeyValuePair_2_t3322 )(__this->___current_3);
		KeyValuePair_2_t3322  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Dispose()
extern "C" void Enumerator_Dispose_m62675_gshared (Enumerator_t8532 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t3308 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3239_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m62676_gshared (Enumerator_t8532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5352);
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t3308 * L_0 = (List_1_t3308 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t8532  L_1 = (*(Enumerator_t8532 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m3766((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3239 * L_5 = (ObjectDisposedException_t3239 *)il2cpp_codegen_object_new (ObjectDisposedException_t3239_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11505(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t3308 * L_7 = (List_1_t3308 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1370 * L_9 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_9, (String_t*)(String_t*) &_stringLiteral3756, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m62677_gshared (Enumerator_t8532 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t8532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8532 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t3308 * L_2 = (List_1_t3308 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t3308 * L_4 = (List_1_t3308 *)(__this->___l_0);
		NullCheck(L_4);
		KeyValuePair_2U5BU5D_t8530* L_5 = (KeyValuePair_2U5BU5D_t8530*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(KeyValuePair_2_t3322 *)(KeyValuePair_2_t3322 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Current()
extern "C" KeyValuePair_2_t3322  Enumerator_get_Current_m62678_gshared (Enumerator_t8532 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3322  L_0 = (KeyValuePair_2_t3322 )(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_29MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m62679_gshared (ReadOnlyCollection_1_t8534 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral3757, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m62680_gshared (ReadOnlyCollection_1_t8534 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m62681_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m62682_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m62683_gshared (ReadOnlyCollection_1_t8534 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m62684_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" KeyValuePair_2_t3322  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m62685_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t8534 *)__this);
		KeyValuePair_2_t3322  L_1 = (KeyValuePair_2_t3322 )VirtFuncInvoker1< KeyValuePair_2_t3322 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t8534 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m62686_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, KeyValuePair_2_t3322  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62687_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t697_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m62688_gshared (ReadOnlyCollection_1_t8534 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t697_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t697_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t697_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m62689_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m62690_gshared (ReadOnlyCollection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m62691_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m62692_gshared (ReadOnlyCollection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m62693_gshared (ReadOnlyCollection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m62694_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m62695_gshared (ReadOnlyCollection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m62696_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m62697_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m62698_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m62699_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m62700_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m62701_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t3322  L_2 = (KeyValuePair_2_t3322 )InterfaceFuncInvoker1< KeyValuePair_2_t3322 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		KeyValuePair_2_t3322  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m62702_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m62703_gshared (ReadOnlyCollection_1_t8534 * __this, KeyValuePair_2_t3322  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t3322  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (KeyValuePair_2_t3322 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m62704_gshared (ReadOnlyCollection_1_t8534 * __this, KeyValuePair_2U5BU5D_t8530* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2U5BU5D_t8530* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t8530*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (KeyValuePair_2U5BU5D_t8530*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m62705_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m62706_gshared (ReadOnlyCollection_1_t8534 * __this, KeyValuePair_2_t3322  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t3322  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (KeyValuePair_2_t3322 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m62707_gshared (ReadOnlyCollection_1_t8534 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3322  ReadOnlyCollection_1_get_Item_m62708_gshared (ReadOnlyCollection_1_t8534 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t3322  L_2 = (KeyValuePair_2_t3322 )InterfaceFuncInvoker1< KeyValuePair_2_t3322 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_29.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern TypeInfo* ICollection_t697_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m62709_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t3308 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t3308 * L_0 = (List_1_t3308 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t3308 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t3308 *)L_0;
		List_1_t3308 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t697_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t3308 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62710_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t697_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m62711_gshared (Collection_1_t8535 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t697_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t697_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t697_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m62712_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m62713_gshared (Collection_1_t8535 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		KeyValuePair_2_t3322  L_4 = (( KeyValuePair_2_t3322  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T) */, (Collection_1_t8535 *)__this, (int32_t)L_2, (KeyValuePair_2_t3322 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m62714_gshared (Collection_1_t8535 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m62715_gshared (Collection_1_t8535 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m62716_gshared (Collection_1_t8535 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t3322  L_2 = (( KeyValuePair_2_t3322  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T) */, (Collection_1_t8535 *)__this, (int32_t)L_0, (KeyValuePair_2_t3322 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m62717_gshared (Collection_1_t8535 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		KeyValuePair_2_t3322  L_2 = (( KeyValuePair_2_t3322  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t8535 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, (Collection_1_t8535 *)__this, (KeyValuePair_2_t3322 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32) */, (Collection_1_t8535 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m62718_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m62719_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m62720_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m62721_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m62722_gshared (Collection_1_t8535 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t3322  L_2 = (KeyValuePair_2_t3322 )InterfaceFuncInvoker1< KeyValuePair_2_t3322 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		KeyValuePair_2_t3322  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m62723_gshared (Collection_1_t8535 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t3322  L_2 = (( KeyValuePair_2_t3322  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T) */, (Collection_1_t8535 *)__this, (int32_t)L_0, (KeyValuePair_2_t3322 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m62724_gshared (Collection_1_t8535 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		KeyValuePair_2_t3322  L_3 = ___item;
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T) */, (Collection_1_t8535 *)__this, (int32_t)L_2, (KeyValuePair_2_t3322 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m62725_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems() */, (Collection_1_t8535 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m62726_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m62727_gshared (Collection_1_t8535 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t3322  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, KeyValuePair_2_t3322  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (KeyValuePair_2_t3322 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m62728_gshared (Collection_1_t8535 * __this, KeyValuePair_2U5BU5D_t8530* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2U5BU5D_t8530* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t8530*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (KeyValuePair_2U5BU5D_t8530*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m62729_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m62730_gshared (Collection_1_t8535 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		KeyValuePair_2_t3322  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (KeyValuePair_2_t3322 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m62731_gshared (Collection_1_t8535 * __this, int32_t ___index, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		KeyValuePair_2_t3322  L_1 = ___item;
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T) */, (Collection_1_t8535 *)__this, (int32_t)L_0, (KeyValuePair_2_t3322 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m62732_gshared (Collection_1_t8535 * __this, int32_t ___index, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		KeyValuePair_2_t3322  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (KeyValuePair_2_t3322 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m62733_gshared (Collection_1_t8535 * __this, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		KeyValuePair_2_t3322  L_0 = ___item;
		NullCheck((Collection_1_t8535 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T) */, (Collection_1_t8535 *)__this, (KeyValuePair_2_t3322 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32) */, (Collection_1_t8535 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m62734_gshared (Collection_1_t8535 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32) */, (Collection_1_t8535 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m62735_gshared (Collection_1_t8535 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m62736_gshared (Collection_1_t8535 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3322  Collection_1_get_Item_m62737_gshared (Collection_1_t8535 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		KeyValuePair_2_t3322  L_2 = (KeyValuePair_2_t3322 )InterfaceFuncInvoker1< KeyValuePair_2_t3322 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m62738_gshared (Collection_1_t8535 * __this, int32_t ___index, KeyValuePair_2_t3322  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		KeyValuePair_2_t3322  L_1 = ___value;
		NullCheck((Collection_1_t8535 *)__this);
		VirtActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T) */, (Collection_1_t8535 *)__this, (int32_t)L_0, (KeyValuePair_2_t3322 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m62739_gshared (Collection_1_t8535 * __this, int32_t ___index, KeyValuePair_2_t3322  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		KeyValuePair_2_t3322  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t3322  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (KeyValuePair_2_t3322 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m62740_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3322  Collection_1_ConvertItem_m62741_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t654 * L_3 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_3, (String_t*)(String_t*) &_stringLiteral3754, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m62742_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t56 * L_2 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t697_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m62743_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t697_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t697_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t631_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m62744_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t631_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t631_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_30.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_30MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_30.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_30MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void EqualityComparer_1__ctor_m62745_gshared (EqualityComparer_1_t8536 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t4882_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m62746_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t4882_0_0_0_var = il2cpp_codegen_type_from_index(8822);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(GenericEqualityComparer_1_t4882_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1142* L_4 = (TypeU5BU5D_t1142*)((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1142* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1142*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7143(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t8536_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t8536 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t8537 * L_8 = (DefaultComparer_t8537 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t8537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t8536_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m62747_gshared (EqualityComparer_1_t8536 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t8536 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T) */, (EqualityComparer_1_t8536 *)__this, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m62748_gshared (EqualityComparer_1_t8536 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t8536 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t3322 , KeyValuePair_2_t3322  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T) */, (EqualityComparer_1_t8536 *)__this, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Default()
extern "C" EqualityComparer_1_t8536 * EqualityComparer_1_get_Default_m62749_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t8536 * L_0 = ((EqualityComparer_1_t8536_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern TypeInfo* EqualityComparer_1_t8536_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m62750_gshared (DefaultComparer_t8537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t8536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14490);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t8536 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t8536_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t8536 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t8536 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m62751_gshared (DefaultComparer_t8537 * __this, KeyValuePair_2_t3322  ___obj, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3322  L_0 = ___obj;
		KeyValuePair_2_t3322  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m62752_gshared (DefaultComparer_t8537 * __this, KeyValuePair_2_t3322  ___x, KeyValuePair_2_t3322  ___y, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3322  L_0 = ___x;
		KeyValuePair_2_t3322  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		KeyValuePair_2_t3322  L_3 = ___y;
		KeyValuePair_2_t3322  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		KeyValuePair_2_t3322  L_6 = ___y;
		KeyValuePair_2_t3322  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m62753_gshared (Predicate_1_t8538 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m62754_gshared (Predicate_1_t8538 * __this, KeyValuePair_2_t3322  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m62754((Predicate_1_t8538 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t3322  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t3322  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t3322_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m62755_gshared (Predicate_1_t8538 * __this, KeyValuePair_2_t3322  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5874);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t3322_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m62756_gshared (Predicate_1_t8538 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_29.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_29MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Comparer_1__ctor_m62757_gshared (Comparer_1_t8539 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern const Il2CppType* GenericComparer_1_t4871_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m62758_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t4871_0_0_0_var = il2cpp_codegen_type_from_index(8707);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(GenericComparer_1_t4871_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1142* L_4 = (TypeU5BU5D_t1142*)((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1142* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1142*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7143(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t8539_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t8539 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t8540 * L_8 = (DefaultComparer_t8540 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t8540 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t8539_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m62759_gshared (Comparer_1_t8539 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t8539 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, KeyValuePair_2_t3322 , KeyValuePair_2_t3322  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Compare(T,T) */, (Comparer_1_t8539 *)__this, (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t3322 )((*(KeyValuePair_2_t3322 *)((KeyValuePair_2_t3322 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t654 * L_8 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11162(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Default()
extern "C" Comparer_1_t8539 * Comparer_1_get_Default_m62760_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t8539 * L_0 = ((Comparer_1_t8539_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern TypeInfo* Comparer_1_t8539_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m62761_gshared (DefaultComparer_t8540 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t8539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14495);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t8539 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t8539_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t8539 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t8539 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Compare(T,T)
extern TypeInfo* IComparable_t99_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m62762_gshared (DefaultComparer_t8540 * __this, KeyValuePair_2_t3322  ___x, KeyValuePair_2_t3322  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		KeyValuePair_2_t3322  L_0 = ___x;
		KeyValuePair_2_t3322  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		KeyValuePair_2_t3322  L_3 = ___y;
		KeyValuePair_2_t3322  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		KeyValuePair_2_t3322  L_6 = ___y;
		KeyValuePair_2_t3322  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		KeyValuePair_2_t3322  L_9 = ___x;
		KeyValuePair_2_t3322  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		KeyValuePair_2_t3322  L_12 = ___x;
		KeyValuePair_2_t3322  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		KeyValuePair_2_t3322  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t3322  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (KeyValuePair_2_t3322 )L_15);
		return L_16;
	}

IL_003e:
	{
		KeyValuePair_2_t3322  L_17 = ___x;
		KeyValuePair_2_t3322  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t99_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		KeyValuePair_2_t3322  L_20 = ___x;
		KeyValuePair_2_t3322  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		KeyValuePair_2_t3322  L_23 = ___y;
		KeyValuePair_2_t3322  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t99_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t654 * L_27 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_27, (String_t*)(String_t*) &_stringLiteral3744, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Comparison_1_gen_104MethodDeclarations.h"



// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m62763_gshared (Comparison_1_t8541 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m62764_gshared (Comparison_1_t8541 * __this, KeyValuePair_2_t3322  ___x, KeyValuePair_2_t3322  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m62764((Comparison_1_t8541 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t3322  ___x, KeyValuePair_2_t3322  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t3322  ___x, KeyValuePair_2_t3322  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t3322_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m62765_gshared (Comparison_1_t8541 * __this, KeyValuePair_2_t3322  ___x, KeyValuePair_2_t3322  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5874);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(KeyValuePair_2_t3322_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(KeyValuePair_2_t3322_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m62766_gshared (Comparison_1_t8541 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17MethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"


// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m11542_gshared (KeyValuePair_2_t3322 * __this, DateTime_t287  ___key, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		DateTime_t287  L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3322 *, DateTime_t287 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t3322 *)__this, (DateTime_t287 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TimeType_t3299  L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3322 *, TimeType_t3299 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t3322 *)__this, (TimeType_t3299 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" DateTime_t287  KeyValuePair_2_get_Key_m11532_gshared (KeyValuePair_2_t3322 * __this, const MethodInfo* method)
{
	{
		DateTime_t287  L_0 = (DateTime_t287 )(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m62767_gshared (KeyValuePair_2_t3322 * __this, DateTime_t287  ___value, const MethodInfo* method)
{
	{
		DateTime_t287  L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" TimeType_t3299  KeyValuePair_2_get_Value_m11533_gshared (KeyValuePair_2_t3322 * __this, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = (TimeType_t3299 )(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m62768_gshared (KeyValuePair_2_t3322 * __this, TimeType_t3299  ___value, const MethodInfo* method)
{
	{
		TimeType_t3299  L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m62769_gshared (KeyValuePair_2_t3322 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t287  V_0 = {0};
	TimeType_t3299  V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t75* G_B2_1 = {0};
	StringU5BU5D_t75* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t75* G_B1_1 = {0};
	StringU5BU5D_t75* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t75* G_B3_2 = {0};
	StringU5BU5D_t75* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t75* G_B5_1 = {0};
	StringU5BU5D_t75* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t75* G_B4_1 = {0};
	StringU5BU5D_t75* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t75* G_B6_2 = {0};
	StringU5BU5D_t75* G_B6_3 = {0};
	{
		StringU5BU5D_t75* L_0 = (StringU5BU5D_t75*)((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1196);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1196;
		StringU5BU5D_t75* L_1 = (StringU5BU5D_t75*)L_0;
		DateTime_t287  L_2 = (( DateTime_t287  (*) (KeyValuePair_2_t3322 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3322 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		DateTime_t287  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		DateTime_t287  L_5 = (( DateTime_t287  (*) (KeyValuePair_2_t3322 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3322 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (DateTime_t287 )L_5;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t75* L_8 = (StringU5BU5D_t75*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral120);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral120;
		StringU5BU5D_t75* L_9 = (StringU5BU5D_t75*)L_8;
		TimeType_t3299  L_10 = (( TimeType_t3299  (*) (KeyValuePair_2_t3322 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3322 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		TimeType_t3299  L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		TimeType_t3299  L_13 = (( TimeType_t3299  (*) (KeyValuePair_2_t3322 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3322 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (TimeType_t3299 )L_13;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t75* L_16 = (StringU5BU5D_t75*)G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral123;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m450(NULL /*static, unused*/, (StringU5BU5D_t75*)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.TimeZoneInfo/TransitionTime
#include "System_Core_System_TimeZoneInfo_TransitionTime.h"


// System.Boolean System.IEquatable`1<System.TimeZoneInfo/TransitionTime>::Equals(T)
#ifndef _MSC_VER
#else
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_5.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_112.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_112MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C" X509ChainStatus_t4041  Array_InternalArray__get_Item_TisX509ChainStatus_t4041_m65372_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisX509ChainStatus_t4041_m65372(__this, p0, method) (( X509ChainStatus_t4041  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisX509ChainStatus_t4041_m65372_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62909_gshared (InternalEnumerator_1_t8552 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62910_gshared (InternalEnumerator_1_t8552 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62911_gshared (InternalEnumerator_1_t8552 * __this, const MethodInfo* method)
{
	{
		X509ChainStatus_t4041  L_0 = (( X509ChainStatus_t4041  (*) (InternalEnumerator_1_t8552 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8552 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		X509ChainStatus_t4041  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62912_gshared (InternalEnumerator_1_t8552 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62913_gshared (InternalEnumerator_1_t8552 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" X509ChainStatus_t4041  InternalEnumerator_1_get_Current_m62914_gshared (InternalEnumerator_1_t8552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		X509ChainStatus_t4041  L_8 = (( X509ChainStatus_t4041  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"


// System.Int32 System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ArraySegment`1<System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ArraySegment`1<System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_114.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_114MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ArraySegment`1<System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ArraySegment`1<System.Byte>>(System.Int32)
extern "C" ArraySegment_1_t8554  Array_InternalArray__get_Item_TisArraySegment_1_t8554_m65383_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisArraySegment_1_t8554_m65383(__this, p0, method) (( ArraySegment_1_t8554  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisArraySegment_1_t8554_m65383_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m62927_gshared (InternalEnumerator_1_t8555 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62928_gshared (InternalEnumerator_1_t8555 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62929_gshared (InternalEnumerator_1_t8555 * __this, const MethodInfo* method)
{
	{
		ArraySegment_1_t8554  L_0 = (( ArraySegment_1_t8554  (*) (InternalEnumerator_1_t8555 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8555 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ArraySegment_1_t8554  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m62930_gshared (InternalEnumerator_1_t8555 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m62931_gshared (InternalEnumerator_1_t8555 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" ArraySegment_1_t8554  InternalEnumerator_1_get_Current_m62932_gshared (InternalEnumerator_1_t8555 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		ArraySegment_1_t8554  L_8 = (( ArraySegment_1_t8554  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_genMethodDeclarations.h"



// T[] System.ArraySegment`1<System.Byte>::get_Array()
extern "C" ByteU5BU5D_t66* ArraySegment_1_get_Array_m62921_gshared (ArraySegment_1_t8554 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = (ByteU5BU5D_t66*)(__this->___array_0);
		return L_0;
	}
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
extern "C" int32_t ArraySegment_1_get_Offset_m62922_gshared (ArraySegment_1_t8554 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___offset_1);
		return L_0;
	}
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
extern "C" int32_t ArraySegment_1_get_Count_m62923_gshared (ArraySegment_1_t8554 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_2);
		return L_0;
	}
}
// System.Boolean System.ArraySegment`1<System.Byte>::Equals(System.Object)
extern "C" bool ArraySegment_1_Equals_m62924_gshared (ArraySegment_1_t8554 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_1 = ___obj;
		bool L_2 = (( bool (*) (ArraySegment_1_t8554 *, ArraySegment_1_t8554 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ArraySegment_1_t8554 *)__this, (ArraySegment_1_t8554 )((*(ArraySegment_1_t8554 *)((ArraySegment_1_t8554 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_2;
	}

IL_0015:
	{
		return 0;
	}
}
// System.Boolean System.ArraySegment`1<System.Byte>::Equals(System.ArraySegment`1<T>)
extern "C" bool ArraySegment_1_Equals_m62925_gshared (ArraySegment_1_t8554 * __this, ArraySegment_1_t8554  ___obj, const MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = (ByteU5BU5D_t66*)(__this->___array_0);
		ByteU5BU5D_t66* L_1 = (( ByteU5BU5D_t66* (*) (ArraySegment_1_t8554 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ArraySegment_1_t8554 *)(&___obj), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if ((!(((Object_t*)(ByteU5BU5D_t66*)L_0) == ((Object_t*)(ByteU5BU5D_t66*)L_1))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = (int32_t)(__this->___offset_1);
		int32_t L_3 = (( int32_t (*) (ArraySegment_1_t8554 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ArraySegment_1_t8554 *)(&___obj), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___count_2);
		int32_t L_5 = (( int32_t (*) (ArraySegment_1_t8554 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ArraySegment_1_t8554 *)(&___obj), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		return 0;
	}
}
// System.Int32 System.ArraySegment`1<System.Byte>::GetHashCode()
extern "C" int32_t ArraySegment_1_GetHashCode_m62926_gshared (ArraySegment_1_t8554 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = (ByteU5BU5D_t66*)(__this->___array_0);
		NullCheck((Object_t *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)L_0);
		int32_t L_2 = (int32_t)(__this->___offset_1);
		int32_t L_3 = (int32_t)(__this->___count_2);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_2))^(int32_t)L_3));
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_76.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_76MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_93.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_90.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_121.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_122.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__73.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_14.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_93MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_90MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_121MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_122MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__73MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_14MethodDeclarations.h"
struct Dictionary_2_t4069;
struct DictionaryEntryU5BU5D_t9632;
struct Transform_1_t8562;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2080_TisDictionaryEntry_t2080_m65407_gshared (Dictionary_2_t4069 * __this, DictionaryEntryU5BU5D_t9632* p0, int32_t p1, Transform_1_t8562 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2080_TisDictionaryEntry_t2080_m65407(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4069 *, DictionaryEntryU5BU5D_t9632*, int32_t, Transform_1_t8562 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2080_TisDictionaryEntry_t2080_m65407_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t4069;
struct Array_t;
struct Transform_1_t8571;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8563_m65409_gshared (Dictionary_2_t4069 * __this, Array_t * p0, int32_t p1, Transform_1_t8571 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8563_m65409(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, Transform_1_t8571 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8563_m65409_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t4069;
struct KeyValuePair_2U5BU5D_t9616;
struct Transform_1_t8571;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8563_TisKeyValuePair_2_t8563_m65410_gshared (Dictionary_2_t4069 * __this, KeyValuePair_2U5BU5D_t9616* p0, int32_t p1, Transform_1_t8571 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8563_TisKeyValuePair_2_t8563_m65410(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4069 *, KeyValuePair_2U5BU5D_t9616*, int32_t, Transform_1_t8571 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8563_TisKeyValuePair_2_t8563_m65410_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m63045_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t4069 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63046_gshared (Dictionary_2_t4069 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t4069 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m63047_gshared (Dictionary_2_t4069 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t4069 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m63048_gshared (Dictionary_2_t4069 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t4069 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m63049_gshared (Dictionary_2_t4069 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t8563  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral3745, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t4069 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t8563  L_9 = (KeyValuePair_2_t8563 )InterfaceFuncInvoker0< KeyValuePair_2_t8563  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t8563 )L_9;
			int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8563 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8563 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t4069 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t4069 *)__this, (int32_t)L_10, (int32_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m63050_gshared (Dictionary_2_t4069 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t2861 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63051_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t4069 *)__this);
		KeyCollection_t8565 * L_0 = (( KeyCollection_t8565 * (*) (Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63052_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t4069 *)__this);
		ValueCollection_t8569 * L_0 = (( ValueCollection_t8569 * (*) (Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m63053_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t4069 *)__this);
		KeyCollection_t8565 * L_0 = (( KeyCollection_t8565 * (*) (Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m63054_gshared (Dictionary_2_t4069 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t4069 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t4069 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t4069 *)__this);
		int32_t L_4 = (( int32_t (*) (Dictionary_2_t4069 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t4069 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t4069 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey) */, (Dictionary_2_t4069 *)__this, (int32_t)L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m63055_gshared (Dictionary_2_t4069 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t4069 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t4069 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t4069 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t4069 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t4069 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t4069 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t4069 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue) */, (Dictionary_2_t4069 *)__this, (int32_t)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m63056_gshared (Dictionary_2_t4069 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t4069 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t4069 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t4069 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t4069 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t4069 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t4069 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t4069 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t4069 *)__this, (int32_t)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m63057_gshared (Dictionary_2_t4069 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t4069 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t4069 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m63058_gshared (Dictionary_2_t4069 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t4069 *)__this);
		VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey) */, (Dictionary_2_t4069 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63059_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63060_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63061_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63062_gshared (Dictionary_2_t4069 * __this, KeyValuePair_2_t8563  ___keyValuePair, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8563 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8563 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t4069 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t4069 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63063_gshared (Dictionary_2_t4069 * __this, KeyValuePair_2_t8563  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8563  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t4069 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t4069 *, KeyValuePair_2_t8563 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t4069 *)__this, (KeyValuePair_2_t8563 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63064_gshared (Dictionary_2_t4069 * __this, KeyValuePair_2U5BU5D_t9616* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9616* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, KeyValuePair_2U5BU5D_t9616*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t4069 *)__this, (KeyValuePair_2U5BU5D_t9616*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63065_gshared (Dictionary_2_t4069 * __this, KeyValuePair_2_t8563  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8563  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t4069 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t4069 *, KeyValuePair_2_t8563 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t4069 *)__this, (KeyValuePair_2_t8563 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8563 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t4069 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey) */, (Dictionary_2_t4069 *)__this, (int32_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t9632_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m63066_gshared (Dictionary_2_t4069 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t9632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14784);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9616* V_0 = {0};
	DictionaryEntryU5BU5D_t9632* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t9632* G_B5_1 = {0};
	Dictionary_2_t4069 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t9632* G_B4_1 = {0};
	Dictionary_2_t4069 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t9616*)((KeyValuePair_2U5BU5D_t9616*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t9616* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9616* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, KeyValuePair_2U5BU5D_t9616*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t4069 *)__this, (KeyValuePair_2U5BU5D_t9616*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t4069 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t9632*)((DictionaryEntryU5BU5D_t9632*)IsInst(L_6, DictionaryEntryU5BU5D_t9632_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t9632* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t9632* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t8562 * L_10 = ((Dictionary_2_t4069_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t4069 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t4069 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t8562 * L_12 = (Transform_1_t8562 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t8562 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t4069_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t4069 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t8562 * L_13 = ((Dictionary_2_t4069_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t4069 *)G_B5_2);
		(( void (*) (Dictionary_2_t4069 *, DictionaryEntryU5BU5D_t9632*, int32_t, Transform_1_t8562 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t4069 *)G_B5_2, (DictionaryEntryU5BU5D_t9632*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t8562 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t8571 * L_17 = (Transform_1_t8571 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t8571 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, Transform_1_t8571 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t4069 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t8571 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63067_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8567  L_0 = {0};
		(( void (*) (Enumerator_t8567 *, Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t8567  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63068_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8567  L_0 = {0};
		(( void (*) (Enumerator_t8567 *, Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t8567  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63069_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t8572 * L_0 = (ShimEnumerator_t8572 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t8572 *, Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m63070_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t4376_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_get_Item_m63071_gshared (Dictionary_2_t4069 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		KeyNotFoundException_t4376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8840);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t540* L_7 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t5336* L_11 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t540* L_21 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t5336* L_24 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t4376 * L_28 = (KeyNotFoundException_t4376 *)il2cpp_codegen_object_new (KeyNotFoundException_t4376_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m16469(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m63072_gshared (Dictionary_2_t4069 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t540* L_8 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t5336* L_13 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_18 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), (int32_t)L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t5336* L_24 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		int32_t L_30 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = (int32_t)L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t540* L_34 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_34);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_38 = (int32_t)L_37;
		V_4 = (int32_t)L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = (int32_t)L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t5336* L_40 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t5336* L_43 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t540* L_45 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t540* L_48 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t5336* L_51 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int32U5BU5D_t540* L_54 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		int32_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t5336* L_58 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t5336* L_60 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t5336* L_63 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t540* L_65 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t540* L_68 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		Int32U5BU5D_t540* L_71 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		int32_t L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72)) = (int32_t)L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5356_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m63073_gshared (Dictionary_2_t4069 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		EqualityComparer_1_t5356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10237);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t4069 * G_B4_0 = {0};
	Dictionary_2_t4069 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t4069 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_1 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_1, (String_t*)(String_t*) &_stringLiteral2429, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t4069 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t4069 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t4069 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5356_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5356 * L_5 = (( EqualityComparer_1_t5356 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t4069 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t4069 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t540_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5336_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m63074_gshared (Dictionary_2_t4069 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		LinkU5BU5D_t5336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14785);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t540*)SZArrayNew(Int32U5BU5D_t540_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t5336*)SZArrayNew(LinkU5BU5D_t5336_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int32U5BU5D_t540*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int32U5BU5D_t540*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t540* L_4 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t540* L_6 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m63075_gshared (Dictionary_2_t4069 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2441);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1898, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1414 * L_3 = (ArgumentOutOfRangeException_t1414 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1414_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11135(L_3, (String_t*)(String_t*) &_stringLiteral2240, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t654 * L_7 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_7, (String_t*)(String_t*) &_stringLiteral2430, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m14744((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t4069 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count() */, (Dictionary_2_t4069 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t654 * L_12 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_12, (String_t*)(String_t*) &_stringLiteral2431, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8563  Dictionary_2_make_pair_m63076_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t8563  L_2 = {0};
		(( void (*) (KeyValuePair_2_t8563 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m63077_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m63078_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m63079_gshared (Dictionary_2_t4069 * __this, KeyValuePair_2U5BU5D_t9616* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9616* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t4069 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t9616* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t8571 * L_5 = (Transform_1_t8571 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t8571 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, KeyValuePair_2U5BU5D_t9616*, int32_t, Transform_1_t8571 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t4069 *)__this, (KeyValuePair_2U5BU5D_t9616*)L_2, (int32_t)L_3, (Transform_1_t8571 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern TypeInfo* Hashtable_t1268_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t540_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5336_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m63080_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3216);
		Int32U5BU5D_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		LinkU5BU5D_t5336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14785);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t540* V_1 = {0};
	LinkU5BU5D_t5336* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t540* V_7 = {0};
	Int32U5BU5D_t540* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t540* L_0 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1268_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m16697(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t540*)((Int32U5BU5D_t540*)SZArrayNew(Int32U5BU5D_t540_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t5336*)((LinkU5BU5D_t5336*)SZArrayNew(LinkU5BU5D_t5336_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t540* L_4 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t5336* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_10 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t5336* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t540* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t540* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t5336* L_26 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t540* L_32 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t540* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t5336* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int32U5BU5D_t540*)((Int32U5BU5D_t540*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (Int32U5BU5D_t540*)((Int32U5BU5D_t540*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		Int32U5BU5D_t540* L_37 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		Int32U5BU5D_t540* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		Int32U5BU5D_t540* L_40 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		Int32U5BU5D_t540* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11151(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int32U5BU5D_t540* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t540* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m63081_gshared (Dictionary_2_t4069 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t540* L_8 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t5336* L_12 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_17 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int32_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19)), (int32_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t654 * L_22 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_22, (String_t*)(String_t*) &_stringLiteral3747, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t5336* L_23 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t540* L_32 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_3 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = (int32_t)L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t5336* L_38 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t5336* L_41 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t5336* L_44 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t540* L_46 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t540* L_49 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int32U5BU5D_t540* L_52 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int32_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53)) = (int32_t)L_54;
		Int32U5BU5D_t540* L_55 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		int32_t L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56)) = (int32_t)L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m63082_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t540* L_0 = (Int32U5BU5D_t540*)(__this->___table_4);
		Int32U5BU5D_t540* L_1 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t540* L_2 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		Int32U5BU5D_t540* L_3 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t540* L_4 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		Int32U5BU5D_t540* L_5 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t5336* L_6 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		LinkU5BU5D_t5336* L_7 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m12816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m63083_gshared (Dictionary_2_t4069 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t540* L_7 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t5336* L_11 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t5336* L_21 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = (int32_t)L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t5356_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m63084_gshared (Dictionary_2_t4069 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10237);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5356_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5356 * L_0 = (( EqualityComparer_1_t5356 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t540* L_1 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		Int32U5BU5D_t540* L_5 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), (int32_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t5336* L_10 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m63085_gshared (Dictionary_2_t4069 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9616* V_0 = {0};
	{
		SerializationInfo_t2861 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral2858, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t2861 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t2861 *)L_2);
		SerializationInfo_AddValue_m11145((SerializationInfo_t2861 *)L_2, (String_t*)(String_t*) &_stringLiteral2860, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t2861 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t2861 *)L_4);
		SerializationInfo_AddValue_m11146((SerializationInfo_t2861 *)L_4, (String_t*)(String_t*) &_stringLiteral2862, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t9616*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t9616*)((KeyValuePair_2U5BU5D_t9616*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t9616* L_8 = V_0;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, KeyValuePair_2U5BU5D_t9616*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t4069 *)__this, (KeyValuePair_2U5BU5D_t9616*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t2861 * L_9 = ___info;
		Int32U5BU5D_t540* L_10 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t2861 *)L_9);
		SerializationInfo_AddValue_m11145((SerializationInfo_t2861 *)L_9, (String_t*)(String_t*) &_stringLiteral3748, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t2861 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t9616* L_12 = V_0;
		NullCheck((SerializationInfo_t2861 *)L_11);
		SerializationInfo_AddValue_m11146((SerializationInfo_t2861 *)L_11, (String_t*)(String_t*) &_stringLiteral3749, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m63086_gshared (Dictionary_2_t4069 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t9616* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t2861 * L_0 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t2861 * L_1 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2861 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11141((SerializationInfo_t2861 *)L_1, (String_t*)(String_t*) &_stringLiteral2860, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t2861 * L_3 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2861 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11143((SerializationInfo_t2861 *)L_3, (String_t*)(String_t*) &_stringLiteral2862, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t2861 * L_6 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2861 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11141((SerializationInfo_t2861 *)L_6, (String_t*)(String_t*) &_stringLiteral3748, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t2861 * L_8 = (SerializationInfo_t2861 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2861 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11143((SerializationInfo_t2861 *)L_8, (String_t*)(String_t*) &_stringLiteral3749, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t9616*)((KeyValuePair_2U5BU5D_t9616*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t4069 *)__this);
		(( void (*) (Dictionary_2_t4069 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t4069 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t9616* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t9616* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8563 *)((KeyValuePair_2_t8563 *)(KeyValuePair_2_t8563 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t9616* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8563 *)((KeyValuePair_2_t8563 *)(KeyValuePair_2_t8563 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t4069 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t4069 *)__this, (int32_t)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t9616* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t2861 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m63087_gshared (Dictionary_2_t4069 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t540* L_8 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t5336* L_13 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_18 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), (int32_t)L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t5336* L_24 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t540* L_31 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t5336* L_33 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t5336* L_36 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t5336* L_38 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t5336* L_41 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t5336* L_45 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int32U5BU5D_t540* L_47 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (Int32_t82_il2cpp_TypeInfo_var, (&V_4));
		int32_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)L_49;
		Int32U5BU5D_t540* L_50 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (Int32_t82_il2cpp_TypeInfo_var, (&V_5));
		int32_t L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51)) = (int32_t)L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m63088_gshared (Dictionary_2_t4069 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int32_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t540* L_7 = (Int32U5BU5D_t540*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t540* L_9 = (Int32U5BU5D_t540*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t5336* L_11 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t540* L_16 = (Int32U5BU5D_t540*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_21 = ___value;
		Int32U5BU5D_t540* L_22 = (Int32U5BU5D_t540*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t5336* L_25 = (LinkU5BU5D_t5336*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t4375 *)(Link_t4375 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = (int32_t)L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_29 = ___value;
		Initobj (Int32_t82_il2cpp_TypeInfo_var, (&V_2));
		int32_t L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t8565 * Dictionary_2_get_Keys_m63089_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t8565 * L_0 = (KeyCollection_t8565 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t8565 *, Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t8569 * Dictionary_2_get_Values_m63090_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t8569 * L_0 = (ValueCollection_t8569 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t8569 *, Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_ToTKey_m63091_gshared (Dictionary_2_t4069 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3750, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t654 * L_6 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3420(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1323, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_ToTValue_m63092_gshared (Dictionary_2_t4069 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Int32_t82_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, (RuntimeTypeHandle_t4287 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3750, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t654 * L_8 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3420(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1297, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t5356_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m63093_gshared (Dictionary_2_t4069 * __this, KeyValuePair_2_t8563  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10237);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8563 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t4069 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t4069 *)__this, (int32_t)L_0, (int32_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5356_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5356 * L_2 = (( EqualityComparer_1_t5356 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8563 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t5356 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t5356 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8567  Dictionary_2_GetEnumerator_m63094_gshared (Dictionary_2_t4069 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8567  L_0 = {0};
		(( void (*) (Enumerator_t8567 *, Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t4069 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2080  Dictionary_2_U3CCopyToU3Em__0_m63095_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		int32_t L_3 = ___value;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t2080  L_6 = {0};
		DictionaryEntry__ctor_m14743(&L_6, (Object_t *)L_2, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_117.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_117MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t8563  Array_InternalArray__get_Item_TisKeyValuePair_2_t8563_m65394_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t8563_m65394(__this, p0, method) (( KeyValuePair_2_t8563  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t8563_m65394_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m63096_gshared (InternalEnumerator_1_t8564 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m63097_gshared (InternalEnumerator_1_t8564 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m63098_gshared (InternalEnumerator_1_t8564 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8563  L_0 = (( KeyValuePair_2_t8563  (*) (InternalEnumerator_1_t8564 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8564 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8563  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m63099_gshared (InternalEnumerator_1_t8564 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m63100_gshared (InternalEnumerator_1_t8564 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14744((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current()
extern TypeInfo* InvalidOperationException_t1370_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t8563  InternalEnumerator_1_get_Current_m63101_gshared (InternalEnumerator_1_t8564 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1370 * L_1 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1370 * L_3 = (InvalidOperationException_t1370 *)il2cpp_codegen_object_new (InvalidOperationException_t1370_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_3, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14744((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t8563  L_8 = (( KeyValuePair_2_t8563  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m63102_gshared (KeyValuePair_2_t8563 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t8563 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t8563 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t8563 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t8563 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m63103_gshared (KeyValuePair_2_t8563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m63104_gshared (KeyValuePair_2_t8563 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m63105_gshared (KeyValuePair_2_t8563 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m63106_gshared (KeyValuePair_2_t8563 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m63107_gshared (KeyValuePair_2_t8563 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t75* G_B2_1 = {0};
	StringU5BU5D_t75* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t75* G_B1_1 = {0};
	StringU5BU5D_t75* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t75* G_B3_2 = {0};
	StringU5BU5D_t75* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t75* G_B5_1 = {0};
	StringU5BU5D_t75* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t75* G_B4_1 = {0};
	StringU5BU5D_t75* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t75* G_B6_2 = {0};
	StringU5BU5D_t75* G_B6_3 = {0};
	{
		StringU5BU5D_t75* L_0 = (StringU5BU5D_t75*)((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1196);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1196;
		StringU5BU5D_t75* L_1 = (StringU5BU5D_t75*)L_0;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t8563 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t8563 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_5;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t75* L_8 = (StringU5BU5D_t75*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral120);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral120;
		StringU5BU5D_t75* L_9 = (StringU5BU5D_t75*)L_8;
		int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8563 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = (( int32_t (*) (KeyValuePair_2_t8563 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8563 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_13;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t75* L_16 = (StringU5BU5D_t75*)G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral123;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m450(NULL /*static, unused*/, (StringU5BU5D_t75*)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_94.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_120.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_120MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_94MethodDeclarations.h"
struct Dictionary_2_t4069;
struct Array_t;
struct Transform_1_t8568;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65405_gshared (Dictionary_2_t4069 * __this, Array_t * p0, int32_t p1, Transform_1_t8568 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65405(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, Transform_1_t8568 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65405_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t4069;
struct Int32U5BU5D_t540;
struct Transform_1_t8568;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65406_gshared (Dictionary_2_t4069 * __this, Int32U5BU5D_t540* p0, int32_t p1, Transform_1_t8568 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65406(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4069 *, Int32U5BU5D_t540*, int32_t, Transform_1_t8568 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65406_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m63108_gshared (KeyCollection_t8565 * __this, Dictionary_2_t4069 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t4069 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*)(String_t*) &_stringLiteral3745, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t4069 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m63109_gshared (KeyCollection_t8565 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m63110_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m63111_gshared (KeyCollection_t8565 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t4069 * L_0 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t4069 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t4069 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m63112_gshared (KeyCollection_t8565 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10097(L_0, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m63113_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t8565 *)__this);
		Enumerator_t8566  L_0 = (( Enumerator_t8566  (*) (KeyCollection_t8565 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t8565 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8566  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m63114_gshared (KeyCollection_t8565 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t540* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t540*)((Int32U5BU5D_t540*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t540* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t540* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t8565 *)__this);
		VirtActionInvoker2< Int32U5BU5D_t540*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t8565 *)__this, (Int32U5BU5D_t540*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t4069 * L_4 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t4069 *)L_4);
		(( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t4069 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t4069 * L_7 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8568 * L_11 = (Transform_1_t8568 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8568 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t4069 *)L_7);
		(( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, Transform_1_t8568 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t4069 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t8568 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m63115_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t8565 *)__this);
		Enumerator_t8566  L_0 = (( Enumerator_t8566  (*) (KeyCollection_t8565 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t8565 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8566  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m63116_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m63117_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t697_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m63118_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t4069 * L_0 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t697_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m63119_gshared (KeyCollection_t8565 * __this, Int32U5BU5D_t540* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t4069 * L_0 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		Int32U5BU5D_t540* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t4069 *)L_0);
		(( void (*) (Dictionary_2_t4069 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t4069 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t4069 * L_3 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		Int32U5BU5D_t540* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8568 * L_7 = (Transform_1_t8568 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8568 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t4069 *)L_3);
		(( void (*) (Dictionary_2_t4069 *, Int32U5BU5D_t540*, int32_t, Transform_1_t8568 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t4069 *)L_3, (Int32U5BU5D_t540*)L_4, (int32_t)L_5, (Transform_1_t8568 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8566  KeyCollection_GetEnumerator_m63120_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t4069 * L_0 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		Enumerator_t8566  L_1 = {0};
		(( void (*) (Enumerator_t8566 *, Dictionary_2_t4069 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t4069 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m63121_gshared (KeyCollection_t8565 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t4069 * L_0 = (Dictionary_2_t4069 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t4069 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count() */, (Dictionary_2_t4069 *)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
