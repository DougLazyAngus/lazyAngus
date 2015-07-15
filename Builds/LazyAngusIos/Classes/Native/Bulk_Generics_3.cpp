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

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Int32
#include "mscorlib_System_Int32.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.UILineInfo>::Equals(T)
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern TypeInfo* EqualityComparer_1_t3860_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m25340_gshared (DefaultComparer_t3861 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8472);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3860 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3860_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3860 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3860 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25341_gshared (DefaultComparer_t3861 * __this, UILineInfo_t912  ___obj, const MethodInfo* method)
{
	{
		UILineInfo_t912  L_0 = ___obj;
		UILineInfo_t912  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25342_gshared (DefaultComparer_t3861 * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, const MethodInfo* method)
{
	{
		UILineInfo_t912  L_0 = ___x;
		UILineInfo_t912  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UILineInfo_t912  L_3 = ___y;
		UILineInfo_t912  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UILineInfo_t912  L_6 = ___y;
		UILineInfo_t912  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_46.h"
#ifndef _MSC_VER
#else
#endif
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_46MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25343_gshared (Predicate_1_t3862 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25344_gshared (Predicate_1_t3862 * __this, UILineInfo_t912  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m25344((Predicate_1_t3862 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t912  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, UILineInfo_t912  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* UILineInfo_t912_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m25345_gshared (Predicate_1_t3862 * __this, UILineInfo_t912  ___obj, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UILineInfo_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1541);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UILineInfo_t912_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25346_gshared (Predicate_1_t3862 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_5MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_5MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void Comparer_1__ctor_m25347_gshared (Comparer_1_t3863 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.cctor()
extern const Il2CppType* GenericComparer_1_t2849_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1145_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m25348_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2849_0_0_0_var = il2cpp_codegen_type_from_index(5940);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		TypeU5BU5D_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2204);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(GenericComparer_1_t2849_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1145* L_4 = (TypeU5BU5D_t1145*)((TypeU5BU5D_t1145*)SZArrayNew(TypeU5BU5D_t1145_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1145* >::Invoke(81 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1145*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m6554(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t3863_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t3863 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3864 * L_8 = (DefaultComparer_t3864 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3864 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t3863_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m25349_gshared (Comparer_1_t3863 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
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
		NullCheck((Comparer_1_t3863 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UILineInfo_t912 , UILineInfo_t912  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::Compare(T,T) */, (Comparer_1_t3863 *)__this, (UILineInfo_t912 )((*(UILineInfo_t912 *)((UILineInfo_t912 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UILineInfo_t912 )((*(UILineInfo_t912 *)((UILineInfo_t912 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t558 * L_8 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8790(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::get_Default()
extern "C" Comparer_1_t3863 * Comparer_1_get_Default_m25350_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t3863 * L_0 = ((Comparer_1_t3863_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern TypeInfo* Comparer_1_t3863_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m25351_gshared (DefaultComparer_t3864 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t3863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8477);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t3863 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t3863_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t3863 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t3863 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::Compare(T,T)
extern TypeInfo* IComparable_t55_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m25352_gshared (DefaultComparer_t3864 * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		UILineInfo_t912  L_0 = ___x;
		UILineInfo_t912  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		UILineInfo_t912  L_3 = ___y;
		UILineInfo_t912  L_4 = L_3;
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
		UILineInfo_t912  L_6 = ___y;
		UILineInfo_t912  L_7 = L_6;
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
		UILineInfo_t912  L_9 = ___x;
		UILineInfo_t912  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		UILineInfo_t912  L_12 = ___x;
		UILineInfo_t912  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		UILineInfo_t912  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t912  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (UILineInfo_t912 )L_15);
		return L_16;
	}

IL_003e:
	{
		UILineInfo_t912  L_17 = ___x;
		UILineInfo_t912  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t55_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		UILineInfo_t912  L_20 = ___x;
		UILineInfo_t912  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		UILineInfo_t912  L_23 = ___y;
		UILineInfo_t912  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t55_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t55_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t55_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t558 * L_27 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_27, (String_t*)(String_t*) &_stringLiteral2917, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_46.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_46MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m25353_gshared (Comparison_1_t3865 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m25354_gshared (Comparison_1_t3865 * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m25354((Comparison_1_t3865 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* UILineInfo_t912_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m25355_gshared (Comparison_1_t3865 * __this, UILineInfo_t912  ___x, UILineInfo_t912  ___y, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UILineInfo_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1541);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UILineInfo_t912_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(UILineInfo_t912_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m25356_gshared (Comparison_1_t3865 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_34.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_34MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_37.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_39.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_37MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_39MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t3868;
struct DictionaryEntryU5BU5D_t4625;
struct Transform_1_t3867;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28737_gshared (Dictionary_2_t3868 * __this, DictionaryEntryU5BU5D_t4625* p0, int32_t p1, Transform_1_t3867 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28737(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3868 *, DictionaryEntryU5BU5D_t4625*, int32_t, Transform_1_t3867 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28737_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3868;
struct Array_t;
struct Transform_1_t3879;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3869_m28739_gshared (Dictionary_2_t3868 * __this, Array_t * p0, int32_t p1, Transform_1_t3879 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3869_m28739(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, Transform_1_t3879 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3869_m28739_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3868;
struct KeyValuePair_2U5BU5D_t4497;
struct Transform_1_t3879;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3869_TisKeyValuePair_2_t3869_m28740_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2U5BU5D_t4497* p0, int32_t p1, Transform_1_t3879 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3869_TisKeyValuePair_2_t3869_m28740(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3868 *, KeyValuePair_2U5BU5D_t4497*, int32_t, Transform_1_t3879 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3869_TisKeyValuePair_2_t3869_m28740_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m25358_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25360_gshared (Dictionary_2_t3868 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25362_gshared (Dictionary_2_t3868 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t3868 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25364_gshared (Dictionary_2_t3868 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t21_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m25366_gshared (Dictionary_2_t3868 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		IEnumerator_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3869  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
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
			KeyValuePair_2_t3869  L_9 = (KeyValuePair_2_t3869 )InterfaceFuncInvoker0< KeyValuePair_2_t3869  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t3869 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3869 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int64_t L_11 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3869 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t3868 *)__this);
			VirtActionInvoker2< Object_t *, int64_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_10, (int64_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t21_il2cpp_TypeInfo_var, (Object_t *)L_12);
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
		__last_unhandled_exception = (Exception_t27 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25368_gshared (Dictionary_2_t3868 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25370_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3868 *)__this);
		KeyCollection_t3872 * L_0 = (( KeyCollection_t3872 * (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25372_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3868 *)__this);
		ValueCollection_t3876 * L_0 = (( ValueCollection_t3876 * (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25374_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3868 *)__this);
		KeyCollection_t3872 * L_0 = (( KeyCollection_t3872 * (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25376_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t3868 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, (Dictionary_2_t3868 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3868 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3868 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t3868 *)__this);
		int64_t L_5 = (int64_t)VirtFuncInvoker1< int64_t, Object_t * >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_4);
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25378_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3868 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3868 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3868 *)__this);
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3868 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3868 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_1, (int64_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25380_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3868 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3868 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3868 *)__this);
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3868 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3868 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_1, (int64_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25382_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t3868 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, (Dictionary_2_t3868 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25384_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t3868 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey) */, (Dictionary_2_t3868 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25386_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25388_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25390_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25392_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3869 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3869 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3868 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_0, (int64_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25394_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3869  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3868 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3868 *, KeyValuePair_2_t3869 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3868 *)__this, (KeyValuePair_2_t3869 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25396_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2U5BU5D_t4497* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4497* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, KeyValuePair_2U5BU5D_t4497*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3868 *)__this, (KeyValuePair_2U5BU5D_t4497*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25398_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3869  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3868 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3868 *, KeyValuePair_2_t3869 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3868 *)__this, (KeyValuePair_2_t3869 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3869 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3868 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25400_gshared (Dictionary_2_t3868 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9195);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t4497* V_0 = {0};
	DictionaryEntryU5BU5D_t4625* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t4625* G_B5_1 = {0};
	Dictionary_2_t3868 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t4625* G_B4_1 = {0};
	Dictionary_2_t3868 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t4497*)((KeyValuePair_2U5BU5D_t4497*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t4497* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4497* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, KeyValuePair_2U5BU5D_t4497*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3868 *)__this, (KeyValuePair_2U5BU5D_t4497*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3868 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t4625*)((DictionaryEntryU5BU5D_t4625*)IsInst(L_6, DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t4625* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t4625* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t3867 * L_10 = ((Dictionary_2_t3868_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3868 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3868 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3867 * L_12 = (Transform_1_t3867 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3867 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3868_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3868 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3867 * L_13 = ((Dictionary_2_t3868_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t3868 *)G_B5_2);
		(( void (*) (Dictionary_2_t3868 *, DictionaryEntryU5BU5D_t4625*, int32_t, Transform_1_t3867 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t3868 *)G_B5_2, (DictionaryEntryU5BU5D_t4625*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t3867 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3879 * L_17 = (Transform_1_t3879 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3879 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, Transform_1_t3879 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t3868 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t3879 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25402_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874  L_0 = {0};
		(( void (*) (Enumerator_t3874 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3874  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25404_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874  L_0 = {0};
		(( void (*) (Enumerator_t3874 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3874  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25406_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t3880 * L_0 = (ShimEnumerator_t3880 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3880 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25408_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t2348_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_get_Item_m25410_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		KeyNotFoundException_t2348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6073);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_15 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		Int64U5BU5D_t2793* L_20 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(int64_t*)(int64_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t3335* L_23 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t2348 * L_27 = (KeyNotFoundException_t2348 *)il2cpp_codegen_object_new (KeyNotFoundException_t2348_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m12584(L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m25412_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t3335* L_12 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_17 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t3335* L_23 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		Int32U5BU5D_t456* L_33 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_33);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t3335* L_39 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t3335* L_42 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t456* L_44 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t456* L_47 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t3335* L_50 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t533* L_53 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t3335* L_57 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t3335* L_59 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t3335* L_62 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t456* L_64 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t456* L_67 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		Int64U5BU5D_t2793* L_70 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		int32_t L_71 = V_2;
		int64_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_70, L_71)) = (int64_t)L_72;
		int32_t L_73 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t3316_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m25414_gshared (Dictionary_2_t3868 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2187);
		EqualityComparer_1_t3316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7388);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3868 * G_B4_0 = {0};
	Dictionary_2_t3868 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3868 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1262 * L_1 = (ArgumentOutOfRangeException_t1262 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m8695(L_1, (String_t*)(String_t*) &_stringLiteral2919, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3868 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3868 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3868 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3316_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3316 * L_5 = (( EqualityComparer_1_t3316 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3868 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3868 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t456_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3335_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m25416_gshared (Dictionary_2_t3868 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		LinkU5BU5D_t3335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t3335*)SZArrayNew(LinkU5BU5D_t3335_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t533*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int64U5BU5D_t2793*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t456* L_4 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m25418_gshared (Dictionary_2_t3868 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2187);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1148, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1262 * L_3 = (ArgumentOutOfRangeException_t1262 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m8695(L_3, (String_t*)(String_t*) &_stringLiteral1234, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t558 * L_7 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_7, (String_t*)(String_t*) &_stringLiteral2920, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m8692((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t3868 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count() */, (Dictionary_2_t3868 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t558 * L_12 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_12, (String_t*)(String_t*) &_stringLiteral2921, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3869  Dictionary_2_make_pair_m25420_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int64_t L_1 = ___value;
		KeyValuePair_2_t3869  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3869 *, Object_t *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (Object_t *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m25422_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m25424_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25426_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2U5BU5D_t4497* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4497* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3868 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t4497* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3879 * L_5 = (Transform_1_t3879 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3879 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, KeyValuePair_2U5BU5D_t4497*, int32_t, Transform_1_t3879 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t3868 *)__this, (KeyValuePair_2U5BU5D_t4497*)L_2, (int32_t)L_3, (Transform_1_t3879 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern TypeInfo* Hashtable_t1438_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t456_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3335_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m25428_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3063);
		Int32U5BU5D_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		LinkU5BU5D_t3335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t456* V_1 = {0};
	LinkU5BU5D_t3335* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t533* V_7 = {0};
	Int64U5BU5D_t2793* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t456* L_0 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1438_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m12804(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t456*)((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t3335*)((LinkU5BU5D_t3335*)SZArrayNew(LinkU5BU5D_t3335_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t456* L_4 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t3335* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_10 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t3335* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t456* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t456* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t3335* L_26 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_26, L_27))->___Next_1);
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
		Int32U5BU5D_t456* L_32 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t456* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t3335* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t533*)((ObjectU5BU5D_t533*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (Int64U5BU5D_t2793*)((Int64U5BU5D_t2793*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		ObjectU5BU5D_t533* L_37 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		ObjectU5BU5D_t533* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m10304(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		Int64U5BU5D_t2793* L_40 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		Int64U5BU5D_t2793* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m10304(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t533* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int64U5BU5D_t2793* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m25430_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t3335* L_11 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_16 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t558 * L_21 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_21, (String_t*)(String_t*) &_stringLiteral2923, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t3335* L_22 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->___count_10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		Int32U5BU5D_t456* L_31 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_31);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t3335* L_37 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t3335* L_40 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t3335* L_43 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t456* L_45 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t456* L_48 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t533* L_51 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		Int64U5BU5D_t2793* L_54 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		int32_t L_55 = V_2;
		int64_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
		int32_t L_57 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m25432_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t456* L_0 = (Int32U5BU5D_t456*)(__this->___table_4);
		Int32U5BU5D_t456* L_1 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t533* L_2 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		ObjectU5BU5D_t533* L_3 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		Int64U5BU5D_t2793* L_4 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		Int64U5BU5D_t2793* L_5 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t3335* L_6 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		LinkU5BU5D_t3335* L_7 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m25434_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_15 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t3335* L_20 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t3881_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m25436_gshared (Dictionary_2_t3868 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8514);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3881_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3881 * L_0 = (( EqualityComparer_1_t3881 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t456* L_1 = (Int32U5BU5D_t456*)(__this->___table_4);
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
		Int64U5BU5D_t2793* L_5 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int64_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_5, L_7)), (int64_t)L_8);
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
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___Next_1);
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
		Int32U5BU5D_t456* L_16 = (Int32U5BU5D_t456*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m25438_gshared (Dictionary_2_t3868 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t4497* V_0 = {0};
	{
		SerializationInfo_t1247 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1241, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1247 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t1247 *)L_2);
		SerializationInfo_AddValue_m8701((SerializationInfo_t1247 *)L_2, (String_t*)(String_t*) &_stringLiteral1243, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t1247 *)L_4);
		SerializationInfo_AddValue_m8786((SerializationInfo_t1247 *)L_4, (String_t*)(String_t*) &_stringLiteral1245, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t4497*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t4497*)((KeyValuePair_2U5BU5D_t4497*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t4497* L_8 = V_0;
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, KeyValuePair_2U5BU5D_t4497*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3868 *)__this, (KeyValuePair_2U5BU5D_t4497*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1247 * L_9 = ___info;
		Int32U5BU5D_t456* L_10 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t1247 *)L_9);
		SerializationInfo_AddValue_m8701((SerializationInfo_t1247 *)L_9, (String_t*)(String_t*) &_stringLiteral2924, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t4497* L_12 = V_0;
		NullCheck((SerializationInfo_t1247 *)L_11);
		SerializationInfo_AddValue_m8786((SerializationInfo_t1247 *)L_11, (String_t*)(String_t*) &_stringLiteral2925, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m25440_gshared (Dictionary_2_t3868 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t4497* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1247 * L_0 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
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
		SerializationInfo_t1247 * L_1 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1247 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m8711((SerializationInfo_t1247 *)L_1, (String_t*)(String_t*) &_stringLiteral1243, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t1247 * L_3 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1247 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m8702((SerializationInfo_t1247 *)L_3, (String_t*)(String_t*) &_stringLiteral1245, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t1247 * L_6 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1247 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m8711((SerializationInfo_t1247 *)L_6, (String_t*)(String_t*) &_stringLiteral2924, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t1247 * L_8 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1247 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m8702((SerializationInfo_t1247 *)L_8, (String_t*)(String_t*) &_stringLiteral2925, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t4497*)((KeyValuePair_2U5BU5D_t4497*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t3868 *)__this);
		(( void (*) (Dictionary_2_t3868 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3868 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t4497* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t4497* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3869 *)((KeyValuePair_2_t3869 *)(KeyValuePair_2_t3869 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t4497* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int64_t L_19 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3869 *)((KeyValuePair_2_t3869 *)(KeyValuePair_2_t3869 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3868 *)__this);
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_16, (int64_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t4497* L_22 = V_1;
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
		__this->___serialization_info_13 = (SerializationInfo_t1247 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t571_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m25442_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Int64_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int64_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
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
		LinkU5BU5D_t3335* L_12 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_17 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t3335* L_23 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t456* L_30 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t3335* L_32 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t3335* L_35 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t3335* L_37 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t3335* L_40 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(__this->___emptySlot_9);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t3335* L_44 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t533* L_46 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		Int64U5BU5D_t2793* L_49 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (Int64_t571_il2cpp_TypeInfo_var, (&V_5));
		int64_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_49, L_50)) = (int64_t)L_51;
		int32_t L_52 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t571_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m25444_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Int64_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_15 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		int64_t* L_20 = ___value;
		Int64U5BU5D_t2793* L_21 = (Int64U5BU5D_t2793*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t3335* L_24 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int64_t* L_28 = ___value;
		Initobj (Int64_t571_il2cpp_TypeInfo_var, (&V_2));
		int64_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t3872 * Dictionary_2_get_Keys_m25446_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t3872 * L_0 = (KeyCollection_t3872 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t3872 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t3876 * Dictionary_2_get_Values_m25448_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t3876 * L_0 = (ValueCollection_t3876 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t3876 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTKey_m25450_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2926, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t558 * L_6 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2610(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t571_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_ToTValue_m25452_gshared (Dictionary_2_t3868 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		Int64_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Int64_t571_il2cpp_TypeInfo_var, (&V_0));
		int64_t L_3 = V_0;
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
		Type_t * L_5 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2926, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t558 * L_8 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2610(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1746, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int64_t*)((int64_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3881_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25454_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8514);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3869 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3868 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int64_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t3868 *)__this, (Object_t *)L_0, (int64_t*)(&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3881_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3881 * L_2 = (( EqualityComparer_1_t3881 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		int64_t L_3 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3869 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t3881 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, (EqualityComparer_1_t3881 *)L_2, (int64_t)L_3, (int64_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3874  Dictionary_2_GetEnumerator_m25456_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874  L_0 = {0};
		(( void (*) (Enumerator_t3874 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m25458_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		int64_t L_2 = ___value;
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t1710  L_5 = {0};
		DictionaryEntry__ctor_m8691(&L_5, (Object_t *)((Object_t *)L_1), (Object_t *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t3869  Array_InternalArray__get_Item_TisKeyValuePair_2_t3869_m28711_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3869_m28711(__this, p0, method) (( KeyValuePair_2_t3869  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3869_m28711_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25459_gshared (InternalEnumerator_1_t3870 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25460_gshared (InternalEnumerator_1_t3870 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3869  L_0 = (( KeyValuePair_2_t3869  (*) (InternalEnumerator_1_t3870 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3870 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3869  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25461_gshared (InternalEnumerator_1_t3870 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25462_gshared (InternalEnumerator_1_t3870 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m8692((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3869  InternalEnumerator_1_get_Current_m25463_gshared (InternalEnumerator_1_t3870 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
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
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
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
		InvalidOperationException_t1566 * L_3 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_3, (String_t*)(String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t3869  L_8 = (( KeyValuePair_2_t3869  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m25464_gshared (KeyValuePair_2_t3869 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3869 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t3869 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3869 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t3869 *)__this, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m25465_gshared (KeyValuePair_2_t3869 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m25466_gshared (KeyValuePair_2_t3869 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C" int64_t KeyValuePair_2_get_Value_m25467_gshared (KeyValuePair_2_t3869 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m25468_gshared (KeyValuePair_2_t3869 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m25469_gshared (KeyValuePair_2_t3869 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t45* G_B2_1 = {0};
	StringU5BU5D_t45* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t45* G_B1_1 = {0};
	StringU5BU5D_t45* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t45* G_B3_2 = {0};
	StringU5BU5D_t45* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t45* G_B5_1 = {0};
	StringU5BU5D_t45* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t45* G_B4_1 = {0};
	StringU5BU5D_t45* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t45* G_B6_2 = {0};
	StringU5BU5D_t45* G_B6_3 = {0};
	{
		StringU5BU5D_t45* L_0 = (StringU5BU5D_t45*)((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1155);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1155;
		StringU5BU5D_t45* L_1 = (StringU5BU5D_t45*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3869 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3869 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_4;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_6;
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
		StringU5BU5D_t45* L_7 = (StringU5BU5D_t45*)G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral16);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral16;
		StringU5BU5D_t45* L_8 = (StringU5BU5D_t45*)L_7;
		int64_t L_9 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3869 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		int64_t L_12 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3869 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int64_t)L_12;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_14;
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
		StringU5BU5D_t45* L_15 = (StringU5BU5D_t45*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral20);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m217(NULL /*static, unused*/, (StringU5BU5D_t45*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Values()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t571_m28722_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t571_m28722(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt64_t571_m28722_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25470_gshared (InternalEnumerator_1_t3871 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25471_gshared (InternalEnumerator_1_t3871 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t3871 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3871 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25472_gshared (InternalEnumerator_1_t3871 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25473_gshared (InternalEnumerator_1_t3871 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m8692((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" int64_t InternalEnumerator_1_get_Current_m25474_gshared (InternalEnumerator_1_t3871 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
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
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
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
		InvalidOperationException_t1566 * L_3 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_3, (String_t*)(String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_38.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_37.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_37MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_38MethodDeclarations.h"
struct Dictionary_2_t3868;
struct Array_t;
struct Transform_1_t3875;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28733_gshared (Dictionary_2_t3868 * __this, Array_t * p0, int32_t p1, Transform_1_t3875 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28733(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, Transform_1_t3875 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28733_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3868;
struct ObjectU5BU5D_t533;
struct Transform_1_t3875;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28732_gshared (Dictionary_2_t3868 * __this, ObjectU5BU5D_t533* p0, int32_t p1, Transform_1_t3875 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28732(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3868 *, ObjectU5BU5D_t533*, int32_t, Transform_1_t3875 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28732_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m25475_gshared (KeyCollection_t3872 * __this, Dictionary_2_t3868 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3868 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3868 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m25476_gshared (KeyCollection_t3872 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m25477_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m25478_gshared (KeyCollection_t3872 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t3868 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, (Dictionary_2_t3868 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m25479_gshared (KeyCollection_t3872 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m25480_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3872 *)__this);
		Enumerator_t3873  L_0 = (( Enumerator_t3873  (*) (KeyCollection_t3872 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3872 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3873  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m25481_gshared (KeyCollection_t3872 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t533* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t533*)((ObjectU5BU5D_t533*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t533* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t533* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t3872 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t533*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t3872 *)__this, (ObjectU5BU5D_t533*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3868 * L_4 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3868 *)L_4);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3868 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3868 * L_7 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3875 * L_11 = (Transform_1_t3875 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3875 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3868 *)L_7);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, Transform_1_t3875 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3868 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3875 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m25482_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3872 *)__this);
		Enumerator_t3873  L_0 = (( Enumerator_t3873  (*) (KeyCollection_t3872 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3872 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3873  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m25483_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m25484_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t592_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m25485_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t592_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m25486_gshared (KeyCollection_t3872 * __this, ObjectU5BU5D_t533* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		ObjectU5BU5D_t533* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3868 *)L_0);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3868 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3868 * L_3 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		ObjectU5BU5D_t533* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3875 * L_7 = (Transform_1_t3875 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3875 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3868 *)L_3);
		(( void (*) (Dictionary_2_t3868 *, ObjectU5BU5D_t533*, int32_t, Transform_1_t3875 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3868 *)L_3, (ObjectU5BU5D_t533*)L_4, (int32_t)L_5, (Transform_1_t3875 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3873  KeyCollection_GetEnumerator_m25487_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Enumerator_t3873  L_1 = {0};
		(( void (*) (Enumerator_t3873 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3868 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m25488_gshared (KeyCollection_t3872 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3868 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count() */, (Dictionary_2_t3868 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25489_gshared (Enumerator_t3873 * __this, Dictionary_2_t3868 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = ___host;
		NullCheck((Dictionary_2_t3868 *)L_0);
		Enumerator_t3874  L_1 = (( Enumerator_t3874  (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25490_gshared (Enumerator_t3873 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m25491_gshared (Enumerator_t3873 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25492_gshared (Enumerator_t3873 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m25493_gshared (Enumerator_t3873 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3869 * L_1 = (KeyValuePair_2_t3869 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3869 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25494_gshared (Enumerator_t3874 * __this, Dictionary_2_t3868 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3868 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25495_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3869  L_0 = (KeyValuePair_2_t3869 )(__this->___current_3);
		KeyValuePair_2_t3869  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25496_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3869 * L_0 = (KeyValuePair_2_t3869 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3869 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3869 * L_3 = (KeyValuePair_2_t3869 *)&(__this->___current_3);
		int64_t L_4 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3869 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t1710  L_7 = {0};
		DictionaryEntry__ctor_m8691(&L_7, (Object_t *)((Object_t *)L_2), (Object_t *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25497_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25498_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25499_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t3868 * L_4 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t3335* L_5 = (LinkU5BU5D_t3335*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3868 * L_8 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t533* L_9 = (ObjectU5BU5D_t533*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3868 * L_12 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck(L_12);
		Int64U5BU5D_t2793* L_13 = (Int64U5BU5D_t2793*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3869  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3869 *, Object_t *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t3868 * L_18 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3869  Enumerator_get_Current_m25500_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3869  L_0 = (KeyValuePair_2_t3869 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25501_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3869 * L_0 = (KeyValuePair_2_t3869 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3869 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m25502_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3869 * L_0 = (KeyValuePair_2_t3869 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3869 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern TypeInfo* ObjectDisposedException_t1725_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m25503_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3054);
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1725 * L_1 = (ObjectDisposedException_t1725 *)il2cpp_codegen_object_new (ObjectDisposedException_t1725_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8682(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3868 * L_2 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1566 * L_5 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_5, (String_t*)(String_t*) &_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m25504_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2928, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m25505_gshared (Enumerator_t3874 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3868 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25506_gshared (Transform_1_t3875 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m25507_gshared (Transform_1_t3875 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25507((Transform_1_t3875 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t571_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25508_gshared (Transform_1_t3875 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t571_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m25509_gshared (Transform_1_t3875 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_35.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_38.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_38MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_35MethodDeclarations.h"
struct Dictionary_2_t3868;
struct Array_t;
struct Transform_1_t3878;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t571_m28735_gshared (Dictionary_2_t3868 * __this, Array_t * p0, int32_t p1, Transform_1_t3878 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t571_m28735(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, Transform_1_t3878 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t571_m28735_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3868;
struct Int64U5BU5D_t2793;
struct Transform_1_t3878;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t571_TisInt64_t571_m28736_gshared (Dictionary_2_t3868 * __this, Int64U5BU5D_t2793* p0, int32_t p1, Transform_1_t3878 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t571_TisInt64_t571_m28736(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3868 *, Int64U5BU5D_t2793*, int32_t, Transform_1_t3878 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t571_TisInt64_t571_m28736_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m25510_gshared (ValueCollection_t3876 * __this, Dictionary_2_t3868 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3868 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3868 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25511_gshared (ValueCollection_t3876 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25512_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25513_gshared (ValueCollection_t3876 * __this, int64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck((Dictionary_2_t3868 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3868 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25514_gshared (ValueCollection_t3876 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25515_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3876 *)__this);
		Enumerator_t3877  L_0 = (( Enumerator_t3877  (*) (ValueCollection_t3876 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3876 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3877  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m25516_gshared (ValueCollection_t3876 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int64U5BU5D_t2793* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int64U5BU5D_t2793*)((Int64U5BU5D_t2793*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t2793* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t2793* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t3876 *)__this);
		VirtActionInvoker2< Int64U5BU5D_t2793*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t3876 *)__this, (Int64U5BU5D_t2793*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3868 * L_4 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3868 *)L_4);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3868 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3868 * L_7 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3878 * L_11 = (Transform_1_t3878 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3878 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3868 *)L_7);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, Transform_1_t3878 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3868 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3878 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25517_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3876 *)__this);
		Enumerator_t3877  L_0 = (( Enumerator_t3877  (*) (ValueCollection_t3876 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3876 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3877  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25518_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m25519_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t592_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m25520_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t592_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m25521_gshared (ValueCollection_t3876 * __this, Int64U5BU5D_t2793* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Int64U5BU5D_t2793* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3868 *)L_0);
		(( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3868 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3868 * L_3 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Int64U5BU5D_t2793* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3878 * L_7 = (Transform_1_t3878 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3878 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3868 *)L_3);
		(( void (*) (Dictionary_2_t3868 *, Int64U5BU5D_t2793*, int32_t, Transform_1_t3878 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3868 *)L_3, (Int64U5BU5D_t2793*)L_4, (int32_t)L_5, (Transform_1_t3878 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3877  ValueCollection_GetEnumerator_m25522_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		Enumerator_t3877  L_1 = {0};
		(( void (*) (Enumerator_t3877 *, Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3868 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m25523_gshared (ValueCollection_t3876 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = (Dictionary_2_t3868 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3868 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count() */, (Dictionary_2_t3868 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25524_gshared (Enumerator_t3877 * __this, Dictionary_2_t3868 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3868 * L_0 = ___host;
		NullCheck((Dictionary_2_t3868 *)L_0);
		Enumerator_t3874  L_1 = (( Enumerator_t3874  (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25525_gshared (Enumerator_t3877 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m25526_gshared (Enumerator_t3877 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25527_gshared (Enumerator_t3877 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" int64_t Enumerator_get_Current_m25528_gshared (Enumerator_t3877 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3869 * L_1 = (KeyValuePair_2_t3869 *)&(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3869 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25529_gshared (Transform_1_t3878 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m25530_gshared (Transform_1_t3878 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25530((Transform_1_t3878 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t571_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25531_gshared (Transform_1_t3878 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t571_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m25532_gshared (Transform_1_t3878 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25533_gshared (Transform_1_t3867 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1710  Transform_1_Invoke_m25534_gshared (Transform_1_t3867 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25534((Transform_1_t3867 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t571_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25535_gshared (Transform_1_t3867 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t571_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1710  Transform_1_EndInvoke_m25536_gshared (Transform_1_t3867 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1710 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25537_gshared (Transform_1_t3879 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3869  Transform_1_Invoke_m25538_gshared (Transform_1_t3879 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25538((Transform_1_t3879 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3869  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3869  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3869  (*FunctionPointerType) (Object_t * __this, int64_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t571_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25539_gshared (Transform_1_t3879 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int64_t571_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3869  Transform_1_EndInvoke_m25540_gshared (Transform_1_t3879 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3869 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25541_gshared (ShimEnumerator_t3880 * __this, Dictionary_2_t3868 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3868 * L_0 = ___host;
		NullCheck((Dictionary_2_t3868 *)L_0);
		Enumerator_t3874  L_1 = (( Enumerator_t3874  (*) (Dictionary_2_t3868 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3868 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25542_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m25543_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3065);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t3874  L_0 = (Enumerator_t3874 )(__this->___host_enumerator_0);
		Enumerator_t3874  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1710  L_3 = (DictionaryEntry_t1710 )InterfaceFuncInvoker0< DictionaryEntry_t1710  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25544_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3869  V_0 = {0};
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3869  L_1 = (( KeyValuePair_2_t3869  (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3869 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3869 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25545_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3869  V_0 = {0};
	{
		Enumerator_t3874 * L_0 = (Enumerator_t3874 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3869  L_1 = (( KeyValuePair_2_t3869  (*) (Enumerator_t3874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3869 )L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t3869 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3869 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern TypeInfo* DictionaryEntry_t1710_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m25546_gshared (ShimEnumerator_t3880 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3064);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t3880 *)__this);
		DictionaryEntry_t1710  L_0 = (DictionaryEntry_t1710 )VirtFuncInvoker0< DictionaryEntry_t1710  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry() */, (ShimEnumerator_t3880 *)__this);
		DictionaryEntry_t1710  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1710_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.ctor()
extern "C" void EqualityComparer_1__ctor_m25547_gshared (EqualityComparer_1_t3881 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t2860_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1145_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m25548_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2860_0_0_0_var = il2cpp_codegen_type_from_index(6055);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		TypeU5BU5D_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2204);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(GenericEqualityComparer_1_t2860_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1145* L_4 = (TypeU5BU5D_t1145*)((TypeU5BU5D_t1145*)SZArrayNew(TypeU5BU5D_t1145_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1145* >::Invoke(81 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1145*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m6554(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3881_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3881 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3883 * L_8 = (DefaultComparer_t3883 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3883 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3881_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m25549_gshared (EqualityComparer_1_t3881 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3881 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T) */, (EqualityComparer_1_t3881 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m25550_gshared (EqualityComparer_1_t3881 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3881 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T) */, (EqualityComparer_1_t3881 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int64>::get_Default()
extern "C" EqualityComparer_1_t3881 * EqualityComparer_1_get_Default_m25551_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3881 * L_0 = ((EqualityComparer_1_t3881_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::.ctor()
extern TypeInfo* EqualityComparer_1_t3881_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m25552_gshared (GenericEqualityComparer_1_t3882 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8514);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3881 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3881_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m25553_gshared (GenericEqualityComparer_1_t3882 * __this, int64_t ___obj, const MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m25554_gshared (GenericEqualityComparer_1_t3882 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Int64>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (int64_t)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Int64>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern TypeInfo* EqualityComparer_1_t3881_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m25555_gshared (DefaultComparer_t3883 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8514);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3881 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3881_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3881 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25556_gshared (DefaultComparer_t3883 * __this, int64_t ___obj, const MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25557_gshared (DefaultComparer_t3883 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		int64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_40.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_37.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_40MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_37MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_45MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7MethodDeclarations.h"
struct Dictionary_2_t3906;
struct DictionaryEntryU5BU5D_t4625;
struct Transform_1_t3905;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28768_gshared (Dictionary_2_t3906 * __this, DictionaryEntryU5BU5D_t4625* p0, int32_t p1, Transform_1_t3905 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28768(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3906 *, DictionaryEntryU5BU5D_t4625*, int32_t, Transform_1_t3905 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28768_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3906;
struct Array_t;
struct Transform_1_t3917;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3907_m28770_gshared (Dictionary_2_t3906 * __this, Array_t * p0, int32_t p1, Transform_1_t3917 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3907_m28770(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, Transform_1_t3917 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3907_m28770_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3906;
struct KeyValuePair_2U5BU5D_t4517;
struct Transform_1_t3917;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3907_TisKeyValuePair_2_t3907_m28771_gshared (Dictionary_2_t3906 * __this, KeyValuePair_2U5BU5D_t4517* p0, int32_t p1, Transform_1_t3917 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3907_TisKeyValuePair_2_t3907_m28771(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3906 *, KeyValuePair_2U5BU5D_t4517*, int32_t, Transform_1_t3917 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3907_TisKeyValuePair_2_t3907_m28771_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m25798_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25800_gshared (Dictionary_2_t3906 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25802_gshared (Dictionary_2_t3906 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t3906 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25804_gshared (Dictionary_2_t3906 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t21_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m25806_gshared (Dictionary_2_t3906 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		IEnumerator_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3907  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
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
			KeyValuePair_2_t3907  L_9 = (KeyValuePair_2_t3907 )InterfaceFuncInvoker0< KeyValuePair_2_t3907  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t3907 )L_9;
			uint64_t L_10 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3907 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3907 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t3906 *)__this);
			VirtActionInvoker2< uint64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_10, (Object_t *)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t21_il2cpp_TypeInfo_var, (Object_t *)L_12);
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
		__last_unhandled_exception = (Exception_t27 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25808_gshared (Dictionary_2_t3906 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25810_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3906 *)__this);
		KeyCollection_t3910 * L_0 = (( KeyCollection_t3910 * (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25812_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3906 *)__this);
		ValueCollection_t3914 * L_0 = (( ValueCollection_t3914 * (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25814_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3906 *)__this);
		KeyCollection_t3910 * L_0 = (( KeyCollection_t3910 * (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25816_gshared (Dictionary_2_t3906 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t3906 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t3906 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3906 *)__this);
		uint64_t L_4 = (( uint64_t (*) (Dictionary_2_t3906 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3906 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t3906 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, uint64_t >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_4);
		Object_t * L_6 = L_5;
		return ((Object_t *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25818_gshared (Dictionary_2_t3906 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3906 *)__this);
		uint64_t L_1 = (( uint64_t (*) (Dictionary_2_t3906 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3906 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3906 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3906 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3906 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3906 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25820_gshared (Dictionary_2_t3906 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3906 *)__this);
		uint64_t L_1 = (( uint64_t (*) (Dictionary_2_t3906 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3906 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3906 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3906 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3906 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3906 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25822_gshared (Dictionary_2_t3906 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t3906 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t3906 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25824_gshared (Dictionary_2_t3906 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t3906 *)__this);
		VirtFuncInvoker1< bool, uint64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey) */, (Dictionary_2_t3906 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25826_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25828_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25830_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25832_gshared (Dictionary_2_t3906 * __this, KeyValuePair_2_t3907  ___keyValuePair, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3907 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3907 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3906 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25834_gshared (Dictionary_2_t3906 * __this, KeyValuePair_2_t3907  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3907  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3906 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3906 *, KeyValuePair_2_t3907 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3906 *)__this, (KeyValuePair_2_t3907 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25836_gshared (Dictionary_2_t3906 * __this, KeyValuePair_2U5BU5D_t4517* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4517* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, KeyValuePair_2U5BU5D_t4517*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3906 *)__this, (KeyValuePair_2U5BU5D_t4517*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25838_gshared (Dictionary_2_t3906 * __this, KeyValuePair_2_t3907  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3907  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3906 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3906 *, KeyValuePair_2_t3907 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3906 *)__this, (KeyValuePair_2_t3907 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3907 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3906 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25840_gshared (Dictionary_2_t3906 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9195);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t4517* V_0 = {0};
	DictionaryEntryU5BU5D_t4625* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t4625* G_B5_1 = {0};
	Dictionary_2_t3906 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t4625* G_B4_1 = {0};
	Dictionary_2_t3906 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t4517*)((KeyValuePair_2U5BU5D_t4517*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t4517* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4517* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, KeyValuePair_2U5BU5D_t4517*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3906 *)__this, (KeyValuePair_2U5BU5D_t4517*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3906 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t4625*)((DictionaryEntryU5BU5D_t4625*)IsInst(L_6, DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t4625* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t4625* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t3905 * L_10 = ((Dictionary_2_t3906_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3906 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3906 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3905 * L_12 = (Transform_1_t3905 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3905 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3906_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3906 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3905 * L_13 = ((Dictionary_2_t3906_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t3906 *)G_B5_2);
		(( void (*) (Dictionary_2_t3906 *, DictionaryEntryU5BU5D_t4625*, int32_t, Transform_1_t3905 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t3906 *)G_B5_2, (DictionaryEntryU5BU5D_t4625*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t3905 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3917 * L_17 = (Transform_1_t3917 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3917 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, Transform_1_t3917 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t3906 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t3917 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25842_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912  L_0 = {0};
		(( void (*) (Enumerator_t3912 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3912  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25844_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912  L_0 = {0};
		(( void (*) (Enumerator_t3912 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3912  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25846_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t3918 * L_0 = (ShimEnumerator_t3918 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3918 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25848_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t2348_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_get_Item_m25850_gshared (Dictionary_2_t3906 * __this, uint64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		KeyNotFoundException_t2348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6073);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_3 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_3, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t456* L_9 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_11 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t2627* L_16 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), (uint64_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t533* L_21 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t3335* L_24 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		KeyNotFoundException_t2348 * L_28 = (KeyNotFoundException_t2348 *)il2cpp_codegen_object_new (KeyNotFoundException_t2348_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m12584(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m25852_gshared (Dictionary_2_t3906 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_3 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_3, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t456* L_9 = (Int32U5BU5D_t456*)(__this->___table_4);
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
		LinkU5BU5D_t3335* L_13 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t2627* L_18 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		uint64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_18, L_20)), (uint64_t)L_21);
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
		LinkU5BU5D_t3335* L_24 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t456* L_34 = (Int32U5BU5D_t456*)(__this->___table_4);
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
		LinkU5BU5D_t3335* L_40 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t3335* L_43 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t456* L_45 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t456* L_48 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t3335* L_51 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		UInt64U5BU5D_t2627* L_54 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		uint64_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_54, L_55)) = (uint64_t)L_56;
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
		LinkU5BU5D_t3335* L_58 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t3335* L_60 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t3335* L_63 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t456* L_65 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t456* L_68 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		ObjectU5BU5D_t533* L_71 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		Object_t * L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_71, L_72)) = (Object_t *)L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t3919_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m25854_gshared (Dictionary_2_t3906 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2187);
		EqualityComparer_1_t3919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8574);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3906 * G_B4_0 = {0};
	Dictionary_2_t3906 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3906 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1262 * L_1 = (ArgumentOutOfRangeException_t1262 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m8695(L_1, (String_t*)(String_t*) &_stringLiteral2919, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3906 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3906 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3906 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3919_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3919 * L_5 = (( EqualityComparer_1_t3919 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3906 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3906 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t456_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3335_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m25856_gshared (Dictionary_2_t3906 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		LinkU5BU5D_t3335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t3335*)SZArrayNew(LinkU5BU5D_t3335_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((UInt64U5BU5D_t2627*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t533*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t456* L_4 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m25858_gshared (Dictionary_2_t3906 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2187);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1148, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1262 * L_3 = (ArgumentOutOfRangeException_t1262 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m8695(L_3, (String_t*)(String_t*) &_stringLiteral1234, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t558 * L_7 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_7, (String_t*)(String_t*) &_stringLiteral2920, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m8692((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t3906 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count() */, (Dictionary_2_t3906 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t558 * L_12 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_12, (String_t*)(String_t*) &_stringLiteral2921, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3907  Dictionary_2_make_pair_m25860_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t3907  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3907 *, uint64_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (uint64_t)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m25862_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m25864_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25866_gshared (Dictionary_2_t3906 * __this, KeyValuePair_2U5BU5D_t4517* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4517* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3906 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t4517* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3917 * L_5 = (Transform_1_t3917 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3917 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, KeyValuePair_2U5BU5D_t4517*, int32_t, Transform_1_t3917 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t3906 *)__this, (KeyValuePair_2U5BU5D_t4517*)L_2, (int32_t)L_3, (Transform_1_t3917 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern TypeInfo* Hashtable_t1438_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t456_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3335_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m25868_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3063);
		Int32U5BU5D_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		LinkU5BU5D_t3335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t456* V_1 = {0};
	LinkU5BU5D_t3335* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt64U5BU5D_t2627* V_7 = {0};
	ObjectU5BU5D_t533* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t456* L_0 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1438_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m12804(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t456*)((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t3335*)((LinkU5BU5D_t3335*)SZArrayNew(LinkU5BU5D_t3335_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t456* L_4 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t3335* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t2627* L_10 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t3335* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t456* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t456* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t3335* L_26 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_26, L_27))->___Next_1);
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
		Int32U5BU5D_t456* L_32 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t456* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t3335* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (UInt64U5BU5D_t2627*)((UInt64U5BU5D_t2627*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t533*)((ObjectU5BU5D_t533*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		UInt64U5BU5D_t2627* L_37 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		UInt64U5BU5D_t2627* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m10304(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t533* L_40 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		ObjectU5BU5D_t533* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m10304(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		UInt64U5BU5D_t2627* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t533* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m25870_gshared (Dictionary_2_t3906 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_3 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_3, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t456* L_9 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t3335* L_12 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t2627* L_17 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		uint64_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_17, L_19)), (uint64_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t558 * L_22 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_22, (String_t*)(String_t*) &_stringLiteral2923, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t3335* L_23 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_23, L_24))->___Next_1);
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
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t456* L_32 = (Int32U5BU5D_t456*)(__this->___table_4);
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
		LinkU5BU5D_t3335* L_38 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t3335* L_41 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t3335* L_44 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t456* L_46 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t456* L_49 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		UInt64U5BU5D_t2627* L_52 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		uint64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_52, L_53)) = (uint64_t)L_54;
		ObjectU5BU5D_t533* L_55 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		Object_t * L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, L_56)) = (Object_t *)L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m25872_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t456* L_0 = (Int32U5BU5D_t456*)(__this->___table_4);
		Int32U5BU5D_t456* L_1 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		UInt64U5BU5D_t2627* L_2 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		UInt64U5BU5D_t2627* L_3 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t533* L_4 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		ObjectU5BU5D_t533* L_5 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t3335* L_6 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		LinkU5BU5D_t3335* L_7 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m25874_gshared (Dictionary_2_t3906 * __this, uint64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_3 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_3, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t456* L_9 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_11 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t2627* L_16 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), (uint64_t)L_19);
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
		LinkU5BU5D_t3335* L_21 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_21, L_22))->___Next_1);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t3316_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m25876_gshared (Dictionary_2_t3906 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7388);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3316_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3316 * L_0 = (( EqualityComparer_1_t3316 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t456* L_1 = (Int32U5BU5D_t456*)(__this->___table_4);
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
		ObjectU5BU5D_t533* L_5 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), (Object_t *)L_8);
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
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___Next_1);
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
		Int32U5BU5D_t456* L_16 = (Int32U5BU5D_t456*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m25878_gshared (Dictionary_2_t3906 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t4517* V_0 = {0};
	{
		SerializationInfo_t1247 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1241, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1247 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t1247 *)L_2);
		SerializationInfo_AddValue_m8701((SerializationInfo_t1247 *)L_2, (String_t*)(String_t*) &_stringLiteral1243, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t1247 *)L_4);
		SerializationInfo_AddValue_m8786((SerializationInfo_t1247 *)L_4, (String_t*)(String_t*) &_stringLiteral1245, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t4517*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t4517*)((KeyValuePair_2U5BU5D_t4517*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t4517* L_8 = V_0;
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, KeyValuePair_2U5BU5D_t4517*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3906 *)__this, (KeyValuePair_2U5BU5D_t4517*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1247 * L_9 = ___info;
		Int32U5BU5D_t456* L_10 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t1247 *)L_9);
		SerializationInfo_AddValue_m8701((SerializationInfo_t1247 *)L_9, (String_t*)(String_t*) &_stringLiteral2924, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t4517* L_12 = V_0;
		NullCheck((SerializationInfo_t1247 *)L_11);
		SerializationInfo_AddValue_m8786((SerializationInfo_t1247 *)L_11, (String_t*)(String_t*) &_stringLiteral2925, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m25880_gshared (Dictionary_2_t3906 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t4517* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1247 * L_0 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
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
		SerializationInfo_t1247 * L_1 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1247 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m8711((SerializationInfo_t1247 *)L_1, (String_t*)(String_t*) &_stringLiteral1243, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t1247 * L_3 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1247 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m8702((SerializationInfo_t1247 *)L_3, (String_t*)(String_t*) &_stringLiteral1245, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t1247 * L_6 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1247 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m8711((SerializationInfo_t1247 *)L_6, (String_t*)(String_t*) &_stringLiteral2924, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t1247 * L_8 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1247 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m8702((SerializationInfo_t1247 *)L_8, (String_t*)(String_t*) &_stringLiteral2925, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t4517*)((KeyValuePair_2U5BU5D_t4517*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t3906 *)__this);
		(( void (*) (Dictionary_2_t3906 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3906 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t4517* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t4517* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		uint64_t L_16 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3907 *)((KeyValuePair_2_t3907 *)(KeyValuePair_2_t3907 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t4517* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3907 *)((KeyValuePair_2_t3907 *)(KeyValuePair_2_t3907 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3906 *)__this);
		VirtActionInvoker2< uint64_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t4517* L_22 = V_1;
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
		__this->___serialization_info_13 = (SerializationInfo_t1247 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m25882_gshared (Dictionary_2_t3906 * __this, uint64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		UInt64_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	Object_t * V_5 = {0};
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_3 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_3, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t456* L_9 = (Int32U5BU5D_t456*)(__this->___table_4);
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
		LinkU5BU5D_t3335* L_13 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t2627* L_18 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		uint64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_18, L_20)), (uint64_t)L_21);
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
		LinkU5BU5D_t3335* L_24 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		Int32U5BU5D_t456* L_31 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t3335* L_33 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t3335* L_36 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t3335* L_38 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t3335* L_41 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t3335* L_45 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		UInt64U5BU5D_t2627* L_47 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (UInt64_t581_il2cpp_TypeInfo_var, (&V_4));
		uint64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_47, L_48)) = (uint64_t)L_49;
		ObjectU5BU5D_t533* L_50 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)) = (Object_t *)L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m25884_gshared (Dictionary_2_t3906 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_3 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_3, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		uint64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (uint64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t456* L_9 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_11 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		UInt64U5BU5D_t2627* L_16 = (UInt64U5BU5D_t2627*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		uint64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_16, L_18)), (uint64_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		Object_t ** L_21 = ___value;
		ObjectU5BU5D_t533* L_22 = (ObjectU5BU5D_t533*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t3335* L_25 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_25, L_26))->___Next_1);
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
		Object_t ** L_29 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3910 * Dictionary_2_get_Keys_m25886_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t3910 * L_0 = (KeyCollection_t3910 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t3910 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3914 * Dictionary_2_get_Values_m25888_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t3914 * L_0 = (ValueCollection_t3914 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t3914 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" uint64_t Dictionary_2_ToTKey_m25890_gshared (Dictionary_2_t3906 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2926, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t558 * L_6 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2610(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(uint64_t*)((uint64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTValue_m25892_gshared (Dictionary_2_t3906 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
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
		Type_t * L_5 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2926, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t558 * L_8 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2610(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1746, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3316_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25894_gshared (Dictionary_2_t3906 * __this, KeyValuePair_2_t3907  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7388);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		uint64_t L_0 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3907 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3906 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, uint64_t, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t3906 *)__this, (uint64_t)L_0, (Object_t **)(&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3316_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3316 * L_2 = (( EqualityComparer_1_t3316 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3907 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t3316 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t3316 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3912  Dictionary_2_GetEnumerator_m25896_gshared (Dictionary_2_t3906 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912  L_0 = {0};
		(( void (*) (Enumerator_t3912 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m25898_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		Object_t * L_3 = ___value;
		Object_t * L_4 = L_3;
		DictionaryEntry_t1710  L_5 = {0};
		DictionaryEntry__ctor_m8691(&L_5, (Object_t *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t3907  Array_InternalArray__get_Item_TisKeyValuePair_2_t3907_m28742_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3907_m28742(__this, p0, method) (( KeyValuePair_2_t3907  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3907_m28742_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25899_gshared (InternalEnumerator_1_t3908 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_gshared (InternalEnumerator_1_t3908 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3907  L_0 = (( KeyValuePair_2_t3907  (*) (InternalEnumerator_1_t3908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3907  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25901_gshared (InternalEnumerator_1_t3908 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25902_gshared (InternalEnumerator_1_t3908 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m8692((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3907  InternalEnumerator_1_get_Current_m25903_gshared (InternalEnumerator_1_t3908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
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
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
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
		InvalidOperationException_t1566 * L_3 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_3, (String_t*)(String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t3907  L_8 = (( KeyValuePair_2_t3907  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m25904_gshared (KeyValuePair_2_t3907 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3907 *, uint64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t3907 *)__this, (uint64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3907 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t3907 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Key()
extern "C" uint64_t KeyValuePair_2_get_Key_m25905_gshared (KeyValuePair_2_t3907 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (uint64_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m25906_gshared (KeyValuePair_2_t3907 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m25907_gshared (KeyValuePair_2_t3907 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m25908_gshared (KeyValuePair_2_t3907 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>::ToString()
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m25909_gshared (KeyValuePair_2_t3907 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t45* G_B2_1 = {0};
	StringU5BU5D_t45* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t45* G_B1_1 = {0};
	StringU5BU5D_t45* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t45* G_B3_2 = {0};
	StringU5BU5D_t45* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t45* G_B5_1 = {0};
	StringU5BU5D_t45* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t45* G_B4_1 = {0};
	StringU5BU5D_t45* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t45* G_B6_2 = {0};
	StringU5BU5D_t45* G_B6_3 = {0};
	{
		StringU5BU5D_t45* L_0 = (StringU5BU5D_t45*)((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1155);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1155;
		StringU5BU5D_t45* L_1 = (StringU5BU5D_t45*)L_0;
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3907 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		uint64_t L_3 = L_2;
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
		uint64_t L_5 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3907 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (uint64_t)L_5;
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
		StringU5BU5D_t45* L_8 = (StringU5BU5D_t45*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral16);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral16;
		StringU5BU5D_t45* L_9 = (StringU5BU5D_t45*)L_8;
		Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3907 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_11 = L_10;
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!((Object_t *)L_11))
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		Object_t * L_12 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3907 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_12;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_14;
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
		StringU5BU5D_t45* L_15 = (StringU5BU5D_t45*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral20);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m217(NULL /*static, unused*/, (StringU5BU5D_t45*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t581_m28753_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt64_t581_m28753(__this, p0, method) (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t581_m28753_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25910_gshared (InternalEnumerator_1_t3909 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25911_gshared (InternalEnumerator_1_t3909 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (InternalEnumerator_1_t3909 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3909 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25912_gshared (InternalEnumerator_1_t3909 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25913_gshared (InternalEnumerator_1_t3909 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m8692((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" uint64_t InternalEnumerator_1_get_Current_m25914_gshared (InternalEnumerator_1_t3909 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
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
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
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
		InvalidOperationException_t1566 * L_3 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_3, (String_t*)(String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint64_t L_8 = (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.UInt64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_41.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_41MethodDeclarations.h"
struct Dictionary_2_t3906;
struct Array_t;
struct Transform_1_t3913;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t581_m28764_gshared (Dictionary_2_t3906 * __this, Array_t * p0, int32_t p1, Transform_1_t3913 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t581_m28764(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, Transform_1_t3913 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t581_m28764_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3906;
struct UInt64U5BU5D_t2627;
struct Transform_1_t3913;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t581_TisUInt64_t581_m28765_gshared (Dictionary_2_t3906 * __this, UInt64U5BU5D_t2627* p0, int32_t p1, Transform_1_t3913 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisUInt64_t581_TisUInt64_t581_m28765(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3906 *, UInt64U5BU5D_t2627*, int32_t, Transform_1_t3913 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisUInt64_t581_TisUInt64_t581_m28765_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m25915_gshared (KeyCollection_t3910 * __this, Dictionary_2_t3906 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3906 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3906 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m25916_gshared (KeyCollection_t3910 * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m25917_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m25918_gshared (KeyCollection_t3910 * __this, uint64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		uint64_t L_1 = ___item;
		NullCheck((Dictionary_2_t3906 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, uint64_t >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t3906 *)L_0, (uint64_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m25919_gshared (KeyCollection_t3910 * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m25920_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3910 *)__this);
		Enumerator_t3911  L_0 = (( Enumerator_t3911  (*) (KeyCollection_t3910 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3910 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3911  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m25921_gshared (KeyCollection_t3910 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	UInt64U5BU5D_t2627* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (UInt64U5BU5D_t2627*)((UInt64U5BU5D_t2627*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		UInt64U5BU5D_t2627* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UInt64U5BU5D_t2627* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t3910 *)__this);
		VirtActionInvoker2< UInt64U5BU5D_t2627*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t3910 *)__this, (UInt64U5BU5D_t2627*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3906 * L_4 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3906 *)L_4);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3906 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3906 * L_7 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3913 * L_11 = (Transform_1_t3913 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3913 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3906 *)L_7);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, Transform_1_t3913 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3906 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3913 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m25922_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3910 *)__this);
		Enumerator_t3911  L_0 = (( Enumerator_t3911  (*) (KeyCollection_t3910 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3910 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3911  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m25923_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m25924_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t592_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m25925_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t592_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m25926_gshared (KeyCollection_t3910 * __this, UInt64U5BU5D_t2627* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		UInt64U5BU5D_t2627* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3906 *)L_0);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3906 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3906 * L_3 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		UInt64U5BU5D_t2627* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3913 * L_7 = (Transform_1_t3913 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3913 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3906 *)L_3);
		(( void (*) (Dictionary_2_t3906 *, UInt64U5BU5D_t2627*, int32_t, Transform_1_t3913 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3906 *)L_3, (UInt64U5BU5D_t2627*)L_4, (int32_t)L_5, (Transform_1_t3913 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3911  KeyCollection_GetEnumerator_m25927_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		Enumerator_t3911  L_1 = {0};
		(( void (*) (Enumerator_t3911 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3906 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m25928_gshared (KeyCollection_t3910 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3906 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count() */, (Dictionary_2_t3906 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25929_gshared (Enumerator_t3911 * __this, Dictionary_2_t3906 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = ___host;
		NullCheck((Dictionary_2_t3906 *)L_0);
		Enumerator_t3912  L_1 = (( Enumerator_t3912  (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25930_gshared (Enumerator_t3911 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		uint64_t L_1 = (( uint64_t (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25931_gshared (Enumerator_t3911 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25932_gshared (Enumerator_t3911 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" uint64_t Enumerator_get_Current_m25933_gshared (Enumerator_t3911 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3907 * L_1 = (KeyValuePair_2_t3907 *)&(L_0->___current_3);
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3907 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25934_gshared (Enumerator_t3912 * __this, Dictionary_2_t3906 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3906 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25935_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3907  L_0 = (KeyValuePair_2_t3907 )(__this->___current_3);
		KeyValuePair_2_t3907  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25936_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3907 * L_0 = (KeyValuePair_2_t3907 *)&(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3907 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t3907 * L_4 = (KeyValuePair_2_t3907 *)&(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3907 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_6 = L_5;
		DictionaryEntry_t1710  L_7 = {0};
		DictionaryEntry__ctor_m8691(&L_7, (Object_t *)L_3, (Object_t *)((Object_t *)L_6), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25937_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25938_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25939_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t3906 * L_4 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t3335* L_5 = (LinkU5BU5D_t3335*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3906 * L_8 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck(L_8);
		UInt64U5BU5D_t2627* L_9 = (UInt64U5BU5D_t2627*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3906 * L_12 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t533* L_13 = (ObjectU5BU5D_t533*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3907  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3907 *, uint64_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_9, L_11)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t3906 * L_18 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3907  Enumerator_get_Current_m25940_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3907  L_0 = (KeyValuePair_2_t3907 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m25941_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3907 * L_0 = (KeyValuePair_2_t3907 *)&(__this->___current_3);
		uint64_t L_1 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3907 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m25942_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3907 * L_0 = (KeyValuePair_2_t3907 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3907 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern TypeInfo* ObjectDisposedException_t1725_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m25943_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3054);
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1725 * L_1 = (ObjectDisposedException_t1725 *)il2cpp_codegen_object_new (ObjectDisposedException_t1725_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8682(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3906 * L_2 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1566 * L_5 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_5, (String_t*)(String_t*) &_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m25944_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3912 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2928, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25945_gshared (Enumerator_t3912 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3906 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25946_gshared (Transform_1_t3913 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue)
extern "C" uint64_t Transform_1_Invoke_m25947_gshared (Transform_1_t3913 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25947((Transform_1_t3913 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint64_t (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint64_t (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* UInt64_t581_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25948_gshared (Transform_1_t3913 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t581_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Transform_1_EndInvoke_m25949_gshared (Transform_1_t3913 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_38.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_38MethodDeclarations.h"
struct Dictionary_2_t3906;
struct Array_t;
struct Transform_1_t3916;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28767_gshared (Dictionary_2_t3906 * __this, Array_t * p0, int32_t p1, Transform_1_t3916 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28767(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, Transform_1_t3916 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28767_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3906;
struct ObjectU5BU5D_t533;
struct Transform_1_t3916;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28766_gshared (Dictionary_2_t3906 * __this, ObjectU5BU5D_t533* p0, int32_t p1, Transform_1_t3916 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28766(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3906 *, ObjectU5BU5D_t533*, int32_t, Transform_1_t3916 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28766_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m25950_gshared (ValueCollection_t3914 * __this, Dictionary_2_t3906 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3906 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3906 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25951_gshared (ValueCollection_t3914 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25952_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25953_gshared (ValueCollection_t3914 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t3906 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3906 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25954_gshared (ValueCollection_t3914 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25955_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3914 *)__this);
		Enumerator_t3915  L_0 = (( Enumerator_t3915  (*) (ValueCollection_t3914 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3914 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3915  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m25956_gshared (ValueCollection_t3914 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t533* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t533*)((ObjectU5BU5D_t533*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t533* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t533* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t3914 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t533*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t3914 *)__this, (ObjectU5BU5D_t533*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3906 * L_4 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3906 *)L_4);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3906 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3906 * L_7 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3916 * L_11 = (Transform_1_t3916 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3916 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3906 *)L_7);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, Transform_1_t3916 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3906 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3916 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25957_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3914 *)__this);
		Enumerator_t3915  L_0 = (( Enumerator_t3915  (*) (ValueCollection_t3914 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3914 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3915  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25958_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m25959_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t592_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m25960_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t592_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m25961_gshared (ValueCollection_t3914 * __this, ObjectU5BU5D_t533* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		ObjectU5BU5D_t533* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3906 *)L_0);
		(( void (*) (Dictionary_2_t3906 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3906 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3906 * L_3 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		ObjectU5BU5D_t533* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3916 * L_7 = (Transform_1_t3916 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3916 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3906 *)L_3);
		(( void (*) (Dictionary_2_t3906 *, ObjectU5BU5D_t533*, int32_t, Transform_1_t3916 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3906 *)L_3, (ObjectU5BU5D_t533*)L_4, (int32_t)L_5, (Transform_1_t3916 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3915  ValueCollection_GetEnumerator_m25962_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		Enumerator_t3915  L_1 = {0};
		(( void (*) (Enumerator_t3915 *, Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3906 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m25963_gshared (ValueCollection_t3914 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = (Dictionary_2_t3906 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3906 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count() */, (Dictionary_2_t3906 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25964_gshared (Enumerator_t3915 * __this, Dictionary_2_t3906 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3906 * L_0 = ___host;
		NullCheck((Dictionary_2_t3906 *)L_0);
		Enumerator_t3912  L_1 = (( Enumerator_t3912  (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25965_gshared (Enumerator_t3915 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25966_gshared (Enumerator_t3915 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25967_gshared (Enumerator_t3915 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m25968_gshared (Enumerator_t3915 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3907 * L_1 = (KeyValuePair_2_t3907 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3907 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25969_gshared (Transform_1_t3916 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m25970_gshared (Transform_1_t3916 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25970((Transform_1_t3916 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* UInt64_t581_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25971_gshared (Transform_1_t3916 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t581_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m25972_gshared (Transform_1_t3916 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25973_gshared (Transform_1_t3905 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1710  Transform_1_Invoke_m25974_gshared (Transform_1_t3905 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25974((Transform_1_t3905 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* UInt64_t581_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25975_gshared (Transform_1_t3905 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t581_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1710  Transform_1_EndInvoke_m25976_gshared (Transform_1_t3905 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1710 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25977_gshared (Transform_1_t3917 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3907  Transform_1_Invoke_m25978_gshared (Transform_1_t3917 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25978((Transform_1_t3917 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3907  (*FunctionPointerType) (Object_t *, Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3907  (*FunctionPointerType) (Object_t * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* UInt64_t581_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m25979_gshared (Transform_1_t3917 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t581_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3907  Transform_1_EndInvoke_m25980_gshared (Transform_1_t3917 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3907 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25981_gshared (ShimEnumerator_t3918 * __this, Dictionary_2_t3906 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3906 * L_0 = ___host;
		NullCheck((Dictionary_2_t3906 *)L_0);
		Enumerator_t3912  L_1 = (( Enumerator_t3912  (*) (Dictionary_2_t3906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3906 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25982_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m25983_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3065);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t3912  L_0 = (Enumerator_t3912 )(__this->___host_enumerator_0);
		Enumerator_t3912  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1710  L_3 = (DictionaryEntry_t1710 )InterfaceFuncInvoker0< DictionaryEntry_t1710  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25984_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3907  V_0 = {0};
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3907  L_1 = (( KeyValuePair_2_t3907  (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3907 )L_1;
		uint64_t L_2 = (( uint64_t (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3907 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25985_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3907  V_0 = {0};
	{
		Enumerator_t3912 * L_0 = (Enumerator_t3912 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3907  L_1 = (( KeyValuePair_2_t3907  (*) (Enumerator_t3912 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3912 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3907 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3907 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3907 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1710_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m25986_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3064);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t3918 *)__this);
		DictionaryEntry_t1710  L_0 = (DictionaryEntry_t1710 )VirtFuncInvoker0< DictionaryEntry_t1710  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry() */, (ShimEnumerator_t3918 *)__this);
		DictionaryEntry_t1710  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1710_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_7MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt64>::.ctor()
extern "C" void EqualityComparer_1__ctor_m25987_gshared (EqualityComparer_1_t3919 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt64>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t2860_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1145_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m25988_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2860_0_0_0_var = il2cpp_codegen_type_from_index(6055);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		TypeU5BU5D_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2204);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(GenericEqualityComparer_1_t2860_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1145* L_4 = (TypeU5BU5D_t1145*)((TypeU5BU5D_t1145*)SZArrayNew(TypeU5BU5D_t1145_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1145* >::Invoke(81 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1145*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m6554(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3919_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3919 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3921 * L_8 = (DefaultComparer_t3921 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3921 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3919_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m25989_gshared (EqualityComparer_1_t3919 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3919 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint64_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt64>::GetHashCode(T) */, (EqualityComparer_1_t3919 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m25990_gshared (EqualityComparer_1_t3919 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3919 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt64>::Equals(T,T) */, (EqualityComparer_1_t3919 *)__this, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt64>::get_Default()
extern "C" EqualityComparer_1_t3919 * EqualityComparer_1_get_Default_m25991_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3919 * L_0 = ((EqualityComparer_1_t3919_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::.ctor()
extern TypeInfo* EqualityComparer_1_t3919_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m25992_gshared (GenericEqualityComparer_1_t3920 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8574);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3919 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3919_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3919 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3919 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m25993_gshared (GenericEqualityComparer_1_t3920 * __this, uint64_t ___obj, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___obj;
		uint64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.UInt64>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m25994_gshared (GenericEqualityComparer_1_t3920 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___x;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_3 = ___y;
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint64_t L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint64_t >::Invoke(0 /* System.Boolean System.IEquatable`1<System.UInt64>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (uint64_t)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.UInt64>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::.ctor()
extern TypeInfo* EqualityComparer_1_t3919_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m25995_gshared (DefaultComparer_t3921 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8574);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3919 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3919_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3919 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3919 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25996_gshared (DefaultComparer_t3921 * __this, uint64_t ___obj, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___obj;
		uint64_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25997_gshared (DefaultComparer_t3921 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___x;
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_3 = ___y;
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint64_t L_6 = ___y;
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m26049_gshared (ResponseDelegate_1_t1260 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m26051_gshared (ResponseDelegate_1_t1260 * __this, Object_t * ___response, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResponseDelegate_1_Invoke_m26051((ResponseDelegate_1_t1260 *)__this->___prev_9,___response, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___response, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___response, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___response,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m26053_gshared (ResponseDelegate_1_t1260 * __this, Object_t * ___response, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___response;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m26055_gshared (ResponseDelegate_1_t1260 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CProMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.FormatException
#include "mscorlib_System_FormatException.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
struct Activator_t2697;
struct Object_t;
// System.Activator
#include "mscorlib_System_Activator.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m28525_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m28525(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisObject_t_m28525_gshared)(__this /* static, unused */, method)


// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::.ctor()
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m26056_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t3926 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m26057_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t3926 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m26058_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t3926 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::MoveNext()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t659_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t1259_il2cpp_TypeInfo_var;
extern "C" bool U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m26059_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t3926 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		IDictionary_2_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1019);
		FormatException_t1259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2166);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	FormatException_t1259 * V_1 = {0};
	bool V_2 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_6);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0170;
	}

IL_0021:
	{
		WWW_t196 * L_2 = (WWW_t196 *)(__this->___client_0);
		__this->___U24current_7 = L_2;
		__this->___U24PC_6 = 1;
		goto IL_0172;
	}

IL_0039:
	{
		__this->___U3CjsonInterfaceU3E__0_1 = ((Object_t *)Castclass(NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
		WWW_t196 * L_3 = (WWW_t196 *)(__this->___client_0);
		NullCheck((WWW_t196 *)L_3);
		String_t* L_4 = WWW_get_error_m2692((WWW_t196 *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, (String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		WWW_t196 * L_6 = (WWW_t196 *)(__this->___client_0);
		NullCheck((WWW_t196 *)L_6);
		String_t* L_7 = WWW_get_text_m2754((WWW_t196 *)L_6, /*hidden argument*/NULL);
		Object_t ** L_8 = (Object_t **)&(__this->___U3CoU3E__1_2);
		bool L_9 = SimpleJson_TryDeserializeObject_m6246(NULL /*static, unused*/, (String_t*)L_7, (Object_t **)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		Object_t * L_10 = (Object_t *)(__this->___U3CoU3E__1_2);
		__this->___U3CdictJsonObjU3E__2_3 = ((Object_t*)IsInst(L_10, IDictionary_2_t659_il2cpp_TypeInfo_var));
		Object_t* L_11 = (Object_t*)(__this->___U3CdictJsonObjU3E__2_3);
		if (!L_11)
		{
			goto IL_00d0;
		}
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		Object_t * L_12 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___U3CjsonInterfaceU3E__0_1 = L_12;
		Object_t ** L_13 = (Object_t **)&(__this->___U3CjsonInterfaceU3E__0_1);
		Object_t * L_14 = (Object_t *)(__this->___U3CoU3E__1_2);
		NullCheck((Response_t1113 *)(*L_13));
		VirtActionInvoker1< Object_t * >::Invoke(4 /* System.Void UnityEngine.Networking.Match.Response::Parse(System.Object) */, (Response_t1113 *)(*L_13), (Object_t *)L_14);
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t1259_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b8;
		throw e;
	}

CATCH_00b8:
	{ // begin catch(System.FormatException)
		V_1 = (FormatException_t1259 *)((FormatException_t1259 *)__exception_local);
		FormatException_t1259 * L_15 = V_1;
		__this->___U3CexceptionU3E__3_4 = L_15;
		FormatException_t1259 * L_16 = (FormatException_t1259 *)(__this->___U3CexceptionU3E__3_4);
		Debug_Log_m2590(NULL /*static, unused*/, (Object_t *)L_16, /*hidden argument*/NULL);
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		Object_t * L_17 = (Object_t *)(__this->___U3CjsonInterfaceU3E__0_1);
		Object_t * L_18 = L_17;
		if (((Object_t *)L_18))
		{
			goto IL_00ff;
		}
	}
	{
		WWW_t196 * L_19 = (WWW_t196 *)(__this->___client_0);
		NullCheck((WWW_t196 *)L_19);
		String_t* L_20 = WWW_get_text_m2754((WWW_t196 *)L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1144, (String_t*)L_20, /*hidden argument*/NULL);
		Debug_LogError_m2899(NULL /*static, unused*/, (Object_t *)L_21, /*hidden argument*/NULL);
		goto IL_011f;
	}

IL_00ff:
	{
		Object_t ** L_22 = (Object_t **)&(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((Response_t1113 *)(*L_22));
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Networking.Match.Response::ToString() */, (Response_t1113 *)(*L_22));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1145, (String_t*)L_23, /*hidden argument*/NULL);
		Debug_Log_m2590(NULL /*static, unused*/, (Object_t *)L_24, /*hidden argument*/NULL);
	}

IL_011f:
	{
		goto IL_0158;
	}

IL_0124:
	{
		WWW_t196 * L_25 = (WWW_t196 *)(__this->___client_0);
		NullCheck((WWW_t196 *)L_25);
		String_t* L_26 = WWW_get_error_m2692((WWW_t196 *)L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1146, (String_t*)L_26, /*hidden argument*/NULL);
		Debug_LogError_m2899(NULL /*static, unused*/, (Object_t *)L_27, /*hidden argument*/NULL);
		WWW_t196 * L_28 = (WWW_t196 *)(__this->___client_0);
		NullCheck((WWW_t196 *)L_28);
		String_t* L_29 = WWW_get_text_m2754((WWW_t196 *)L_28, /*hidden argument*/NULL);
		String_t* L_30 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1147, (String_t*)L_29, /*hidden argument*/NULL);
		Debug_LogError_m2899(NULL /*static, unused*/, (Object_t *)L_30, /*hidden argument*/NULL);
	}

IL_0158:
	{
		ResponseDelegate_1_t1260 * L_31 = (ResponseDelegate_1_t1260 *)(__this->___callback_5);
		Object_t * L_32 = (Object_t *)(__this->___U3CjsonInterfaceU3E__0_1);
		NullCheck((ResponseDelegate_1_t1260 *)L_31);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T) */, (ResponseDelegate_1_t1260 *)L_31, (Object_t *)L_32);
		__this->___U24PC_6 = (-1);
	}

IL_0170:
	{
		return 0;
	}

IL_0172:
	{
		return 1;
	}
	// Dead block : IL_0174: ldloc.2
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>::Dispose()
extern "C" void U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m26060_gshared (U3CProcessMatchResponseU3Ec__Iterator0_1_t3926 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_6 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"


// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
extern "C" KeyValuePair_2_t3927  Array_InternalArray__get_Item_TisKeyValuePair_2_t3927_m28773_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3927_m28773(__this, p0, method) (( KeyValuePair_2_t3927  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3927_m28773_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m26078_gshared (InternalEnumerator_1_t3928 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26079_gshared (InternalEnumerator_1_t3928 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3927  L_0 = (( KeyValuePair_2_t3927  (*) (InternalEnumerator_1_t3928 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3928 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3927  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m26080_gshared (InternalEnumerator_1_t3928 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m26081_gshared (InternalEnumerator_1_t3928 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m8692((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3927  InternalEnumerator_1_get_Current_m26082_gshared (InternalEnumerator_1_t3928 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
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
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
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
		InvalidOperationException_t1566 * L_3 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_3, (String_t*)(String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t3927  L_8 = (( KeyValuePair_2_t3927  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m26083_gshared (KeyValuePair_2_t3927 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3927 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t3927 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t40  L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3927 *, KeyValuePair_2_t40 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t3927 *)__this, (KeyValuePair_2_t40 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m26084_gshared (KeyValuePair_2_t3927 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m26085_gshared (KeyValuePair_2_t3927 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" KeyValuePair_2_t40  KeyValuePair_2_get_Value_m26086_gshared (KeyValuePair_2_t3927 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t40  L_0 = (KeyValuePair_2_t40 )(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m26087_gshared (KeyValuePair_2_t3927 * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	{
		KeyValuePair_2_t40  L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToString()
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m26088_gshared (KeyValuePair_2_t3927 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	KeyValuePair_2_t40  V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t45* G_B2_1 = {0};
	StringU5BU5D_t45* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t45* G_B1_1 = {0};
	StringU5BU5D_t45* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t45* G_B3_2 = {0};
	StringU5BU5D_t45* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t45* G_B5_1 = {0};
	StringU5BU5D_t45* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t45* G_B4_1 = {0};
	StringU5BU5D_t45* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t45* G_B6_2 = {0};
	StringU5BU5D_t45* G_B6_3 = {0};
	{
		StringU5BU5D_t45* L_0 = (StringU5BU5D_t45*)((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1155);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1155;
		StringU5BU5D_t45* L_1 = (StringU5BU5D_t45*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3927 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3927 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_4;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_6;
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
		StringU5BU5D_t45* L_7 = (StringU5BU5D_t45*)G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral16);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral16;
		StringU5BU5D_t45* L_8 = (StringU5BU5D_t45*)L_7;
		KeyValuePair_2_t40  L_9 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3927 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		KeyValuePair_2_t40  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		KeyValuePair_2_t40  L_12 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3927 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (KeyValuePair_2_t40 )L_12;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_14;
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
		StringU5BU5D_t45* L_15 = (StringU5BU5D_t45*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral20);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m217(NULL /*static, unused*/, (StringU5BU5D_t45*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadSafeDictionaryValueFactory_2__ctor_m26089_gshared (ThreadSafeDictionaryValueFactory_2_t3929 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m26091_gshared (ThreadSafeDictionaryValueFactory_2_t3929 * __this, Object_t * ___key, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ThreadSafeDictionaryValueFactory_2_Invoke_m26091((ThreadSafeDictionaryValueFactory_2_t3929 *)__this->___prev_9,___key, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m26093_gshared (ThreadSafeDictionaryValueFactory_2_t3929 * __this, Object_t * ___key, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m26095_gshared (ThreadSafeDictionaryValueFactory_2_t3929 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2__ctor_m26096_gshared (ThreadSafeDictionary_2_t3931 * __this, ThreadSafeDictionaryValueFactory_2_t3929 * ___valueFactory, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m160(L_0, /*hidden argument*/NULL);
		__this->____lock_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		ThreadSafeDictionaryValueFactory_2_t3929 * L_1 = ___valueFactory;
		__this->____valueFactory_1 = L_1;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26098_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3339 * L_0 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t3339 *)L_0);
		Enumerator_t3345  L_1 = (( Enumerator_t3345  (*) (Dictionary_2_t3339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3339 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t3345  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (Object_t *)L_3;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m26100_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Dictionary_2_t3339 * L_0 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionary_2_t3931 *)__this);
		Object_t * L_2 = (( Object_t * (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ThreadSafeDictionary_2_t3931 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}

IL_0013:
	{
		Dictionary_2_t3339 * L_3 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
		Object_t * L_4 = ___key;
		NullCheck((Dictionary_2_t3339 *)L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (Dictionary_2_t3339 *)L_3, (Object_t *)L_4, (Object_t **)(&V_0));
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		Object_t * L_6 = ___key;
		NullCheck((ThreadSafeDictionary_2_t3931 *)__this);
		Object_t * L_7 = (( Object_t * (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ThreadSafeDictionary_2_t3931 *)__this, (Object_t *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_7;
	}

IL_002e:
	{
		Object_t * L_8 = V_0;
		return L_8;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m26102_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Dictionary_2_t3339 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ThreadSafeDictionaryValueFactory_2_t3929 * L_0 = (ThreadSafeDictionaryValueFactory_2_t3929 *)(__this->____valueFactory_1);
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionaryValueFactory_2_t3929 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(10 /* TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey) */, (ThreadSafeDictionaryValueFactory_2_t3929 *)L_0, (Object_t *)L_1);
		V_0 = (Object_t *)L_2;
		Object_t * L_3 = (Object_t *)(__this->____lock_0);
		V_1 = (Object_t *)L_3;
		Object_t * L_4 = V_1;
		Monitor_Enter_m8739(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t3339 * L_5 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
			if (L_5)
			{
				goto IL_0042;
			}
		}

IL_0025:
		{
			Dictionary_2_t3339 * L_6 = (Dictionary_2_t3339 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (Dictionary_2_t3339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			__this->____dictionary_2 = L_6;
			Dictionary_2_t3339 * L_7 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
			Object_t * L_8 = ___key;
			Object_t * L_9 = V_0;
			NullCheck((Dictionary_2_t3339 *)L_7);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t3339 *)L_7, (Object_t *)L_8, (Object_t *)L_9);
			goto IL_0078;
		}

IL_0042:
		{
			Dictionary_2_t3339 * L_10 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
			Object_t * L_11 = ___key;
			NullCheck((Dictionary_2_t3339 *)L_10);
			bool L_12 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, (Dictionary_2_t3339 *)L_10, (Object_t *)L_11, (Object_t **)(&V_2));
			if (!L_12)
			{
				goto IL_005d;
			}
		}

IL_0055:
		{
			Object_t * L_13 = V_2;
			V_4 = (Object_t *)L_13;
			IL2CPP_LEAVE(0x86, FINALLY_007d);
		}

IL_005d:
		{
			Dictionary_2_t3339 * L_14 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
			Dictionary_2_t3339 * L_15 = (Dictionary_2_t3339 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			(( void (*) (Dictionary_2_t3339 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_15, (Object_t*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			V_3 = (Dictionary_2_t3339 *)L_15;
			Dictionary_2_t3339 * L_16 = V_3;
			Object_t * L_17 = ___key;
			Object_t * L_18 = V_0;
			NullCheck((Dictionary_2_t3339 *)L_16);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t3339 *)L_16, (Object_t *)L_17, (Object_t *)L_18);
			Dictionary_2_t3339 * L_19 = V_3;
			__this->____dictionary_2 = L_19;
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x84, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m8740(NULL /*static, unused*/, (Object_t *)L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0084:
	{
		Object_t * L_21 = V_0;
		return L_21;
	}

IL_0086:
	{
		Object_t * L_22 = V_4;
		return L_22;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Add_m26104_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m26106_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3339 * L_0 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t3339 *)L_0);
		KeyCollection_t3343 * L_1 = (( KeyCollection_t3343 * (*) (Dictionary_2_t3339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3339 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_1;
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_Remove_m26108_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m26110_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Object_t ** L_0 = ___value;
		Object_t * L_1 = ___key;
		NullCheck((ThreadSafeDictionary_2_t3931 *)__this);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(8 /* TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey) */, (ThreadSafeDictionary_2_t3931 *)__this, (Object_t *)L_1);
		*L_0 = L_2;
		return 1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m26112_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3339 * L_0 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t3339 *)L_0);
		ValueCollection_t3347 * L_1 = (( ValueCollection_t3347 * (*) (Dictionary_2_t3339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((Dictionary_2_t3339 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m26114_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((ThreadSafeDictionary_2_t3931 *)__this);
		Object_t * L_1 = (( Object_t * (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((ThreadSafeDictionary_2_t3931 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_set_Item_m26116_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Add_m26118_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_Clear_m26120_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_Contains_m26122_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" void ThreadSafeDictionary_2_CopyTo_m26124_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2U5BU5D_t3951* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m26126_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3339 * L_0 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t3339 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t3339 *)L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m26128_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* NotImplementedException_t1731_il2cpp_TypeInfo_var;
extern "C" bool ThreadSafeDictionary_2_Remove_m26130_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3082);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1731 * L_0 = (NotImplementedException_t1731 *)il2cpp_codegen_object_new (NotImplementedException_t1731_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8780(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m26132_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3339 * L_0 = (Dictionary_2_t3339 *)(__this->____dictionary_2);
		NullCheck((Dictionary_2_t3339 *)L_0);
		Enumerator_t3345  L_1 = (( Enumerator_t3345  (*) (Dictionary_2_t3339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3339 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t3345  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_2);
		return (Object_t*)L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_39.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_39MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_44.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_41.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_44MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_41MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"
struct Dictionary_2_t3953;
struct DictionaryEntryU5BU5D_t4625;
struct Transform_1_t3952;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28788_gshared (Dictionary_2_t3953 * __this, DictionaryEntryU5BU5D_t4625* p0, int32_t p1, Transform_1_t3952 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28788(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3953 *, DictionaryEntryU5BU5D_t4625*, int32_t, Transform_1_t3952 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1710_TisDictionaryEntry_t1710_m28788_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3953;
struct Array_t;
struct Transform_1_t3961;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3927_m28790_gshared (Dictionary_2_t3953 * __this, Array_t * p0, int32_t p1, Transform_1_t3961 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3927_m28790(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, Transform_1_t3961 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3927_m28790_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3953;
struct KeyValuePair_2U5BU5D_t4553;
struct Transform_1_t3961;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3927_TisKeyValuePair_2_t3927_m28791_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2U5BU5D_t4553* p0, int32_t p1, Transform_1_t3961 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3927_TisKeyValuePair_2_t3927_m28791(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3953 *, KeyValuePair_2U5BU5D_t4553*, int32_t, Transform_1_t3961 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3927_TisKeyValuePair_2_t3927_m28791_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m26444_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26446_gshared (Dictionary_2_t3953 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26448_gshared (Dictionary_2_t3953 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t3953 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26450_gshared (Dictionary_2_t3953 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t21_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m26452_gshared (Dictionary_2_t3953 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		IEnumerator_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3927  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
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
			KeyValuePair_2_t3927  L_9 = (KeyValuePair_2_t3927 )InterfaceFuncInvoker0< KeyValuePair_2_t3927  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t3927 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3927 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			KeyValuePair_2_t40  L_11 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3927 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t3953 *)__this);
			VirtActionInvoker2< Object_t *, KeyValuePair_2_t40  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_10, (KeyValuePair_2_t40 )L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t21_il2cpp_TypeInfo_var, (Object_t *)L_12);
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
		__last_unhandled_exception = (Exception_t27 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26454_gshared (Dictionary_2_t3953 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26456_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3953 *)__this);
		KeyCollection_t3954 * L_0 = (( KeyCollection_t3954 * (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26458_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3953 *)__this);
		ValueCollection_t3958 * L_0 = (( ValueCollection_t3958 * (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26460_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t3953 *)__this);
		KeyCollection_t3954 * L_0 = (( KeyCollection_t3954 * (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26462_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t3953 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t3953 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t3953 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3953 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t3953 *)__this);
		KeyValuePair_2_t40  L_5 = (KeyValuePair_2_t40 )VirtFuncInvoker1< KeyValuePair_2_t40 , Object_t * >::Invoke(21 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_4);
		KeyValuePair_2_t40  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26464_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3953 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3953 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3953 *)__this);
		KeyValuePair_2_t40  L_3 = (( KeyValuePair_2_t40  (*) (Dictionary_2_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3953 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3953 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t40  >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_1, (KeyValuePair_2_t40 )L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26466_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t3953 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t3953 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t3953 *)__this);
		KeyValuePair_2_t40  L_3 = (( KeyValuePair_2_t40  (*) (Dictionary_2_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t3953 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t3953 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t40  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_1, (KeyValuePair_2_t40 )L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26468_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t3953 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t3953 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26470_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t3953 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (Dictionary_2_t3953 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26472_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26474_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26476_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26478_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2_t3927  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3927 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2_t40  L_1 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3927 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3953 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t40  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_0, (KeyValuePair_2_t40 )L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26480_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2_t3927  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3927  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3953 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3953 *, KeyValuePair_2_t3927 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3953 *)__this, (KeyValuePair_2_t3927 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26482_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2U5BU5D_t4553* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4553* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, KeyValuePair_2U5BU5D_t4553*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3953 *)__this, (KeyValuePair_2U5BU5D_t4553*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26484_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2_t3927  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3927  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t3953 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t3953 *, KeyValuePair_2_t3927 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t3953 *)__this, (KeyValuePair_2_t3927 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3927 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3953 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26486_gshared (Dictionary_2_t3953 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9195);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t4553* V_0 = {0};
	DictionaryEntryU5BU5D_t4625* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t4625* G_B5_1 = {0};
	Dictionary_2_t3953 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t4625* G_B4_1 = {0};
	Dictionary_2_t3953 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t4553*)((KeyValuePair_2U5BU5D_t4553*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t4553* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4553* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, KeyValuePair_2U5BU5D_t4553*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3953 *)__this, (KeyValuePair_2U5BU5D_t4553*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3953 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t4625*)((DictionaryEntryU5BU5D_t4625*)IsInst(L_6, DictionaryEntryU5BU5D_t4625_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t4625* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t4625* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t3952 * L_10 = ((Dictionary_2_t3953_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3953 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3953 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3952 * L_12 = (Transform_1_t3952 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3952 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3953_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3953 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3952 * L_13 = ((Dictionary_2_t3953_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t3953 *)G_B5_2);
		(( void (*) (Dictionary_2_t3953 *, DictionaryEntryU5BU5D_t4625*, int32_t, Transform_1_t3952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t3953 *)G_B5_2, (DictionaryEntryU5BU5D_t4625*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t3952 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3961 * L_17 = (Transform_1_t3961 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3961 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, Transform_1_t3961 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t3953 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t3961 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26488_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956  L_0 = {0};
		(( void (*) (Enumerator_t3956 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3956  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26490_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956  L_0 = {0};
		(( void (*) (Enumerator_t3956 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3956  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26492_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t3962 * L_0 = (ShimEnumerator_t3962 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3962 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26494_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t2348_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t40  Dictionary_2_get_Item_m26496_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		KeyNotFoundException_t2348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6073);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_15 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3951* L_20 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(KeyValuePair_2_t40 *)(KeyValuePair_2_t40 *)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t3335* L_23 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t2348 * L_27 = (KeyNotFoundException_t2348 *)il2cpp_codegen_object_new (KeyNotFoundException_t2348_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m12584(L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m26498_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t3335* L_12 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_17 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t3335* L_23 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		Int32U5BU5D_t456* L_33 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_33);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t3335* L_39 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t3335* L_42 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t456* L_44 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t456* L_47 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t3335* L_50 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t533* L_53 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t3335* L_57 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t3335* L_59 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t3335* L_62 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t456* L_64 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t456* L_67 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		KeyValuePair_2U5BU5D_t3951* L_70 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		int32_t L_71 = V_2;
		KeyValuePair_2_t40  L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((KeyValuePair_2_t40 *)(KeyValuePair_2_t40 *)SZArrayLdElema(L_70, L_71)) = (KeyValuePair_2_t40 )L_72;
		int32_t L_73 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t3316_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m26500_gshared (Dictionary_2_t3953 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2187);
		EqualityComparer_1_t3316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7388);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3953 * G_B4_0 = {0};
	Dictionary_2_t3953 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3953 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1262 * L_1 = (ArgumentOutOfRangeException_t1262 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m8695(L_1, (String_t*)(String_t*) &_stringLiteral2919, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3953 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3953 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3953 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3316_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3316 * L_5 = (( EqualityComparer_1_t3316 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3953 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3953 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t456_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3335_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m26502_gshared (Dictionary_2_t3953 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		LinkU5BU5D_t3335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t3335*)SZArrayNew(LinkU5BU5D_t3335_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t533*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((KeyValuePair_2U5BU5D_t3951*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t456* L_4 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m26504_gshared (Dictionary_2_t3953 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2187);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1148, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1262 * L_3 = (ArgumentOutOfRangeException_t1262 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1262_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m8695(L_3, (String_t*)(String_t*) &_stringLiteral1234, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t558 * L_7 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_7, (String_t*)(String_t*) &_stringLiteral2920, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m8692((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t3953 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t3953 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t558 * L_12 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_12, (String_t*)(String_t*) &_stringLiteral2921, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3927  Dictionary_2_make_pair_m26506_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		KeyValuePair_2_t40  L_1 = ___value;
		KeyValuePair_2_t3927  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3927 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (Object_t *)L_0, (KeyValuePair_2_t40 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26508_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_pick_value_m26510_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	{
		KeyValuePair_2_t40  L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26512_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2U5BU5D_t4553* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4553* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t3953 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t4553* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3961 * L_5 = (Transform_1_t3961 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3961 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, KeyValuePair_2U5BU5D_t4553*, int32_t, Transform_1_t3961 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t3953 *)__this, (KeyValuePair_2U5BU5D_t4553*)L_2, (int32_t)L_3, (Transform_1_t3961 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern TypeInfo* Hashtable_t1438_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t456_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t3335_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m26514_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3063);
		Int32U5BU5D_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		LinkU5BU5D_t3335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t456* V_1 = {0};
	LinkU5BU5D_t3335* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t533* V_7 = {0};
	KeyValuePair_2U5BU5D_t3951* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t456* L_0 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1438_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m12804(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t456*)((Int32U5BU5D_t456*)SZArrayNew(Int32U5BU5D_t456_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t3335*)((LinkU5BU5D_t3335*)SZArrayNew(LinkU5BU5D_t3335_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t456* L_4 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t3335* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_10 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t3335* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t456* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t456* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t3335* L_26 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_26, L_27))->___Next_1);
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
		Int32U5BU5D_t456* L_32 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t456* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t3335* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t533*)((ObjectU5BU5D_t533*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (KeyValuePair_2U5BU5D_t3951*)((KeyValuePair_2U5BU5D_t3951*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		ObjectU5BU5D_t533* L_37 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		ObjectU5BU5D_t533* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m10304(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t3951* L_40 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		KeyValuePair_2U5BU5D_t3951* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m10304(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t533* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		KeyValuePair_2U5BU5D_t3951* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m26516_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t3335* L_11 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_16 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t558 * L_21 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2901(L_21, (String_t*)(String_t*) &_stringLiteral2923, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t3335* L_22 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->___count_10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		Int32U5BU5D_t456* L_31 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_31);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t3335* L_37 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t3335* L_40 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t3335* L_43 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t456* L_45 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t456* L_48 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t533* L_51 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		KeyValuePair_2U5BU5D_t3951* L_54 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		int32_t L_55 = V_2;
		KeyValuePair_2_t40  L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((KeyValuePair_2_t40 *)(KeyValuePair_2_t40 *)SZArrayLdElema(L_54, L_55)) = (KeyValuePair_2_t40 )L_56;
		int32_t L_57 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m26518_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t456* L_0 = (Int32U5BU5D_t456*)(__this->___table_4);
		Int32U5BU5D_t456* L_1 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t533* L_2 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		ObjectU5BU5D_t533* L_3 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t3951* L_4 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		KeyValuePair_2U5BU5D_t3951* L_5 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t3335* L_6 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		LinkU5BU5D_t3335* L_7 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m8772(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m26520_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_15 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t3335* L_20 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t3963_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m26522_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8634);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3963_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3963 * L_0 = (( EqualityComparer_1_t3963 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t456* L_1 = (Int32U5BU5D_t456*)(__this->___table_4);
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
		KeyValuePair_2U5BU5D_t3951* L_5 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		KeyValuePair_2_t40  L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, KeyValuePair_2_t40 , KeyValuePair_2_t40  >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (KeyValuePair_2_t40 )(*(KeyValuePair_2_t40 *)(KeyValuePair_2_t40 *)SZArrayLdElema(L_5, L_7)), (KeyValuePair_2_t40 )L_8);
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
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___Next_1);
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
		Int32U5BU5D_t456* L_16 = (Int32U5BU5D_t456*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m26524_gshared (Dictionary_2_t3953 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t4553* V_0 = {0};
	{
		SerializationInfo_t1247 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1241, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1247 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t1247 *)L_2);
		SerializationInfo_AddValue_m8701((SerializationInfo_t1247 *)L_2, (String_t*)(String_t*) &_stringLiteral1243, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t1247 *)L_4);
		SerializationInfo_AddValue_m8786((SerializationInfo_t1247 *)L_4, (String_t*)(String_t*) &_stringLiteral1245, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t4553*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t4553*)((KeyValuePair_2U5BU5D_t4553*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t4553* L_8 = V_0;
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, KeyValuePair_2U5BU5D_t4553*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t3953 *)__this, (KeyValuePair_2U5BU5D_t4553*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1247 * L_9 = ___info;
		Int32U5BU5D_t456* L_10 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t1247 *)L_9);
		SerializationInfo_AddValue_m8701((SerializationInfo_t1247 *)L_9, (String_t*)(String_t*) &_stringLiteral2924, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t1247 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t4553* L_12 = V_0;
		NullCheck((SerializationInfo_t1247 *)L_11);
		SerializationInfo_AddValue_m8786((SerializationInfo_t1247 *)L_11, (String_t*)(String_t*) &_stringLiteral2925, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m26526_gshared (Dictionary_2_t3953 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t4553* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1247 * L_0 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
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
		SerializationInfo_t1247 * L_1 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1247 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m8711((SerializationInfo_t1247 *)L_1, (String_t*)(String_t*) &_stringLiteral1243, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t1247 * L_3 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1247 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m8702((SerializationInfo_t1247 *)L_3, (String_t*)(String_t*) &_stringLiteral1245, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t1247 * L_6 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1247 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m8711((SerializationInfo_t1247 *)L_6, (String_t*)(String_t*) &_stringLiteral2924, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t1247 * L_8 = (SerializationInfo_t1247 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1247 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m8702((SerializationInfo_t1247 *)L_8, (String_t*)(String_t*) &_stringLiteral2925, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t4553*)((KeyValuePair_2U5BU5D_t4553*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t3953 *)__this);
		(( void (*) (Dictionary_2_t3953 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t3953 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t4553* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t4553* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3927 *)((KeyValuePair_2_t3927 *)(KeyValuePair_2_t3927 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t4553* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		KeyValuePair_2_t40  L_19 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3927 *)((KeyValuePair_2_t3927 *)(KeyValuePair_2_t3927 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t3953 *)__this);
		VirtActionInvoker2< Object_t *, KeyValuePair_2_t40  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_16, (KeyValuePair_2_t40 )L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t4553* L_22 = V_1;
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
		__this->___serialization_info_13 = (SerializationInfo_t1247 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t40_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m26528_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		KeyValuePair_2_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7513);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	KeyValuePair_2_t40  V_5 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t456* L_7 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
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
		LinkU5BU5D_t3335* L_12 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_17 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t3335* L_23 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t456* L_30 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t3335* L_32 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t3335* L_35 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t3335* L_37 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t3335* L_40 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(__this->___emptySlot_9);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t3335* L_44 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t533* L_46 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		KeyValuePair_2U5BU5D_t3951* L_49 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (KeyValuePair_2_t40_il2cpp_TypeInfo_var, (&V_5));
		KeyValuePair_2_t40  L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((KeyValuePair_2_t40 *)(KeyValuePair_2_t40 *)SZArrayLdElema(L_49, L_50)) = (KeyValuePair_2_t40 )L_51;
		int32_t L_52 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t40_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m26530_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, KeyValuePair_2_t40 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		KeyValuePair_2_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7513);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t40  V_2 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t608 * L_2 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_2, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t456* L_6 = (Int32U5BU5D_t456*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t456* L_8 = (Int32U5BU5D_t456*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t3335* L_10 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t533* L_15 = (ObjectU5BU5D_t533*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		KeyValuePair_2_t40 * L_20 = ___value;
		KeyValuePair_2U5BU5D_t3951* L_21 = (KeyValuePair_2U5BU5D_t3951*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(KeyValuePair_2_t40 *)(KeyValuePair_2_t40 *)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t3335* L_24 = (LinkU5BU5D_t3335*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_t40 * L_28 = ___value;
		Initobj (KeyValuePair_2_t40_il2cpp_TypeInfo_var, (&V_2));
		KeyValuePair_2_t40  L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t3954 * Dictionary_2_get_Keys_m26532_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t3954 * L_0 = (KeyCollection_t3954 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t3954 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t3958 * Dictionary_2_get_Values_m26534_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t3958 * L_0 = (ValueCollection_t3958 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t3958 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTKey_m26536_gshared (Dictionary_2_t3953 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
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
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2926, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t558 * L_6 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2610(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* KeyValuePair_2_t40_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t558_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t40  Dictionary_2_ToTValue_m26538_gshared (Dictionary_2_t3953 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		KeyValuePair_2_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7513);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t40  V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (KeyValuePair_2_t40_il2cpp_TypeInfo_var, (&V_0));
		KeyValuePair_2_t40  L_3 = V_0;
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
		Type_t * L_5 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m174(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2926, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t558 * L_8 = (ArgumentException_t558 *)il2cpp_codegen_object_new (ArgumentException_t558_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2610(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1746, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(KeyValuePair_2_t40 *)((KeyValuePair_2_t40 *)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3963_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26540_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2_t3927  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8634);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t40  V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3927 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t3953 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, KeyValuePair_2_t40 * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t3953 *)__this, (Object_t *)L_0, (KeyValuePair_2_t40 *)(&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3963_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3963 * L_2 = (( EqualityComparer_1_t3963 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		KeyValuePair_2_t40  L_3 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3927 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		KeyValuePair_2_t40  L_4 = V_0;
		NullCheck((EqualityComparer_1_t3963 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t40 , KeyValuePair_2_t40  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (EqualityComparer_1_t3963 *)L_2, (KeyValuePair_2_t40 )L_3, (KeyValuePair_2_t40 )L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3956  Dictionary_2_GetEnumerator_m26542_gshared (Dictionary_2_t3953 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956  L_0 = {0};
		(( void (*) (Enumerator_t3956 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t3953 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m26544_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		KeyValuePair_2_t40  L_2 = ___value;
		KeyValuePair_2_t40  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t1710  L_5 = {0};
		DictionaryEntry__ctor_m8691(&L_5, (Object_t *)((Object_t *)L_1), (Object_t *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_45.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_51.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_51MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_45MethodDeclarations.h"
struct Dictionary_2_t3953;
struct Array_t;
struct Transform_1_t3957;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28784_gshared (Dictionary_2_t3953 * __this, Array_t * p0, int32_t p1, Transform_1_t3957 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28784(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, Transform_1_t3957 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m28784_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3953;
struct ObjectU5BU5D_t533;
struct Transform_1_t3957;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28783_gshared (Dictionary_2_t3953 * __this, ObjectU5BU5D_t533* p0, int32_t p1, Transform_1_t3957 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28783(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3953 *, ObjectU5BU5D_t533*, int32_t, Transform_1_t3957 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m28783_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m26545_gshared (KeyCollection_t3954 * __this, Dictionary_2_t3953 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3953 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3953 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m26546_gshared (KeyCollection_t3954 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m26547_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m26548_gshared (KeyCollection_t3954 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t3953 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, (Dictionary_2_t3953 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m26549_gshared (KeyCollection_t3954 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m26550_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3954 *)__this);
		Enumerator_t3955  L_0 = (( Enumerator_t3955  (*) (KeyCollection_t3954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3954 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3955  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m26551_gshared (KeyCollection_t3954 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t533* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t533*)((ObjectU5BU5D_t533*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t533* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t533* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t3954 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t533*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t3954 *)__this, (ObjectU5BU5D_t533*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3953 * L_4 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3953 *)L_4);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3953 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3953 * L_7 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3957 * L_11 = (Transform_1_t3957 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3957 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3953 *)L_7);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, Transform_1_t3957 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3953 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3957 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m26552_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t3954 *)__this);
		Enumerator_t3955  L_0 = (( Enumerator_t3955  (*) (KeyCollection_t3954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t3954 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3955  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m26553_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m26554_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t592_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m26555_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t592_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m26556_gshared (KeyCollection_t3954 * __this, ObjectU5BU5D_t533* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		ObjectU5BU5D_t533* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3953 *)L_0);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3953 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3953 * L_3 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		ObjectU5BU5D_t533* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3957 * L_7 = (Transform_1_t3957 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3957 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3953 *)L_3);
		(( void (*) (Dictionary_2_t3953 *, ObjectU5BU5D_t533*, int32_t, Transform_1_t3957 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3953 *)L_3, (ObjectU5BU5D_t533*)L_4, (int32_t)L_5, (Transform_1_t3957 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3955  KeyCollection_GetEnumerator_m26557_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		Enumerator_t3955  L_1 = {0};
		(( void (*) (Enumerator_t3955 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3953 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m26558_gshared (KeyCollection_t3954 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3953 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t3953 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26559_gshared (Enumerator_t3955 * __this, Dictionary_2_t3953 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = ___host;
		NullCheck((Dictionary_2_t3953 *)L_0);
		Enumerator_t3956  L_1 = (( Enumerator_t3956  (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26560_gshared (Enumerator_t3955 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26561_gshared (Enumerator_t3955 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26562_gshared (Enumerator_t3955 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m26563_gshared (Enumerator_t3955 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3927 * L_1 = (KeyValuePair_2_t3927 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3927 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26564_gshared (Enumerator_t3956 * __this, Dictionary_2_t3953 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3953 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26565_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3927  L_0 = (KeyValuePair_2_t3927 )(__this->___current_3);
		KeyValuePair_2_t3927  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1710  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26566_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3927 * L_0 = (KeyValuePair_2_t3927 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3927 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3927 * L_3 = (KeyValuePair_2_t3927 *)&(__this->___current_3);
		KeyValuePair_2_t40  L_4 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3927 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		KeyValuePair_2_t40  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t1710  L_7 = {0};
		DictionaryEntry__ctor_m8691(&L_7, (Object_t *)((Object_t *)L_2), (Object_t *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26567_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26568_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t40  L_0 = (( KeyValuePair_2_t40  (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		KeyValuePair_2_t40  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26569_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t3953 * L_4 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t3335* L_5 = (LinkU5BU5D_t3335*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t2347 *)(Link_t2347 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3953 * L_8 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t533* L_9 = (ObjectU5BU5D_t533*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3953 * L_12 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck(L_12);
		KeyValuePair_2U5BU5D_t3951* L_13 = (KeyValuePair_2U5BU5D_t3951*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3927  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3927 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (KeyValuePair_2_t40 )(*(KeyValuePair_2_t40 *)(KeyValuePair_2_t40 *)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t3953 * L_18 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3927  Enumerator_get_Current_m26570_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t3927  L_0 = (KeyValuePair_2_t3927 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m26571_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3927 * L_0 = (KeyValuePair_2_t3927 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t3927 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m26572_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3927 * L_0 = (KeyValuePair_2_t3927 *)&(__this->___current_3);
		KeyValuePair_2_t40  L_1 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3927 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern TypeInfo* ObjectDisposedException_t1725_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m26573_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3054);
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1725 * L_1 = (ObjectDisposedException_t1725 *)il2cpp_codegen_object_new (ObjectDisposedException_t1725_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8682(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3953 * L_2 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1566 * L_5 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_5, (String_t*)(String_t*) &_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m26574_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t3956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2928, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26575_gshared (Enumerator_t3956 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3953 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26576_gshared (Transform_1_t3957 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m26577_gshared (Transform_1_t3957 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m26577((Transform_1_t3957 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t40_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m26578_gshared (Transform_1_t3957 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7513);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t40_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m26579_gshared (Transform_1_t3957 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_42.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_42MethodDeclarations.h"
struct Dictionary_2_t3953;
struct Array_t;
struct Transform_1_t3960;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t40_m28786_gshared (Dictionary_2_t3953 * __this, Array_t * p0, int32_t p1, Transform_1_t3960 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t40_m28786(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, Transform_1_t3960 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t40_m28786_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3953;
struct KeyValuePair_2U5BU5D_t3951;
struct Transform_1_t3960;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t40_TisKeyValuePair_2_t40_m28787_gshared (Dictionary_2_t3953 * __this, KeyValuePair_2U5BU5D_t3951* p0, int32_t p1, Transform_1_t3960 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t40_TisKeyValuePair_2_t40_m28787(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3953 *, KeyValuePair_2U5BU5D_t3951*, int32_t, Transform_1_t3960 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t40_TisKeyValuePair_2_t40_m28787_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m26580_gshared (ValueCollection_t3958 * __this, Dictionary_2_t3953 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3953 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*)(String_t*) &_stringLiteral2918, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3953 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m26581_gshared (ValueCollection_t3958 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m26582_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m26583_gshared (ValueCollection_t3958 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		KeyValuePair_2_t40  L_1 = ___item;
		NullCheck((Dictionary_2_t3953 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3953 *, KeyValuePair_2_t40 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)L_0, (KeyValuePair_2_t40 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m26584_gshared (ValueCollection_t3958 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t26 * L_0 = (NotSupportedException_t26 *)il2cpp_codegen_object_new (NotSupportedException_t26_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m8705(L_0, (String_t*)(String_t*) &_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m26585_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3958 *)__this);
		Enumerator_t3959  L_0 = (( Enumerator_t3959  (*) (ValueCollection_t3958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3959  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m26586_gshared (ValueCollection_t3958 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3951* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t3951*)((KeyValuePair_2U5BU5D_t3951*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		KeyValuePair_2U5BU5D_t3951* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3951* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t3958 *)__this);
		VirtActionInvoker2< KeyValuePair_2U5BU5D_t3951*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t3958 *)__this, (KeyValuePair_2U5BU5D_t3951*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3953 * L_4 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t3953 *)L_4);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3953 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3953 * L_7 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3960 * L_11 = (Transform_1_t3960 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3960 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3953 *)L_7);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, Transform_1_t3960 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t3953 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t3960 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m26587_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t3958 *)__this);
		Enumerator_t3959  L_0 = (( Enumerator_t3959  (*) (ValueCollection_t3958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t3958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3959  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m26588_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m26589_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t592_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m26590_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t592_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m26591_gshared (ValueCollection_t3958 * __this, KeyValuePair_2U5BU5D_t3951* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		KeyValuePair_2U5BU5D_t3951* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t3953 *)L_0);
		(( void (*) (Dictionary_2_t3953 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t3953 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3953 * L_3 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		KeyValuePair_2U5BU5D_t3951* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3960 * L_7 = (Transform_1_t3960 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3960 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t3953 *)L_3);
		(( void (*) (Dictionary_2_t3953 *, KeyValuePair_2U5BU5D_t3951*, int32_t, Transform_1_t3960 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t3953 *)L_3, (KeyValuePair_2U5BU5D_t3951*)L_4, (int32_t)L_5, (Transform_1_t3960 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3959  ValueCollection_GetEnumerator_m26592_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		Enumerator_t3959  L_1 = {0};
		(( void (*) (Enumerator_t3959 *, Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t3953 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m26593_gshared (ValueCollection_t3958 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = (Dictionary_2_t3953 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t3953 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, (Dictionary_2_t3953 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26594_gshared (Enumerator_t3959 * __this, Dictionary_2_t3953 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t3953 * L_0 = ___host;
		NullCheck((Dictionary_2_t3953 *)L_0);
		Enumerator_t3956  L_1 = (( Enumerator_t3956  (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26595_gshared (Enumerator_t3959 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t40  L_1 = (( KeyValuePair_2_t40  (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		KeyValuePair_2_t40  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m26596_gshared (Enumerator_t3959 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26597_gshared (Enumerator_t3959 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t40  Enumerator_get_Current_m26598_gshared (Enumerator_t3959 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3927 * L_1 = (KeyValuePair_2_t3927 *)&(L_0->___current_3);
		KeyValuePair_2_t40  L_2 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t3927 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26599_gshared (Transform_1_t3960 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t40  Transform_1_Invoke_m26600_gshared (Transform_1_t3960 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m26600((Transform_1_t3960 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t40  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t40  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t40  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t40_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m26601_gshared (Transform_1_t3960 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7513);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t40_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t40  Transform_1_EndInvoke_m26602_gshared (Transform_1_t3960 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t40 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26603_gshared (Transform_1_t3952 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1710  Transform_1_Invoke_m26604_gshared (Transform_1_t3952 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m26604((Transform_1_t3952 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1710  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t40_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m26605_gshared (Transform_1_t3952 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7513);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t40_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1710  Transform_1_EndInvoke_m26606_gshared (Transform_1_t3952 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1710 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26607_gshared (Transform_1_t3961 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3927  Transform_1_Invoke_m26608_gshared (Transform_1_t3961 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m26608((Transform_1_t3961 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3927  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3927  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3927  (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t40_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m26609_gshared (Transform_1_t3961 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7513);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(KeyValuePair_2_t40_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3927  Transform_1_EndInvoke_m26610_gshared (Transform_1_t3961 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3927 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26611_gshared (ShimEnumerator_t3962 * __this, Dictionary_2_t3953 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t3953 * L_0 = ___host;
		NullCheck((Dictionary_2_t3953 *)L_0);
		Enumerator_t3956  L_1 = (( Enumerator_t3956  (*) (Dictionary_2_t3953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t3953 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26612_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m26613_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3065);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t3956  L_0 = (Enumerator_t3956 )(__this->___host_enumerator_0);
		Enumerator_t3956  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1710  L_3 = (DictionaryEntry_t1710 )InterfaceFuncInvoker0< DictionaryEntry_t1710  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1443_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26614_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3927  V_0 = {0};
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3927  L_1 = (( KeyValuePair_2_t3927  (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3927 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t3927 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26615_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3927  V_0 = {0};
	{
		Enumerator_t3956 * L_0 = (Enumerator_t3956 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t3927  L_1 = (( KeyValuePair_2_t3927  (*) (Enumerator_t3956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t3956 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t3927 )L_1;
		KeyValuePair_2_t40  L_2 = (( KeyValuePair_2_t40  (*) (KeyValuePair_2_t3927 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t3927 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		KeyValuePair_2_t40  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern TypeInfo* DictionaryEntry_t1710_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m26616_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3064);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t3962 *)__this);
		DictionaryEntry_t1710  L_0 = (DictionaryEntry_t1710 )VirtFuncInvoker0< DictionaryEntry_t1710  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry() */, (ShimEnumerator_t3962 *)__this);
		DictionaryEntry_t1710  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1710_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void EqualityComparer_1__ctor_m26617_gshared (EqualityComparer_1_t3963 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m160((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t2860_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1145_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m26618_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2860_0_0_0_var = il2cpp_codegen_type_from_index(6055);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		TypeU5BU5D_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2204);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(GenericEqualityComparer_1_t2860_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1145* L_4 = (TypeU5BU5D_t1145*)((TypeU5BU5D_t1145*)SZArrayNew(TypeU5BU5D_t1145_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2889(NULL /*static, unused*/, (RuntimeTypeHandle_t2259 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1145* >::Invoke(81 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1145*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m6554(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t3963_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t3963 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t3964 * L_8 = (DefaultComparer_t3964 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t3964 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t3963_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26619_gshared (EqualityComparer_1_t3963 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t3963 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, KeyValuePair_2_t40  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T) */, (EqualityComparer_1_t3963 *)__this, (KeyValuePair_2_t40 )((*(KeyValuePair_2_t40 *)((KeyValuePair_2_t40 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26620_gshared (EqualityComparer_1_t3963 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t3963 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t40 , KeyValuePair_2_t40  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T) */, (EqualityComparer_1_t3963 *)__this, (KeyValuePair_2_t40 )((*(KeyValuePair_2_t40 *)((KeyValuePair_2_t40 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t40 )((*(KeyValuePair_2_t40 *)((KeyValuePair_2_t40 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Default()
extern "C" EqualityComparer_1_t3963 * EqualityComparer_1_get_Default_m26621_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3963 * L_0 = ((EqualityComparer_1_t3963_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern TypeInfo* EqualityComparer_1_t3963_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m26622_gshared (DefaultComparer_t3964 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t3963_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8634);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t3963 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3963_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t3963 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3963 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26623_gshared (DefaultComparer_t3964 * __this, KeyValuePair_2_t40  ___obj, const MethodInfo* method)
{
	{
		KeyValuePair_2_t40  L_0 = ___obj;
		KeyValuePair_2_t40  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26624_gshared (DefaultComparer_t3964 * __this, KeyValuePair_2_t40  ___x, KeyValuePair_2_t40  ___y, const MethodInfo* method)
{
	{
		KeyValuePair_2_t40  L_0 = ___x;
		KeyValuePair_2_t40  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		KeyValuePair_2_t40  L_3 = ___y;
		KeyValuePair_2_t40  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		KeyValuePair_2_t40  L_6 = ___y;
		KeyValuePair_2_t40  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
extern "C" ParameterModifier_t2468  Array_InternalArray__get_Item_TisParameterModifier_t2468_m28793_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisParameterModifier_t2468_m28793(__this, p0, method) (( ParameterModifier_t2468  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisParameterModifier_t2468_m28793_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m26817_gshared (InternalEnumerator_1_t3982 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26818_gshared (InternalEnumerator_1_t3982 * __this, const MethodInfo* method)
{
	{
		ParameterModifier_t2468  L_0 = (( ParameterModifier_t2468  (*) (InternalEnumerator_1_t3982 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3982 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ParameterModifier_t2468  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m26819_gshared (InternalEnumerator_1_t3982 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m26820_gshared (InternalEnumerator_1_t3982 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m8692((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" ParameterModifier_t2468  InternalEnumerator_1_get_Current_m26821_gshared (InternalEnumerator_1_t3982 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
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
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
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
		InvalidOperationException_t1566 * L_3 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_3, (String_t*)(String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		ParameterModifier_t2468  L_8 = (( ParameterModifier_t2468  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterModifier>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterModifier>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterModifier>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" HitInfo_t1185  Array_InternalArray__get_Item_TisHitInfo_t1185_m28804_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisHitInfo_t1185_m28804(__this, p0, method) (( HitInfo_t1185  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisHitInfo_t1185_m28804_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m26822_gshared (InternalEnumerator_1_t3983 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26823_gshared (InternalEnumerator_1_t3983 * __this, const MethodInfo* method)
{
	{
		HitInfo_t1185  L_0 = (( HitInfo_t1185  (*) (InternalEnumerator_1_t3983 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t3983 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		HitInfo_t1185  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m26824_gshared (InternalEnumerator_1_t3983 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m26825_gshared (InternalEnumerator_1_t3983 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m8692((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>::get_Current()
extern TypeInfo* InvalidOperationException_t1566_il2cpp_TypeInfo_var;
extern "C" HitInfo_t1185  InternalEnumerator_1_get_Current_m26826_gshared (InternalEnumerator_1_t3983 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1566_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
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
		InvalidOperationException_t1566 * L_1 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_1, (String_t*)(String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
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
		InvalidOperationException_t1566 * L_3 = (InvalidOperationException_t1566 *)il2cpp_codegen_object_new (InvalidOperationException_t1566_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8683(L_3, (String_t*)(String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m8692((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		HitInfo_t1185  L_8 = (( HitInfo_t1185  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMouseEvents/HitInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SendMouseEvents/HitInfo>::GetEnumerator()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
