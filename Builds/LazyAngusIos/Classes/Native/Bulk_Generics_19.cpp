#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_26.h"
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
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_26MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_26MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern TypeInfo* Comparer_1_t7935_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m55252_gshared (DefaultComparer_t7936 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t7935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13545);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t7935 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t7935_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t7935 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t7935 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Compare(T,T)
extern TypeInfo* IComparable_t99_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t661_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m55253_gshared (DefaultComparer_t7936 * __this, KeyValuePair_2_t6952  ___x, KeyValuePair_2_t6952  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		ArgumentException_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		KeyValuePair_2_t6952  L_0 = ___x;
		KeyValuePair_2_t6952  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		KeyValuePair_2_t6952  L_3 = ___y;
		KeyValuePair_2_t6952  L_4 = L_3;
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
		KeyValuePair_2_t6952  L_6 = ___y;
		KeyValuePair_2_t6952  L_7 = L_6;
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
		KeyValuePair_2_t6952  L_9 = ___x;
		KeyValuePair_2_t6952  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		KeyValuePair_2_t6952  L_12 = ___x;
		KeyValuePair_2_t6952  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		KeyValuePair_2_t6952  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t6952  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (KeyValuePair_2_t6952 )L_15);
		return L_16;
	}

IL_003e:
	{
		KeyValuePair_2_t6952  L_17 = ___x;
		KeyValuePair_2_t6952  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t99_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		KeyValuePair_2_t6952  L_20 = ___x;
		KeyValuePair_2_t6952  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		KeyValuePair_2_t6952  L_23 = ___y;
		KeyValuePair_2_t6952  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t99_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t661 * L_27 = (ArgumentException_t661 *)il2cpp_codegen_object_new (ArgumentException_t661_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3819(L_27, (String_t*)(String_t*) &_stringLiteral3749, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Comparison_1_gen_88.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Comparison_1_gen_88MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m55254_gshared (Comparison_1_t7937 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m55255_gshared (Comparison_1_t7937 * __this, KeyValuePair_2_t6952  ___x, KeyValuePair_2_t6952  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m55255((Comparison_1_t7937 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t6952  ___x, KeyValuePair_2_t6952  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t6952  ___x, KeyValuePair_2_t6952  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t6952_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m55256_gshared (Comparison_1_t7937 * __this, KeyValuePair_2_t6952  ___x, KeyValuePair_2_t6952  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t6952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12498);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(KeyValuePair_2_t6952_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(KeyValuePair_2_t6952_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m55257_gshared (Comparison_1_t7937 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_U3CGe_123.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_U3CGe_123MethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_gen_175.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10MethodDeclarations.h"
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClientMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
struct ParseClient_t1175;
struct Object_t;
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClient.h"
// Declaration System.Object Parse.ParseClient::ConvertTo<Parse.ParseGeoPoint>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<Parse.ParseGeoPoint>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisParseGeoPoint_t1192_m64517_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisParseGeoPoint_t1192_m64517(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisParseGeoPoint_t1192_m64517_gshared)(__this /* static, unused */, ___value, method)


// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>::MoveNext()
extern TypeInfo* ParseClient_t1175_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__4_MoveNext_m55361_gshared (U3CGetEnumeratorU3Ed__4_t7945 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2336);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	KeyValuePair_2_t727  V_2 = {0};
	KeyValuePair_2_t727  V_3 = {0};
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
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001e;
			}
			if (L_1 == 1)
			{
				goto IL_00b0;
			}
			if (L_1 == 2)
			{
				goto IL_0096;
			}
		}

IL_0019:
		{
			goto IL_00b0;
		}

IL_001e:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleDictionaryWrapper_2_t1973 * L_2 = (FlexibleDictionaryWrapper_2_t1973 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t*)L_3);
			Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), (Object_t*)L_3);
			__this->___U3CU3E7__wrap6_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_009d;
		}

IL_0044:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
			NullCheck((Object_t*)L_5);
			KeyValuePair_2_t727  L_6 = (KeyValuePair_2_t727 )InterfaceFuncInvoker0< KeyValuePair_2_t727  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (Object_t*)L_5);
			__this->___U3CpairU3E5__5_3 = L_6;
			KeyValuePair_2_t727  L_7 = (KeyValuePair_2_t727 )(__this->___U3CpairU3E5__5_3);
			V_2 = (KeyValuePair_2_t727 )L_7;
			String_t* L_8 = (( String_t* (*) (KeyValuePair_2_t727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t727 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
			KeyValuePair_2_t727  L_9 = (KeyValuePair_2_t727 )(__this->___U3CpairU3E5__5_3);
			V_3 = (KeyValuePair_2_t727 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t727 *)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			Object_t * L_11 = L_10;
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1175_il2cpp_TypeInfo_var);
			Object_t * L_12 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_11), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			KeyValuePair_2_t7054  L_13 = {0};
			(( void (*) (KeyValuePair_2_t7054 *, String_t*, ParseGeoPoint_t1192 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(&L_13, (String_t*)L_8, (ParseGeoPoint_t1192 )((*(ParseGeoPoint_t1192 *)((ParseGeoPoint_t1192 *)UnBox (L_12, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			__this->___U3CU3E2__current_0 = L_13;
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_00bb;
		}

IL_0096:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_009d:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
			NullCheck((Object_t *)L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_14);
			if (L_15)
			{
				goto IL_0044;
			}
		}

IL_00aa:
		{
			NullCheck((U3CGetEnumeratorU3Ed__4_t7945 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__4_t7945 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((U3CGetEnumeratorU3Ed__4_t7945 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		}

IL_00b0:
		{
			V_0 = (bool)0;
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FAULT_00b4;
	}

FAULT_00b4:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__4_t7945 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__4_t7945 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((U3CGetEnumeratorU3Ed__4_t7945 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		IL2CPP_END_FINALLY(180)
	} // end fault
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00bb:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,TOut>>.get_Current()
extern "C" KeyValuePair_2_t7054  U3CGetEnumeratorU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CTOutU3EU3E_get_Current_m55362_gshared (U3CGetEnumeratorU3Ed__4_t7945 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t7054  L_0 = (KeyValuePair_2_t7054 )(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m55363_gshared (U3CGetEnumeratorU3Ed__4_t7945 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__4_System_IDisposable_Dispose_m55364_gshared (U3CGetEnumeratorU3Ed__4_t7945 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__4_t7945 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__4_t7945 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((U3CGetEnumeratorU3Ed__4_t7945 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0021:
	{
		return;
	}
}
// System.Object Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_get_Current_m55365_gshared (U3CGetEnumeratorU3Ed__4_t7945 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t7054  L_0 = (KeyValuePair_2_t7054 )(__this->___U3CU3E2__current_0);
		KeyValuePair_2_t7054  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return L_2;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__4__ctor_m55366_gshared (U3CGetEnumeratorU3Ed__4_t7945 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<Parse.ParseGeoPoint,System.Object>::<>m__Finally7()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally7_m55367_gshared (U3CGetEnumeratorU3Ed__4_t7945 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t* L_0 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_1 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
		NullCheck((Object_t *)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_17MethodDeclarations.h"

// System.SByte
#include "mscorlib_System_SByte.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
#include "mscorlib_System_Action_1_gen_53.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_3.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_gen_13.h"
// System.AggregateException
#include "Parse_Unity_System_AggregateException.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_TaskMethodDeclarations.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_3MethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_gen_13MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58395_gshared (Task_1_t1498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C" int8_t Task_1_get_Result_m58396_gshared (Task_1_t1498 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		int8_t L_0 = (int8_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58397_gshared (Task_1_t1498 * __this, Action_1_t8162 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8163 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8163 * L_0 = (U3CU3Ec__DisplayClass1_t8163 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8163 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8163 *)L_0;
		U3CU3Ec__DisplayClass1_t8163 * L_1 = V_0;
		Action_1_t8162 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8163 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58398_gshared (Task_1_t1498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58399_gshared (Task_1_t1498 * __this, int8_t ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			int8_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1498 *)__this);
			(( void (*) (Task_1_t1498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58400_gshared (Task_1_t1498 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1498 *)__this);
			(( void (*) (Task_1_t1498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58401_gshared (Task_1_t1498 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1498 *)__this);
			(( void (*) (Task_1_t1498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
#include "mscorlib_System_Action_1_gen_53MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.SByte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58406_gshared (U3CU3Ec__DisplayClass1_t8163 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.SByte>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58407_gshared (U3CU3Ec__DisplayClass1_t8163 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8162 * L_0 = (Action_1_t8162 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8162 *)L_0);
		VirtActionInvoker1< Task_1_t1498 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>::Invoke(!0) */, (Action_1_t8162 *)L_0, (Task_1_t1498 *)((Task_1_t1498 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.SByte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_10.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.SByte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_10MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>
#include "System_Core_System_Func_2_gen_793.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>
#include "System_Core_System_Func_2_gen_793MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.SByte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58416_gshared (U3CU3Ec__DisplayClass1_2_t8166 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.SByte>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" int8_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58417_gshared (U3CU3Ec__DisplayClass1_2_t8166 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8165 * L_0 = (Func_2_t8165 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8165 *)L_0);
		int8_t L_2 = (int8_t)VirtFuncInvoker1< int8_t, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>::Invoke(!0) */, (Func_2_t8165 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.SByte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_11.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.SByte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_11MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_6.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "Parse_Unity_System_Runtime_ExceptionServices_ExceptionDispat.h"
// System.Func`2<System.Threading.Tasks.Task,System.SByte>
#include "System_Core_System_Func_2_gen_794.h"
// System.AggregateException
#include "Parse_Unity_System_AggregateExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "Parse_Unity_System_Runtime_ExceptionServices_ExceptionDispatMethodDeclarations.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_6MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.SByte>
#include "System_Core_System_Func_2_gen_794MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1498;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.SByte>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.SByte>(T)
extern "C" Task_1_t1498 * Task_FromResult_TisSByte_t88_m65093_gshared (Object_t * __this /* static, unused */, int8_t ___result, const MethodInfo* method);
#define Task_FromResult_TisSByte_t88_m65093(__this /* static, unused */, ___result, method) (( Task_1_t1498 * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))Task_FromResult_TisSByte_t88_m65093_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.SByte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58422_gshared (U3CU3Ec__DisplayClass7_1_t8168 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.SByte>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* SByte_t88_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1498 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58423_gshared (U3CU3Ec__DisplayClass7_1_t8168 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8169 * V_1 = {0};
	int8_t V_2 = 0x0;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (SByte_t88_il2cpp_TypeInfo_var, (&V_2));
		int8_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1498 * L_15 = (( Task_1_t1498 * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (int8_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8169 * L_18 = (TaskCompletionSource_1_t8169 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8169 *)L_18;
		TaskCompletionSource_1_t8169 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8169 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8169 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8169 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8169 *)L_20);
		Task_1_t1498 * L_21 = (( Task_1_t1498 * (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8169 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8167 * L_22 = (Func_2_t8167 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8167 *)L_22);
		int8_t L_24 = (int8_t)VirtFuncInvoker1< int8_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.SByte>::Invoke(!0) */, (Func_2_t8167 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1498 * L_25 = (( Task_1_t1498 * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (int8_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58424_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1498 * L_0 = (Task_1_t1498 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		(( void (*) (TaskCompletionSource_1_t8169 *, Task_1_t1498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8169 *)__this, (Task_1_t1498 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1498 * TaskCompletionSource_1_get_Task_m58425_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method)
{
	{
		Task_1_t1498 * L_0 = (Task_1_t1498 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58426_gshared (TaskCompletionSource_1_t8169 * __this, Task_1_t1498 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1498 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58427_gshared (TaskCompletionSource_1_t8169 * __this, int8_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		Task_1_t1498 * L_0 = (( Task_1_t1498 * (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8169 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int8_t L_1 = ___result;
		NullCheck((Task_1_t1498 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1498 *, int8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1498 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58428_gshared (TaskCompletionSource_1_t8169 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		Task_1_t1498 * L_0 = (( Task_1_t1498 * (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8169 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1498 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1498 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1498 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58429_gshared (TaskCompletionSource_1_t8169 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		Task_1_t1498 * L_2 = (( Task_1_t1498 * (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8169 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1498 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1498 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1498 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		Task_1_t1498 * L_5 = (( Task_1_t1498 * (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8169 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1498 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1498 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1498 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58430_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		Task_1_t1498 * L_0 = (( Task_1_t1498 * (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8169 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1498 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1498 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58431_gshared (TaskCompletionSource_1_t8169 * __this, int8_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		int8_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8169 *, int8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8169 *)__this, (int8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58432_gshared (TaskCompletionSource_1_t8169 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8169 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8169 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58433_gshared (TaskCompletionSource_1_t8169 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8169 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8169 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58434_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8169 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8169 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_3MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_41.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_41MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.SByte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58450_gshared (U3CU3Ec__DisplayClass7_1_t8173 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.SByte>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58451_gshared (U3CU3Ec__DisplayClass7_1_t8173 * __this, Task_1_t8171 * ___t, const MethodInfo* method)
{
	Action_1_t8162 * V_0 = {0};
	Task_1_t1498 * G_B6_0 = {0};
	Task_1_t1498 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8162 *)NULL;
		Task_1_t8171 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8169 * L_2 = (TaskCompletionSource_1_t8169 *)(__this->___tcs_0);
		Task_1_t8171 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8169 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8169 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8169 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8171 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8169 * L_7 = (TaskCompletionSource_1_t8169 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8169 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8169 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8171 * L_8 = ___t;
		NullCheck((Task_1_t8171 *)L_8);
		Task_1_t1498 * L_9 = (( Task_1_t1498 * (*) (Task_1_t8171 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8171 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8162 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8162 * L_12 = (Action_1_t8162 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8162 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8162 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8162 * L_13 = V_0;
		NullCheck((Task_1_t1498 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1498 *, Action_1_t8162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1498 *)G_B6_0, (Action_1_t8162 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.SByte>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58452_gshared (U3CU3Ec__DisplayClass7_1_t8173 * __this, Task_1_t1498 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1498 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8169 * L_2 = (TaskCompletionSource_1_t8169 *)(__this->___tcs_0);
		Task_1_t1498 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8169 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8169 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8169 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1498 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8169 * L_7 = (TaskCompletionSource_1_t8169 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8169 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8169 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8169 * L_8 = (TaskCompletionSource_1_t8169 *)(__this->___tcs_0);
		Task_1_t1498 * L_9 = ___inner;
		NullCheck((Task_1_t1498 *)L_9);
		int8_t L_10 = (( int8_t (*) (Task_1_t1498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1498 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8169 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8169 *, int8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8169 *)L_8, (int8_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_18.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_18MethodDeclarations.h"

// System.Int16
#include "mscorlib_System_Int16.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
#include "mscorlib_System_Action_1_gen_55.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_4.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_4MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58453_gshared (Task_1_t1499 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C" int16_t Task_1_get_Result_m58454_gshared (Task_1_t1499 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		int16_t L_0 = (int16_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58455_gshared (Task_1_t1499 * __this, Action_1_t8174 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8175 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8175 * L_0 = (U3CU3Ec__DisplayClass1_t8175 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8175 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8175 *)L_0;
		U3CU3Ec__DisplayClass1_t8175 * L_1 = V_0;
		Action_1_t8174 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8175 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58456_gshared (Task_1_t1499 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58457_gshared (Task_1_t1499 * __this, int16_t ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			int16_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1499 *)__this);
			(( void (*) (Task_1_t1499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1499 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58458_gshared (Task_1_t1499 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1499 *)__this);
			(( void (*) (Task_1_t1499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1499 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58459_gshared (Task_1_t1499 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1499 *)__this);
			(( void (*) (Task_1_t1499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1499 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
#include "mscorlib_System_Action_1_gen_55MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58464_gshared (U3CU3Ec__DisplayClass1_t8175 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int16>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58465_gshared (U3CU3Ec__DisplayClass1_t8175 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8174 * L_0 = (Action_1_t8174 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8174 *)L_0);
		VirtActionInvoker1< Task_1_t1499 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>::Invoke(!0) */, (Action_1_t8174 *)L_0, (Task_1_t1499 *)((Task_1_t1499 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_12.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_12MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>
#include "System_Core_System_Func_2_gen_797.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>
#include "System_Core_System_Func_2_gen_797MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58474_gshared (U3CU3Ec__DisplayClass1_2_t8178 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int16>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" int16_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58475_gshared (U3CU3Ec__DisplayClass1_2_t8178 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8177 * L_0 = (Func_2_t8177 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8177 *)L_0);
		int16_t L_2 = (int16_t)VirtFuncInvoker1< int16_t, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>::Invoke(!0) */, (Func_2_t8177 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_13.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_13MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_7.h"
// System.Func`2<System.Threading.Tasks.Task,System.Int16>
#include "System_Core_System_Func_2_gen_798.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_7MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Int16>
#include "System_Core_System_Func_2_gen_798MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1499;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int16>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int16>(T)
extern "C" Task_1_t1499 * Task_FromResult_TisInt16_t692_m65100_gshared (Object_t * __this /* static, unused */, int16_t ___result, const MethodInfo* method);
#define Task_FromResult_TisInt16_t692_m65100(__this /* static, unused */, ___result, method) (( Task_1_t1499 * (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))Task_FromResult_TisInt16_t692_m65100_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58480_gshared (U3CU3Ec__DisplayClass7_1_t8180 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int16>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* Int16_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1499 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58481_gshared (U3CU3Ec__DisplayClass7_1_t8180 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(272);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8181 * V_1 = {0};
	int16_t V_2 = 0;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (Int16_t692_il2cpp_TypeInfo_var, (&V_2));
		int16_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1499 * L_15 = (( Task_1_t1499 * (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (int16_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8181 * L_18 = (TaskCompletionSource_1_t8181 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8181 *)L_18;
		TaskCompletionSource_1_t8181 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8181 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8181 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8181 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8181 *)L_20);
		Task_1_t1499 * L_21 = (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8181 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8179 * L_22 = (Func_2_t8179 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8179 *)L_22);
		int16_t L_24 = (int16_t)VirtFuncInvoker1< int16_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Int16>::Invoke(!0) */, (Func_2_t8179 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1499 * L_25 = (( Task_1_t1499 * (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (int16_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58482_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1499 * L_0 = (Task_1_t1499 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		(( void (*) (TaskCompletionSource_1_t8181 *, Task_1_t1499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8181 *)__this, (Task_1_t1499 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1499 * TaskCompletionSource_1_get_Task_m58483_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method)
{
	{
		Task_1_t1499 * L_0 = (Task_1_t1499 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58484_gshared (TaskCompletionSource_1_t8181 * __this, Task_1_t1499 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1499 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58485_gshared (TaskCompletionSource_1_t8181 * __this, int16_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		Task_1_t1499 * L_0 = (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int16_t L_1 = ___result;
		NullCheck((Task_1_t1499 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1499 *, int16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1499 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58486_gshared (TaskCompletionSource_1_t8181 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		Task_1_t1499 * L_0 = (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1499 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1499 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1499 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58487_gshared (TaskCompletionSource_1_t8181 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		Task_1_t1499 * L_2 = (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1499 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1499 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1499 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		Task_1_t1499 * L_5 = (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1499 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1499 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1499 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58488_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		Task_1_t1499 * L_0 = (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1499 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1499 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58489_gshared (TaskCompletionSource_1_t8181 * __this, int16_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		int16_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8181 *, int16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8181 *)__this, (int16_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58490_gshared (TaskCompletionSource_1_t8181 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8181 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8181 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58491_gshared (TaskCompletionSource_1_t8181 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8181 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8181 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58492_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8181 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_4MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_42.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_42MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58508_gshared (U3CU3Ec__DisplayClass7_1_t8185 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int16>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58509_gshared (U3CU3Ec__DisplayClass7_1_t8185 * __this, Task_1_t8183 * ___t, const MethodInfo* method)
{
	Action_1_t8174 * V_0 = {0};
	Task_1_t1499 * G_B6_0 = {0};
	Task_1_t1499 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8174 *)NULL;
		Task_1_t8183 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8181 * L_2 = (TaskCompletionSource_1_t8181 *)(__this->___tcs_0);
		Task_1_t8183 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8181 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8181 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8181 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8183 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8181 * L_7 = (TaskCompletionSource_1_t8181 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8181 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8181 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8183 * L_8 = ___t;
		NullCheck((Task_1_t8183 *)L_8);
		Task_1_t1499 * L_9 = (( Task_1_t1499 * (*) (Task_1_t8183 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8183 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8174 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8174 * L_12 = (Action_1_t8174 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8174 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8174 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8174 * L_13 = V_0;
		NullCheck((Task_1_t1499 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1499 *, Action_1_t8174 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1499 *)G_B6_0, (Action_1_t8174 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int16>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58510_gshared (U3CU3Ec__DisplayClass7_1_t8185 * __this, Task_1_t1499 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1499 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8181 * L_2 = (TaskCompletionSource_1_t8181 *)(__this->___tcs_0);
		Task_1_t1499 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8181 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8181 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8181 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1499 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8181 * L_7 = (TaskCompletionSource_1_t8181 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8181 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8181 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8181 * L_8 = (TaskCompletionSource_1_t8181 *)(__this->___tcs_0);
		Task_1_t1499 * L_9 = ___inner;
		NullCheck((Task_1_t1499 *)L_9);
		int16_t L_10 = (( int16_t (*) (Task_1_t1499 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1499 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8181 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8181 *, int16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8181 *)L_8, (int16_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19MethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
#include "mscorlib_System_Action_1_gen_57.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_5.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_5MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58511_gshared (Task_1_t1500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C" uint16_t Task_1_get_Result_m58512_gshared (Task_1_t1500 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		uint16_t L_0 = (uint16_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58513_gshared (Task_1_t1500 * __this, Action_1_t8186 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8187 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8187 * L_0 = (U3CU3Ec__DisplayClass1_t8187 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8187 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8187 *)L_0;
		U3CU3Ec__DisplayClass1_t8187 * L_1 = V_0;
		Action_1_t8186 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8187 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58514_gshared (Task_1_t1500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58515_gshared (Task_1_t1500 * __this, uint16_t ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			uint16_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1500 *)__this);
			(( void (*) (Task_1_t1500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1500 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58516_gshared (Task_1_t1500 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1500 *)__this);
			(( void (*) (Task_1_t1500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1500 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58517_gshared (Task_1_t1500 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1500 *)__this);
			(( void (*) (Task_1_t1500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1500 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
#include "mscorlib_System_Action_1_gen_57MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58522_gshared (U3CU3Ec__DisplayClass1_t8187 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt16>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58523_gshared (U3CU3Ec__DisplayClass1_t8187 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8186 * L_0 = (Action_1_t8186 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8186 *)L_0);
		VirtActionInvoker1< Task_1_t1500 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>::Invoke(!0) */, (Action_1_t8186 *)L_0, (Task_1_t1500 *)((Task_1_t1500 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_14.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_14MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt16>
#include "System_Core_System_Func_2_gen_801.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt16>
#include "System_Core_System_Func_2_gen_801MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58532_gshared (U3CU3Ec__DisplayClass1_2_t8190 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt16>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" uint16_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58533_gshared (U3CU3Ec__DisplayClass1_2_t8190 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8189 * L_0 = (Func_2_t8189 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8189 *)L_0);
		uint16_t L_2 = (uint16_t)VirtFuncInvoker1< uint16_t, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt16>::Invoke(!0) */, (Func_2_t8189 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_15.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt16>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_15MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_8.h"
// System.Func`2<System.Threading.Tasks.Task,System.UInt16>
#include "System_Core_System_Func_2_gen_802.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_8MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.UInt16>
#include "System_Core_System_Func_2_gen_802MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1500;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.UInt16>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.UInt16>(T)
extern "C" Task_1_t1500 * Task_FromResult_TisUInt16_t693_m65107_gshared (Object_t * __this /* static, unused */, uint16_t ___result, const MethodInfo* method);
#define Task_FromResult_TisUInt16_t693_m65107(__this /* static, unused */, ___result, method) (( Task_1_t1500 * (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))Task_FromResult_TisUInt16_t693_m65107_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58538_gshared (U3CU3Ec__DisplayClass7_1_t8192 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt16>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* UInt16_t693_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1500 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58539_gshared (U3CU3Ec__DisplayClass7_1_t8192 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8193 * V_1 = {0};
	uint16_t V_2 = 0;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (UInt16_t693_il2cpp_TypeInfo_var, (&V_2));
		uint16_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1500 * L_15 = (( Task_1_t1500 * (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint16_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8193 * L_18 = (TaskCompletionSource_1_t8193 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8193 *)L_18;
		TaskCompletionSource_1_t8193 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8193 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8193 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8193 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8193 *)L_20);
		Task_1_t1500 * L_21 = (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8193 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8191 * L_22 = (Func_2_t8191 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8191 *)L_22);
		uint16_t L_24 = (uint16_t)VirtFuncInvoker1< uint16_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.UInt16>::Invoke(!0) */, (Func_2_t8191 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1500 * L_25 = (( Task_1_t1500 * (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint16_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58540_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1500 * L_0 = (Task_1_t1500 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		(( void (*) (TaskCompletionSource_1_t8193 *, Task_1_t1500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8193 *)__this, (Task_1_t1500 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1500 * TaskCompletionSource_1_get_Task_m58541_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method)
{
	{
		Task_1_t1500 * L_0 = (Task_1_t1500 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58542_gshared (TaskCompletionSource_1_t8193 * __this, Task_1_t1500 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1500 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58543_gshared (TaskCompletionSource_1_t8193 * __this, uint16_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		Task_1_t1500 * L_0 = (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8193 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		uint16_t L_1 = ___result;
		NullCheck((Task_1_t1500 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1500 *, uint16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1500 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58544_gshared (TaskCompletionSource_1_t8193 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		Task_1_t1500 * L_0 = (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8193 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1500 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1500 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1500 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58545_gshared (TaskCompletionSource_1_t8193 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		Task_1_t1500 * L_2 = (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8193 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1500 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1500 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1500 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		Task_1_t1500 * L_5 = (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8193 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1500 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1500 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1500 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58546_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		Task_1_t1500 * L_0 = (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8193 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1500 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1500 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58547_gshared (TaskCompletionSource_1_t8193 * __this, uint16_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8193 *, uint16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8193 *)__this, (uint16_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58548_gshared (TaskCompletionSource_1_t8193 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8193 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8193 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58549_gshared (TaskCompletionSource_1_t8193 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8193 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8193 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58550_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8193 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8193 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_5MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_43.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_43MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt16>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58566_gshared (U3CU3Ec__DisplayClass7_1_t8197 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt16>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58567_gshared (U3CU3Ec__DisplayClass7_1_t8197 * __this, Task_1_t8195 * ___t, const MethodInfo* method)
{
	Action_1_t8186 * V_0 = {0};
	Task_1_t1500 * G_B6_0 = {0};
	Task_1_t1500 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8186 *)NULL;
		Task_1_t8195 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8193 * L_2 = (TaskCompletionSource_1_t8193 *)(__this->___tcs_0);
		Task_1_t8195 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8193 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8193 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8193 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8195 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8193 * L_7 = (TaskCompletionSource_1_t8193 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8193 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8193 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8195 * L_8 = ___t;
		NullCheck((Task_1_t8195 *)L_8);
		Task_1_t1500 * L_9 = (( Task_1_t1500 * (*) (Task_1_t8195 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8195 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8186 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8186 * L_12 = (Action_1_t8186 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8186 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8186 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8186 * L_13 = V_0;
		NullCheck((Task_1_t1500 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1500 *, Action_1_t8186 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1500 *)G_B6_0, (Action_1_t8186 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt16>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58568_gshared (U3CU3Ec__DisplayClass7_1_t8197 * __this, Task_1_t1500 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1500 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8193 * L_2 = (TaskCompletionSource_1_t8193 *)(__this->___tcs_0);
		Task_1_t1500 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8193 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8193 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8193 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1500 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8193 * L_7 = (TaskCompletionSource_1_t8193 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8193 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8193 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8193 * L_8 = (TaskCompletionSource_1_t8193 *)(__this->___tcs_0);
		Task_1_t1500 * L_9 = ___inner;
		NullCheck((Task_1_t1500 *)L_9);
		uint16_t L_10 = (( uint16_t (*) (Task_1_t1500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1500 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8193 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8193 *, uint16_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8193 *)L_8, (uint16_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_20.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_20MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
#include "mscorlib_System_Action_1_gen_59.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_6.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_6MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58569_gshared (Task_1_t1501 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m58570_gshared (Task_1_t1501 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		uint32_t L_0 = (uint32_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58571_gshared (Task_1_t1501 * __this, Action_1_t8198 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8199 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8199 * L_0 = (U3CU3Ec__DisplayClass1_t8199 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8199 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8199 *)L_0;
		U3CU3Ec__DisplayClass1_t8199 * L_1 = V_0;
		Action_1_t8198 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8199 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58572_gshared (Task_1_t1501 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58573_gshared (Task_1_t1501 * __this, uint32_t ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			uint32_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1501 *)__this);
			(( void (*) (Task_1_t1501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1501 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58574_gshared (Task_1_t1501 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1501 *)__this);
			(( void (*) (Task_1_t1501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1501 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58575_gshared (Task_1_t1501 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1501 *)__this);
			(( void (*) (Task_1_t1501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1501 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
#include "mscorlib_System_Action_1_gen_59MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58580_gshared (U3CU3Ec__DisplayClass1_t8199 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt32>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58581_gshared (U3CU3Ec__DisplayClass1_t8199 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8198 * L_0 = (Action_1_t8198 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8198 *)L_0);
		VirtActionInvoker1< Task_1_t1501 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>::Invoke(!0) */, (Action_1_t8198 *)L_0, (Task_1_t1501 *)((Task_1_t1501 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt32>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_16.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt32>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_16MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>
#include "System_Core_System_Func_2_gen_805.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>
#include "System_Core_System_Func_2_gen_805MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58590_gshared (U3CU3Ec__DisplayClass1_2_t8202 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt32>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" uint32_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58591_gshared (U3CU3Ec__DisplayClass1_2_t8202 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8201 * L_0 = (Func_2_t8201 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8201 *)L_0);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker1< uint32_t, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>::Invoke(!0) */, (Func_2_t8201 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt32>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_17.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt32>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_17MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_9.h"
// System.Func`2<System.Threading.Tasks.Task,System.UInt32>
#include "System_Core_System_Func_2_gen_806.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_9MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.UInt32>
#include "System_Core_System_Func_2_gen_806MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1501;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.UInt32>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.UInt32>(T)
extern "C" Task_1_t1501 * Task_FromResult_TisUInt32_t690_m65116_gshared (Object_t * __this /* static, unused */, uint32_t ___result, const MethodInfo* method);
#define Task_FromResult_TisUInt32_t690_m65116(__this /* static, unused */, ___result, method) (( Task_1_t1501 * (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))Task_FromResult_TisUInt32_t690_m65116_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58596_gshared (U3CU3Ec__DisplayClass7_1_t8204 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt32>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* UInt32_t690_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1501 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58597_gshared (U3CU3Ec__DisplayClass7_1_t8204 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8205 * V_1 = {0};
	uint32_t V_2 = 0;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (UInt32_t690_il2cpp_TypeInfo_var, (&V_2));
		uint32_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1501 * L_15 = (( Task_1_t1501 * (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8205 * L_18 = (TaskCompletionSource_1_t8205 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8205 *)L_18;
		TaskCompletionSource_1_t8205 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8205 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8205 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8205 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8205 *)L_20);
		Task_1_t1501 * L_21 = (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8205 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8203 * L_22 = (Func_2_t8203 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8203 *)L_22);
		uint32_t L_24 = (uint32_t)VirtFuncInvoker1< uint32_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.UInt32>::Invoke(!0) */, (Func_2_t8203 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1501 * L_25 = (( Task_1_t1501 * (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58598_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1501 * L_0 = (Task_1_t1501 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		(( void (*) (TaskCompletionSource_1_t8205 *, Task_1_t1501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8205 *)__this, (Task_1_t1501 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1501 * TaskCompletionSource_1_get_Task_m58599_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method)
{
	{
		Task_1_t1501 * L_0 = (Task_1_t1501 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58600_gshared (TaskCompletionSource_1_t8205 * __this, Task_1_t1501 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1501 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58601_gshared (TaskCompletionSource_1_t8205 * __this, uint32_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		Task_1_t1501 * L_0 = (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8205 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		uint32_t L_1 = ___result;
		NullCheck((Task_1_t1501 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1501 *, uint32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1501 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58602_gshared (TaskCompletionSource_1_t8205 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		Task_1_t1501 * L_0 = (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8205 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1501 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1501 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1501 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58603_gshared (TaskCompletionSource_1_t8205 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		Task_1_t1501 * L_2 = (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8205 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1501 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1501 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1501 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		Task_1_t1501 * L_5 = (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8205 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1501 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1501 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1501 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58604_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		Task_1_t1501 * L_0 = (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8205 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1501 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1501 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58605_gshared (TaskCompletionSource_1_t8205 * __this, uint32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8205 *, uint32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8205 *)__this, (uint32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58606_gshared (TaskCompletionSource_1_t8205 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8205 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8205 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58607_gshared (TaskCompletionSource_1_t8205 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8205 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8205 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58608_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8205 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8205 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_6MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_44.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_44MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58624_gshared (U3CU3Ec__DisplayClass7_1_t8209 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt32>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58625_gshared (U3CU3Ec__DisplayClass7_1_t8209 * __this, Task_1_t8207 * ___t, const MethodInfo* method)
{
	Action_1_t8198 * V_0 = {0};
	Task_1_t1501 * G_B6_0 = {0};
	Task_1_t1501 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8198 *)NULL;
		Task_1_t8207 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8205 * L_2 = (TaskCompletionSource_1_t8205 *)(__this->___tcs_0);
		Task_1_t8207 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8205 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8205 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8205 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8207 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8205 * L_7 = (TaskCompletionSource_1_t8205 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8205 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8205 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8207 * L_8 = ___t;
		NullCheck((Task_1_t8207 *)L_8);
		Task_1_t1501 * L_9 = (( Task_1_t1501 * (*) (Task_1_t8207 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8207 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8198 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8198 * L_12 = (Action_1_t8198 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8198 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8198 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8198 * L_13 = V_0;
		NullCheck((Task_1_t1501 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1501 *, Action_1_t8198 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1501 *)G_B6_0, (Action_1_t8198 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt32>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58626_gshared (U3CU3Ec__DisplayClass7_1_t8209 * __this, Task_1_t1501 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1501 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8205 * L_2 = (TaskCompletionSource_1_t8205 *)(__this->___tcs_0);
		Task_1_t1501 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8205 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8205 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8205 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1501 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8205 * L_7 = (TaskCompletionSource_1_t8205 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8205 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8205 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8205 * L_8 = (TaskCompletionSource_1_t8205 *)(__this->___tcs_0);
		Task_1_t1501 * L_9 = ___inner;
		NullCheck((Task_1_t1501 *)L_9);
		uint32_t L_10 = (( uint32_t (*) (Task_1_t1501 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1501 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8205 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8205 *, uint32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8205 *)L_8, (uint32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_21.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_21MethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
#include "mscorlib_System_Action_1_gen_61.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_7.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_7MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58627_gshared (Task_1_t1502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m58628_gshared (Task_1_t1502 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		int64_t L_0 = (int64_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58629_gshared (Task_1_t1502 * __this, Action_1_t8210 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8211 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8211 * L_0 = (U3CU3Ec__DisplayClass1_t8211 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8211 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8211 *)L_0;
		U3CU3Ec__DisplayClass1_t8211 * L_1 = V_0;
		Action_1_t8210 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8211 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58630_gshared (Task_1_t1502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58631_gshared (Task_1_t1502 * __this, int64_t ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			int64_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1502 *)__this);
			(( void (*) (Task_1_t1502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58632_gshared (Task_1_t1502 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1502 *)__this);
			(( void (*) (Task_1_t1502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58633_gshared (Task_1_t1502 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1502 *)__this);
			(( void (*) (Task_1_t1502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
#include "mscorlib_System_Action_1_gen_61MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58638_gshared (U3CU3Ec__DisplayClass1_t8211 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int64>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58639_gshared (U3CU3Ec__DisplayClass1_t8211 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8210 * L_0 = (Action_1_t8210 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8210 *)L_0);
		VirtActionInvoker1< Task_1_t1502 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>::Invoke(!0) */, (Action_1_t8210 *)L_0, (Task_1_t1502 *)((Task_1_t1502 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_18.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_18MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int64>
#include "System_Core_System_Func_2_gen_809.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int64>
#include "System_Core_System_Func_2_gen_809MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58648_gshared (U3CU3Ec__DisplayClass1_2_t8214 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Int64>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" int64_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58649_gshared (U3CU3Ec__DisplayClass1_2_t8214 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8213 * L_0 = (Func_2_t8213 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8213 *)L_0);
		int64_t L_2 = (int64_t)VirtFuncInvoker1< int64_t, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int64>::Invoke(!0) */, (Func_2_t8213 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_19.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_19MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_10.h"
// System.Func`2<System.Threading.Tasks.Task,System.Int64>
#include "System_Core_System_Func_2_gen_810.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_10MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Int64>
#include "System_Core_System_Func_2_gen_810MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1502;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int64>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int64>(T)
extern "C" Task_1_t1502 * Task_FromResult_TisInt64_t89_m65123_gshared (Object_t * __this /* static, unused */, int64_t ___result, const MethodInfo* method);
#define Task_FromResult_TisInt64_t89_m65123(__this /* static, unused */, ___result, method) (( Task_1_t1502 * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))Task_FromResult_TisInt64_t89_m65123_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58654_gshared (U3CU3Ec__DisplayClass7_1_t8216 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Int64>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1502 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58655_gshared (U3CU3Ec__DisplayClass7_1_t8216 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8217 * V_1 = {0};
	int64_t V_2 = 0;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (Int64_t89_il2cpp_TypeInfo_var, (&V_2));
		int64_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1502 * L_15 = (( Task_1_t1502 * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (int64_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8217 * L_18 = (TaskCompletionSource_1_t8217 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8217 *)L_18;
		TaskCompletionSource_1_t8217 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8217 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8217 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8217 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8217 *)L_20);
		Task_1_t1502 * L_21 = (( Task_1_t1502 * (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8217 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8215 * L_22 = (Func_2_t8215 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8215 *)L_22);
		int64_t L_24 = (int64_t)VirtFuncInvoker1< int64_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Int64>::Invoke(!0) */, (Func_2_t8215 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1502 * L_25 = (( Task_1_t1502 * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (int64_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58656_gshared (TaskCompletionSource_1_t8217 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1502 * L_0 = (Task_1_t1502 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		(( void (*) (TaskCompletionSource_1_t8217 *, Task_1_t1502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8217 *)__this, (Task_1_t1502 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1502 * TaskCompletionSource_1_get_Task_m58657_gshared (TaskCompletionSource_1_t8217 * __this, const MethodInfo* method)
{
	{
		Task_1_t1502 * L_0 = (Task_1_t1502 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58658_gshared (TaskCompletionSource_1_t8217 * __this, Task_1_t1502 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1502 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58659_gshared (TaskCompletionSource_1_t8217 * __this, int64_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		Task_1_t1502 * L_0 = (( Task_1_t1502 * (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8217 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int64_t L_1 = ___result;
		NullCheck((Task_1_t1502 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1502 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1502 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58660_gshared (TaskCompletionSource_1_t8217 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		Task_1_t1502 * L_0 = (( Task_1_t1502 * (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8217 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1502 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1502 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1502 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58661_gshared (TaskCompletionSource_1_t8217 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		Task_1_t1502 * L_2 = (( Task_1_t1502 * (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8217 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1502 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1502 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1502 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		Task_1_t1502 * L_5 = (( Task_1_t1502 * (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8217 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1502 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1502 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1502 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58662_gshared (TaskCompletionSource_1_t8217 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		Task_1_t1502 * L_0 = (( Task_1_t1502 * (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8217 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1502 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1502 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58663_gshared (TaskCompletionSource_1_t8217 * __this, int64_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		int64_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8217 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8217 *)__this, (int64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58664_gshared (TaskCompletionSource_1_t8217 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8217 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8217 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58665_gshared (TaskCompletionSource_1_t8217 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8217 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8217 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58666_gshared (TaskCompletionSource_1_t8217 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8217 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8217 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_7MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_45.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_45MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58682_gshared (U3CU3Ec__DisplayClass7_1_t8221 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int64>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58683_gshared (U3CU3Ec__DisplayClass7_1_t8221 * __this, Task_1_t8219 * ___t, const MethodInfo* method)
{
	Action_1_t8210 * V_0 = {0};
	Task_1_t1502 * G_B6_0 = {0};
	Task_1_t1502 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8210 *)NULL;
		Task_1_t8219 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8217 * L_2 = (TaskCompletionSource_1_t8217 *)(__this->___tcs_0);
		Task_1_t8219 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8217 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8217 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8217 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8219 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8217 * L_7 = (TaskCompletionSource_1_t8217 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8217 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8217 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8219 * L_8 = ___t;
		NullCheck((Task_1_t8219 *)L_8);
		Task_1_t1502 * L_9 = (( Task_1_t1502 * (*) (Task_1_t8219 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8219 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8210 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8210 * L_12 = (Action_1_t8210 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8210 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8210 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8210 * L_13 = V_0;
		NullCheck((Task_1_t1502 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1502 *, Action_1_t8210 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1502 *)G_B6_0, (Action_1_t8210 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Int64>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58684_gshared (U3CU3Ec__DisplayClass7_1_t8221 * __this, Task_1_t1502 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1502 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8217 * L_2 = (TaskCompletionSource_1_t8217 *)(__this->___tcs_0);
		Task_1_t1502 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8217 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8217 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8217 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1502 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8217 * L_7 = (TaskCompletionSource_1_t8217 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8217 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8217 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8217 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8217 * L_8 = (TaskCompletionSource_1_t8217 *)(__this->___tcs_0);
		Task_1_t1502 * L_9 = ___inner;
		NullCheck((Task_1_t1502 *)L_9);
		int64_t L_10 = (( int64_t (*) (Task_1_t1502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1502 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8217 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8217 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8217 *)L_8, (int64_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_22.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_22MethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
#include "mscorlib_System_Action_1_gen_63.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_8.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_8MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58685_gshared (Task_1_t1503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m58686_gshared (Task_1_t1503 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		uint64_t L_0 = (uint64_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58687_gshared (Task_1_t1503 * __this, Action_1_t8222 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8223 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8223 * L_0 = (U3CU3Ec__DisplayClass1_t8223 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8223 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8223 *)L_0;
		U3CU3Ec__DisplayClass1_t8223 * L_1 = V_0;
		Action_1_t8222 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8223 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58688_gshared (Task_1_t1503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58689_gshared (Task_1_t1503 * __this, uint64_t ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			uint64_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1503 *)__this);
			(( void (*) (Task_1_t1503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1503 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58690_gshared (Task_1_t1503 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1503 *)__this);
			(( void (*) (Task_1_t1503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1503 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58691_gshared (Task_1_t1503 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1503 *)__this);
			(( void (*) (Task_1_t1503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1503 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
#include "mscorlib_System_Action_1_gen_63MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58696_gshared (U3CU3Ec__DisplayClass1_t8223 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.UInt64>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58697_gshared (U3CU3Ec__DisplayClass1_t8223 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8222 * L_0 = (Action_1_t8222 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8222 *)L_0);
		VirtActionInvoker1< Task_1_t1503 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>::Invoke(!0) */, (Action_1_t8222 *)L_0, (Task_1_t1503 *)((Task_1_t1503 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_20.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_20MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt64>
#include "System_Core_System_Func_2_gen_813.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt64>
#include "System_Core_System_Func_2_gen_813MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58706_gshared (U3CU3Ec__DisplayClass1_2_t8226 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.UInt64>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" uint64_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58707_gshared (U3CU3Ec__DisplayClass1_2_t8226 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8225 * L_0 = (Func_2_t8225 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8225 *)L_0);
		uint64_t L_2 = (uint64_t)VirtFuncInvoker1< uint64_t, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt64>::Invoke(!0) */, (Func_2_t8225 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_21.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt64>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_21MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_11.h"
// System.Func`2<System.Threading.Tasks.Task,System.UInt64>
#include "System_Core_System_Func_2_gen_814.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_11MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.UInt64>
#include "System_Core_System_Func_2_gen_814MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1503;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.UInt64>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.UInt64>(T)
extern "C" Task_1_t1503 * Task_FromResult_TisUInt64_t694_m65130_gshared (Object_t * __this /* static, unused */, uint64_t ___result, const MethodInfo* method);
#define Task_FromResult_TisUInt64_t694_m65130(__this /* static, unused */, ___result, method) (( Task_1_t1503 * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))Task_FromResult_TisUInt64_t694_m65130_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58712_gshared (U3CU3Ec__DisplayClass7_1_t8228 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.UInt64>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* UInt64_t694_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1503 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58713_gshared (U3CU3Ec__DisplayClass7_1_t8228 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8229 * V_1 = {0};
	uint64_t V_2 = 0;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (UInt64_t694_il2cpp_TypeInfo_var, (&V_2));
		uint64_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1503 * L_15 = (( Task_1_t1503 * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint64_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8229 * L_18 = (TaskCompletionSource_1_t8229 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8229 *)L_18;
		TaskCompletionSource_1_t8229 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8229 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8229 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8229 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8229 *)L_20);
		Task_1_t1503 * L_21 = (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8229 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8227 * L_22 = (Func_2_t8227 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8227 *)L_22);
		uint64_t L_24 = (uint64_t)VirtFuncInvoker1< uint64_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.UInt64>::Invoke(!0) */, (Func_2_t8227 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1503 * L_25 = (( Task_1_t1503 * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint64_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58714_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1503 * L_0 = (Task_1_t1503 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		(( void (*) (TaskCompletionSource_1_t8229 *, Task_1_t1503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8229 *)__this, (Task_1_t1503 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1503 * TaskCompletionSource_1_get_Task_m58715_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method)
{
	{
		Task_1_t1503 * L_0 = (Task_1_t1503 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58716_gshared (TaskCompletionSource_1_t8229 * __this, Task_1_t1503 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1503 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58717_gshared (TaskCompletionSource_1_t8229 * __this, uint64_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		Task_1_t1503 * L_0 = (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8229 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		uint64_t L_1 = ___result;
		NullCheck((Task_1_t1503 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1503 *, uint64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1503 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58718_gshared (TaskCompletionSource_1_t8229 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		Task_1_t1503 * L_0 = (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8229 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1503 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1503 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1503 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58719_gshared (TaskCompletionSource_1_t8229 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		Task_1_t1503 * L_2 = (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8229 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1503 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1503 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1503 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		Task_1_t1503 * L_5 = (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8229 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1503 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1503 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1503 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58720_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		Task_1_t1503 * L_0 = (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8229 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1503 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1503 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58721_gshared (TaskCompletionSource_1_t8229 * __this, uint64_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8229 *, uint64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8229 *)__this, (uint64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58722_gshared (TaskCompletionSource_1_t8229 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8229 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8229 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58723_gshared (TaskCompletionSource_1_t8229 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8229 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8229 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58724_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8229 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8229 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_8.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_8MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_46.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_46MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt64>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58740_gshared (U3CU3Ec__DisplayClass7_1_t8233 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt64>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58741_gshared (U3CU3Ec__DisplayClass7_1_t8233 * __this, Task_1_t8231 * ___t, const MethodInfo* method)
{
	Action_1_t8222 * V_0 = {0};
	Task_1_t1503 * G_B6_0 = {0};
	Task_1_t1503 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8222 *)NULL;
		Task_1_t8231 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8229 * L_2 = (TaskCompletionSource_1_t8229 *)(__this->___tcs_0);
		Task_1_t8231 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8229 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8229 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8229 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8231 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8229 * L_7 = (TaskCompletionSource_1_t8229 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8229 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8229 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8231 * L_8 = ___t;
		NullCheck((Task_1_t8231 *)L_8);
		Task_1_t1503 * L_9 = (( Task_1_t1503 * (*) (Task_1_t8231 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8231 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8222 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8222 * L_12 = (Action_1_t8222 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8222 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8222 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8222 * L_13 = V_0;
		NullCheck((Task_1_t1503 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1503 *, Action_1_t8222 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1503 *)G_B6_0, (Action_1_t8222 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.UInt64>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58742_gshared (U3CU3Ec__DisplayClass7_1_t8233 * __this, Task_1_t1503 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1503 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8229 * L_2 = (TaskCompletionSource_1_t8229 *)(__this->___tcs_0);
		Task_1_t1503 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8229 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8229 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8229 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1503 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8229 * L_7 = (TaskCompletionSource_1_t8229 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8229 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8229 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8229 * L_8 = (TaskCompletionSource_1_t8229 *)(__this->___tcs_0);
		Task_1_t1503 * L_9 = ___inner;
		NullCheck((Task_1_t1503 *)L_9);
		uint64_t L_10 = (( uint64_t (*) (Task_1_t1503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1503 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8229 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8229 *, uint64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8229 *)L_8, (uint64_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_24.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_24MethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
#include "mscorlib_System_Action_1_gen_65.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_9.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_9MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58750_gshared (Task_1_t1505 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m58751_gshared (Task_1_t1505 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		double L_0 = (double)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58752_gshared (Task_1_t1505 * __this, Action_1_t8234 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8235 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8235 * L_0 = (U3CU3Ec__DisplayClass1_t8235 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8235 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8235 *)L_0;
		U3CU3Ec__DisplayClass1_t8235 * L_1 = V_0;
		Action_1_t8234 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8235 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58753_gshared (Task_1_t1505 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58754_gshared (Task_1_t1505 * __this, double ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			double L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1505 *)__this);
			(( void (*) (Task_1_t1505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1505 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58755_gshared (Task_1_t1505 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1505 *)__this);
			(( void (*) (Task_1_t1505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1505 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58756_gshared (Task_1_t1505 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1505 *)__this);
			(( void (*) (Task_1_t1505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1505 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
#include "mscorlib_System_Action_1_gen_65MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Double>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58761_gshared (U3CU3Ec__DisplayClass1_t8235 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Double>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58762_gshared (U3CU3Ec__DisplayClass1_t8235 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8234 * L_0 = (Action_1_t8234 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8234 *)L_0);
		VirtActionInvoker1< Task_1_t1505 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::Invoke(!0) */, (Action_1_t8234 *)L_0, (Task_1_t1505 *)((Task_1_t1505 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Double>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_22.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Double>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_22MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>
#include "System_Core_System_Func_2_gen_817.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>
#include "System_Core_System_Func_2_gen_817MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Double>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58771_gshared (U3CU3Ec__DisplayClass1_2_t8238 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Double>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" double U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58772_gshared (U3CU3Ec__DisplayClass1_2_t8238 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8237 * L_0 = (Func_2_t8237 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8237 *)L_0);
		double L_2 = (double)VirtFuncInvoker1< double, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>::Invoke(!0) */, (Func_2_t8237 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Double>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_23.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Double>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_23MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_12.h"
// System.Func`2<System.Threading.Tasks.Task,System.Double>
#include "System_Core_System_Func_2_gen_818.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_12MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Double>
#include "System_Core_System_Func_2_gen_818MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1505;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Double>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Double>(T)
extern "C" Task_1_t1505 * Task_FromResult_TisDouble_t90_m65137_gshared (Object_t * __this /* static, unused */, double ___result, const MethodInfo* method);
#define Task_FromResult_TisDouble_t90_m65137(__this /* static, unused */, ___result, method) (( Task_1_t1505 * (*) (Object_t * /* static, unused */, double, const MethodInfo*))Task_FromResult_TisDouble_t90_m65137_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Double>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58777_gshared (U3CU3Ec__DisplayClass7_1_t8240 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Double>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* Double_t90_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1505 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58778_gshared (U3CU3Ec__DisplayClass7_1_t8240 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8241 * V_1 = {0};
	double V_2 = 0.0;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (Double_t90_il2cpp_TypeInfo_var, (&V_2));
		double L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1505 * L_15 = (( Task_1_t1505 * (*) (Object_t * /* static, unused */, double, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (double)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8241 * L_18 = (TaskCompletionSource_1_t8241 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8241 *)L_18;
		TaskCompletionSource_1_t8241 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8241 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8241 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8241 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8241 *)L_20);
		Task_1_t1505 * L_21 = (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8241 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8239 * L_22 = (Func_2_t8239 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8239 *)L_22);
		double L_24 = (double)VirtFuncInvoker1< double, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Double>::Invoke(!0) */, (Func_2_t8239 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1505 * L_25 = (( Task_1_t1505 * (*) (Object_t * /* static, unused */, double, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (double)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58779_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1505 * L_0 = (Task_1_t1505 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		(( void (*) (TaskCompletionSource_1_t8241 *, Task_1_t1505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8241 *)__this, (Task_1_t1505 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1505 * TaskCompletionSource_1_get_Task_m58780_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method)
{
	{
		Task_1_t1505 * L_0 = (Task_1_t1505 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58781_gshared (TaskCompletionSource_1_t8241 * __this, Task_1_t1505 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1505 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58782_gshared (TaskCompletionSource_1_t8241 * __this, double ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		Task_1_t1505 * L_0 = (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8241 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		double L_1 = ___result;
		NullCheck((Task_1_t1505 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1505 *, double, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1505 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58783_gshared (TaskCompletionSource_1_t8241 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		Task_1_t1505 * L_0 = (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8241 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1505 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1505 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1505 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58784_gshared (TaskCompletionSource_1_t8241 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		Task_1_t1505 * L_2 = (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8241 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1505 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1505 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1505 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		Task_1_t1505 * L_5 = (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8241 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1505 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1505 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1505 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58785_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		Task_1_t1505 * L_0 = (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8241 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1505 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1505 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58786_gshared (TaskCompletionSource_1_t8241 * __this, double ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		double L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8241 *, double, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8241 *)__this, (double)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58787_gshared (TaskCompletionSource_1_t8241 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8241 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8241 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58788_gshared (TaskCompletionSource_1_t8241 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8241 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8241 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58789_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8241 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8241 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_9.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_9MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_47.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_47MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Double>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58805_gshared (U3CU3Ec__DisplayClass7_1_t8245 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Double>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58806_gshared (U3CU3Ec__DisplayClass7_1_t8245 * __this, Task_1_t8243 * ___t, const MethodInfo* method)
{
	Action_1_t8234 * V_0 = {0};
	Task_1_t1505 * G_B6_0 = {0};
	Task_1_t1505 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8234 *)NULL;
		Task_1_t8243 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8241 * L_2 = (TaskCompletionSource_1_t8241 *)(__this->___tcs_0);
		Task_1_t8243 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8241 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8241 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8241 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8243 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8241 * L_7 = (TaskCompletionSource_1_t8241 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8241 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8241 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8243 * L_8 = ___t;
		NullCheck((Task_1_t8243 *)L_8);
		Task_1_t1505 * L_9 = (( Task_1_t1505 * (*) (Task_1_t8243 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8243 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8234 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8234 * L_12 = (Action_1_t8234 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8234 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8234 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8234 * L_13 = V_0;
		NullCheck((Task_1_t1505 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1505 *, Action_1_t8234 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1505 *)G_B6_0, (Action_1_t8234 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Double>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58807_gshared (U3CU3Ec__DisplayClass7_1_t8245 * __this, Task_1_t1505 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1505 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8241 * L_2 = (TaskCompletionSource_1_t8241 *)(__this->___tcs_0);
		Task_1_t1505 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8241 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8241 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8241 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1505 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8241 * L_7 = (TaskCompletionSource_1_t8241 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8241 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8241 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8241 * L_8 = (TaskCompletionSource_1_t8241 *)(__this->___tcs_0);
		Task_1_t1505 * L_9 = ___inner;
		NullCheck((Task_1_t1505 *)L_9);
		double L_10 = (( double (*) (Task_1_t1505 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1505 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8241 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8241 *, double, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8241 *)L_8, (double)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_25MethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
#include "mscorlib_System_Action_1_gen_67.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_10.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_10MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m58808_gshared (Task_1_t1506 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1155 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task__ctor_m6968((Task_t1155 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m58809_gshared (Task_1_t1506 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1155 *)__this);
		Task_Wait_m6974((Task_t1155 *)__this, /*hidden argument*/NULL);
		float L_0 = (float)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1116_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7012_MethodInfo_var;
extern "C" Task_t1155 * Task_1_ContinueWith_m58810_gshared (Task_1_t1506 * __this, Action_1_t8246 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		Action_1__ctor_m7012_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484474);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t8247 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t8247 * L_0 = (U3CU3Ec__DisplayClass1_t8247 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t8247 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t8247 *)L_0;
		U3CU3Ec__DisplayClass1_t8247 * L_1 = V_0;
		Action_1_t8246 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t8247 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1116 * L_5 = (Action_1_t1116 *)il2cpp_codegen_object_new (Action_1_t1116_il2cpp_TypeInfo_var);
		Action_1__ctor_m7012(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7012_MethodInfo_var);
		NullCheck((Task_t1155 *)__this);
		Task_t1155 * L_6 = Task_ContinueWith_m6975((Task_t1155 *)__this, (Action_1_t1116 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9481_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9482_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m58811_gshared (Task_1_t1506 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11181);
		IEnumerator_1_t9482_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11179);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1116 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1155 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9481_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1116 * L_5 = (Action_1_t1116 *)InterfaceFuncInvoker0< Action_1_t1116 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9482_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1116 *)L_5;
				Action_1_t1116 * L_6 = V_0;
				NullCheck((Action_1_t1116 *)L_6);
				VirtActionInvoker1< Task_t1155 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1116 *)L_6, (Task_t1155 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1155 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58812_gshared (Task_1_t1506 * __this, float ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			float L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1506 *)__this);
			(( void (*) (Task_1_t1506 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1506 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58813_gshared (Task_1_t1506 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			((Task_t1155 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1506 *)__this);
			(( void (*) (Task_1_t1506 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1506 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58814_gshared (Task_1_t1506 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1155 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1155 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1285 * L_3 = ___exception;
			((Task_t1155 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1155 *)__this)->___mutex_2);
			Monitor_PulseAll_m18976(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1506 *)__this);
			(( void (*) (Task_1_t1506 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1506 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
#include "mscorlib_System_Action_1_gen_67MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Single>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m58819_gshared (U3CU3Ec__DisplayClass1_t8247 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Single>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m58820_gshared (U3CU3Ec__DisplayClass1_t8247 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Action_1_t8246 * L_0 = (Action_1_t8246 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Action_1_t8246 *)L_0);
		VirtActionInvoker1< Task_1_t1506 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Single>>::Invoke(!0) */, (Action_1_t8246 *)L_0, (Task_1_t1506 *)((Task_1_t1506 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Single>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_24.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Single>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_24MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Single>
#include "System_Core_System_Func_2_gen_821.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Single>
#include "System_Core_System_Func_2_gen_821MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Single>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m58829_gshared (U3CU3Ec__DisplayClass1_2_t8250 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Single>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" float U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m58830_gshared (U3CU3Ec__DisplayClass1_2_t8250 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	{
		Func_2_t8249 * L_0 = (Func_2_t8249 *)(__this->___continuation_0);
		Task_t1155 * L_1 = ___t;
		NullCheck((Func_2_t8249 *)L_0);
		float L_2 = (float)VirtFuncInvoker1< float, Task_1_t1340 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Single>::Invoke(!0) */, (Func_2_t8249 *)L_0, (Task_1_t1340 *)((Task_1_t1340 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Single>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_25.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Single>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_25MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_13.h"
// System.Func`2<System.Threading.Tasks.Task,System.Single>
#include "System_Core_System_Func_2_gen_822.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_13MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Single>
#include "System_Core_System_Func_2_gen_822MethodDeclarations.h"
struct Task_t1155;
struct Task_1_t1506;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Single>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Single>(T)
extern "C" Task_1_t1506 * Task_FromResult_TisSingle_t87_m65144_gshared (Object_t * __this /* static, unused */, float ___result, const MethodInfo* method);
#define Task_FromResult_TisSingle_t87_m65144(__this /* static, unused */, ___result, method) (( Task_1_t1506 * (*) (Object_t * /* static, unused */, float, const MethodInfo*))Task_FromResult_TisSingle_t87_m65144_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Single>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58835_gshared (U3CU3Ec__DisplayClass7_1_t8252 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Single>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern "C" Task_1_t1506 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m58836_gshared (U3CU3Ec__DisplayClass7_1_t8252 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	TaskCompletionSource_1_t8253 * V_1 = {0};
	float V_2 = 0.0f;
	{
		Task_t1155 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1155 * L_2 = ___t;
		NullCheck((Task_t1155 *)L_2);
		AggregateException_t1285 * L_3 = Task_get_Exception_m6970((Task_t1155 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_3);
		AggregateException_t1285 * L_4 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1285 *)L_4;
		AggregateException_t1285 * L_5 = V_0;
		NullCheck((AggregateException_t1285 *)L_5);
		ReadOnlyCollection_1_t1284 * L_6 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1284 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1285 * L_8 = V_0;
		NullCheck((AggregateException_t1285 *)L_8);
		ReadOnlyCollection_1_t1284 * L_9 = AggregateException_get_InnerExceptions_m6937((AggregateException_t1285 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1284 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1284 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1104 * L_11 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_11);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1285 * L_12 = V_0;
		ExceptionDispatchInfo_t1104 * L_13 = ExceptionDispatchInfo_Capture_m6100(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1104 *)L_13);
		ExceptionDispatchInfo_Throw_m6104((ExceptionDispatchInfo_t1104 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (Single_t87_il2cpp_TypeInfo_var, (&V_2));
		float L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1506 * L_15 = (( Task_1_t1506 * (*) (Object_t * /* static, unused */, float, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (float)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1155 * L_16 = ___t;
		NullCheck((Task_t1155 *)L_16);
		bool L_17 = Task_get_IsCanceled_m6971((Task_t1155 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t8253 * L_18 = (TaskCompletionSource_1_t8253 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t8253 *)L_18;
		TaskCompletionSource_1_t8253 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t8253 *)L_19);
		(( void (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8253 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t8253 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t8253 *)L_20);
		Task_1_t1506 * L_21 = (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t8253 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t8251 * L_22 = (Func_2_t8251 *)(__this->___continuation_0);
		Task_t1155 * L_23 = ___t;
		NullCheck((Func_2_t8251 *)L_22);
		float L_24 = (float)VirtFuncInvoker1< float, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Single>::Invoke(!0) */, (Func_2_t8251 *)L_22, (Task_t1155 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Task_1_t1506 * L_25 = (( Task_1_t1506 * (*) (Object_t * /* static, unused */, float, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (float)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58837_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1506 * L_0 = (Task_1_t1506 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1506 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		(( void (*) (TaskCompletionSource_1_t8253 *, Task_1_t1506 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t8253 *)__this, (Task_1_t1506 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1506 * TaskCompletionSource_1_get_Task_m58838_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method)
{
	{
		Task_1_t1506 * L_0 = (Task_1_t1506 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58839_gshared (TaskCompletionSource_1_t8253 * __this, Task_1_t1506 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1506 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58840_gshared (TaskCompletionSource_1_t8253 * __this, float ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		Task_1_t1506 * L_0 = (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8253 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		float L_1 = ___result;
		NullCheck((Task_1_t1506 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1506 *, float, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1506 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58841_gshared (TaskCompletionSource_1_t8253 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		Task_1_t1506 * L_0 = (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8253 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_1 = ___exception;
		NullCheck((Task_1_t1506 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1506 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1506 *)L_0, (AggregateException_t1285 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m58842_gshared (TaskCompletionSource_1_t8253 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14801);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1285 * V_0 = {0};
	ExceptionU5BU5D_t8258* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1285 *)((AggregateException_t1285 *)IsInst(L_0, AggregateException_t1285_il2cpp_TypeInfo_var));
		AggregateException_t1285 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		Task_1_t1506 * L_2 = (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8253 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1285 * L_3 = V_0;
		NullCheck((Task_1_t1506 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1506 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1506 *)L_2, (AggregateException_t1285 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		Task_1_t1506 * L_5 = (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8253 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8258*)((ExceptionU5BU5D_t8258*)SZArrayNew(ExceptionU5BU5D_t8258_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8258* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8258* L_8 = V_1;
		AggregateException_t1285 * L_9 = (AggregateException_t1285 *)il2cpp_codegen_object_new (AggregateException_t1285_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6936(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1285 *)L_9);
		AggregateException_t1285 * L_10 = AggregateException_Flatten_m6939((AggregateException_t1285 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1506 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1506 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1506 *)L_5, (AggregateException_t1285 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58843_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		Task_1_t1506 * L_0 = (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t8253 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1506 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1506 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1506 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m58844_gshared (TaskCompletionSource_1_t8253 * __this, float ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8253 *, float, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t8253 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1693, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58845_gshared (TaskCompletionSource_1_t8253 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1285 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8253 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8253 *)__this, (AggregateException_t1285 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m58846_gshared (TaskCompletionSource_1_t8253 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t8253 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t8253 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1376 * L_2 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_2, (String_t*)(String_t*) &_stringLiteral1694, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m58847_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t8253 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t8253 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral1695, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_10.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_10MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_48.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_48MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Single>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m58863_gshared (U3CU3Ec__DisplayClass7_1_t8257 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Single>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m58864_gshared (U3CU3Ec__DisplayClass7_1_t8257 * __this, Task_1_t8255 * ___t, const MethodInfo* method)
{
	Action_1_t8246 * V_0 = {0};
	Task_1_t1506 * G_B6_0 = {0};
	Task_1_t1506 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t8246 *)NULL;
		Task_1_t8255 * L_0 = ___t;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t8253 * L_2 = (TaskCompletionSource_1_t8253 *)(__this->___tcs_0);
		Task_1_t8255 * L_3 = ___t;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8253 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8253 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8253 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t8255 * L_5 = ___t;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t8253 * L_7 = (TaskCompletionSource_1_t8253 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8253 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8253 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t8255 * L_8 = ___t;
		NullCheck((Task_1_t8255 *)L_8);
		Task_1_t1506 * L_9 = (( Task_1_t1506 * (*) (Task_1_t8255 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t8255 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t8246 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t8246 * L_12 = (Action_1_t8246 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t8246 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t8246 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t8246 * L_13 = V_0;
		NullCheck((Task_1_t1506 *)G_B6_0);
		(( Task_t1155 * (*) (Task_1_t1506 *, Action_1_t8246 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1506 *)G_B6_0, (Action_1_t8246 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Single>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m58865_gshared (U3CU3Ec__DisplayClass7_1_t8257 * __this, Task_1_t1506 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1506 * L_0 = ___inner;
		NullCheck((Task_t1155 *)L_0);
		bool L_1 = Task_get_IsFaulted_m6973((Task_t1155 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t8253 * L_2 = (TaskCompletionSource_1_t8253 *)(__this->___tcs_0);
		Task_1_t1506 * L_3 = ___inner;
		NullCheck((Task_t1155 *)L_3);
		AggregateException_t1285 * L_4 = Task_get_Exception_m6970((Task_t1155 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t8253 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t8253 *, AggregateException_t1285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t8253 *)L_2, (AggregateException_t1285 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1506 * L_5 = ___inner;
		NullCheck((Task_t1155 *)L_5);
		bool L_6 = Task_get_IsCanceled_m6971((Task_t1155 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t8253 * L_7 = (TaskCompletionSource_1_t8253 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t8253 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t8253 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t8253 * L_8 = (TaskCompletionSource_1_t8253 *)(__this->___tcs_0);
		Task_1_t1506 * L_9 = ___inner;
		NullCheck((Task_1_t1506 *)L_9);
		float L_10 = (( float (*) (Task_1_t1506 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1506 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t8253 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t8253 *, float, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t8253 *)L_8, (float)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Threading.ThreadLocal`1<System.Int32>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadLocal`1<System.Int32>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_68.h"
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.Func`1<System.Int32>
#include "System_Core_System_Func_1_gen_5.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_66.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_68MethodDeclarations.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Func`1<System.Int32>
#include "System_Core_System_Func_1_gen_5MethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_66MethodDeclarations.h"


// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Int32>::get_ThreadLocalData()
extern TypeInfo* WeakReference_t2171_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t8984_il2cpp_TypeInfo_var;
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m58944_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t2171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3292);
		ICollection_1_t8984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11289);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t1298_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		Dictionary_2_t8266 * L_1 = (Dictionary_2_t8266 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t1298_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1 = L_1;
		Object_t* L_2 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_3 = (Object_t*)L_2;
		V_0 = (Object_t*)L_3;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_4 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_5 = ((ThreadLocal_1_t1298_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		WeakReference_t2171 * L_6 = (WeakReference_t2171 *)il2cpp_codegen_object_new (WeakReference_t2171_il2cpp_TypeInfo_var);
		WeakReference__ctor_m14864(L_6, (Object_t *)L_5, /*hidden argument*/NULL);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker1< WeakReference_t2171 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.WeakReference>::Add(!0) */, ICollection_1_t8984_il2cpp_TypeInfo_var, (Object_t*)L_4, (WeakReference_t2171 *)L_6);
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_t* L_7 = V_0;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ((ThreadLocal_1_t1298_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		return L_8;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.ctor()
extern "C" void ThreadLocal_1__ctor_m58945_gshared (ThreadLocal_1_t1298 * __this, const MethodInfo* method)
{
	ThreadLocal_1_t1298 * G_B2_0 = {0};
	ThreadLocal_1_t1298 * G_B1_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t1301 * L_0 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		G_B1_0 = ((ThreadLocal_1_t1298 *)(__this));
		if (L_0)
		{
			G_B2_0 = ((ThreadLocal_1_t1298 *)(__this));
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Func_1_t1301 * L_2 = (Func_1_t1301 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Func_1_t1301 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6 = L_2;
		G_B2_0 = ((ThreadLocal_1_t1298 *)(G_B1_0));
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t1301 * L_3 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		NullCheck((ThreadLocal_1_t1298 *)G_B2_0);
		(( void (*) (ThreadLocal_1_t1298 *, Func_1_t1301 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ThreadLocal_1_t1298 *)G_B2_0, (Func_1_t1301 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m7552_gshared (ThreadLocal_1_t1298 * __this, Func_1_t1301 * ___valueFactory, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Func_1_t1301 * L_0 = ___valueFactory;
		__this->___valueFactory_5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = Interlocked_Increment_m18971(NULL /*static, unused*/, (int64_t*)(&((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0), /*hidden argument*/NULL);
		__this->___id_4 = L_1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Int32>::get_Value()
extern TypeInfo* ThreadLocal_1_t1298_il2cpp_TypeInfo_var;
extern "C" int32_t ThreadLocal_1_get_Value_m7554_gshared (ThreadLocal_1_t1298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3268);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		NullCheck((ThreadLocal_1_t1298 *)__this);
		(( void (*) (ThreadLocal_1_t1298 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t1298 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t1298_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, int64_t, int32_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (int32_t*)(&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t1298_il2cpp_TypeInfo_var);
		Object_t* L_4 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_5 = (int64_t)(__this->___id_4);
		Func_1_t1301 * L_6 = (Func_1_t1301 *)(__this->___valueFactory_5);
		NullCheck((Func_1_t1301 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* !0 System.Func`1<System.Int32>::Invoke() */, (Func_1_t1301 *)L_6);
		int32_t L_8 = (int32_t)L_7;
		V_1 = (int32_t)L_8;
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< int64_t, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_4, (int64_t)L_5, (int32_t)L_8);
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::set_Value(T)
extern TypeInfo* ThreadLocal_1_t1298_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_set_Value_m7555_gshared (ThreadLocal_1_t1298 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3268);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ThreadLocal_1_t1298 *)__this);
		(( void (*) (ThreadLocal_1_t1298 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t1298 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t1298_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		int32_t L_2 = ___value;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int64_t, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m58946_gshared (ThreadLocal_1_t1298 * __this, const MethodInfo* method)
{
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
			bool L_0 = (bool)(__this->___disposed_3);
			if (L_0)
			{
				goto IL_000e;
			}
		}

IL_0008:
		{
			NullCheck((ThreadLocal_1_t1298 *)__this);
			(( void (*) (ThreadLocal_1_t1298 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((ThreadLocal_1_t1298 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		}

IL_000e:
		{
			IL2CPP_LEAVE(0x17, FINALLY_0010);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		NullCheck((Object_t *)__this);
		Object_Finalize_m490((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t3246_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_CheckDisposed_m58947_gshared (ThreadLocal_1_t1298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5367);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___disposed_3);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t3246 * L_1 = (ObjectDisposedException_t3246 *)il2cpp_codegen_object_new (ObjectDisposedException_t3246_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11552(L_1, (String_t*)(String_t*) &_stringLiteral1183, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::Dispose()
extern TypeInfo* IList_1_t5926_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t8984_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_Dispose_m58948_gshared (ThreadLocal_1_t1298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t5926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11273);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ICollection_1_t8984_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11289);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_1 = (Object_t*)L_0;
		V_2 = (Object_t*)L_1;
		Monitor_Enter_m7091(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (int32_t)0;
			goto IL_0050;
		}

IL_0010:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_2 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_3 = V_0;
			NullCheck((Object_t*)L_2);
			WeakReference_t2171 * L_4 = (WeakReference_t2171 *)InterfaceFuncInvoker1< WeakReference_t2171 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.WeakReference>::get_Item(System.Int32) */, IList_1_t5926_il2cpp_TypeInfo_var, (Object_t*)L_2, (int32_t)L_3);
			NullCheck((WeakReference_t2171 *)L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t2171 *)L_4);
			V_1 = (Object_t*)((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)));
			Object_t* L_6 = V_1;
			if (L_6)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_7 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_8 = V_0;
			NullCheck((Object_t*)L_7);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.WeakReference>::RemoveAt(System.Int32) */, IList_1_t5926_il2cpp_TypeInfo_var, (Object_t*)L_7, (int32_t)L_8);
			int32_t L_9 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_9-(int32_t)1));
			goto IL_004c;
		}

IL_003a:
		{
			Object_t* L_10 = V_1;
			int64_t L_11 = (int64_t)(__this->___id_4);
			int64_t L_12 = L_11;
			Object_t * L_13 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_12);
			NullCheck((Object_t*)L_10);
			InterfaceFuncInvoker1< bool, Object_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), (Object_t*)L_10, (Object_t *)L_13);
		}

IL_004c:
		{
			int32_t L_14 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0050:
		{
			int32_t L_15 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_16 = ((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			NullCheck((Object_t*)L_16);
			int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.WeakReference>::get_Count() */, ICollection_1_t8984_il2cpp_TypeInfo_var, (Object_t*)L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0010;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Object_t* L_18 = V_2;
		Monitor_Exit_m7092(NULL /*static, unused*/, (Object_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0066:
	{
		__this->___disposed_3 = 1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Int32>::<.ctor>b__0()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" int32_t ThreadLocal_1_U3C_ctorU3Eb__0_m58949_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Initobj (Int32_t82_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.cctor()
extern TypeInfo* List_1_t5947_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m30522_MethodInfo_var;
extern "C" void ThreadLocal_1__cctor_m58950_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t5947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11290);
		List_1__ctor_m30522_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485289);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0 = (((int64_t)(-1)));
		List_1_t5947 * L_0 = (List_1_t5947 *)il2cpp_codegen_object_new (List_1_t5947_il2cpp_TypeInfo_var);
		List_1__ctor_m30522(L_0, /*hidden argument*/List_1__ctor_m30522_MethodInfo_var);
		((ThreadLocal_1_t1298_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67MethodDeclarations.h"

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t8263  Array_InternalArray__get_Item_TisKeyValuePair_2_t8263_m65146_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t8263_m65146(__this, p0, method) (( KeyValuePair_2_t8263  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t8263_m65146_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m58951_gshared (InternalEnumerator_1_t8264 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m58952_gshared (InternalEnumerator_1_t8264 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m58953_gshared (InternalEnumerator_1_t8264 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8263  L_0 = (( KeyValuePair_2_t8263  (*) (InternalEnumerator_1_t8264 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8264 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8263  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m58954_gshared (InternalEnumerator_1_t8264 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m58955_gshared (InternalEnumerator_1_t8264 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m14791((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Current()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t8263  InternalEnumerator_1_get_Current_m58956_gshared (InternalEnumerator_1_t8264 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
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
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral3637, /*hidden argument*/NULL);
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
		InvalidOperationException_t1376 * L_3 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_3, (String_t*)(String_t*) &_stringLiteral3638, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14791((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t8263  L_8 = (( KeyValuePair_2_t8263  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130MethodDeclarations.h"

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m58957_gshared (KeyValuePair_2_t8263 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t8263 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t8263 *)__this, (int64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t8263 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t8263 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Key()
extern "C" int64_t KeyValuePair_2_get_Key_m58958_gshared (KeyValuePair_2_t8263 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m58959_gshared (KeyValuePair_2_t8263 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m58960_gshared (KeyValuePair_2_t8263 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m58961_gshared (KeyValuePair_2_t8263 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m58962_gshared (KeyValuePair_2_t8263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
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
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1203);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1203;
		StringU5BU5D_t75* L_1 = (StringU5BU5D_t75*)L_0;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t8263 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int64_t L_3 = L_2;
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
		int64_t L_5 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t8263 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int64_t)L_5;
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
		int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8263 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		int32_t L_13 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8263 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_76.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_74.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_92.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_93.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__61.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_9.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_76MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_74MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_92MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_93MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__61MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_9MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t8266;
struct DictionaryEntryU5BU5D_t9639;
struct Transform_1_t8265;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2086_TisDictionaryEntry_t2086_m65162_gshared (Dictionary_2_t8266 * __this, DictionaryEntryU5BU5D_t9639* p0, int32_t p1, Transform_1_t8265 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2086_TisDictionaryEntry_t2086_m65162(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t8266 *, DictionaryEntryU5BU5D_t9639*, int32_t, Transform_1_t8265 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2086_TisDictionaryEntry_t2086_m65162_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t8266;
struct Array_t;
struct Transform_1_t8274;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8263_m65164_gshared (Dictionary_2_t8266 * __this, Array_t * p0, int32_t p1, Transform_1_t8274 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8263_m65164(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, Transform_1_t8274 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t8263_m65164_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t8266;
struct KeyValuePair_2U5BU5D_t9479;
struct Transform_1_t8274;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8263_TisKeyValuePair_2_t8263_m65165_gshared (Dictionary_2_t8266 * __this, KeyValuePair_2U5BU5D_t9479* p0, int32_t p1, Transform_1_t8274 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8263_TisKeyValuePair_2_t8263_m65165(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t8266 *, KeyValuePair_2U5BU5D_t9479*, int32_t, Transform_1_t8274 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t8263_TisKeyValuePair_2_t8263_m65165_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m58963_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m58964_gshared (Dictionary_2_t8266 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m58965_gshared (Dictionary_2_t8266 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t8266 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m58966_gshared (Dictionary_2_t8266 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m58967_gshared (Dictionary_2_t8266 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t8263  V_1 = {0};
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
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral3750, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
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
			KeyValuePair_2_t8263  L_9 = (KeyValuePair_2_t8263 )InterfaceFuncInvoker0< KeyValuePair_2_t8263  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t8263 )L_9;
			int64_t L_10 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8263 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8263 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t8266 *)__this);
			VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t8266 *)__this, (int64_t)L_10, (int32_t)L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m58968_gshared (Dictionary_2_t8266 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t2867 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58969_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t8266 *)__this);
		KeyCollection_t8267 * L_0 = (( KeyCollection_t8267 * (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58970_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t8266 *)__this);
		ValueCollection_t8271 * L_0 = (( ValueCollection_t8271 * (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m58971_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t8266 *)__this);
		KeyCollection_t8267 * L_0 = (( KeyCollection_t8267 * (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m58972_gshared (Dictionary_2_t8266 * __this, Object_t * ___key, const MethodInfo* method)
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
		NullCheck((Dictionary_2_t8266 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t8266 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t8266 *)__this);
		int64_t L_4 = (( int64_t (*) (Dictionary_2_t8266 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t8266 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t8266 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey) */, (Dictionary_2_t8266 *)__this, (int64_t)L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m58973_gshared (Dictionary_2_t8266 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t8266 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t8266 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t8266 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t8266 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t8266 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t8266 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t8266 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue) */, (Dictionary_2_t8266 *)__this, (int64_t)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m58974_gshared (Dictionary_2_t8266 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t8266 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t8266 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t8266 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t8266 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t8266 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t8266 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t8266 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t8266 *)__this, (int64_t)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m58975_gshared (Dictionary_2_t8266 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t8266 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t8266 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m58976_gshared (Dictionary_2_t8266 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
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
		NullCheck((Dictionary_2_t8266 *)__this);
		VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey) */, (Dictionary_2_t8266 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m58977_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m58978_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m58979_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m58980_gshared (Dictionary_2_t8266 * __this, KeyValuePair_2_t8263  ___keyValuePair, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8263 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8263 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t8266 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t8266 *)__this, (int64_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m58981_gshared (Dictionary_2_t8266 * __this, KeyValuePair_2_t8263  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8263  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t8266 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t8266 *, KeyValuePair_2_t8263 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t8266 *)__this, (KeyValuePair_2_t8263 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58982_gshared (Dictionary_2_t8266 * __this, KeyValuePair_2U5BU5D_t9479* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9479* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, KeyValuePair_2U5BU5D_t9479*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t8266 *)__this, (KeyValuePair_2U5BU5D_t9479*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m58983_gshared (Dictionary_2_t8266 * __this, KeyValuePair_2_t8263  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8263  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t8266 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t8266 *, KeyValuePair_2_t8263 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t8266 *)__this, (KeyValuePair_2_t8263 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8263 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t8266 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey) */, (Dictionary_2_t8266 *)__this, (int64_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t9639_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m58984_gshared (Dictionary_2_t8266 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t9639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14799);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9479* V_0 = {0};
	DictionaryEntryU5BU5D_t9639* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t9639* G_B5_1 = {0};
	Dictionary_2_t8266 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t9639* G_B4_1 = {0};
	Dictionary_2_t8266 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t9479*)((KeyValuePair_2U5BU5D_t9479*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t9479* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9479* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, KeyValuePair_2U5BU5D_t9479*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t8266 *)__this, (KeyValuePair_2U5BU5D_t9479*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t8266 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t9639*)((DictionaryEntryU5BU5D_t9639*)IsInst(L_6, DictionaryEntryU5BU5D_t9639_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t9639* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t9639* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t8265 * L_10 = ((Dictionary_2_t8266_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t8266 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t8266 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t8265 * L_12 = (Transform_1_t8265 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t8265 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t8266_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t8266 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t8265 * L_13 = ((Dictionary_2_t8266_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t8266 *)G_B5_2);
		(( void (*) (Dictionary_2_t8266 *, DictionaryEntryU5BU5D_t9639*, int32_t, Transform_1_t8265 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t8266 *)G_B5_2, (DictionaryEntryU5BU5D_t9639*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t8265 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t8274 * L_17 = (Transform_1_t8274 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t8274 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, Transform_1_t8274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t8266 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t8274 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m58985_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269  L_0 = {0};
		(( void (*) (Enumerator_t8269 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t8269  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m58986_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269  L_0 = {0};
		(( void (*) (Enumerator_t8269 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t8269  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m58987_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t8275 * L_0 = (ShimEnumerator_t8275 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t8275 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m58988_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t4383_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_get_Item_m58989_gshared (Dictionary_2_t8266 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		KeyNotFoundException_t4383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8855);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t720 * L_3 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_3, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t547* L_7 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t547* L_9 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t5343* L_11 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4824* L_16 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t547* L_21 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t5343* L_24 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		KeyNotFoundException_t4383 * L_28 = (KeyNotFoundException_t4383 *)il2cpp_codegen_object_new (KeyNotFoundException_t4383_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m16516(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m58990_gshared (Dictionary_2_t8266 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t720 * L_3 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_3, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t547* L_8 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t547* L_9 = (Int32U5BU5D_t547*)(__this->___table_4);
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
		LinkU5BU5D_t5343* L_13 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4824* L_18 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
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
		LinkU5BU5D_t5343* L_24 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t547* L_34 = (Int32U5BU5D_t547*)(__this->___table_4);
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
		LinkU5BU5D_t5343* L_40 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t5343* L_43 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t547* L_45 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t547* L_48 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t5343* L_51 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int64U5BU5D_t4824* L_54 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		int64_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
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
		LinkU5BU5D_t5343* L_58 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t5343* L_60 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t5343* L_63 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t547* L_65 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t547* L_68 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		Int32U5BU5D_t547* L_71 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5943_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m58991_gshared (Dictionary_2_t8266 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2456);
		EqualityComparer_1_t5943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11286);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t8266 * G_B4_0 = {0};
	Dictionary_2_t8266 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t8266 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1420 * L_1 = (ArgumentOutOfRangeException_t1420 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1420_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11182(L_1, (String_t*)(String_t*) &_stringLiteral2434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t8266 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t8266 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t8266 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5943_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5943 * L_5 = (( EqualityComparer_1_t5943 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t8266 *)(G_B4_0));
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
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t8266 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t547_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5343_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m58992_gshared (Dictionary_2_t8266 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		LinkU5BU5D_t5343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14800);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t547*)SZArrayNew(Int32U5BU5D_t547_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t5343*)SZArrayNew(LinkU5BU5D_t5343_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int64U5BU5D_t4824*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int32U5BU5D_t547*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t547* L_4 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t547* L_6 = (Int32U5BU5D_t547*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t661_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m58993_gshared (Dictionary_2_t8266 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2456);
		ArgumentException_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral1904, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1420 * L_3 = (ArgumentOutOfRangeException_t1420 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1420_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11182(L_3, (String_t*)(String_t*) &_stringLiteral2246, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14791((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t661 * L_7 = (ArgumentException_t661 *)il2cpp_codegen_object_new (ArgumentException_t661_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3819(L_7, (String_t*)(String_t*) &_stringLiteral2435, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m14791((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t8266 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count() */, (Dictionary_2_t8266 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t661 * L_12 = (ArgumentException_t661 *)il2cpp_codegen_object_new (ArgumentException_t661_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3819(L_12, (String_t*)(String_t*) &_stringLiteral2436, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8263  Dictionary_2_make_pair_m58994_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t8263  L_2 = {0};
		(( void (*) (KeyValuePair_2_t8263 *, int64_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int64_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m58995_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m58996_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m58997_gshared (Dictionary_2_t8266 * __this, KeyValuePair_2U5BU5D_t9479* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9479* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t8266 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t9479* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t8274 * L_5 = (Transform_1_t8274 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t8274 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, KeyValuePair_2U5BU5D_t9479*, int32_t, Transform_1_t8274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t8266 *)__this, (KeyValuePair_2U5BU5D_t9479*)L_2, (int32_t)L_3, (Transform_1_t8274 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern TypeInfo* Hashtable_t1274_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t547_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5343_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m58998_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3231);
		Int32U5BU5D_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		LinkU5BU5D_t5343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14800);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t547* V_1 = {0};
	LinkU5BU5D_t5343* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int64U5BU5D_t4824* V_7 = {0};
	Int32U5BU5D_t547* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t547* L_0 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1274_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m16744(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t547*)((Int32U5BU5D_t547*)SZArrayNew(Int32U5BU5D_t547_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t5343*)((LinkU5BU5D_t5343*)SZArrayNew(LinkU5BU5D_t5343_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t547* L_4 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t5343* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4824* L_10 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t5343* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t547* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t547* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t5343* L_26 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_26, L_27))->___Next_1);
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
		Int32U5BU5D_t547* L_32 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t547* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t5343* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int64U5BU5D_t4824*)((Int64U5BU5D_t4824*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (Int32U5BU5D_t547*)((Int32U5BU5D_t547*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		Int64U5BU5D_t4824* L_37 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		Int64U5BU5D_t4824* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11198(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		Int32U5BU5D_t547* L_40 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
		Int32U5BU5D_t547* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11198(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int64U5BU5D_t4824* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t547* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t661_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m58999_gshared (Dictionary_2_t8266 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t720 * L_3 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_3, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t547* L_8 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t547* L_9 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t5343* L_12 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4824* L_17 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int64_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_17, L_19)), (int64_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t661 * L_22 = (ArgumentException_t661 *)il2cpp_codegen_object_new (ArgumentException_t661_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3819(L_22, (String_t*)(String_t*) &_stringLiteral3752, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t5343* L_23 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_23, L_24))->___Next_1);
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
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t547* L_32 = (Int32U5BU5D_t547*)(__this->___table_4);
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
		LinkU5BU5D_t5343* L_38 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t5343* L_41 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t5343* L_44 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t547* L_46 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t547* L_49 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int64U5BU5D_t4824* L_52 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_52, L_53)) = (int64_t)L_54;
		Int32U5BU5D_t547* L_55 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m59000_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t547* L_0 = (Int32U5BU5D_t547*)(__this->___table_4);
		Int32U5BU5D_t547* L_1 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m12863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int64U5BU5D_t4824* L_2 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		Int64U5BU5D_t4824* L_3 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m12863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t547* L_4 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
		Int32U5BU5D_t547* L_5 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m12863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t5343* L_6 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		LinkU5BU5D_t5343* L_7 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m12863(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m59001_gshared (Dictionary_2_t8266 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t720 * L_3 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_3, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t547* L_7 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t547* L_9 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t5343* L_11 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4824* L_16 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
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
		LinkU5BU5D_t5343* L_21 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_21, L_22))->___Next_1);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t5363_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m59002_gshared (Dictionary_2_t8266 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10252);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5363_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5363 * L_0 = (( EqualityComparer_1_t5363 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t547* L_1 = (Int32U5BU5D_t547*)(__this->___table_4);
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
		Int32U5BU5D_t547* L_5 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
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
		LinkU5BU5D_t5343* L_10 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_10, L_11))->___Next_1);
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
		Int32U5BU5D_t547* L_16 = (Int32U5BU5D_t547*)(__this->___table_4);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m59003_gshared (Dictionary_2_t8266 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9479* V_0 = {0};
	{
		SerializationInfo_t2867 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral2863, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t2867 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t2867 *)L_2);
		SerializationInfo_AddValue_m11192((SerializationInfo_t2867 *)L_2, (String_t*)(String_t*) &_stringLiteral2865, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t2867 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t2867 *)L_4);
		SerializationInfo_AddValue_m11193((SerializationInfo_t2867 *)L_4, (String_t*)(String_t*) &_stringLiteral2867, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t9479*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t9479*)((KeyValuePair_2U5BU5D_t9479*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t9479* L_8 = V_0;
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, KeyValuePair_2U5BU5D_t9479*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t8266 *)__this, (KeyValuePair_2U5BU5D_t9479*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t2867 * L_9 = ___info;
		Int32U5BU5D_t547* L_10 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t2867 *)L_9);
		SerializationInfo_AddValue_m11192((SerializationInfo_t2867 *)L_9, (String_t*)(String_t*) &_stringLiteral3753, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t2867 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t9479* L_12 = V_0;
		NullCheck((SerializationInfo_t2867 *)L_11);
		SerializationInfo_AddValue_m11193((SerializationInfo_t2867 *)L_11, (String_t*)(String_t*) &_stringLiteral3754, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m59004_gshared (Dictionary_2_t8266 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t9479* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t2867 * L_0 = (SerializationInfo_t2867 *)(__this->___serialization_info_13);
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
		SerializationInfo_t2867 * L_1 = (SerializationInfo_t2867 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2867 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11188((SerializationInfo_t2867 *)L_1, (String_t*)(String_t*) &_stringLiteral2865, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t2867 * L_3 = (SerializationInfo_t2867 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m3808(NULL /*static, unused*/, (RuntimeTypeHandle_t4294 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2867 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11190((SerializationInfo_t2867 *)L_3, (String_t*)(String_t*) &_stringLiteral2867, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t2867 * L_6 = (SerializationInfo_t2867 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2867 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11188((SerializationInfo_t2867 *)L_6, (String_t*)(String_t*) &_stringLiteral3753, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t2867 * L_8 = (SerializationInfo_t2867 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m3808(NULL /*static, unused*/, (RuntimeTypeHandle_t4294 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2867 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11190((SerializationInfo_t2867 *)L_8, (String_t*)(String_t*) &_stringLiteral3754, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t9479*)((KeyValuePair_2U5BU5D_t9479*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		NullCheck((Dictionary_2_t8266 *)__this);
		(( void (*) (Dictionary_2_t8266 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t8266 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t9479* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t9479* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int64_t L_16 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8263 *)((KeyValuePair_2_t8263 *)(KeyValuePair_2_t8263 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t9479* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8263 *)((KeyValuePair_2_t8263 *)(KeyValuePair_2_t8263 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t8266 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t8266 *)__this, (int64_t)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t9479* L_22 = V_1;
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
		__this->___serialization_info_13 = (SerializationInfo_t2867 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m59005_gshared (Dictionary_2_t8266 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t720 * L_3 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_3, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t547* L_8 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t547* L_9 = (Int32U5BU5D_t547*)(__this->___table_4);
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
		LinkU5BU5D_t5343* L_13 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4824* L_18 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
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
		LinkU5BU5D_t5343* L_24 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_24, L_25))->___Next_1);
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
		Int32U5BU5D_t547* L_31 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t5343* L_33 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t5343* L_36 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t5343* L_38 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t5343* L_41 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t5343* L_45 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int64U5BU5D_t4824* L_47 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (Int64_t89_il2cpp_TypeInfo_var, (&V_4));
		int64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_47, L_48)) = (int64_t)L_49;
		Int32U5BU5D_t547* L_50 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m59006_gshared (Dictionary_2_t8266 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t720 * L_3 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_3, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t547* L_7 = (Int32U5BU5D_t547*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t547* L_9 = (Int32U5BU5D_t547*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t5343* L_11 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4824* L_16 = (Int64U5BU5D_t4824*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_21 = ___value;
		Int32U5BU5D_t547* L_22 = (Int32U5BU5D_t547*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t5343* L_25 = (LinkU5BU5D_t5343*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_25, L_26))->___Next_1);
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
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8267 * Dictionary_2_get_Keys_m59007_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t8267 * L_0 = (KeyCollection_t8267 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t8267 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8271 * Dictionary_2_get_Values_m59008_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t8271 * L_0 = (ValueCollection_t8271 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t8271 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t661_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_ToTKey_m59009_gshared (Dictionary_2_t8266 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m3808(NULL /*static, unused*/, (RuntimeTypeHandle_t4294 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3755, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t661 * L_6 = (ArgumentException_t661 *)il2cpp_codegen_object_new (ArgumentException_t661_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3464(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1329, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(int64_t*)((int64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t661_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_ToTValue_m59010_gshared (Dictionary_2_t8266 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		Type_t * L_1 = Type_GetTypeFromHandle_m3808(NULL /*static, unused*/, (RuntimeTypeHandle_t4294 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
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
		Type_t * L_5 = Type_GetTypeFromHandle_m3808(NULL /*static, unused*/, (RuntimeTypeHandle_t4294 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3755, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t661 * L_8 = (ArgumentException_t661 *)il2cpp_codegen_object_new (ArgumentException_t661_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3464(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1303, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t5363_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m59011_gshared (Dictionary_2_t8266 * __this, KeyValuePair_2_t8263  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10252);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8263 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t8266 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int64_t, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t8266 *)__this, (int64_t)L_0, (int32_t*)(&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5363_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5363 * L_2 = (( EqualityComparer_1_t5363 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8263 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t5363 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t5363 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8269  Dictionary_2_GetEnumerator_m59012_gshared (Dictionary_2_t8266 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269  L_0 = {0};
		(( void (*) (Enumerator_t8269 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t8266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2086  Dictionary_2_U3CCopyToU3Em__0_m59013_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		int32_t L_3 = ___value;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t2086  L_6 = {0};
		DictionaryEntry__ctor_m14790(&L_6, (Object_t *)L_2, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_77.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_90.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_90MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_77MethodDeclarations.h"
struct Dictionary_2_t8266;
struct Array_t;
struct Transform_1_t8270;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t89_m65157_gshared (Dictionary_2_t8266 * __this, Array_t * p0, int32_t p1, Transform_1_t8270 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t89_m65157(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, Transform_1_t8270 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t89_m65157_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t8266;
struct Int64U5BU5D_t4824;
struct Transform_1_t8270;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t89_TisInt64_t89_m65158_gshared (Dictionary_2_t8266 * __this, Int64U5BU5D_t4824* p0, int32_t p1, Transform_1_t8270 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t89_TisInt64_t89_m65158(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t8266 *, Int64U5BU5D_t4824*, int32_t, Transform_1_t8270 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t89_TisInt64_t89_m65158_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m59014_gshared (KeyCollection_t8267 * __this, Dictionary_2_t8266 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t8266 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral3750, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t8266 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59015_gshared (KeyCollection_t8267 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10144(L_0, (String_t*)(String_t*) &_stringLiteral3757, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59016_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10144(L_0, (String_t*)(String_t*) &_stringLiteral3757, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59017_gshared (KeyCollection_t8267 * __this, int64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck((Dictionary_2_t8266 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t8266 *)L_0, (int64_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59018_gshared (KeyCollection_t8267 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10144(L_0, (String_t*)(String_t*) &_stringLiteral3757, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59019_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t8267 *)__this);
		Enumerator_t8268  L_0 = (( Enumerator_t8268  (*) (KeyCollection_t8267 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t8267 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8268  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m59020_gshared (KeyCollection_t8267 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int64U5BU5D_t4824* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int64U5BU5D_t4824*)((Int64U5BU5D_t4824*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t4824* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t4824* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t8267 *)__this);
		VirtActionInvoker2< Int64U5BU5D_t4824*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t8267 *)__this, (Int64U5BU5D_t4824*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t8266 * L_4 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t8266 *)L_4);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t8266 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t8266 * L_7 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8270 * L_11 = (Transform_1_t8270 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8270 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t8266 *)L_7);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, Transform_1_t8270 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t8266 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t8270 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59021_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t8267 *)__this);
		Enumerator_t8268  L_0 = (( Enumerator_t8268  (*) (KeyCollection_t8267 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t8267 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8268  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59022_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59023_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t704_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m59024_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t704_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m59025_gshared (KeyCollection_t8267 * __this, Int64U5BU5D_t4824* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Int64U5BU5D_t4824* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t8266 *)L_0);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t8266 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t8266 * L_3 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Int64U5BU5D_t4824* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8270 * L_7 = (Transform_1_t8270 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8270 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t8266 *)L_3);
		(( void (*) (Dictionary_2_t8266 *, Int64U5BU5D_t4824*, int32_t, Transform_1_t8270 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t8266 *)L_3, (Int64U5BU5D_t4824*)L_4, (int32_t)L_5, (Transform_1_t8270 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8268  KeyCollection_GetEnumerator_m59026_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Enumerator_t8268  L_1 = {0};
		(( void (*) (Enumerator_t8268 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t8266 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m59027_gshared (KeyCollection_t8267 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t8266 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count() */, (Dictionary_2_t8266 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59028_gshared (Enumerator_t8268 * __this, Dictionary_2_t8266 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = ___host;
		NullCheck((Dictionary_2_t8266 *)L_0);
		Enumerator_t8269  L_1 = (( Enumerator_t8269  (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59029_gshared (Enumerator_t8268 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59030_gshared (Enumerator_t8268 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59031_gshared (Enumerator_t8268 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59032_gshared (Enumerator_t8268 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" int64_t Enumerator_get_Current_m59033_gshared (Enumerator_t8268 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8263 * L_1 = (KeyValuePair_2_t8263 *)&(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8263 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59034_gshared (Enumerator_t8269 * __this, Dictionary_2_t8266 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t8266 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59035_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8263  L_0 = (KeyValuePair_2_t8263 )(__this->___current_3);
		KeyValuePair_2_t8263  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59036_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2086  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59037_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8263 * L_0 = (KeyValuePair_2_t8263 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t8263 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		KeyValuePair_2_t8263 * L_4 = (KeyValuePair_2_t8263 *)&(__this->___current_3);
		int32_t L_5 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8263 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_6);
		DictionaryEntry_t2086  L_8 = {0};
		DictionaryEntry__ctor_m14790(&L_8, (Object_t *)L_3, (Object_t *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59038_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59039_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59040_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
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
		Dictionary_2_t8266 * L_4 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t5343* L_5 = (LinkU5BU5D_t5343*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t4382 *)(Link_t4382 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t8266 * L_8 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck(L_8);
		Int64U5BU5D_t4824* L_9 = (Int64U5BU5D_t4824*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t8266 * L_12 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t547* L_13 = (Int32U5BU5D_t547*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t8263  L_16 = {0};
		(( void (*) (KeyValuePair_2_t8263 *, int64_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(&L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_9, L_11)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t8266 * L_18 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t8263  Enumerator_get_Current_m59041_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t8263  L_0 = (KeyValuePair_2_t8263 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m59042_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8263 * L_0 = (KeyValuePair_2_t8263 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t8263 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m59043_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t8263 * L_0 = (KeyValuePair_2_t8263 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t8263 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m59044_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___next_1 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3246_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m59045_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5367);
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t3246 * L_1 = (ObjectDisposedException_t3246 *)il2cpp_codegen_object_new (ObjectDisposedException_t3246_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11552(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t8266 * L_2 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1376 * L_5 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_5, (String_t*)(String_t*) &_stringLiteral3756, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m59046_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8269 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral2437, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59047_gshared (Enumerator_t8269 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t8266 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m59048_gshared (Transform_1_t8270 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m59049_gshared (Transform_1_t8270 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m59049((Transform_1_t8270 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m59050_gshared (Transform_1_t8270 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m59051_gshared (Transform_1_t8270 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_75.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_91.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_91MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_75MethodDeclarations.h"
struct Dictionary_2_t8266;
struct Array_t;
struct Transform_1_t8273;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65160_gshared (Dictionary_2_t8266 * __this, Array_t * p0, int32_t p1, Transform_1_t8273 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65160(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, Transform_1_t8273 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m65160_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t8266;
struct Int32U5BU5D_t547;
struct Transform_1_t8273;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65161_gshared (Dictionary_2_t8266 * __this, Int32U5BU5D_t547* p0, int32_t p1, Transform_1_t8273 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65161(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t8266 *, Int32U5BU5D_t547*, int32_t, Transform_1_t8273 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m65161_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t720_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m59052_gshared (ValueCollection_t8271 * __this, Dictionary_2_t8266 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t8266 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t720 * L_1 = (ArgumentNullException_t720 *)il2cpp_codegen_object_new (ArgumentNullException_t720_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3814(L_1, (String_t*)(String_t*) &_stringLiteral3750, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t8266 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m59053_gshared (ValueCollection_t8271 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10144(L_0, (String_t*)(String_t*) &_stringLiteral3757, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m59054_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10144(L_0, (String_t*)(String_t*) &_stringLiteral3757, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m59055_gshared (ValueCollection_t8271 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t8266 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t8266 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m59056_gshared (ValueCollection_t8271 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10144(L_0, (String_t*)(String_t*) &_stringLiteral3757, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m59057_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t8271 *)__this);
		Enumerator_t8272  L_0 = (( Enumerator_t8272  (*) (ValueCollection_t8271 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t8271 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8272  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m59058_gshared (ValueCollection_t8271 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t547* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t547*)((Int32U5BU5D_t547*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t547* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t547* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t8271 *)__this);
		VirtActionInvoker2< Int32U5BU5D_t547*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t8271 *)__this, (Int32U5BU5D_t547*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t8266 * L_4 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t8266 *)L_4);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t8266 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t8266 * L_7 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8273 * L_11 = (Transform_1_t8273 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8273 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t8266 *)L_7);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, Transform_1_t8273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t8266 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t8273 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m59059_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t8271 *)__this);
		Enumerator_t8272  L_0 = (( Enumerator_t8272  (*) (ValueCollection_t8271 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t8271 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t8272  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m59060_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m59061_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t704_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m59062_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t704_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m59063_gshared (ValueCollection_t8271 * __this, Int32U5BU5D_t547* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Int32U5BU5D_t547* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t8266 *)L_0);
		(( void (*) (Dictionary_2_t8266 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t8266 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t8266 * L_3 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Int32U5BU5D_t547* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t8273 * L_7 = (Transform_1_t8273 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t8273 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t8266 *)L_3);
		(( void (*) (Dictionary_2_t8266 *, Int32U5BU5D_t547*, int32_t, Transform_1_t8273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t8266 *)L_3, (Int32U5BU5D_t547*)L_4, (int32_t)L_5, (Transform_1_t8273 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8272  ValueCollection_GetEnumerator_m59064_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		Enumerator_t8272  L_1 = {0};
		(( void (*) (Enumerator_t8272 *, Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t8266 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m59065_gshared (ValueCollection_t8271 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = (Dictionary_2_t8266 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t8266 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count() */, (Dictionary_2_t8266 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m59066_gshared (Enumerator_t8272 * __this, Dictionary_2_t8266 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t8266 * L_0 = ___host;
		NullCheck((Dictionary_2_t8266 *)L_0);
		Enumerator_t8269  L_1 = (( Enumerator_t8269  (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59067_gshared (Enumerator_t8272 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m59068_gshared (Enumerator_t8272 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m59069_gshared (Enumerator_t8272 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m59070_gshared (Enumerator_t8272 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m59071_gshared (Enumerator_t8272 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8263 * L_1 = (KeyValuePair_2_t8263 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8263 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m59072_gshared (Transform_1_t8273 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m59073_gshared (Transform_1_t8273 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m59073((Transform_1_t8273 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m59074_gshared (Transform_1_t8273 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m59075_gshared (Transform_1_t8273 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m59076_gshared (Transform_1_t8265 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2086  Transform_1_Invoke_m59077_gshared (Transform_1_t8265 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m59077((Transform_1_t8265 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t2086  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t2086  (*FunctionPointerType) (Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m59078_gshared (Transform_1_t8265 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2086  Transform_1_EndInvoke_m59079_gshared (Transform_1_t8265 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t2086 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m59080_gshared (Transform_1_t8274 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t8263  Transform_1_Invoke_m59081_gshared (Transform_1_t8274 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m59081((Transform_1_t8274 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t8263  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t8263  (*FunctionPointerType) (Object_t * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m59082_gshared (Transform_1_t8274 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t8263  Transform_1_EndInvoke_m59083_gshared (Transform_1_t8274 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t8263 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m59084_gshared (ShimEnumerator_t8275 * __this, Dictionary_2_t8266 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t8266 * L_0 = ___host;
		NullCheck((Dictionary_2_t8266 *)L_0);
		Enumerator_t8269  L_1 = (( Enumerator_t8269  (*) (Dictionary_2_t8266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t8266 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m59085_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t3909_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m59086_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t3909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6884);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t8269  L_0 = (Enumerator_t8269 )(__this->___host_enumerator_0);
		Enumerator_t8269  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t2086  L_3 = (DictionaryEntry_t2086 )InterfaceFuncInvoker0< DictionaryEntry_t2086  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t3909_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m59087_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t8263  V_0 = {0};
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8263  L_1 = (( KeyValuePair_2_t8263  (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t8263 )L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t8263 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m59088_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t8263  V_0 = {0};
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t8263  L_1 = (( KeyValuePair_2_t8263  (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t8263 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t8263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t8263 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern TypeInfo* DictionaryEntry_t2086_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m59089_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t2086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3226);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t8275 *)__this);
		DictionaryEntry_t2086  L_0 = (DictionaryEntry_t2086 )VirtFuncInvoker0< DictionaryEntry_t2086  >::Invoke(7 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry() */, (ShimEnumerator_t8275 *)__this);
		DictionaryEntry_t2086  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t2086_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m59090_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method)
{
	{
		Enumerator_t8269 * L_0 = (Enumerator_t8269 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t8269 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t8269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m7547_gshared (Func_1_t1301 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`1<System.Int32>::Invoke()
extern "C" int32_t Func_1_Invoke_m59091_gshared (Func_1_t1301 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_1_Invoke_m59091((Func_1_t1301 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m59092_gshared (Func_1_t1301 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_1_EndInvoke_m59093_gshared (Func_1_t1301 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_7MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_8.h"
// System.Action`1<System.Action>
#include "mscorlib_System_Action_1_gen_23.h"
// System.Action
#include "System_Core_System_Action.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_geMethodDeclarations.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_8MethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// System.Action`1<System.Action>
#include "mscorlib_System_Action_1_gen_23MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Int32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass3_1__ctor_m59196_gshared (U3CU3Ec__DisplayClass3_1_t8281 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Int32>::<ContinueWith>b__0()
extern "C" void U3CU3Ec__DisplayClass3_1_U3CContinueWithU3Eb__0_m59197_gshared (U3CU3Ec__DisplayClass3_1_t8281 * __this, const MethodInfo* method)
{
	{
		TaskCompletionSource_1_t1290 * L_0 = (TaskCompletionSource_1_t1290 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t1290 *)L_0);
		(( bool (*) (TaskCompletionSource_1_t1290 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t1290 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Int32>::<ContinueWith>b__1(System.Threading.Tasks.Task)
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass3_1_U3CContinueWithU3Eb__1_m59198_gshared (U3CU3Ec__DisplayClass3_1_t8281 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass5_t8282 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass5_t8282 * L_0 = (U3CU3Ec__DisplayClass5_t8282 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (U3CU3Ec__DisplayClass5_t8282 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (U3CU3Ec__DisplayClass5_t8282 *)L_0;
		U3CU3Ec__DisplayClass5_t8282 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals4_0 = __this;
		U3CU3Ec__DisplayClass5_t8282 * L_2 = V_0;
		Task_t1155 * L_3 = ___t;
		NullCheck(L_2);
		L_2->___t_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Action_1_t1299 * L_4 = ((Task_t1155_StaticFields*)Task_t1155_il2cpp_TypeInfo_var->static_fields)->___immediateExecutor_1;
		U3CU3Ec__DisplayClass5_t8282 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_t143 * L_7 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3508(L_7, (Object_t *)L_5, (IntPtr_t)L_6, /*hidden argument*/NULL);
		NullCheck((Action_1_t1299 *)L_4);
		VirtActionInvoker1< Action_t143 * >::Invoke(11 /* System.Void System.Action`1<System.Action>::Invoke(!0) */, (Action_1_t1299 *)L_4, (Action_t143 *)L_7);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Func`2<System.Threading.Tasks.Task,System.Int32>
#include "System_Core_System_Func_2_gen_54.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"
// System.Func`2<System.Threading.Tasks.Task,System.Int32>
#include "System_Core_System_Func_2_gen_54MethodDeclarations.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistrationMethodDeclarations.h"


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Int32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass5__ctor_m59199_gshared (U3CU3Ec__DisplayClass5_t8282 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Int32>::<ContinueWith>b__2()
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass5_U3CContinueWithU3Eb__2_m59200_gshared (U3CU3Ec__DisplayClass5_t8282 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		U3CU3Ec__DisplayClass3_1_t8281 * L_0 = (U3CU3Ec__DisplayClass3_1_t8281 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_0);
		TaskCompletionSource_1_t1290 * L_1 = (TaskCompletionSource_1_t1290 *)(L_0->___tcs_0);
		U3CU3Ec__DisplayClass3_1_t8281 * L_2 = (U3CU3Ec__DisplayClass3_1_t8281 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_2);
		Func_2_t2100 * L_3 = (Func_2_t2100 *)(L_2->___continuation_2);
		Task_t1155 * L_4 = (Task_t1155 *)(__this->___t_1);
		NullCheck((Func_2_t2100 *)L_3);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Int32>::Invoke(!0) */, (Func_2_t2100 *)L_3, (Task_t1155 *)L_4);
		NullCheck((TaskCompletionSource_1_t1290 *)L_1);
		(( bool (*) (TaskCompletionSource_1_t1290 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t1290 *)L_1, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		U3CU3Ec__DisplayClass3_1_t8281 * L_6 = (U3CU3Ec__DisplayClass3_1_t8281 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_6);
		CancellationTokenRegistration_t1287 * L_7 = (CancellationTokenRegistration_t1287 *)&(L_6->___cancellation_1);
		CancellationTokenRegistration_Dispose_m6947((CancellationTokenRegistration_t1287 *)L_7, /*hidden argument*/NULL);
		goto IL_005e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		V_0 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		U3CU3Ec__DisplayClass3_1_t8281 * L_8 = (U3CU3Ec__DisplayClass3_1_t8281 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_8);
		TaskCompletionSource_1_t1290 * L_9 = (TaskCompletionSource_1_t1290 *)(L_8->___tcs_0);
		Exception_t57 * L_10 = V_0;
		NullCheck((TaskCompletionSource_1_t1290 *)L_9);
		(( bool (*) (TaskCompletionSource_1_t1290 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1290 *)L_9, (Exception_t57 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		U3CU3Ec__DisplayClass3_1_t8281 * L_11 = (U3CU3Ec__DisplayClass3_1_t8281 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_11);
		CancellationTokenRegistration_t1287 * L_12 = (CancellationTokenRegistration_t1287 *)&(L_11->___cancellation_1);
		CancellationTokenRegistration_Dispose_m6947((CancellationTokenRegistration_t1287 *)L_12, /*hidden argument*/NULL);
		goto IL_005e;
	} // end catch (depth: 1)

IL_005e:
	{
		return;
	}
}
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_9.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_9MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_5.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_10.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_5MethodDeclarations.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_10MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass3_1__ctor_m59212_gshared (U3CU3Ec__DisplayClass3_1_t8283 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Byte>::<ContinueWith>b__0()
extern "C" void U3CU3Ec__DisplayClass3_1_U3CContinueWithU3Eb__0_m59213_gshared (U3CU3Ec__DisplayClass3_1_t8283 * __this, const MethodInfo* method)
{
	{
		TaskCompletionSource_1_t5892 * L_0 = (TaskCompletionSource_1_t5892 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t5892 *)L_0);
		(( bool (*) (TaskCompletionSource_1_t5892 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t5892 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Byte>::<ContinueWith>b__1(System.Threading.Tasks.Task)
extern TypeInfo* Task_t1155_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass3_1_U3CContinueWithU3Eb__1_m59214_gshared (U3CU3Ec__DisplayClass3_1_t8283 * __this, Task_t1155 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2318);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass5_t8284 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass5_t8284 * L_0 = (U3CU3Ec__DisplayClass5_t8284 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (U3CU3Ec__DisplayClass5_t8284 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (U3CU3Ec__DisplayClass5_t8284 *)L_0;
		U3CU3Ec__DisplayClass5_t8284 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals4_0 = __this;
		U3CU3Ec__DisplayClass5_t8284 * L_2 = V_0;
		Task_t1155 * L_3 = ___t;
		NullCheck(L_2);
		L_2->___t_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1155_il2cpp_TypeInfo_var);
		Action_1_t1299 * L_4 = ((Task_t1155_StaticFields*)Task_t1155_il2cpp_TypeInfo_var->static_fields)->___immediateExecutor_1;
		U3CU3Ec__DisplayClass5_t8284 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_t143 * L_7 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3508(L_7, (Object_t *)L_5, (IntPtr_t)L_6, /*hidden argument*/NULL);
		NullCheck((Action_1_t1299 *)L_4);
		VirtActionInvoker1< Action_t143 * >::Invoke(11 /* System.Void System.Action`1<System.Action>::Invoke(!0) */, (Action_1_t1299 *)L_4, (Action_t143 *)L_7);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Func`2<System.Threading.Tasks.Task,System.Byte>
#include "System_Core_System_Func_2_gen_61.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Func`2<System.Threading.Tasks.Task,System.Byte>
#include "System_Core_System_Func_2_gen_61MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass5__ctor_m59215_gshared (U3CU3Ec__DisplayClass5_t8284 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Byte>::<ContinueWith>b__2()
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass5_U3CContinueWithU3Eb__2_m59216_gshared (U3CU3Ec__DisplayClass5_t8284 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		U3CU3Ec__DisplayClass3_1_t8283 * L_0 = (U3CU3Ec__DisplayClass3_1_t8283 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_0);
		TaskCompletionSource_1_t5892 * L_1 = (TaskCompletionSource_1_t5892 *)(L_0->___tcs_0);
		U3CU3Ec__DisplayClass3_1_t8283 * L_2 = (U3CU3Ec__DisplayClass3_1_t8283 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_2);
		Func_2_t2101 * L_3 = (Func_2_t2101 *)(L_2->___continuation_2);
		Task_t1155 * L_4 = (Task_t1155 *)(__this->___t_1);
		NullCheck((Func_2_t2101 *)L_3);
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, Task_t1155 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Byte>::Invoke(!0) */, (Func_2_t2101 *)L_3, (Task_t1155 *)L_4);
		NullCheck((TaskCompletionSource_1_t5892 *)L_1);
		(( bool (*) (TaskCompletionSource_1_t5892 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t5892 *)L_1, (uint8_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		U3CU3Ec__DisplayClass3_1_t8283 * L_6 = (U3CU3Ec__DisplayClass3_1_t8283 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_6);
		CancellationTokenRegistration_t1287 * L_7 = (CancellationTokenRegistration_t1287 *)&(L_6->___cancellation_1);
		CancellationTokenRegistration_Dispose_m6947((CancellationTokenRegistration_t1287 *)L_7, /*hidden argument*/NULL);
		goto IL_005e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		V_0 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		U3CU3Ec__DisplayClass3_1_t8283 * L_8 = (U3CU3Ec__DisplayClass3_1_t8283 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_8);
		TaskCompletionSource_1_t5892 * L_9 = (TaskCompletionSource_1_t5892 *)(L_8->___tcs_0);
		Exception_t57 * L_10 = V_0;
		NullCheck((TaskCompletionSource_1_t5892 *)L_9);
		(( bool (*) (TaskCompletionSource_1_t5892 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t5892 *)L_9, (Exception_t57 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		U3CU3Ec__DisplayClass3_1_t8283 * L_11 = (U3CU3Ec__DisplayClass3_1_t8283 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_11);
		CancellationTokenRegistration_t1287 * L_12 = (CancellationTokenRegistration_t1287 *)&(L_11->___cancellation_1);
		CancellationTokenRegistration_Dispose_m6947((CancellationTokenRegistration_t1287 *)L_12, /*hidden argument*/NULL);
		goto IL_005e;
	} // end catch (depth: 1)

IL_005e:
	{
		return;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_5MethodDeclarations.h"



// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Int32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_1__ctor_m59217_gshared (U3CU3Ec__DisplayClass1_1_t8285 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Int32>::<StartNew>b__0()
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass1_1_U3CStartNewU3Eb__0_m59218_gshared (U3CU3Ec__DisplayClass1_1_t8285 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		TaskCompletionSource_1_t1290 * L_0 = (TaskCompletionSource_1_t1290 *)(__this->___tcs_0);
		Func_1_t1301 * L_1 = (Func_1_t1301 *)(__this->___func_1);
		NullCheck((Func_1_t1301 *)L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* !0 System.Func`1<System.Int32>::Invoke() */, (Func_1_t1301 *)L_1);
		NullCheck((TaskCompletionSource_1_t1290 *)L_0);
		(( void (*) (TaskCompletionSource_1_t1290 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t1290 *)L_0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Exception)
		V_0 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		TaskCompletionSource_1_t1290 * L_3 = (TaskCompletionSource_1_t1290 *)(__this->___tcs_0);
		Exception_t57 * L_4 = V_0;
		NullCheck((TaskCompletionSource_1_t1290 *)L_3);
		(( void (*) (TaskCompletionSource_1_t1290 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1290 *)L_3, (Exception_t57 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		return;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_6MethodDeclarations.h"

// System.Func`6<System.Object,System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "Parse_Unity_System_Func_6_gen_3.h"
// System.Func`6<System.Object,System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "Parse_Unity_System_Func_6_gen_3MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4_3__ctor_m59232_gshared (U3CU3Ec__DisplayClass4_3_t8288 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Object,System.Object>::<FromAsync>b__3(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClass4_3_U3CFromAsyncU3Eb__3_m59233_gshared (U3CU3Ec__DisplayClass4_3_t8288 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_6_t8287 * L_0 = (Func_6_t8287 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		Object_t * L_2 = (Object_t *)(__this->___arg2_2);
		Object_t * L_3 = (Object_t *)(__this->___arg3_3);
		AsyncCallback_t386 * L_4 = ___callback;
		Object_t * L_5 = (Object_t *)(__this->___state_4);
		NullCheck((Func_6_t8287 *)L_0);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* TResult System.Func`6<System.Object,System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5) */, (Func_6_t8287 *)L_0, (Object_t *)L_1, (Object_t *)L_2, (Object_t *)L_3, (AsyncCallback_t386 *)L_4, (Object_t *)L_5);
		return L_6;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_7MethodDeclarations.h"



// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_4__ctor_m59238_gshared (U3CU3Ec__DisplayClass7_4_t8290 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Object,System.Object,System.Object>::<FromAsync>b__6(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClass7_4_U3CFromAsyncU3Eb__6_m59239_gshared (U3CU3Ec__DisplayClass7_4_t8290 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_6_t8287 * L_0 = (Func_6_t8287 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		Object_t * L_2 = (Object_t *)(__this->___arg2_2);
		Object_t * L_3 = (Object_t *)(__this->___arg3_3);
		AsyncCallback_t386 * L_4 = ___callback;
		Object_t * L_5 = (Object_t *)(__this->___state_4);
		NullCheck((Func_6_t8287 *)L_0);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* TResult System.Func`6<System.Object,System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5) */, (Func_6_t8287 *)L_0, (Object_t *)L_1, (Object_t *)L_2, (Object_t *)L_3, (AsyncCallback_t386 *)L_4, (Object_t *)L_5);
		return L_6;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_8.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_8MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0.h"
// System.Func`2<System.IAsyncResult,System.Object>
#include "System_Core_System_Func_2_gen_824.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
// System.Func`2<System.IAsyncResult,System.Object>
#include "System_Core_System_Func_2_gen_824MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1b_1__ctor_m59240_gshared (U3CU3Ec__DisplayClass1b_1_t8291 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Object>::<FromAsync>b__18()
extern "C" void U3CU3Ec__DisplayClass1b_1_U3CFromAsyncU3Eb__18_m59241_gshared (U3CU3Ec__DisplayClass1b_1_t8291 * __this, const MethodInfo* method)
{
	{
		TaskCompletionSource_1_t1277 * L_0 = (TaskCompletionSource_1_t1277 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t1277 *)L_0);
		(( bool (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t1277 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Object>::<FromAsync>b__19(System.IAsyncResult)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass1b_1_U3CFromAsyncU3Eb__19_m59242_gshared (U3CU3Ec__DisplayClass1b_1_t8291 * __this, Object_t * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t57 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Func_2_t8289 * L_0 = (Func_2_t8289 *)(__this->___endMethod_2);
		Object_t * L_1 = ___result;
		NullCheck((Func_2_t8289 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* !1 System.Func`2<System.IAsyncResult,System.Object>::Invoke(!0) */, (Func_2_t8289 *)L_0, (Object_t *)L_1);
		V_0 = (Object_t *)L_2;
		TaskCompletionSource_1_t1277 * L_3 = (TaskCompletionSource_1_t1277 *)(__this->___tcs_0);
		Object_t * L_4 = V_0;
		NullCheck((TaskCompletionSource_1_t1277 *)L_3);
		(( bool (*) (TaskCompletionSource_1_t1277 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1277 *)L_3, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		CancellationTokenRegistration_t1287 * L_5 = (CancellationTokenRegistration_t1287 *)&(__this->___cancellation_1);
		CancellationTokenRegistration_Dispose_m6947((CancellationTokenRegistration_t1287 *)L_5, /*hidden argument*/NULL);
		goto IL_0042;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0027;
		throw e;
	}

CATCH_0027:
	{ // begin catch(System.Exception)
		V_1 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		TaskCompletionSource_1_t1277 * L_6 = (TaskCompletionSource_1_t1277 *)(__this->___tcs_0);
		Exception_t57 * L_7 = V_1;
		NullCheck((TaskCompletionSource_1_t1277 *)L_6);
		(( bool (*) (TaskCompletionSource_1_t1277 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1277 *)L_6, (Exception_t57 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		CancellationTokenRegistration_t1287 * L_8 = (CancellationTokenRegistration_t1287 *)&(__this->___cancellation_1);
		CancellationTokenRegistration_Dispose_m6947((CancellationTokenRegistration_t1287 *)L_8, /*hidden argument*/NULL);
		goto IL_0042;
	} // end catch (depth: 1)

IL_0042:
	{
		return;
	}
}
// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
#include "System_Core_System_Func_5_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
#include "System_Core_System_Func_5_gen_0MethodDeclarations.h"



// System.Void System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_5__ctor_m59244_gshared (Func_5_t8293 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C" Object_t * Func_5_Invoke_m59246_gshared (Func_5_t8293 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_5_Invoke_m59246((Func_5_t8293 *)__this->___prev_9,___arg1, ___arg2, ___arg3, ___arg4, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1, ___arg2, ___arg3, ___arg4,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1, ___arg2, ___arg3, ___arg4,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1, ___arg2, ___arg3, ___arg4,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_5_BeginInvoke_m59248_gshared (Func_5_t8293 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg1;
	__d_args[1] = ___arg2;
	__d_args[2] = ___arg3;
	__d_args[3] = ___arg4;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_5_EndInvoke_m59250_gshared (Func_5_t8293 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClassa`2<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_9.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClassa`2<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_9MethodDeclarations.h"

// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "System_Core_System_Func_5_gen.h"
// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "System_Core_System_Func_5_genMethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClassa`2<System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClassa_2__ctor_m59251_gshared (U3CU3Ec__DisplayClassa_2_t8294 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClassa`2<System.Object,System.Object>::<FromAsync>b__9(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClassa_2_U3CFromAsyncU3Eb__9_m59252_gshared (U3CU3Ec__DisplayClassa_2_t8294 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_5_t8292 * L_0 = (Func_5_t8292 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		Object_t * L_2 = (Object_t *)(__this->___arg2_2);
		AsyncCallback_t386 * L_3 = ___callback;
		Object_t * L_4 = (Object_t *)(__this->___state_3);
		NullCheck((Func_5_t8292 *)L_0);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker4< Object_t *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* !4 System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(!0,!1,!2,!3) */, (Func_5_t8292 *)L_0, (Object_t *)L_1, (Object_t *)L_2, (AsyncCallback_t386 *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClassd`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_10.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClassd`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_10MethodDeclarations.h"



// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClassd`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClassd_3__ctor_m59253_gshared (U3CU3Ec__DisplayClassd_3_t8295 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClassd`3<System.Object,System.Object,System.Object>::<FromAsync>b__c(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClassd_3_U3CFromAsyncU3Eb__c_m59254_gshared (U3CU3Ec__DisplayClassd_3_t8295 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_5_t8292 * L_0 = (Func_5_t8292 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		Object_t * L_2 = (Object_t *)(__this->___arg2_2);
		AsyncCallback_t386 * L_3 = ___callback;
		Object_t * L_4 = (Object_t *)(__this->___state_3);
		NullCheck((Func_5_t8292 *)L_0);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker4< Object_t *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* !4 System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(!0,!1,!2,!3) */, (Func_5_t8292 *)L_0, (Object_t *)L_1, (Object_t *)L_2, (AsyncCallback_t386 *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
#include "System_Core_System_Func_4_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
#include "System_Core_System_Func_4_gen_0MethodDeclarations.h"



// System.Void System.Func`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_4__ctor_m59256_gshared (Func_4_t8297 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C" Object_t * Func_4_Invoke_m59258_gshared (Func_4_t8297 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_4_Invoke_m59258((Func_4_t8297 *)__this->___prev_9,___arg1, ___arg2, ___arg3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_4_BeginInvoke_m59260_gshared (Func_4_t8297 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg1;
	__d_args[1] = ___arg2;
	__d_args[2] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_4_EndInvoke_m59262_gshared (Func_4_t8297 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass10`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_11.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass10`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_11MethodDeclarations.h"

// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "System_Core_System_Func_4_gen.h"
// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "System_Core_System_Func_4_genMethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass10`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass10_1__ctor_m59263_gshared (U3CU3Ec__DisplayClass10_1_t8298 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClass10`1<System.Object>::<FromAsync>b__f(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClass10_1_U3CFromAsyncU3Eb__f_m59264_gshared (U3CU3Ec__DisplayClass10_1_t8298 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_4_t8296 * L_0 = (Func_4_t8296 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		AsyncCallback_t386 * L_2 = ___callback;
		Object_t * L_3 = (Object_t *)(__this->___state_2);
		NullCheck((Func_4_t8296 *)L_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* !3 System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(!0,!1,!2) */, (Func_4_t8296 *)L_0, (Object_t *)L_1, (AsyncCallback_t386 *)L_2, (Object_t *)L_3);
		return L_4;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass13`2<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_12.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass13`2<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_12MethodDeclarations.h"



// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass13`2<System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass13_2__ctor_m59265_gshared (U3CU3Ec__DisplayClass13_2_t8299 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClass13`2<System.Object,System.Object>::<FromAsync>b__12(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClass13_2_U3CFromAsyncU3Eb__12_m59266_gshared (U3CU3Ec__DisplayClass13_2_t8299 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_4_t8296 * L_0 = (Func_4_t8296 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		AsyncCallback_t386 * L_2 = ___callback;
		Object_t * L_3 = (Object_t *)(__this->___state_2);
		NullCheck((Func_4_t8296 *)L_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* !3 System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(!0,!1,!2) */, (Func_4_t8296 *)L_0, (Object_t *)L_1, (AsyncCallback_t386 *)L_2, (Object_t *)L_3);
		return L_4;
	}
}
// System.Threading.Tasks.TaskFactory`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_1_genMethodDeclarations.h"

// System.Threading.Tasks.TaskScheduler
#include "Parse_Unity_System_Threading_Tasks_TaskScheduler.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactory.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
#include "System_Core_System_Func_3_gen_2.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactoryMethodDeclarations.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationTokenMethodDeclarations.h"
// System.Threading.Tasks.TaskScheduler
#include "Parse_Unity_System_Threading_Tasks_TaskSchedulerMethodDeclarations.h"
struct TaskFactory_t1313;
struct Task_1_t1340;
struct Func_3_t1363;
struct Func_2_t8289;
struct Object_t;
// Declaration System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::FromAsync<System.Object>(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Object)
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::FromAsync<System.Object>(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Object)
extern "C" Task_1_t1340 * TaskFactory_FromAsync_TisObject_t_m65168_gshared (TaskFactory_t1313 * __this, Func_3_t1363 * ___beginMethod, Func_2_t8289 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_FromAsync_TisObject_t_m65168(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1340 * (*) (TaskFactory_t1313 *, Func_3_t1363 *, Func_2_t8289 *, Object_t *, const MethodInfo*))TaskFactory_FromAsync_TisObject_t_m65168_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)


// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern TypeInfo* TaskFactory_t1313_il2cpp_TypeInfo_var;
extern "C" void TaskFactory_1__ctor_m59283_gshared (TaskFactory_1_t8300 * __this, TaskScheduler_t1312 * ___scheduler, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskFactory_t1313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3255);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		TaskScheduler_t1312 * L_0 = ___scheduler;
		CancellationToken_t1108  L_1 = ___cancellationToken;
		TaskFactory_t1313 * L_2 = (TaskFactory_t1313 *)il2cpp_codegen_object_new (TaskFactory_t1313_il2cpp_TypeInfo_var);
		TaskFactory__ctor_m6995(L_2, (TaskScheduler_t1312 *)L_0, (CancellationToken_t1108 )L_1, /*hidden argument*/NULL);
		__this->___factory_0 = L_2;
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory_1__ctor_m59284_gshared (TaskFactory_1_t8300 * __this, TaskScheduler_t1312 * ___scheduler, const MethodInfo* method)
{
	{
		TaskScheduler_t1312 * L_0 = ___scheduler;
		CancellationToken_t1108  L_1 = CancellationToken_get_None_m6942(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((TaskFactory_1_t8300 *)__this);
		(( void (*) (TaskFactory_1_t8300 *, TaskScheduler_t1312 *, CancellationToken_t1108 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskFactory_1_t8300 *)__this, (TaskScheduler_t1312 *)L_0, (CancellationToken_t1108 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern TypeInfo* TaskScheduler_t1312_il2cpp_TypeInfo_var;
extern "C" void TaskFactory_1__ctor_m59285_gshared (TaskFactory_1_t8300 * __this, CancellationToken_t1108  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskScheduler_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3273);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1312_il2cpp_TypeInfo_var);
		TaskScheduler_t1312 * L_0 = TaskScheduler_FromCurrentSynchronizationContext_m7007(NULL /*static, unused*/, /*hidden argument*/NULL);
		CancellationToken_t1108  L_1 = ___cancellationToken;
		NullCheck((TaskFactory_1_t8300 *)__this);
		(( void (*) (TaskFactory_1_t8300 *, TaskScheduler_t1312 *, CancellationToken_t1108 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskFactory_1_t8300 *)__this, (TaskScheduler_t1312 *)L_0, (CancellationToken_t1108 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern TypeInfo* TaskScheduler_t1312_il2cpp_TypeInfo_var;
extern "C" void TaskFactory_1__ctor_m59286_gshared (TaskFactory_1_t8300 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskScheduler_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3273);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1312_il2cpp_TypeInfo_var);
		TaskScheduler_t1312 * L_0 = TaskScheduler_FromCurrentSynchronizationContext_m7007(NULL /*static, unused*/, /*hidden argument*/NULL);
		CancellationToken_t1108  L_1 = CancellationToken_get_None_m6942(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((TaskFactory_1_t8300 *)__this);
		(( void (*) (TaskFactory_1_t8300 *, TaskScheduler_t1312 *, CancellationToken_t1108 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskFactory_1_t8300 *)__this, (TaskScheduler_t1312 *)L_0, (CancellationToken_t1108 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C" TaskScheduler_t1312 * TaskFactory_1_get_Scheduler_m59287_gshared (TaskFactory_1_t8300 * __this, const MethodInfo* method)
{
	{
		TaskFactory_t1313 * L_0 = (TaskFactory_t1313 *)(__this->___factory_0);
		NullCheck((TaskFactory_t1313 *)L_0);
		TaskScheduler_t1312 * L_1 = TaskFactory_get_Scheduler_m7000((TaskFactory_t1313 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C" Task_1_t1340 * TaskFactory_1_FromAsync_m59288_gshared (TaskFactory_1_t8300 * __this, Func_3_t1363 * ___beginMethod, Func_2_t8289 * ___endMethod, Object_t * ___state, const MethodInfo* method)
{
	{
		TaskFactory_t1313 * L_0 = (TaskFactory_t1313 *)(__this->___factory_0);
		Func_3_t1363 * L_1 = ___beginMethod;
		Func_2_t8289 * L_2 = ___endMethod;
		Object_t * L_3 = ___state;
		NullCheck((TaskFactory_t1313 *)L_0);
		Task_1_t1340 * L_4 = (( Task_1_t1340 * (*) (TaskFactory_t1313 *, Func_3_t1363 *, Func_2_t8289 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskFactory_t1313 *)L_0, (Func_3_t1363 *)L_1, (Func_2_t8289 *)L_2, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_4;
	}
}
// <>f__AnonymousType2`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType2_2_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType2`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType2_2_gen_1MethodDeclarations.h"

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"


// System.Void <>f__AnonymousType2`2<System.Object,System.Object>::.ctor(<pair>j__TPar,<valueString>j__TPar)
extern "C" void U3CU3Ef__AnonymousType2_2__ctor_m59289_gshared (U3CU3Ef__AnonymousType2_2_t8301 * __this, Object_t * ___pair, Object_t * ___valueString, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___pair;
		__this->___U3CpairU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___valueString;
		__this->___U3CvalueStringU3Ei__Field_1 = L_1;
		return;
	}
}
// <pair>j__TPar <>f__AnonymousType2`2<System.Object,System.Object>::get_pair()
extern "C" Object_t * U3CU3Ef__AnonymousType2_2_get_pair_m59290_gshared (U3CU3Ef__AnonymousType2_2_t8301 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CpairU3Ei__Field_0);
		return L_0;
	}
}
// <valueString>j__TPar <>f__AnonymousType2`2<System.Object,System.Object>::get_valueString()
extern "C" Object_t * U3CU3Ef__AnonymousType2_2_get_valueString_m59291_gshared (U3CU3Ef__AnonymousType2_2_t8301 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType2`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType2_2_ToString_m59292_gshared (U3CU3Ef__AnonymousType2_2_t8301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3590(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t261 *)L_0;
		StringBuilder_t261 * L_1 = V_0;
		NullCheck((StringBuilder_t261 *)L_1);
		StringBuilder_Append_m3597((StringBuilder_t261 *)L_1, (String_t*)(String_t*) &_stringLiteral1701, /*hidden argument*/NULL);
		StringBuilder_t261 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CpairU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t261 *)L_2);
		StringBuilder_Append_m3736((StringBuilder_t261 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t261 * L_5 = V_0;
		NullCheck((StringBuilder_t261 *)L_5);
		StringBuilder_Append_m3597((StringBuilder_t261 *)L_5, (String_t*)(String_t*) &_stringLiteral1702, /*hidden argument*/NULL);
		StringBuilder_t261 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t261 *)L_6);
		StringBuilder_Append_m3736((StringBuilder_t261 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t261 * L_9 = V_0;
		NullCheck((StringBuilder_t261 *)L_9);
		StringBuilder_Append_m3597((StringBuilder_t261 *)L_9, (String_t*)(String_t*) &_stringLiteral1698, /*hidden argument*/NULL);
		StringBuilder_t261 * L_10 = V_0;
		NullCheck((Object_t *)L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_10);
		return L_11;
	}
}
// System.Boolean <>f__AnonymousType2`2<System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t5367_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType2_2_Equals_m59293_gshared (U3CU3Ef__AnonymousType2_2_t8301 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10279);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType2_2_t8301 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType2_2_t8301 *)((U3CU3Ef__AnonymousType2_2_t8301 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType2_2_t8301 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5367_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5367 * L_2 = (( EqualityComparer_1_t5367 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_3 = (Object_t *)(__this->___U3CpairU3Ei__Field_0);
		U3CU3Ef__AnonymousType2_2_t8301 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CpairU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t5367 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5367 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5367_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5367 * L_7 = (( EqualityComparer_1_t5367 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		U3CU3Ef__AnonymousType2_2_t8301 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CvalueStringU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t5367 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5367 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType2`2<System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t5367_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType2_2_GetHashCode_m59294_gshared (U3CU3Ef__AnonymousType2_2_t8301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10279);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)2136830467);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5367_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5367 * L_1 = (( EqualityComparer_1_t5367 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)(__this->___U3CpairU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t5367 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t5367 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t5367 * L_5 = (( EqualityComparer_1_t5367 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CvalueStringU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t5367 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t5367 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
extern "C" GcAchievementData_t2794  Array_InternalArray__get_Item_TisGcAchievementData_t2794_m65178_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisGcAchievementData_t2794_m65178(__this, p0, method) (( GcAchievementData_t2794  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisGcAchievementData_t2794_m65178_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m59446_gshared (InternalEnumerator_1_t8313 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m59447_gshared (InternalEnumerator_1_t8313 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m59448_gshared (InternalEnumerator_1_t8313 * __this, const MethodInfo* method)
{
	{
		GcAchievementData_t2794  L_0 = (( GcAchievementData_t2794  (*) (InternalEnumerator_1_t8313 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8313 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		GcAchievementData_t2794  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m59449_gshared (InternalEnumerator_1_t8313 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m59450_gshared (InternalEnumerator_1_t8313 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m14791((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Current()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" GcAchievementData_t2794  InternalEnumerator_1_get_Current_m59451_gshared (InternalEnumerator_1_t8313 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
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
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral3637, /*hidden argument*/NULL);
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
		InvalidOperationException_t1376 * L_3 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_3, (String_t*)(String_t*) &_stringLiteral3638, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14791((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		GcAchievementData_t2794  L_8 = (( GcAchievementData_t2794  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
extern "C" GcScoreData_t2795  Array_InternalArray__get_Item_TisGcScoreData_t2795_m65189_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisGcScoreData_t2795_m65189(__this, p0, method) (( GcScoreData_t2795  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisGcScoreData_t2795_m65189_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m59458_gshared (InternalEnumerator_1_t8315 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m59459_gshared (InternalEnumerator_1_t8315 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m59460_gshared (InternalEnumerator_1_t8315 * __this, const MethodInfo* method)
{
	{
		GcScoreData_t2795  L_0 = (( GcScoreData_t2795  (*) (InternalEnumerator_1_t8315 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8315 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		GcScoreData_t2795  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m59461_gshared (InternalEnumerator_1_t8315 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m59462_gshared (InternalEnumerator_1_t8315 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m14791((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Current()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" GcScoreData_t2795  InternalEnumerator_1_get_Current_m59463_gshared (InternalEnumerator_1_t8315 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
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
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral3637, /*hidden argument*/NULL);
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
		InvalidOperationException_t1376 * L_3 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_3, (String_t*)(String_t*) &_stringLiteral3638, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14791((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		GcScoreData_t2795  L_8 = (( GcScoreData_t2795  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Rect>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Rect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Rect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Rect>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Rect>(System.Int32)
extern "C" Rect_t647  Array_InternalArray__get_Item_TisRect_t647_m65200_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRect_t647_m65200(__this, p0, method) (( Rect_t647  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRect_t647_m65200_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Rect>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m59476_gshared (InternalEnumerator_1_t8318 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Rect>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m59477_gshared (InternalEnumerator_1_t8318 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Rect>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m59478_gshared (InternalEnumerator_1_t8318 * __this, const MethodInfo* method)
{
	{
		Rect_t647  L_0 = (( Rect_t647  (*) (InternalEnumerator_1_t8318 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t8318 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Rect_t647  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Rect>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m59479_gshared (InternalEnumerator_1_t8318 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Rect>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m59480_gshared (InternalEnumerator_1_t8318 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m14791((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.Rect>::get_Current()
extern TypeInfo* InvalidOperationException_t1376_il2cpp_TypeInfo_var;
extern "C" Rect_t647  InternalEnumerator_1_get_Current_m59481_gshared (InternalEnumerator_1_t8318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2343);
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
		InvalidOperationException_t1376 * L_1 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_1, (String_t*)(String_t*) &_stringLiteral3637, /*hidden argument*/NULL);
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
		InvalidOperationException_t1376 * L_3 = (InvalidOperationException_t1376 *)il2cpp_codegen_object_new (InvalidOperationException_t1376_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7053(L_3, (String_t*)(String_t*) &_stringLiteral3638, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14791((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Rect_t647  L_8 = (( Rect_t647  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Rect>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rect>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rect>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rect>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rect>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rect>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rect>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
