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


// System.Array
#include "mscorlib_System_Array.h"

// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t5533  Array_InternalArray__get_Item_TisKeyValuePair_2_t5533_m64524_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t5533_m64524(__this, p0, method) (( KeyValuePair_2_t5533  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t5533_m64524_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m23874_gshared (InternalEnumerator_1_t5534 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m23875_gshared (InternalEnumerator_1_t5534 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23876_gshared (InternalEnumerator_1_t5534 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5533  L_0 = (( KeyValuePair_2_t5533  (*) (InternalEnumerator_1_t5534 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5534 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5533  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m23877_gshared (InternalEnumerator_1_t5534 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m23878_gshared (InternalEnumerator_1_t5534 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15091((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t5533  InternalEnumerator_1_get_Current_m23879_gshared (InternalEnumerator_1_t5534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
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
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_1, (String_t*)(String_t*) &_stringLiteral3674, /*hidden argument*/NULL);
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
		InvalidOperationException_t1430 * L_3 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_3, (String_t*)(String_t*) &_stringLiteral3675, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15091((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t5533  L_8 = (( KeyValuePair_2_t5533  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24MethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m23880_gshared (KeyValuePair_2_t5533 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t5533 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t5533 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t5533 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t5533 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m23881_gshared (KeyValuePair_2_t5533 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m23882_gshared (KeyValuePair_2_t5533 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m23883_gshared (KeyValuePair_2_t5533 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m23884_gshared (KeyValuePair_2_t5533 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m23885_gshared (KeyValuePair_2_t5533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
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
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral950);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral950;
		StringU5BU5D_t75* L_1 = (StringU5BU5D_t75*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5533 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5533 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t75* L_7 = (StringU5BU5D_t75*)G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral120);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral120;
		StringU5BU5D_t75* L_8 = (StringU5BU5D_t75*)L_7;
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5533 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_10 = L_9;
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
		int32_t L_12 = (( int32_t (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5533 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_12;
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
		StringU5BU5D_t75* L_15 = (StringU5BU5D_t75*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral123;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m450(NULL /*static, unused*/, (StringU5BU5D_t75*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Values()
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_21.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_21MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_49.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_22.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_49MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_22MethodDeclarations.h"
struct Dictionary_2_t5532;
struct Array_t;
struct Transform_1_t5538;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m64535_gshared (Dictionary_2_t5532 * __this, Array_t * p0, int32_t p1, Transform_1_t5538 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m64535(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, Transform_1_t5538 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m64535_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5532;
struct ObjectU5BU5D_t683;
struct Transform_1_t5538;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m64534_gshared (Dictionary_2_t5532 * __this, ObjectU5BU5D_t683* p0, int32_t p1, Transform_1_t5538 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m64534(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5532 *, ObjectU5BU5D_t683*, int32_t, Transform_1_t5538 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m64534_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m23886_gshared (KeyCollection_t5535 * __this, Dictionary_2_t5532 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5532 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3787, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t5532 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23887_gshared (KeyCollection_t5535 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral3794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23888_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral3794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23889_gshared (KeyCollection_t5535 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t5532 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t5532 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23890_gshared (KeyCollection_t5535 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral3794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23891_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5535 *)__this);
		Enumerator_t5536  L_0 = (( Enumerator_t5536  (*) (KeyCollection_t5535 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5535 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5536  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m23892_gshared (KeyCollection_t5535 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t683* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t683* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t683* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t5535 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t683*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t5535 *)__this, (ObjectU5BU5D_t683*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t5532 * L_4 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t5532 *)L_4);
		(( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5532 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5532 * L_7 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5538 * L_11 = (Transform_1_t5538 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5538 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5532 *)L_7);
		(( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, Transform_1_t5538 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5532 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t5538 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23893_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5535 *)__this);
		Enumerator_t5536  L_0 = (( Enumerator_t5536  (*) (KeyCollection_t5535 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5535 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5536  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23894_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23895_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m23896_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m23897_gshared (KeyCollection_t5535 * __this, ObjectU5BU5D_t683* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		ObjectU5BU5D_t683* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t5532 *)L_0);
		(( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5532 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5532 * L_3 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		ObjectU5BU5D_t683* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5538 * L_7 = (Transform_1_t5538 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5538 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5532 *)L_3);
		(( void (*) (Dictionary_2_t5532 *, ObjectU5BU5D_t683*, int32_t, Transform_1_t5538 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t5532 *)L_3, (ObjectU5BU5D_t683*)L_4, (int32_t)L_5, (Transform_1_t5538 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5536  KeyCollection_GetEnumerator_m23898_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Enumerator_t5536  L_1 = {0};
		(( void (*) (Enumerator_t5536 *, Dictionary_2_t5532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t5532 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m23899_gshared (KeyCollection_t5535 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t5532 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (Dictionary_2_t5532 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19MethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23900_gshared (Enumerator_t5536 * __this, Dictionary_2_t5532 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = ___host;
		NullCheck((Dictionary_2_t5532 *)L_0);
		Enumerator_t5537  L_1 = (( Enumerator_t5537  (*) (Dictionary_2_t5532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5532 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23901_gshared (Enumerator_t5536 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23902_gshared (Enumerator_t5536 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23903_gshared (Enumerator_t5536 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23904_gshared (Enumerator_t5536 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m23905_gshared (Enumerator_t5536 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5533 * L_1 = (KeyValuePair_2_t5533 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5533 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23906_gshared (Enumerator_t5537 * __this, Dictionary_2_t5532 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t5532 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23907_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5533  L_0 = (KeyValuePair_2_t5533 )(__this->___current_3);
		KeyValuePair_2_t5533  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23908_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23909_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5533 * L_0 = (KeyValuePair_2_t5533 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t5533 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t5533 * L_3 = (KeyValuePair_2_t5533 *)&(__this->___current_3);
		int32_t L_4 = (( int32_t (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5533 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_5);
		DictionaryEntry_t2140  L_7 = {0};
		DictionaryEntry__ctor_m15090(&L_7, (Object_t *)((Object_t *)L_2), (Object_t *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23910_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23911_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23912_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
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
		Dictionary_2_t5532 * L_4 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t5392* L_5 = (LinkU5BU5D_t5392*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t4431 *)(Link_t4431 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t5532 * L_8 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t683* L_9 = (ObjectU5BU5D_t683*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t5532 * L_12 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t484* L_13 = (Int32U5BU5D_t484*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t5533  L_16 = {0};
		(( void (*) (KeyValuePair_2_t5533 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t5532 * L_18 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5533  Enumerator_get_Current_m23913_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5533  L_0 = (KeyValuePair_2_t5533 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23914_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5533 * L_0 = (KeyValuePair_2_t5533 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t5533 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23915_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5533 * L_0 = (KeyValuePair_2_t5533 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5533 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m23916_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___next_1 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3297_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m23917_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5489);
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t3297 * L_1 = (ObjectDisposedException_t3297 *)il2cpp_codegen_object_new (ObjectDisposedException_t3297_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11847(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t5532 * L_2 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1430 * L_5 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_5, (String_t*)(String_t*) &_stringLiteral3793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m23918_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t5537 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_1, (String_t*)(String_t*) &_stringLiteral2474, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23919_gshared (Enumerator_t5537 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t5532 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23920_gshared (Transform_1_t5538 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m23921_gshared (Transform_1_t5538 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23921((Transform_1_t5538 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m23922_gshared (Transform_1_t5538 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m23923_gshared (Transform_1_t5538 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_20.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_20MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22MethodDeclarations.h"
struct Dictionary_2_t5532;
struct Array_t;
struct Transform_1_t5541;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m64537_gshared (Dictionary_2_t5532 * __this, Array_t * p0, int32_t p1, Transform_1_t5541 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m64537(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, Transform_1_t5541 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t82_m64537_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5532;
struct Int32U5BU5D_t484;
struct Transform_1_t5541;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m64538_gshared (Dictionary_2_t5532 * __this, Int32U5BU5D_t484* p0, int32_t p1, Transform_1_t5541 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m64538(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5532 *, Int32U5BU5D_t484*, int32_t, Transform_1_t5541 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t82_TisInt32_t82_m64538_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m23924_gshared (ValueCollection_t5539 * __this, Dictionary_2_t5532 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5532 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3787, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t5532 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23925_gshared (ValueCollection_t5539 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral3794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23926_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral3794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23927_gshared (ValueCollection_t5539 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t5532 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t5532 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5532 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23928_gshared (ValueCollection_t5539 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral3794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23929_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t5539 *)__this);
		Enumerator_t5540  L_0 = (( Enumerator_t5540  (*) (ValueCollection_t5539 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t5539 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5540  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m23930_gshared (ValueCollection_t5539 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t484* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t484*)((Int32U5BU5D_t484*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t484* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t484* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t5539 *)__this);
		VirtActionInvoker2< Int32U5BU5D_t484*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t5539 *)__this, (Int32U5BU5D_t484*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t5532 * L_4 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t5532 *)L_4);
		(( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5532 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5532 * L_7 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5541 * L_11 = (Transform_1_t5541 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5541 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5532 *)L_7);
		(( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, Transform_1_t5541 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5532 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t5541 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23931_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t5539 *)__this);
		Enumerator_t5540  L_0 = (( Enumerator_t5540  (*) (ValueCollection_t5539 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t5539 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5540  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23932_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23933_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m23934_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m23935_gshared (ValueCollection_t5539 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Int32U5BU5D_t484* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t5532 *)L_0);
		(( void (*) (Dictionary_2_t5532 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5532 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5532 * L_3 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Int32U5BU5D_t484* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5541 * L_7 = (Transform_1_t5541 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5541 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5532 *)L_3);
		(( void (*) (Dictionary_2_t5532 *, Int32U5BU5D_t484*, int32_t, Transform_1_t5541 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t5532 *)L_3, (Int32U5BU5D_t484*)L_4, (int32_t)L_5, (Transform_1_t5541 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5540  ValueCollection_GetEnumerator_m23936_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		Enumerator_t5540  L_1 = {0};
		(( void (*) (Enumerator_t5540 *, Dictionary_2_t5532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t5532 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m23937_gshared (ValueCollection_t5539 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = (Dictionary_2_t5532 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t5532 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (Dictionary_2_t5532 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23938_gshared (Enumerator_t5540 * __this, Dictionary_2_t5532 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t5532 * L_0 = ___host;
		NullCheck((Dictionary_2_t5532 *)L_0);
		Enumerator_t5537  L_1 = (( Enumerator_t5537  (*) (Dictionary_2_t5532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5532 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23939_gshared (Enumerator_t5540 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23940_gshared (Enumerator_t5540 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23941_gshared (Enumerator_t5540 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23942_gshared (Enumerator_t5540 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m23943_gshared (Enumerator_t5540 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5533 * L_1 = (KeyValuePair_2_t5533 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5533 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23944_gshared (Transform_1_t5541 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m23945_gshared (Transform_1_t5541 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23945((Transform_1_t5541 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m23946_gshared (Transform_1_t5541 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m23947_gshared (Transform_1_t5541 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_21.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_21MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23948_gshared (Transform_1_t5531 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2140  Transform_1_Invoke_m23949_gshared (Transform_1_t5531 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23949((Transform_1_t5531 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t2140  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t2140  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t2140  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m23950_gshared (Transform_1_t5531 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2140  Transform_1_EndInvoke_m23951_gshared (Transform_1_t5531 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t2140 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23952_gshared (Transform_1_t5542 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t5533  Transform_1_Invoke_m23953_gshared (Transform_1_t5542 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23953((Transform_1_t5542 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t5533  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t5533  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t5533  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m23954_gshared (Transform_1_t5542 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5533  Transform_1_EndInvoke_m23955_gshared (Transform_1_t5542 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t5533 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23956_gshared (ShimEnumerator_t5543 * __this, Dictionary_2_t5532 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5532 * L_0 = ___host;
		NullCheck((Dictionary_2_t5532 *)L_0);
		Enumerator_t5537  L_1 = (( Enumerator_t5537  (*) (Dictionary_2_t5532 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5532 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23957_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t785_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m23958_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t5537  L_0 = (Enumerator_t5537 )(__this->___host_enumerator_0);
		Enumerator_t5537  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t2140  L_3 = (DictionaryEntry_t2140 )InterfaceFuncInvoker0< DictionaryEntry_t2140  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t785_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23959_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t5533  V_0 = {0};
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5533  L_1 = (( KeyValuePair_2_t5533  (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t5533 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5533 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23960_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t5533  V_0 = {0};
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5533  L_1 = (( KeyValuePair_2_t5533  (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t5533 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t5533 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5533 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern TypeInfo* DictionaryEntry_t2140_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m23961_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t2140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3353);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t5543 *)__this);
		DictionaryEntry_t2140  L_0 = (DictionaryEntry_t2140 )VirtFuncInvoker0< DictionaryEntry_t2140  >::Invoke(7 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry() */, (ShimEnumerator_t5543 *)__this);
		DictionaryEntry_t2140  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t2140_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23962_gshared (ShimEnumerator_t5543 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5537 * L_0 = (Enumerator_t5537 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5537 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t5537 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_35MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m25120_gshared (Action_1_t5600 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C" void Action_1_Invoke_m25122_gshared (Action_1_t5600 * __this, uint8_t ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m25122((Action_1_t5600 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t742_il2cpp_TypeInfo_var;
extern "C" Object_t * Action_1_BeginInvoke_m25124_gshared (Action_1_t5600 * __this, uint8_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Byte_t742_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m25126_gshared (Action_1_t5600 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Action`1<System.Int32>
#include "mscorlib_System_Action_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
// System.Action`1<System.Int32>
#include "mscorlib_System_Action_1_gen_36MethodDeclarations.h"



// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m25349_gshared (Action_1_t5614 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C" void Action_1_Invoke_m25351_gshared (Action_1_t5614 * __this, int32_t ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m25351((Action_1_t5614 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Action_1_BeginInvoke_m25353_gshared (Action_1_t5614 * __this, int32_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m25355_gshared (Action_1_t5614 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_gen_0MethodDeclarations.h"

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_KeyColl.h"
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_ValueCo.h"
// System.Collections.Generic.RBTree
#include "System_System_Collections_Generic_RBTree.h"
// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_Node_ge.h"
// System.Collections.Generic.RBTree/Node
#include "System_System_Collections_Generic_RBTree_Node.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_NodeHel.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera_0.h"
// System.Collections.Generic.RBTree/NodeEnumerator
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_KeyCollMethodDeclarations.h"
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_ValueCoMethodDeclarations.h"
// System.Collections.Generic.RBTree
#include "System_System_Collections_Generic_RBTreeMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_NodeHelMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera_0MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Generic.RBTree/NodeEnumerator
#include "System_System_Collections_Generic_RBTree_NodeEnumeratorMethodDeclarations.h"
// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_Node_geMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
struct RBTree_t3953;
struct Node_t3952;
struct Object_t;
// Declaration System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::Lookup<System.Object>(!!0)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::Lookup<System.Object>(!!0)
extern "C" Node_t3952 * RBTree_Lookup_TisObject_t_m64543_gshared (RBTree_t3953 * __this, Object_t * p0, const MethodInfo* method);
#define RBTree_Lookup_TisObject_t_m64543(__this, p0, method) (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, const MethodInfo*))RBTree_Lookup_TisObject_t_m64543_gshared)(__this, p0, method)
struct RBTree_t3953;
struct Node_t3952;
struct Object_t;
// Declaration System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::Intern<System.Object>(!!0,System.Collections.Generic.RBTree/Node)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::Intern<System.Object>(!!0,System.Collections.Generic.RBTree/Node)
extern "C" Node_t3952 * RBTree_Intern_TisObject_t_m64545_gshared (RBTree_t3953 * __this, Object_t * p0, Node_t3952 * p1, const MethodInfo* method);
#define RBTree_Intern_TisObject_t_m64545(__this, p0, p1, method) (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, Node_t3952 *, const MethodInfo*))RBTree_Intern_TisObject_t_m64545_gshared)(__this, p0, p1, method)
struct RBTree_t3953;
struct Node_t3952;
struct Object_t;
// Declaration System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::Remove<System.Object>(!!0)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::Remove<System.Object>(!!0)
extern "C" Node_t3952 * RBTree_Remove_TisObject_t_m64546_gshared (RBTree_t3953 * __this, Object_t * p0, const MethodInfo* method);
#define RBTree_Remove_TisObject_t_m64546(__this, p0, method) (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, const MethodInfo*))RBTree_Remove_TisObject_t_m64546_gshared)(__this, p0, method)


// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor()
extern "C" void SortedDictionary_2__ctor_m25776_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		NullCheck((SortedDictionary_2_t5639 *)__this);
		(( void (*) (SortedDictionary_2_t5639 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((SortedDictionary_2_t5639 *)__this, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo* NodeHelper_t5638_il2cpp_TypeInfo_var;
extern TypeInfo* RBTree_t3953_il2cpp_TypeInfo_var;
extern "C" void SortedDictionary_2__ctor_m25778_gshared (SortedDictionary_2_t5639 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NodeHelper_t5638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10798);
		RBTree_t3953_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7002);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		IL2CPP_RUNTIME_CLASS_INIT(NodeHelper_t5638_il2cpp_TypeInfo_var);
		NodeHelper_t5638 * L_1 = (( NodeHelper_t5638 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___hlp_1 = L_1;
		NodeHelper_t5638 * L_2 = (NodeHelper_t5638 *)(__this->___hlp_1);
		RBTree_t3953 * L_3 = (RBTree_t3953 *)il2cpp_codegen_object_new (RBTree_t3953_il2cpp_TypeInfo_var);
		RBTree__ctor_m13324(L_3, (Object_t *)L_2, /*hidden argument*/NULL);
		__this->___tree_0 = L_3;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* SortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25780_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t5640 * L_0 = (KeyCollection_t5640 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (KeyCollection_t5640 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, (SortedDictionary_2_t5639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* SortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25782_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t5643 * L_0 = (ValueCollection_t5643 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (ValueCollection_t5643 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (SortedDictionary_2_t5639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_0;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25784_gshared (SortedDictionary_2_t5639 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t70 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t70 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t70 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((KeyValuePair_2_t70 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t5416_il2cpp_TypeInfo_var;
extern "C" bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25786_gshared (SortedDictionary_2_t5639 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10399);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t70 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t70 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, (Object_t **)(&V_0));
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5416_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5416 * L_2 = (( EqualityComparer_1_t5416 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t70 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((KeyValuePair_2_t70 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t5416 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5416 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25788_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t5416_il2cpp_TypeInfo_var;
extern "C" bool SortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25790_gshared (SortedDictionary_2_t5639 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10399);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t70 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t70 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, (Object_t **)(&V_0));
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5416_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5416 * L_2 = (( EqualityComparer_1_t5416 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t70 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((KeyValuePair_2_t70 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t5416 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5416 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_6 = (( Object_t * (*) (KeyValuePair_2_t70 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t70 *)(&___item), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Remove(TKey) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_6);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_003b;
	}

IL_003a:
	{
		G_B4_0 = 0;
	}

IL_003b:
	{
		return G_B4_0;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void SortedDictionary_2_System_Collections_IDictionary_Add_m25792_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_1 = (( Object_t * (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		Object_t * L_2 = ___value;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_3 = (( Object_t * (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((SortedDictionary_2_t5639 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool SortedDictionary_2_System_Collections_IDictionary_Contains_m25794_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_1 = (( Object_t * (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(18 /* System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * SortedDictionary_2_System_Collections_IDictionary_GetEnumerator_m25796_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5652  L_0 = {0};
		(( void (*) (Enumerator_t5652 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(&L_0, (SortedDictionary_2_t5639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Enumerator_t5652  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.ICollection System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * SortedDictionary_2_System_Collections_IDictionary_get_Keys_m25798_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t5640 * L_0 = (KeyCollection_t5640 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (KeyCollection_t5640 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, (SortedDictionary_2_t5639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_0;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void SortedDictionary_2_System_Collections_IDictionary_Remove_m25800_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_1 = (( Object_t * (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Remove(TKey) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_1);
		return;
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * SortedDictionary_2_System_Collections_IDictionary_get_Item_m25802_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_1 = (( Object_t * (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(21 /* TValue System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Item(TKey) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void SortedDictionary_2_System_Collections_IDictionary_set_Item_m25804_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_1 = (( Object_t * (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((SortedDictionary_2_t5639 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		Object_t * L_2 = ___value;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		Object_t * L_3 = (( Object_t * (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((SortedDictionary_2_t5639 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		NullCheck((SortedDictionary_2_t5639 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, (SortedDictionary_2_t5639 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2140_il2cpp_TypeInfo_var;
extern TypeInfo* NodeEnumerator_t3955_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void SortedDictionary_2_System_Collections_ICollection_CopyTo_m25806_gshared (SortedDictionary_2_t5639 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		DictionaryEntry_t2140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3353);
		NodeEnumerator_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7001);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	NodeEnumerator_t3955  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((SortedDictionary_2_t5639 *)__this);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count() */, (SortedDictionary_2_t5639 *)__this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Array_t * L_1 = ___array;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7373(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___index;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		Array_t * L_4 = ___array;
		NullCheck((Array_t *)L_4);
		int32_t L_5 = Array_get_Length_m15091((Array_t *)L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_t1474 * L_7 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m15091((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count() */, (SortedDictionary_2_t5639 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_t712 * L_12 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004a:
	{
		RBTree_t3953 * L_13 = (RBTree_t3953 *)(__this->___tree_0);
		NullCheck((RBTree_t3953 *)L_13);
		NodeEnumerator_t3955  L_14 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_13, /*hidden argument*/NULL);
		V_1 = (NodeEnumerator_t3955 )L_14;
	}

IL_0056:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_005b:
		{
			Node_t3952 * L_15 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_15, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)));
			Array_t * L_16 = ___array;
			Node_t5642 * L_17 = V_0;
			NullCheck((Node_t5642 *)L_17);
			DictionaryEntry_t2140  L_18 = (( DictionaryEntry_t2140  (*) (Node_t5642 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)((Node_t5642 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
			DictionaryEntry_t2140  L_19 = L_18;
			Object_t * L_20 = Box(DictionaryEntry_t2140_il2cpp_TypeInfo_var, &L_19);
			int32_t L_21 = ___index;
			int32_t L_22 = (int32_t)L_21;
			___index = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
			NullCheck((Array_t *)L_16);
			Array_SetValue_m15092((Array_t *)L_16, (Object_t *)L_20, (int32_t)L_22, /*hidden argument*/NULL);
		}

IL_007f:
		{
			bool L_23 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			if (L_23)
			{
				goto IL_005b;
			}
		}

IL_008b:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		NodeEnumerator_t3955  L_24 = V_1;
		NodeEnumerator_t3955  L_25 = L_24;
		Object_t * L_26 = Box(NodeEnumerator_t3955_il2cpp_TypeInfo_var, &L_25);
		NullCheck((Object_t *)L_26);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_26);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_009c:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool SortedDictionary_2_System_Collections_ICollection_get_IsSynchronized_m25808_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * SortedDictionary_2_System_Collections_ICollection_get_SyncRoot_m25810_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SortedDictionary_2_System_Collections_IEnumerable_GetEnumerator_m25812_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5652  L_0 = {0};
		(( void (*) (Enumerator_t5652 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(&L_0, (SortedDictionary_2_t5639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Enumerator_t5652  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* SortedDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25814_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5652  L_0 = {0};
		(( void (*) (Enumerator_t5652 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(&L_0, (SortedDictionary_2_t5639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Enumerator_t5652  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t SortedDictionary_2_get_Count_m25816_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		RBTree_t3953 * L_0 = (RBTree_t3953 *)(__this->___tree_0);
		NullCheck((RBTree_t3953 *)L_0);
		int32_t L_1 = RBTree_get_Count_m13330((RBTree_t3953 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// TValue System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern TypeInfo* KeyNotFoundException_t4432_il2cpp_TypeInfo_var;
extern "C" Object_t * SortedDictionary_2_get_Item_m25818_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyNotFoundException_t4432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8975);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	{
		RBTree_t3953 * L_0 = (RBTree_t3953 *)(__this->___tree_0);
		Object_t * L_1 = ___key;
		NullCheck((RBTree_t3953 *)L_0);
		Node_t3952 * L_2 = (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((RBTree_t3953 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)));
		Node_t5642 * L_3 = V_0;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		KeyNotFoundException_t4432 * L_4 = (KeyNotFoundException_t4432 *)il2cpp_codegen_object_new (KeyNotFoundException_t4432_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m16815(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		Node_t5642 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)(L_5->___value_6);
		return L_6;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void SortedDictionary_2_set_Item_m25820_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_2, (String_t*)(String_t*) &_stringLiteral1369, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		RBTree_t3953 * L_3 = (RBTree_t3953 *)(__this->___tree_0);
		Object_t * L_4 = ___key;
		NullCheck((RBTree_t3953 *)L_3);
		Node_t3952 * L_5 = (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, Node_t3952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((RBTree_t3953 *)L_3, (Object_t *)L_4, (Node_t3952 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)));
		Node_t5642 * L_6 = V_0;
		Object_t * L_7 = ___value;
		NullCheck(L_6);
		L_6->___value_6 = L_7;
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void SortedDictionary_2_Add_m25822_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	Node_t3952 * V_0 = {0};
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_2, (String_t*)(String_t*) &_stringLiteral1369, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Object_t * L_3 = ___key;
		Object_t * L_4 = ___value;
		Node_t5642 * L_5 = (Node_t5642 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Node_t5642 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(L_5, (Object_t *)L_3, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = (Node_t3952 *)L_5;
		RBTree_t3953 * L_6 = (RBTree_t3953 *)(__this->___tree_0);
		Object_t * L_7 = ___key;
		Node_t3952 * L_8 = V_0;
		NullCheck((RBTree_t3953 *)L_6);
		Node_t3952 * L_9 = (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, Node_t3952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((RBTree_t3953 *)L_6, (Object_t *)L_7, (Node_t3952 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Node_t3952 * L_10 = V_0;
		if ((((Object_t*)(Node_t3952 *)L_9) == ((Object_t*)(Node_t3952 *)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		ArgumentException_t712 * L_11 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3729(L_11, (String_t*)(String_t*) &_stringLiteral2889, (String_t*)(String_t*) &_stringLiteral1369, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Clear()
extern "C" void SortedDictionary_2_Clear_m25824_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		RBTree_t3953 * L_0 = (RBTree_t3953 *)(__this->___tree_0);
		NullCheck((RBTree_t3953 *)L_0);
		RBTree_Clear_m13329((RBTree_t3953 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool SortedDictionary_2_ContainsKey_m25826_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		RBTree_t3953 * L_0 = (RBTree_t3953 *)(__this->___tree_0);
		Object_t * L_1 = ___key;
		NullCheck((RBTree_t3953 *)L_0);
		Node_t3952 * L_2 = (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((RBTree_t3953 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((Object_t*)(Node_t3952 *)L_2) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t5416_il2cpp_TypeInfo_var;
extern TypeInfo* NodeEnumerator_t3955_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool SortedDictionary_2_ContainsValue_m25828_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10399);
		NodeEnumerator_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7001);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Node_t5642 * V_1 = {0};
	NodeEnumerator_t3955  V_2 = {0};
	bool V_3 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5416_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5416 * L_0 = (( EqualityComparer_1_t5416 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		V_0 = (Object_t*)L_0;
		RBTree_t3953 * L_1 = (RBTree_t3953 *)(__this->___tree_0);
		NullCheck((RBTree_t3953 *)L_1);
		NodeEnumerator_t3955  L_2 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_1, /*hidden argument*/NULL);
		V_2 = (NodeEnumerator_t3955 )L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_0017:
		{
			Node_t3952 * L_3 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)(&V_2), /*hidden argument*/NULL);
			V_1 = (Node_t5642 *)((Node_t5642 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)));
			Object_t* L_4 = V_0;
			Object_t * L_5 = ___value;
			Node_t5642 * L_6 = V_1;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)(L_6->___value_6);
			NullCheck((Object_t*)L_4);
			bool L_8 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28), (Object_t*)L_4, (Object_t *)L_5, (Object_t *)L_7);
			if (!L_8)
			{
				goto IL_003d;
			}
		}

IL_0036:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}

IL_003d:
		{
			bool L_9 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)(&V_2), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0017;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		NodeEnumerator_t3955  L_10 = V_2;
		NodeEnumerator_t3955  L_11 = L_10;
		Object_t * L_12 = Box(NodeEnumerator_t3955_il2cpp_TypeInfo_var, &L_11);
		NullCheck((Object_t *)L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_12);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005a:
	{
		return 0;
	}

IL_005c:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* NodeEnumerator_t3955_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void SortedDictionary_2_CopyTo_m25830_gshared (SortedDictionary_2_t5639 * __this, KeyValuePair_2U5BU5D_t6044* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		NodeEnumerator_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7001);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	NodeEnumerator_t3955  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((SortedDictionary_2_t5639 *)__this);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count() */, (SortedDictionary_2_t5639 *)__this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		KeyValuePair_2U5BU5D_t6044* L_1 = ___array;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7373(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___arrayIndex;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6044* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___arrayIndex;
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) > ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		ArgumentOutOfRangeException_t1474 * L_6 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002e:
	{
		KeyValuePair_2U5BU5D_t6044* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = ___arrayIndex;
		NullCheck((SortedDictionary_2_t5639 *)__this);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count() */, (SortedDictionary_2_t5639 *)__this);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t712 * L_10 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		RBTree_t3953 * L_11 = (RBTree_t3953 *)(__this->___tree_0);
		NullCheck((RBTree_t3953 *)L_11);
		NodeEnumerator_t3955  L_12 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_11, /*hidden argument*/NULL);
		V_1 = (NodeEnumerator_t3955 )L_12;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_0055:
		{
			Node_t3952 * L_13 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_13, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)));
			KeyValuePair_2U5BU5D_t6044* L_14 = ___array;
			int32_t L_15 = ___arrayIndex;
			int32_t L_16 = (int32_t)L_15;
			___arrayIndex = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_16);
			Node_t5642 * L_17 = V_0;
			NullCheck((Node_t5642 *)L_17);
			KeyValuePair_2_t70  L_18 = (( KeyValuePair_2_t70  (*) (Node_t5642 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((Node_t5642 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
			*((KeyValuePair_2_t70 *)(KeyValuePair_2_t70 *)SZArrayLdElema(L_14, L_16)) = L_18;
		}

IL_0079:
		{
			bool L_19 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_0055;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x96, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		NodeEnumerator_t3955  L_20 = V_1;
		NodeEnumerator_t3955  L_21 = L_20;
		Object_t * L_22 = Box(NodeEnumerator_t3955_il2cpp_TypeInfo_var, &L_21);
		NullCheck((Object_t *)L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_22);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0096:
	{
		return;
	}
}
// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t5652  SortedDictionary_2_GetEnumerator_m25831_gshared (SortedDictionary_2_t5639 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5652  L_0 = {0};
		(( void (*) (Enumerator_t5652 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(&L_0, (SortedDictionary_2_t5639 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool SortedDictionary_2_Remove_m25833_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		RBTree_t3953 * L_0 = (RBTree_t3953 *)(__this->___tree_0);
		Object_t * L_1 = ___key;
		NullCheck((RBTree_t3953 *)L_0);
		Node_t3952 * L_2 = (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((RBTree_t3953 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return ((((int32_t)((((Object_t*)(Node_t3952 *)L_2) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool SortedDictionary_2_TryGetValue_m25835_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t ** G_B2_0 = {0};
	Object_t ** G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	Object_t ** G_B3_1 = {0};
	{
		RBTree_t3953 * L_0 = (RBTree_t3953 *)(__this->___tree_0);
		Object_t * L_1 = ___key;
		NullCheck((RBTree_t3953 *)L_0);
		Node_t3952 * L_2 = (( Node_t3952 * (*) (RBTree_t3953 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((RBTree_t3953 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)));
		Object_t ** L_3 = ___value;
		Node_t5642 * L_4 = V_0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_0027;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_5 = V_1;
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_0027:
	{
		Node_t5642 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)(L_6->___value_6);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		*G_B3_1 = G_B3_0;
		Node_t5642 * L_8 = V_0;
		return ((((int32_t)((((Object_t*)(Node_t5642 *)L_8) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// TKey System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ToKey(System.Object)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" Object_t * SortedDictionary_2_ToKey_m25837_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1369, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25))))
		{
			goto IL_0037;
		}
	}
	{
		Object_t * L_3 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m4074(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2890, (Object_t *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		ArgumentException_t712 * L_6 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_6, (String_t*)L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0037:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)));
	}
}
// TValue System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ToValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" Object_t * SortedDictionary_2_ToValue_m25839_gshared (SortedDictionary_2_t5639 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19))))
		{
			goto IL_0040;
		}
	}
	{
		Object_t * L_1 = ___value;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		if (!L_3)
		{
			goto IL_0040;
		}
	}

IL_0025:
	{
		Object_t * L_4 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m4074(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral2891, (Object_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		ArgumentException_t712 * L_7 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_7, (String_t*)L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		Object_t * L_8 = ___value;
		return ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_KeyColl_0.h"
// System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_KeyColl_0MethodDeclarations.h"


// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m25840_gshared (KeyCollection_t5640 * __this, SortedDictionary_2_t5639 * ___dic, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SortedDictionary_2_t5639 * L_0 = ___dic;
		__this->____dic_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m25841_gshared (KeyCollection_t5640 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m25842_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m25843_gshared (KeyCollection_t5640 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		Object_t * L_1 = ___item;
		NullCheck((SortedDictionary_2_t5639 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(18 /* System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (SortedDictionary_2_t5639 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m25844_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5640 *)__this);
		Enumerator_t5641  L_0 = (( Enumerator_t5641  (*) (KeyCollection_t5640 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5640 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5641  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m25845_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m25846_gshared (KeyCollection_t5640 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* NodeEnumerator_t3955_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m25847_gshared (KeyCollection_t5640 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		NodeEnumerator_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7001);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	NodeEnumerator_t3955  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((KeyCollection_t5640 *)__this);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::get_Count() */, (KeyCollection_t5640 *)__this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Array_t * L_1 = ___array;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7373(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___index;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		Array_t * L_4 = ___array;
		NullCheck((Array_t *)L_4);
		int32_t L_5 = Array_get_Length_m15091((Array_t *)L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_t1474 * L_7 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m15091((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((KeyCollection_t5640 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::get_Count() */, (KeyCollection_t5640 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_t712 * L_12 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004a:
	{
		SortedDictionary_2_t5639 * L_13 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		NullCheck(L_13);
		RBTree_t3953 * L_14 = (RBTree_t3953 *)(L_13->___tree_0);
		NullCheck((RBTree_t3953 *)L_14);
		NodeEnumerator_t3955  L_15 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_14, /*hidden argument*/NULL);
		V_1 = (NodeEnumerator_t3955 )L_15;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0060:
		{
			Node_t3952 * L_16 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_16, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)));
			Array_t * L_17 = ___array;
			Node_t5642 * L_18 = V_0;
			NullCheck(L_18);
			Object_t * L_19 = (Object_t *)(L_18->___key_5);
			Object_t * L_20 = L_19;
			int32_t L_21 = ___index;
			int32_t L_22 = (int32_t)L_21;
			___index = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
			NullCheck((Array_t *)L_17);
			Array_SetValue_m15092((Array_t *)L_17, (Object_t *)((Object_t *)L_20), (int32_t)L_22, /*hidden argument*/NULL);
		}

IL_0084:
		{
			bool L_23 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			if (L_23)
			{
				goto IL_0060;
			}
		}

IL_0090:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		NodeEnumerator_t3955  L_24 = V_1;
		NodeEnumerator_t3955  L_25 = L_24;
		Object_t * L_26 = Box(NodeEnumerator_t3955_il2cpp_TypeInfo_var, &L_25);
		NullCheck((Object_t *)L_26);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_26);
		IL2CPP_END_FINALLY(149)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a1:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m25848_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m25849_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m25850_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		Enumerator_t5641  L_1 = {0};
		(( void (*) (Enumerator_t5641 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(&L_1, (SortedDictionary_2_t5639 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5641  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* NodeEnumerator_t3955_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_CopyTo_m25851_gshared (KeyCollection_t5640 * __this, ObjectU5BU5D_t683* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		NodeEnumerator_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7001);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	NodeEnumerator_t3955  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((KeyCollection_t5640 *)__this);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::get_Count() */, (KeyCollection_t5640 *)__this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		ObjectU5BU5D_t683* L_1 = ___array;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7373(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___arrayIndex;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___arrayIndex;
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) > ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		ArgumentOutOfRangeException_t1474 * L_6 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002e:
	{
		ObjectU5BU5D_t683* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = ___arrayIndex;
		NullCheck((KeyCollection_t5640 *)__this);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::get_Count() */, (KeyCollection_t5640 *)__this);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t712 * L_10 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		SortedDictionary_2_t5639 * L_11 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		NullCheck(L_11);
		RBTree_t3953 * L_12 = (RBTree_t3953 *)(L_11->___tree_0);
		NullCheck((RBTree_t3953 *)L_12);
		NodeEnumerator_t3955  L_13 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_12, /*hidden argument*/NULL);
		V_1 = (NodeEnumerator_t3955 )L_13;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_005a:
		{
			Node_t3952 * L_14 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)));
			ObjectU5BU5D_t683* L_15 = ___array;
			int32_t L_16 = ___arrayIndex;
			int32_t L_17 = (int32_t)L_16;
			___arrayIndex = (int32_t)((int32_t)((int32_t)L_17+(int32_t)1));
			Node_t5642 * L_18 = V_0;
			NullCheck(L_18);
			Object_t * L_19 = (Object_t *)(L_18->___key_5);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)) = (Object_t *)L_19;
		}

IL_0079:
		{
			bool L_20 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_005a;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x96, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		NodeEnumerator_t3955  L_21 = V_1;
		NodeEnumerator_t3955  L_22 = L_21;
		Object_t * L_23 = Box(NodeEnumerator_t3955_il2cpp_TypeInfo_var, &L_22);
		NullCheck((Object_t *)L_23);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_23);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0096:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m25852_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		NullCheck((SortedDictionary_2_t5639 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count() */, (SortedDictionary_2_t5639 *)L_0);
		return L_1;
	}
}
// System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t5641  KeyCollection_GetEnumerator_m25853_gshared (KeyCollection_t5640 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		Enumerator_t5641  L_1 = {0};
		(( void (*) (Enumerator_t5641 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(&L_1, (SortedDictionary_2_t5639 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25854_gshared (Enumerator_t5641 * __this, SortedDictionary_2_t5639 * ___dic, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = ___dic;
		NullCheck(L_0);
		RBTree_t3953 * L_1 = (RBTree_t3953 *)(L_0->___tree_0);
		NullCheck((RBTree_t3953 *)L_1);
		NodeEnumerator_t3955  L_2 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_1, /*hidden argument*/NULL);
		__this->___host_0 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25855_gshared (Enumerator_t5641 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_check_current_m13323((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		Object_t * L_1 = (Object_t *)(__this->___current_1);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m25856_gshared (Enumerator_t5641 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_Reset_m13318((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// TKey System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m25857_gshared (Enumerator_t5641 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___current_1);
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25858_gshared (Enumerator_t5641 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		bool L_1 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		NodeEnumerator_t3955 * L_2 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		Node_t3952 * L_3 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)L_2, /*hidden argument*/NULL);
		NullCheck(((Node_t5642 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		Object_t * L_4 = (Object_t *)(((Node_t5642 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)))->___key_5);
		__this->___current_1 = L_4;
		return 1;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25859_gshared (Enumerator_t5641 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_Dispose_m13321((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.RBTree/Node
#include "System_System_Collections_Generic_RBTree_NodeMethodDeclarations.h"


// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
extern "C" void Node__ctor_m25860_gshared (Node_t5642 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		NullCheck((Node_t3952 *)__this);
		Node__ctor_m13310((Node_t3952 *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___key;
		__this->___key_5 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void Node__ctor_m25861_gshared (Node_t5642 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		NullCheck((Node_t3952 *)__this);
		Node__ctor_m13310((Node_t3952 *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___key;
		__this->___key_5 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_6 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C" void Node_SwapValue_m25862_gshared (Node_t5642 * __this, Node_t3952 * ___other, const MethodInfo* method)
{
	Node_t5642 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	{
		Node_t3952 * L_0 = ___other;
		V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
		Object_t * L_1 = (Object_t *)(__this->___key_5);
		V_1 = (Object_t *)L_1;
		Node_t5642 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)(L_2->___key_5);
		__this->___key_5 = L_3;
		Node_t5642 * L_4 = V_0;
		Object_t * L_5 = V_1;
		NullCheck(L_4);
		L_4->___key_5 = L_5;
		Object_t * L_6 = (Object_t *)(__this->___value_6);
		V_2 = (Object_t *)L_6;
		Node_t5642 * L_7 = V_0;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)(L_7->___value_6);
		__this->___value_6 = L_8;
		Node_t5642 * L_9 = V_0;
		Object_t * L_10 = V_2;
		NullCheck(L_9);
		L_9->___value_6 = L_10;
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
extern "C" KeyValuePair_2_t70  Node_AsKV_m25863_gshared (Node_t5642 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_5);
		Object_t * L_1 = (Object_t *)(__this->___value_6);
		KeyValuePair_2_t70  L_2 = {0};
		(( void (*) (KeyValuePair_2_t70 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
extern "C" DictionaryEntry_t2140  Node_AsDE_m25864_gshared (Node_t5642 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_5);
		Object_t * L_1 = L_0;
		Object_t * L_2 = (Object_t *)(__this->___value_6);
		Object_t * L_3 = L_2;
		DictionaryEntry_t2140  L_4 = {0};
		DictionaryEntry__ctor_m15090(&L_4, (Object_t *)((Object_t *)L_1), (Object_t *)((Object_t *)L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_ValueCo_0.h"
// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "System_System_Collections_Generic_SortedDictionary_2_ValueCo_0MethodDeclarations.h"


// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m25865_gshared (ValueCollection_t5643 * __this, SortedDictionary_2_t5639 * ___dic, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SortedDictionary_2_t5639 * L_0 = ___dic;
		__this->____dic_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25866_gshared (ValueCollection_t5643 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25867_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25868_gshared (ValueCollection_t5643 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		Object_t * L_1 = ___item;
		NullCheck((SortedDictionary_2_t5639 *)L_0);
		bool L_2 = (( bool (*) (SortedDictionary_2_t5639 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((SortedDictionary_2_t5639 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25869_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25870_gshared (ValueCollection_t5643 * __this, Object_t * ___item, const MethodInfo* method)
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
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25871_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t5643 *)__this);
		Enumerator_t5644  L_0 = (( Enumerator_t5644  (*) (ValueCollection_t5643 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t5643 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5644  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* NodeEnumerator_t3955_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m25872_gshared (ValueCollection_t5643 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		NodeEnumerator_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7001);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	NodeEnumerator_t3955  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((ValueCollection_t5643 *)__this);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::get_Count() */, (ValueCollection_t5643 *)__this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Array_t * L_1 = ___array;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7373(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___index;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		Array_t * L_4 = ___array;
		NullCheck((Array_t *)L_4);
		int32_t L_5 = Array_get_Length_m15091((Array_t *)L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_t1474 * L_7 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m15091((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((ValueCollection_t5643 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::get_Count() */, (ValueCollection_t5643 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_t712 * L_12 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004a:
	{
		SortedDictionary_2_t5639 * L_13 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		NullCheck(L_13);
		RBTree_t3953 * L_14 = (RBTree_t3953 *)(L_13->___tree_0);
		NullCheck((RBTree_t3953 *)L_14);
		NodeEnumerator_t3955  L_15 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_14, /*hidden argument*/NULL);
		V_1 = (NodeEnumerator_t3955 )L_15;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0060:
		{
			Node_t3952 * L_16 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_16, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)));
			Array_t * L_17 = ___array;
			Node_t5642 * L_18 = V_0;
			NullCheck(L_18);
			Object_t * L_19 = (Object_t *)(L_18->___value_6);
			Object_t * L_20 = L_19;
			int32_t L_21 = ___index;
			int32_t L_22 = (int32_t)L_21;
			___index = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
			NullCheck((Array_t *)L_17);
			Array_SetValue_m15092((Array_t *)L_17, (Object_t *)((Object_t *)L_20), (int32_t)L_22, /*hidden argument*/NULL);
		}

IL_0084:
		{
			bool L_23 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			if (L_23)
			{
				goto IL_0060;
			}
		}

IL_0090:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		NodeEnumerator_t3955  L_24 = V_1;
		NodeEnumerator_t3955  L_25 = L_24;
		Object_t * L_26 = Box(NodeEnumerator_t3955_il2cpp_TypeInfo_var, &L_25);
		NullCheck((Object_t *)L_26);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_26);
		IL2CPP_END_FINALLY(149)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a1:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m25873_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m25874_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25875_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		Enumerator_t5644  L_1 = {0};
		(( void (*) (Enumerator_t5644 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(&L_1, (SortedDictionary_2_t5639 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5644  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* NodeEnumerator_t3955_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_CopyTo_m25876_gshared (ValueCollection_t5643 * __this, ObjectU5BU5D_t683* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		NodeEnumerator_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7001);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Node_t5642 * V_0 = {0};
	NodeEnumerator_t3955  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((ValueCollection_t5643 *)__this);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::get_Count() */, (ValueCollection_t5643 *)__this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		ObjectU5BU5D_t683* L_1 = ___array;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t771 * L_2 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7373(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___arrayIndex;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___arrayIndex;
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) > ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		ArgumentOutOfRangeException_t1474 * L_6 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002e:
	{
		ObjectU5BU5D_t683* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = ___arrayIndex;
		NullCheck((ValueCollection_t5643 *)__this);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::get_Count() */, (ValueCollection_t5643 *)__this);
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t712 * L_10 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		SortedDictionary_2_t5639 * L_11 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		NullCheck(L_11);
		RBTree_t3953 * L_12 = (RBTree_t3953 *)(L_11->___tree_0);
		NullCheck((RBTree_t3953 *)L_12);
		NodeEnumerator_t3955  L_13 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_12, /*hidden argument*/NULL);
		V_1 = (NodeEnumerator_t3955 )L_13;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_005a:
		{
			Node_t3952 * L_14 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			V_0 = (Node_t5642 *)((Node_t5642 *)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)));
			ObjectU5BU5D_t683* L_15 = ___array;
			int32_t L_16 = ___arrayIndex;
			int32_t L_17 = (int32_t)L_16;
			___arrayIndex = (int32_t)((int32_t)((int32_t)L_17+(int32_t)1));
			Node_t5642 * L_18 = V_0;
			NullCheck(L_18);
			Object_t * L_19 = (Object_t *)(L_18->___value_6);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)) = (Object_t *)L_19;
		}

IL_0079:
		{
			bool L_20 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)(&V_1), /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_005a;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x96, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		NodeEnumerator_t3955  L_21 = V_1;
		NodeEnumerator_t3955  L_22 = L_21;
		Object_t * L_23 = Box(NodeEnumerator_t3955_il2cpp_TypeInfo_var, &L_22);
		NullCheck((Object_t *)L_23);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_23);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0096:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m25877_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		NullCheck((SortedDictionary_2_t5639 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count() */, (SortedDictionary_2_t5639 *)L_0);
		return L_1;
	}
}
// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t5644  ValueCollection_GetEnumerator_m25878_gshared (ValueCollection_t5643 * __this, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = (SortedDictionary_2_t5639 *)(__this->____dic_0);
		Enumerator_t5644  L_1 = {0};
		(( void (*) (Enumerator_t5644 *, SortedDictionary_2_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(&L_1, (SortedDictionary_2_t5639 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25879_gshared (Enumerator_t5644 * __this, SortedDictionary_2_t5639 * ___dic, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = ___dic;
		NullCheck(L_0);
		RBTree_t3953 * L_1 = (RBTree_t3953 *)(L_0->___tree_0);
		NullCheck((RBTree_t3953 *)L_1);
		NodeEnumerator_t3955  L_2 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_1, /*hidden argument*/NULL);
		__this->___host_0 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25880_gshared (Enumerator_t5644 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_check_current_m13323((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		Object_t * L_1 = (Object_t *)(__this->___current_1);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m25881_gshared (Enumerator_t5644 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_Reset_m13318((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// TValue System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m25882_gshared (Enumerator_t5644 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___current_1);
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25883_gshared (Enumerator_t5644 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		bool L_1 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		NodeEnumerator_t3955 * L_2 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		Node_t3952 * L_3 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)L_2, /*hidden argument*/NULL);
		NullCheck(((Node_t5642 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		Object_t * L_4 = (Object_t *)(((Node_t5642 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)))->___value_6);
		__this->___current_1 = L_4;
		return 1;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25884_gshared (Enumerator_t5644 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_Dispose_m13321((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.RBTree/INodeHelper`1<System.Object>::Compare(T,System.Collections.Generic.RBTree/Node)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/INodeHelper`1<System.Object>::CreateNode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"


// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C" void NodeHelper__ctor_m25986_gshared (NodeHelper_t5638 * __this, Object_t* ___cmp, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___cmp;
		__this->___cmp_0 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.cctor()
extern TypeInfo* Comparer_1_t5429_il2cpp_TypeInfo_var;
extern "C" void NodeHelper__cctor_m25987_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10427);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5429_il2cpp_TypeInfo_var);
		Comparer_1_t5429 * L_0 = (( Comparer_1_t5429 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NodeHelper_t5638 * L_1 = (NodeHelper_t5638 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (NodeHelper_t5638 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		((NodeHelper_t5638_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->___Default_1 = L_1;
		return;
	}
}
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C" int32_t NodeHelper_Compare_m25988_gshared (NodeHelper_t5638 * __this, Object_t * ___key, Node_t3952 * ___node, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___cmp_0);
		Object_t * L_1 = ___key;
		Node_t3952 * L_2 = ___node;
		NullCheck(((Node_t5642 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))));
		Object_t * L_3 = (Object_t *)(((Node_t5642 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)))->___key_5);
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)L_1, (Object_t *)L_3);
		return L_4;
	}
}
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::CreateNode(TKey)
extern "C" Node_t3952 * NodeHelper_CreateNode_m25989_gshared (NodeHelper_t5638 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Node_t5642 * L_1 = (Node_t5642 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Node_t5642 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_1, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo* Comparer_1_t5429_il2cpp_TypeInfo_var;
extern "C" NodeHelper_t5638 * NodeHelper_GetHelper_m25990_gshared (Object_t * __this /* static, unused */, Object_t* ___cmp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10427);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___cmp;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Object_t* L_1 = ___cmp;
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5429_il2cpp_TypeInfo_var);
		Comparer_1_t5429 * L_2 = (( Comparer_1_t5429 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if ((!(((Object_t*)(Object_t*)L_1) == ((Object_t*)(Comparer_1_t5429 *)L_2))))
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NodeHelper_t5638 * L_3 = ((NodeHelper_t5638_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->___Default_1;
		return L_3;
	}

IL_0017:
	{
		Object_t* L_4 = ___cmp;
		NodeHelper_t5638 * L_5 = (NodeHelper_t5638 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (NodeHelper_t5638 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_5, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25991_gshared (Enumerator_t5652 * __this, SortedDictionary_2_t5639 * ___dic, const MethodInfo* method)
{
	{
		SortedDictionary_2_t5639 * L_0 = ___dic;
		NullCheck(L_0);
		RBTree_t3953 * L_1 = (RBTree_t3953 *)(L_0->___tree_0);
		NullCheck((RBTree_t3953 *)L_1);
		NodeEnumerator_t3955  L_2 = RBTree_GetEnumerator_m13331((RBTree_t3953 *)L_1, /*hidden argument*/NULL);
		__this->___host_0 = L_2;
		return;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2140  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25992_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		Node_t5642 * L_0 = (( Node_t5642 * (*) (Enumerator_t5652 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5652 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((Node_t5642 *)L_0);
		DictionaryEntry_t2140  L_1 = (( DictionaryEntry_t2140  (*) (Node_t5642 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Node_t5642 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25993_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		Node_t5642 * L_0 = (( Node_t5642 * (*) (Enumerator_t5652 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5652 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)(L_0->___key_5);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25994_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		Node_t5642 * L_0 = (( Node_t5642 * (*) (Enumerator_t5652 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5652 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)(L_0->___value_6);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* DictionaryEntry_t2140_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25995_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t2140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3353);
		s_Il2CppMethodIntialized = true;
	}
	{
		Node_t5642 * L_0 = (( Node_t5642 * (*) (Enumerator_t5652 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5652 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((Node_t5642 *)L_0);
		DictionaryEntry_t2140  L_1 = (( DictionaryEntry_t2140  (*) (Node_t5642 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Node_t5642 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		DictionaryEntry_t2140  L_2 = L_1;
		Object_t * L_3 = Box(DictionaryEntry_t2140_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m25996_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_Reset_m13318((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t70  Enumerator_get_Current_m25997_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t70  L_0 = (KeyValuePair_2_t70 )(__this->___current_1);
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25998_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		bool L_1 = NodeEnumerator_MoveNext_m13320((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		NodeEnumerator_t3955 * L_2 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		Node_t3952 * L_3 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)L_2, /*hidden argument*/NULL);
		NullCheck((Node_t5642 *)((Node_t5642 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))));
		KeyValuePair_2_t70  L_4 = (( KeyValuePair_2_t70  (*) (Node_t5642 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Node_t5642 *)((Node_t5642 *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		__this->___current_1 = L_4;
		return 1;
	}
}
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25999_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_Dispose_m13321((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.SortedDictionary`2/Node<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_CurrentNode()
extern "C" Node_t5642 * Enumerator_get_CurrentNode_m26000_gshared (Enumerator_t5652 * __this, const MethodInfo* method)
{
	{
		NodeEnumerator_t3955 * L_0 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		NodeEnumerator_check_current_m13323((NodeEnumerator_t3955 *)L_0, /*hidden argument*/NULL);
		NodeEnumerator_t3955 * L_1 = (NodeEnumerator_t3955 *)&(__this->___host_0);
		Node_t3952 * L_2 = NodeEnumerator_get_Current_m13319((NodeEnumerator_t3955 *)L_1, /*hidden argument*/NULL);
		return ((Node_t5642 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)));
	}
}
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_genMethodDeclarations.h"



// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"



// System.Void System.Func`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m26264_gshared (Func_1_t5669 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`1<System.Byte>::Invoke()
extern "C" uint8_t Func_1_Invoke_m26266_gshared (Func_1_t5669 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_1_Invoke_m26266((Func_1_t5669 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`1<System.Byte>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m26268_gshared (Func_1_t5669 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_1_EndInvoke_m26270_gshared (Func_1_t5669 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_24.h"
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_22.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_22.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_24MethodDeclarations.h"
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_22MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"
struct Array_t;
struct Int32U5BU5D_t484;
// Declaration System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisInt32_t82_m64549_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t484** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisInt32_t82_m64549(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t484**, int32_t, const MethodInfo*))Array_Resize_TisInt32_t82_m64549_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct Int32U5BU5D_t484;
// Declaration System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisInt32_t82_m64550_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t484* p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisInt32_t82_m64550(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisInt32_t82_m64550_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Int32U5BU5D_t484;
struct IComparer_1_t5367;
// Declaration System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisInt32_t82_m64552_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t484* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisInt32_t82_m64552(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisInt32_t82_m64552_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Int32U5BU5D_t484;
struct Comparison_1_t5692;
// Declaration System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisInt32_t82_m64558_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t484* p0, int32_t p1, Comparison_1_t5692 * p2, const MethodInfo* method);
#define Array_Sort_TisInt32_t82_m64558(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, Comparison_1_t5692 *, const MethodInfo*))Array_Sort_TisInt32_t82_m64558_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4274_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t484* L_0 = ((List_1_t798_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26477_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t798 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		Int32U5BU5D_t484* L_3 = ((List_1_t798_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t798 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((Int32U5BU5D_t484*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t798 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m26479_gshared (List_1_t798 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_1 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_1, (String_t*)(String_t*) &_stringLiteral2471, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((Int32U5BU5D_t484*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26481_gshared (List_1_t798 * __this, Int32U5BU5D_t484* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m26483_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t798_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((Int32U5BU5D_t484*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26485_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t798 *)__this);
		Enumerator_t5684  L_0 = (( Enumerator_t5684  (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t798 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5684  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26487_gshared (List_1_t798 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26489_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t798 *)__this);
		Enumerator_t5684  L_0 = (( Enumerator_t5684  (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t798 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5684  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m26491_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
			NullCheck((List_1_t798 *)__this);
			VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(T) */, (List_1_t798 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_2 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_2, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m26493_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t798 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T) */, (List_1_t798 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26495_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t798 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T) */, (List_1_t798 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m26497_gshared (List_1_t798 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t798 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t798 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T) */, (List_1_t798 *)__this, (int32_t)L_1, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_3 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_3, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m26499_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t798 *)__this);
			VirtFuncInvoker1< bool, int32_t >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T) */, (List_1_t798 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26501_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26503_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26505_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26507_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26509_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26511_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t798 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32) */, (List_1_t798 *)__this, (int32_t)L_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m26513_gshared (List_1_t798 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
			NullCheck((List_1_t798 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T) */, (List_1_t798 *)__this, (int32_t)L_0, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_2 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_2, (String_t*)(String_t*) &_stringLiteral956, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m26515_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		Int32U5BU5D_t484* L_1 = (Int32U5BU5D_t484*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t798 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		Int32U5BU5D_t484* L_2 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_5)) = (int32_t)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26517_gshared (List_1_t798 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t798 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t798 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m11501(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m11501(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t798 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m26519_gshared (List_1_t798 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		ArgumentOutOfRangeException_t1474 * L_1 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_1, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral632, /*hidden argument*/NULL);
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
		ArgumentException_t712 * L_7 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_7, (String_t*)(String_t*) &_stringLiteral3797, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26521_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t798 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< Int32U5BU5D_t484*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (Int32U5BU5D_t484*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m26523_gshared (List_1_t798 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (int32_t)L_3;
			int32_t L_4 = V_0;
			NullCheck((List_1_t798 *)__this);
			VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(T) */, (List_1_t798 *)__this, (int32_t)L_4);
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
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26525_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t798 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t798 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t798 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5686 * List_1_AsReadOnly_m26527_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t5686 * L_0 = (ReadOnlyCollection_1_t5686 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t5686 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m26529_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		Int32U5BU5D_t484* L_1 = (Int32U5BU5D_t484*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m26531_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Int32U5BU5D_t484*)L_0, (int32_t)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26533_gshared (List_1_t798 * __this, Int32U5BU5D_t484* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		Int32U5BU5D_t484* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t798_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_Find_m26535_gshared (List_1_t798 * __this, Predicate_1_t5688 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		Predicate_1_t5688 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t798_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5688 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5688 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t5688 * L_2 = ___match;
		NullCheck((List_1_t798 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t798 *, int32_t, int32_t, Predicate_1_t5688 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t798 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t5688 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (Int32_t82_il2cpp_TypeInfo_var, (&V_1));
		int32_t L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m26537_gshared (Object_t * __this /* static, unused */, Predicate_1_t5688 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t5688 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26539_gshared (List_1_t798 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5688 * ___match, const MethodInfo* method)
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
		Predicate_1_t5688 * L_3 = ___match;
		Int32U5BU5D_t484* L_4 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t5688 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Predicate`1<System.Int32>::Invoke(T) */, (Predicate_1_t5688 *)L_3, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t5684  List_1_GetEnumerator_m26541_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5684  L_0 = {0};
		(( void (*) (Enumerator_t5684 *, List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t798 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t798 * List_1_GetRange_m26543_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	Int32U5BU5D_t484* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t798 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		V_0 = (Int32U5BU5D_t484*)((Int32U5BU5D_t484*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_4 = ___index;
		Int32U5BU5D_t484* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t798 * L_9 = (List_1_t798 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t798 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (Int32U5BU5D_t484*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26545_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Int32U5BU5D_t484*)L_0, (int32_t)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26547_gshared (List_1_t798 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
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
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_6 = ___start;
		Int32U5BU5D_t484* L_7 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
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
		Int32U5BU5D_t484* L_15 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m26549_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26551_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t798 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Int32U5BU5D_t484* L_2 = (Int32U5BU5D_t484*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t798 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t798 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Int32U5BU5D_t484* L_4 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_5 = ___index;
		int32_t L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m26553_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral2470, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26555_gshared (List_1_t798 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	Int32U5BU5D_t484* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t798 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t798 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t798 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (Int32U5BU5D_t484*)((Int32U5BU5D_t484*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		Int32U5BU5D_t484* L_4 = V_0;
		NullCheck((List_1_t798 *)__this);
		VirtActionInvoker2< Int32U5BU5D_t484*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32) */, (List_1_t798 *)__this, (Int32U5BU5D_t484*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t798 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		Int32U5BU5D_t484* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t798 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Int32U5BU5D_t484* L_8 = V_0;
		Int32U5BU5D_t484* L_9 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_10 = ___index;
		Int32U5BU5D_t484* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (int32_t)0, (Array_t *)(Array_t *)L_9, (int32_t)L_10, (int32_t)(((int32_t)(((Array_t *)L_11)->max_length))), /*hidden argument*/NULL);
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
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t798 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t798 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26557_gshared (List_1_t798 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t798 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t798 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Object_t* L_5 = ___collection;
		Int32U5BU5D_t484* L_6 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< Int32U5BU5D_t484*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (Int32U5BU5D_t484*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m26559_gshared (List_1_t798 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (int32_t)L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			int32_t L_6 = V_0;
			NullCheck((List_1_t798 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T) */, (List_1_t798 *)__this, (int32_t)L_5, (int32_t)L_6);
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
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m26561_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___item;
		NullCheck((List_1_t798 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T) */, (List_1_t798 *)__this, (int32_t)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t798 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32) */, (List_1_t798 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t798_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m26563_gshared (List_1_t798 * __this, Predicate_1_t5688 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5688 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t798_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5688 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5688 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t5688 * L_1 = ___match;
		Int32U5BU5D_t484* L_2 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t5688 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Predicate`1<System.Int32>::Invoke(T) */, (Predicate_1_t5688 *)L_1, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4)));
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
		Predicate_1_t5688 * L_13 = ___match;
		Int32U5BU5D_t484* L_14 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t5688 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Predicate`1<System.Int32>::Invoke(T) */, (Predicate_1_t5688 *)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		Int32U5BU5D_t484* L_18 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		Int32U5BU5D_t484* L_21 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
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
		Int32U5BU5D_t484* L_29 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
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
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m26565_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t798 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26567_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t798 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t798 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		int32_t L_7 = ___count;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		int32_t L_8 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m26569_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m13185(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern TypeInfo* Comparer_1_t5689_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m26571_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10909);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5689_il2cpp_TypeInfo_var);
		Comparer_1_t5689 * L_2 = (( Comparer_1_t5689 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (Int32U5BU5D_t484*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26573_gshared (List_1_t798 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (Int32U5BU5D_t484*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26575_gshared (List_1_t798 * __this, Comparison_1_t5692 * ___comparison, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t5692 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t484*, int32_t, Comparison_1_t5692 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (Int32U5BU5D_t484*)L_0, (int32_t)L_1, (Comparison_1_t5692 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t484* List_1_ToArray_m26577_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	Int32U5BU5D_t484* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (Int32U5BU5D_t484*)((Int32U5BU5D_t484*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		Int32U5BU5D_t484* L_1 = (Int32U5BU5D_t484*)(__this->____items_1);
		Int32U5BU5D_t484* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11476(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26579_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t798 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26581_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m26583_gshared (List_1_t798 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_2 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		Int32U5BU5D_t484** L_3 = (Int32U5BU5D_t484**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t484**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (Int32U5BU5D_t484**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m26585_gshared (List_1_t798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_get_Item_m26587_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_2 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_2, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m26589_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t798 *)__this);
		(( void (*) (List_1_t798 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t798 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		Int32U5BU5D_t484* L_4 = (Int32U5BU5D_t484*)(__this->____items_1);
		int32_t L_5 = ___index;
		int32_t L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m26590_gshared (Enumerator_t5684 * __this, List_1_t798 * ___l, const MethodInfo* method)
{
	{
		List_1_t798 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t798 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m26591_gshared (Enumerator_t5684 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5684 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5684 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26592_gshared (Enumerator_t5684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5684 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5684 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11505(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___current_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m26593_gshared (Enumerator_t5684 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t798 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3297_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m26594_gshared (Enumerator_t5684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5489);
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t798 * L_0 = (List_1_t798 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t5684  L_1 = (*(Enumerator_t5684 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m4075((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3297 * L_5 = (ObjectDisposedException_t3297 *)il2cpp_codegen_object_new (ObjectDisposedException_t3297_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11847(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t798 * L_7 = (List_1_t798 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1430 * L_9 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_9, (String_t*)(String_t*) &_stringLiteral3798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26595_gshared (Enumerator_t5684 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t5684 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5684 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t798 * L_2 = (List_1_t798 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t798 * L_4 = (List_1_t798 *)(__this->___l_0);
		NullCheck(L_4);
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m26596_gshared (Enumerator_t5684 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m26597_gshared (ReadOnlyCollection_1_t5686 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3799, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26598_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m26599_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m26600_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m26601_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m26602_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m26603_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t5686 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t5686 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m26604_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26605_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m26606_gshared (ReadOnlyCollection_1_t5686 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m26607_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
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
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m26608_gshared (ReadOnlyCollection_1_t5686 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m26609_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m26610_gshared (ReadOnlyCollection_1_t5686 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m26611_gshared (ReadOnlyCollection_1_t5686 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m26612_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m26613_gshared (ReadOnlyCollection_1_t5686 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m26614_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m26615_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m26616_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m26617_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m26618_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m26619_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m26620_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m26621_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m26622_gshared (ReadOnlyCollection_1_t5686 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Int32U5BU5D_t484* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Int32U5BU5D_t484*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (Int32U5BU5D_t484*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m26623_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m26624_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m26625_gshared (ReadOnlyCollection_1_t5686 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t ReadOnlyCollection_1_get_Item_m26626_gshared (ReadOnlyCollection_1_t5686 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m26627_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t798 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t798 * L_0 = (List_1_t798 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t798 *)L_0;
		List_1_t798 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t798 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26628_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m26629_gshared (Collection_1_t5687 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m26630_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m26631_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t5687 *)__this, (int32_t)L_2, (int32_t)L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m26632_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m26633_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m26634_gshared (Collection_1_t5687 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t5687 *)__this, (int32_t)L_0, (int32_t)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m26635_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5687 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T) */, (Collection_1_t5687 *)__this, (int32_t)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t5687 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m26636_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m26637_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m26638_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m26639_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m26640_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m26641_gshared (Collection_1_t5687 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T) */, (Collection_1_t5687 *)__this, (int32_t)L_0, (int32_t)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m26642_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___item;
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t5687 *)__this, (int32_t)L_2, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m26643_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems() */, (Collection_1_t5687 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m26644_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m26645_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m26646_gshared (Collection_1_t5687 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Int32U5BU5D_t484* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Int32U5BU5D_t484*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Int32U5BU5D_t484*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m26647_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m26648_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m26649_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___item;
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t5687 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m26650_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		int32_t L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Int32>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m26651_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___item;
		NullCheck((Collection_1_t5687 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T) */, (Collection_1_t5687 *)__this, (int32_t)L_0);
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
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t5687 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m26652_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t5687 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m26653_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m26654_gshared (Collection_1_t5687 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m26655_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m26656_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___value;
		NullCheck((Collection_1_t5687 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T) */, (Collection_1_t5687 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m26657_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		int32_t L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int32>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m26658_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
		Type_t * L_2 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
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
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t Collection_1_ConvertItem_m26659_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		return ((*(int32_t*)((int32_t*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t712 * L_3 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_3, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m26660_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m26661_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t755_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t687_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m26662_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t687_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t687_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m26663_gshared (Predicate_1_t5688 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m26664_gshared (Predicate_1_t5688 * __this, int32_t ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m26664((Predicate_1_t5688 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m26665_gshared (Predicate_1_t5688 * __this, int32_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m26666_gshared (Predicate_1_t5688 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
extern "C" void Comparer_1__ctor_m26667_gshared (Comparer_1_t5689 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
extern const Il2CppType* GenericComparer_1_t4927_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1204_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m26668_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t4927_0_0_0_var = il2cpp_codegen_type_from_index(8842);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(GenericComparer_1_t4927_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1204* L_4 = (TypeU5BU5D_t1204*)((TypeU5BU5D_t1204*)SZArrayNew(TypeU5BU5D_t1204_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1204* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1204*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7482(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t5689_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t5689 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5691 * L_8 = (DefaultComparer_t5691 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5691 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t5689_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m26669_gshared (Comparer_1_t5689 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		NullCheck((Comparer_1_t5689 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (Comparer_1_t5689 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t712 * L_8 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
extern "C" Comparer_1_t5689 * Comparer_1_get_Default_m26670_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t5689 * L_0 = ((Comparer_1_t5689_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericComparer`1<System.Int32>::.ctor()
extern TypeInfo* Comparer_1_t5689_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m26671_gshared (GenericComparer_1_t5690 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10909);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t5689 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5689_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Int32>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m26672_gshared (GenericComparer_1_t5690 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
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
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
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
		int32_t L_9 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.IComparable`1<System.Int32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (int32_t)L_9);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.Int32>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
extern TypeInfo* Comparer_1_t5689_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m26673_gshared (DefaultComparer_t5691 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10909);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t5689 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5689_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
extern TypeInfo* IComparable_t99_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m26674_gshared (DefaultComparer_t5691 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
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
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
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
		int32_t L_9 = ___x;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = ___x;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		int32_t L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.IComparable`1<System.Int32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (int32_t)L_15);
		return L_16;
	}

IL_003e:
	{
		int32_t L_17 = ___x;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t99_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = ___x;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		int32_t L_23 = ___y;
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t99_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t712 * L_27 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_27, (String_t*)(String_t*) &_stringLiteral3786, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_22MethodDeclarations.h"



// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m26675_gshared (Comparison_1_t5692 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m26676_gshared (Comparison_1_t5692 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m26676((Comparison_1_t5692 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m26677_gshared (Comparison_1_t5692 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m26678_gshared (Comparison_1_t5692 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// EnumAccumulator`1<System.Object>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// EnumAccumulator`1<System.Object>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_4MethodDeclarations.h"



// System.Void EnumAccumulator`1<System.Object>::.ctor(System.Int32)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void EnumAccumulator_1__ctor_m26944_gshared (EnumAccumulator_1_t5712 * __this, int32_t ___numValues, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___numValues;
		__this->___newCount_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___numValues;
		__this->___derivedCount_1 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_1));
		Int32U5BU5D_t484* L_2 = (Int32U5BU5D_t484*)(__this->___newCount_0);
		NullCheck((EnumAccumulator_1_t5712 *)__this);
		(( void (*) (EnumAccumulator_1_t5712 *, Int32U5BU5D_t484*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EnumAccumulator_1_t5712 *)__this, (Int32U5BU5D_t484*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		NullCheck((EnumAccumulator_1_t5712 *)__this);
		(( void (*) (EnumAccumulator_1_t5712 *, Int32U5BU5D_t484*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EnumAccumulator_1_t5712 *)__this, (Int32U5BU5D_t484*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Object>::InitToZero(System.Int32[])
extern "C" void EnumAccumulator_1_InitToZero_m26945_gshared (EnumAccumulator_1_t5712 * __this, Int32U5BU5D_t484* ___array, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_000f;
	}

IL_0007:
	{
		Int32U5BU5D_t484* L_0 = ___array;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1)) = (int32_t)0;
		int32_t L_2 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = V_0;
		Int32U5BU5D_t484* L_4 = ___array;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnumAccumulator`1<System.Object>::AddNew(System.Int32,System.Int32)
extern "C" void EnumAccumulator_1_AddNew_m26946_gshared (EnumAccumulator_1_t5712 * __this, int32_t ___indexT, int32_t ___value, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___newCount_0);
		int32_t L_1 = ___indexT;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t* L_2 = (int32_t*)((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		int32_t L_3 = ___value;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_2))+(int32_t)L_3));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Object>::AddNew(System.Int32)
extern "C" void EnumAccumulator_1_AddNew_m26947_gshared (EnumAccumulator_1_t5712 * __this, int32_t ___indexT, const MethodInfo* method)
{
	{
		int32_t L_0 = ___indexT;
		NullCheck((EnumAccumulator_1_t5712 *)__this);
		(( void (*) (EnumAccumulator_1_t5712 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((EnumAccumulator_1_t5712 *)__this, (int32_t)L_0, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Object>::AddDerived(System.Int32,System.Int32)
extern "C" void EnumAccumulator_1_AddDerived_m26948_gshared (EnumAccumulator_1_t5712 * __this, int32_t ___indexT, int32_t ___value, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		int32_t L_1 = ___indexT;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t* L_2 = (int32_t*)((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		int32_t L_3 = ___value;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_2))+(int32_t)L_3));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Object>::AddDerived(System.Int32)
extern "C" void EnumAccumulator_1_AddDerived_m26949_gshared (EnumAccumulator_1_t5712 * __this, int32_t ___indexT, const MethodInfo* method)
{
	{
		int32_t L_0 = ___indexT;
		NullCheck((EnumAccumulator_1_t5712 *)__this);
		(( void (*) (EnumAccumulator_1_t5712 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((EnumAccumulator_1_t5712 *)__this, (int32_t)L_0, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Object>::DeriveFrom(EnumAccumulator`1<T>)
extern "C" void EnumAccumulator_1_DeriveFrom_m26950_gshared (EnumAccumulator_1_t5712 * __this, EnumAccumulator_1_t5712 * ___enumAccumulator, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0024;
	}

IL_0007:
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		int32_t L_1 = V_0;
		EnumAccumulator_1_t5712 * L_2 = ___enumAccumulator;
		NullCheck(L_2);
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(L_2->___derivedCount_1);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Int32U5BU5D_t484* L_6 = (Int32U5BU5D_t484*)(__this->___newCount_0);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_8))));
		int32_t L_9 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_10 = V_0;
		Int32U5BU5D_t484* L_11 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> EnumAccumulator`1<System.Object>::GetDistribution()
extern TypeInfo* List_1_t798_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4274_MethodInfo_var;
extern "C" List_1_t798 * EnumAccumulator_1_GetDistribution_m26951_gshared (EnumAccumulator_1_t5712 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		List_1__ctor_m4274_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484196);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t798 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t798 * L_0 = (List_1_t798 *)il2cpp_codegen_object_new (List_1_t798_il2cpp_TypeInfo_var);
		List_1__ctor_m4274(L_0, /*hidden argument*/List_1__ctor_m4274_MethodInfo_var);
		V_0 = (List_1_t798 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0031;
	}

IL_000d:
	{
		V_2 = (int32_t)0;
		goto IL_001f;
	}

IL_0014:
	{
		List_1_t798 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t798 *)L_1);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, (List_1_t798 *)L_1, (int32_t)L_2);
		int32_t L_3 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_4 = V_2;
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		if ((((int32_t)L_4) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		Int32U5BU5D_t484* L_10 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t798 * L_11 = V_0;
		return L_11;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" Vector3_t535  Array_InternalArray__get_Item_TisVector3_t535_m64561_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector3_t535_m64561(__this, p0, method) (( Vector3_t535  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector3_t535_m64561_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m26952_gshared (InternalEnumerator_1_t5713 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26953_gshared (InternalEnumerator_1_t5713 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26954_gshared (InternalEnumerator_1_t5713 * __this, const MethodInfo* method)
{
	{
		Vector3_t535  L_0 = (( Vector3_t535  (*) (InternalEnumerator_1_t5713 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5713 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3_t535  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m26955_gshared (InternalEnumerator_1_t5713 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m26956_gshared (InternalEnumerator_1_t5713 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15091((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" Vector3_t535  InternalEnumerator_1_get_Current_m26957_gshared (InternalEnumerator_1_t5713 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
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
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_1, (String_t*)(String_t*) &_stringLiteral3674, /*hidden argument*/NULL);
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
		InvalidOperationException_t1430 * L_3 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_3, (String_t*)(String_t*) &_stringLiteral3675, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15091((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector3_t535  L_8 = (( Vector3_t535  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Single
#include "mscorlib_System_Single.h"


// T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current()
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t87_m64572_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t87_m64572(__this, p0, method) (( float (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSingle_t87_m64572_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m26958_gshared (InternalEnumerator_1_t5714 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m26959_gshared (InternalEnumerator_1_t5714 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26960_gshared (InternalEnumerator_1_t5714 * __this, const MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t5714 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5714 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m26961_gshared (InternalEnumerator_1_t5714 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m26962_gshared (InternalEnumerator_1_t5714 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15091((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" float InternalEnumerator_1_get_Current_m26963_gshared (InternalEnumerator_1_t5714 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
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
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_1, (String_t*)(String_t*) &_stringLiteral3674, /*hidden argument*/NULL);
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
		InvalidOperationException_t1430 * L_3 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_3, (String_t*)(String_t*) &_stringLiteral3675, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15091((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		float L_8 = (( float (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Single>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Single>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,T)
// EnumAccumulator`1<System.Int32>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// EnumAccumulator`1<System.Int32>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen_5MethodDeclarations.h"



// System.Void EnumAccumulator`1<System.Int32>::.ctor(System.Int32)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void EnumAccumulator_1__ctor_m26976_gshared (EnumAccumulator_1_t5717 * __this, int32_t ___numValues, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___numValues;
		__this->___newCount_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___numValues;
		__this->___derivedCount_1 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_1));
		Int32U5BU5D_t484* L_2 = (Int32U5BU5D_t484*)(__this->___newCount_0);
		NullCheck((EnumAccumulator_1_t5717 *)__this);
		(( void (*) (EnumAccumulator_1_t5717 *, Int32U5BU5D_t484*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EnumAccumulator_1_t5717 *)__this, (Int32U5BU5D_t484*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		NullCheck((EnumAccumulator_1_t5717 *)__this);
		(( void (*) (EnumAccumulator_1_t5717 *, Int32U5BU5D_t484*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EnumAccumulator_1_t5717 *)__this, (Int32U5BU5D_t484*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Int32>::InitToZero(System.Int32[])
extern "C" void EnumAccumulator_1_InitToZero_m26978_gshared (EnumAccumulator_1_t5717 * __this, Int32U5BU5D_t484* ___array, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_000f;
	}

IL_0007:
	{
		Int32U5BU5D_t484* L_0 = ___array;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1)) = (int32_t)0;
		int32_t L_2 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = V_0;
		Int32U5BU5D_t484* L_4 = ___array;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnumAccumulator`1<System.Int32>::AddNew(System.Int32,System.Int32)
extern "C" void EnumAccumulator_1_AddNew_m26980_gshared (EnumAccumulator_1_t5717 * __this, int32_t ___indexT, int32_t ___value, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___newCount_0);
		int32_t L_1 = ___indexT;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t* L_2 = (int32_t*)((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		int32_t L_3 = ___value;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_2))+(int32_t)L_3));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Int32>::AddNew(System.Int32)
extern "C" void EnumAccumulator_1_AddNew_m26981_gshared (EnumAccumulator_1_t5717 * __this, int32_t ___indexT, const MethodInfo* method)
{
	{
		int32_t L_0 = ___indexT;
		NullCheck((EnumAccumulator_1_t5717 *)__this);
		(( void (*) (EnumAccumulator_1_t5717 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((EnumAccumulator_1_t5717 *)__this, (int32_t)L_0, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Int32>::AddDerived(System.Int32,System.Int32)
extern "C" void EnumAccumulator_1_AddDerived_m26982_gshared (EnumAccumulator_1_t5717 * __this, int32_t ___indexT, int32_t ___value, const MethodInfo* method)
{
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		int32_t L_1 = ___indexT;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t* L_2 = (int32_t*)((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		int32_t L_3 = ___value;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_2))+(int32_t)L_3));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Int32>::AddDerived(System.Int32)
extern "C" void EnumAccumulator_1_AddDerived_m26984_gshared (EnumAccumulator_1_t5717 * __this, int32_t ___indexT, const MethodInfo* method)
{
	{
		int32_t L_0 = ___indexT;
		NullCheck((EnumAccumulator_1_t5717 *)__this);
		(( void (*) (EnumAccumulator_1_t5717 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((EnumAccumulator_1_t5717 *)__this, (int32_t)L_0, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Void EnumAccumulator`1<System.Int32>::DeriveFrom(EnumAccumulator`1<T>)
extern "C" void EnumAccumulator_1_DeriveFrom_m26985_gshared (EnumAccumulator_1_t5717 * __this, EnumAccumulator_1_t5717 * ___enumAccumulator, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0024;
	}

IL_0007:
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		int32_t L_1 = V_0;
		EnumAccumulator_1_t5717 * L_2 = ___enumAccumulator;
		NullCheck(L_2);
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(L_2->___derivedCount_1);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Int32U5BU5D_t484* L_6 = (Int32U5BU5D_t484*)(__this->___newCount_0);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_8))));
		int32_t L_9 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_10 = V_0;
		Int32U5BU5D_t484* L_11 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> EnumAccumulator`1<System.Int32>::GetDistribution()
extern TypeInfo* List_1_t798_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4274_MethodInfo_var;
extern "C" List_1_t798 * EnumAccumulator_1_GetDistribution_m26987_gshared (EnumAccumulator_1_t5717 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(540);
		List_1__ctor_m4274_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484196);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t798 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t798 * L_0 = (List_1_t798 *)il2cpp_codegen_object_new (List_1_t798_il2cpp_TypeInfo_var);
		List_1__ctor_m4274(L_0, /*hidden argument*/List_1__ctor_m4274_MethodInfo_var);
		V_0 = (List_1_t798 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0031;
	}

IL_000d:
	{
		V_2 = (int32_t)0;
		goto IL_001f;
	}

IL_0014:
	{
		List_1_t798 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_t798 *)L_1);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, (List_1_t798 *)L_1, (int32_t)L_2);
		int32_t L_3 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_4 = V_2;
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		if ((((int32_t)L_4) < ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		Int32U5BU5D_t484* L_10 = (Int32U5BU5D_t484*)(__this->___derivedCount_1);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t798 * L_11 = V_0;
		return L_11;
	}
}
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// QuasiRandomGenerator`1<System.Int32>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_genMethodDeclarations.h"

// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
struct Utilities_t674;
struct List_1_t798;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
// Declaration System.Void Utilities::ShuffleList<System.Int32>(System.Collections.Generic.List`1<!!0>&)
// System.Void Utilities::ShuffleList<System.Int32>(System.Collections.Generic.List`1<!!0>&)
extern "C" void Utilities_ShuffleList_TisInt32_t82_m64582_gshared (Object_t * __this /* static, unused */, List_1_t798 ** p0, const MethodInfo* method);
#define Utilities_ShuffleList_TisInt32_t82_m64582(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, List_1_t798 **, const MethodInfo*))Utilities_ShuffleList_TisInt32_t82_m64582_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t68;
struct IEnumerable_1_t1478;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
// Declaration !!0 System.Linq.Enumerable::ElementAt<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// !!0 System.Linq.Enumerable::ElementAt<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" int32_t Enumerable_ElementAt_TisInt32_t82_m64584_gshared (Object_t * __this /* static, unused */, Object_t* p0, int32_t p1, const MethodInfo* method);
#define Enumerable_ElementAt_TisInt32_t82_m64584(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))Enumerable_ElementAt_TisInt32_t82_m64584_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m4264_gshared (QuasiRandomGenerator_1_t585 * __this, List_1_t798 * ___distribution, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t798 * L_0 = ___distribution;
		NullCheck((List_1_t798 *)L_0);
		Int32U5BU5D_t484* L_1 = (( Int32U5BU5D_t484* (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((List_1_t798 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___distribution_0 = L_1;
		List_1_t798 * L_2 = (List_1_t798 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___values_1 = L_2;
		return;
	}
}
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27109_gshared (QuasiRandomGenerator_1_t585 * __this, Int32U5BU5D_t484* ___distribution, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_0 = ___distribution;
		__this->___distribution_0 = L_0;
		List_1_t798 * L_1 = (List_1_t798 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___values_1 = L_1;
		return;
	}
}
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" List_1_t798 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27111_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t798 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t798 * L_0 = (List_1_t798 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t798 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (List_1_t798 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_000d:
	{
		List_1_t798 * L_1 = V_0;
		Int32U5BU5D_t484* L_2 = (Int32U5BU5D_t484*)(__this->___distribution_0);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((List_1_t798 *)L_1);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, (List_1_t798 *)L_1, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4)));
		int32_t L_5 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		Int32U5BU5D_t484* L_7 = (Int32U5BU5D_t484*)(__this->___distribution_0);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, List_1_t798 **, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (List_1_t798 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		List_1_t798 * L_8 = V_0;
		return L_8;
	}
}
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m4265_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		List_1_t798 * L_0 = (List_1_t798 *)(__this->___values_1);
		NullCheck((List_1_t798 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count() */, (List_1_t798 *)L_0);
		int32_t L_2 = (int32_t)(__this->___refreshTrigger_2);
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		NullCheck((QuasiRandomGenerator_1_t585 *)__this);
		(( void (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuasiRandomGenerator_1_t585 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_001c:
	{
		List_1_t798 * L_3 = (List_1_t798 *)(__this->___values_1);
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t*)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_0 = (int32_t)L_4;
		List_1_t798 * L_5 = (List_1_t798 *)(__this->___values_1);
		NullCheck((List_1_t798 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32) */, (List_1_t798 *)L_5, (int32_t)0);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27112_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method)
{
	{
		NullCheck((QuasiRandomGenerator_1_t585 *)__this);
		List_1_t798 * L_0 = (( List_1_t798 * (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((QuasiRandomGenerator_1_t585 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___values_1 = L_0;
		return;
	}
}
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// QuasiRandomGenerator`1<System.Single>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.List`1<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_gen_67.h"
// System.Collections.Generic.List`1<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_gen_67MethodDeclarations.h"
struct Utilities_t674;
struct List_1_t5726;
// Declaration System.Void Utilities::ShuffleList<System.Single>(System.Collections.Generic.List`1<!!0>&)
// System.Void Utilities::ShuffleList<System.Single>(System.Collections.Generic.List`1<!!0>&)
extern "C" void Utilities_ShuffleList_TisSingle_t87_m64597_gshared (Object_t * __this /* static, unused */, List_1_t5726 ** p0, const MethodInfo* method);
#define Utilities_ShuffleList_TisSingle_t87_m64597(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, List_1_t5726 **, const MethodInfo*))Utilities_ShuffleList_TisSingle_t87_m64597_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t68;
struct IEnumerable_1_t6371;
// Declaration !!0 System.Linq.Enumerable::ElementAt<System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// !!0 System.Linq.Enumerable::ElementAt<System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" float Enumerable_ElementAt_TisSingle_t87_m64599_gshared (Object_t * __this /* static, unused */, Object_t* p0, int32_t p1, const MethodInfo* method);
#define Enumerable_ElementAt_TisSingle_t87_m64599(__this /* static, unused */, p0, p1, method) (( float (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))Enumerable_ElementAt_TisSingle_t87_m64599_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27170_gshared (QuasiRandomGenerator_1_t586 * __this, List_1_t5726 * ___distribution, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t5726 * L_0 = ___distribution;
		NullCheck((List_1_t5726 *)L_0);
		SingleU5BU5D_t583* L_1 = (( SingleU5BU5D_t583* (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((List_1_t5726 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___distribution_0 = L_1;
		List_1_t5726 * L_2 = (List_1_t5726 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___values_1 = L_2;
		return;
	}
}
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4275_gshared (QuasiRandomGenerator_1_t586 * __this, SingleU5BU5D_t583* ___distribution, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SingleU5BU5D_t583* L_0 = ___distribution;
		__this->___distribution_0 = L_0;
		List_1_t5726 * L_1 = (List_1_t5726 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___values_1 = L_1;
		return;
	}
}
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" List_1_t5726 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27171_gshared (QuasiRandomGenerator_1_t586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t5726 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t5726 * L_0 = (List_1_t5726 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (List_1_t5726 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_000d:
	{
		List_1_t5726 * L_1 = V_0;
		SingleU5BU5D_t583* L_2 = (SingleU5BU5D_t583*)(__this->___distribution_0);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((List_1_t5726 *)L_1);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, (List_1_t5726 *)L_1, (float)(*(float*)(float*)SZArrayLdElema(L_2, L_4)));
		int32_t L_5 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		SingleU5BU5D_t583* L_7 = (SingleU5BU5D_t583*)(__this->___distribution_0);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, List_1_t5726 **, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (List_1_t5726 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		List_1_t5726 * L_8 = V_0;
		return L_8;
	}
}
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4269_gshared (QuasiRandomGenerator_1_t586 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		List_1_t5726 * L_0 = (List_1_t5726 *)(__this->___values_1);
		NullCheck((List_1_t5726 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count() */, (List_1_t5726 *)L_0);
		int32_t L_2 = (int32_t)(__this->___refreshTrigger_2);
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		NullCheck((QuasiRandomGenerator_1_t586 *)__this);
		(( void (*) (QuasiRandomGenerator_1_t586 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuasiRandomGenerator_1_t586 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_001c:
	{
		List_1_t5726 * L_3 = (List_1_t5726 *)(__this->___values_1);
		float L_4 = (( float (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t*)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_0 = (float)L_4;
		List_1_t5726 * L_5 = (List_1_t5726 *)(__this->___values_1);
		NullCheck((List_1_t5726 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32) */, (List_1_t5726 *)L_5, (int32_t)0);
		float L_6 = V_0;
		return L_6;
	}
}
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27172_gshared (QuasiRandomGenerator_1_t586 * __this, const MethodInfo* method)
{
	{
		NullCheck((QuasiRandomGenerator_1_t586 *)__this);
		List_1_t5726 * L_0 = (( List_1_t5726 * (*) (QuasiRandomGenerator_1_t586 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((QuasiRandomGenerator_1_t586 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___values_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_29.h"
// System.Predicate`1<System.Single>
#include "mscorlib_System_Predicate_1_gen_27.h"
// System.Collections.Generic.Comparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Comparison`1<System.Single>
#include "mscorlib_System_Comparison_1_gen_27.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_29MethodDeclarations.h"
// System.Predicate`1<System.Single>
#include "mscorlib_System_Predicate_1_gen_27MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
struct Array_t;
struct SingleU5BU5D_t583;
// Declaration System.Void System.Array::Resize<System.Single>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Single>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisSingle_t87_m64586_gshared (Object_t * __this /* static, unused */, SingleU5BU5D_t583** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisSingle_t87_m64586(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, SingleU5BU5D_t583**, int32_t, const MethodInfo*))Array_Resize_TisSingle_t87_m64586_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct SingleU5BU5D_t583;
// Declaration System.Int32 System.Array::IndexOf<System.Single>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Single>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisSingle_t87_m64587_gshared (Object_t * __this /* static, unused */, SingleU5BU5D_t583* p0, float p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisSingle_t87_m64587(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, float, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisSingle_t87_m64587_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct SingleU5BU5D_t583;
struct IComparer_1_t8940;
// Declaration System.Void System.Array::Sort<System.Single>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Single>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisSingle_t87_m64589_gshared (Object_t * __this /* static, unused */, SingleU5BU5D_t583* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisSingle_t87_m64589(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisSingle_t87_m64589_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct SingleU5BU5D_t583;
struct Comparison_1_t5738;
// Declaration System.Void System.Array::Sort<System.Single>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Single>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisSingle_t87_m64595_gshared (Object_t * __this /* static, unused */, SingleU5BU5D_t583* p0, int32_t p1, Comparison_1_t5738 * p2, const MethodInfo* method);
#define Array_Sort_TisSingle_t87_m64595(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, int32_t, Comparison_1_t5738 *, const MethodInfo*))Array_Sort_TisSingle_t87_m64595_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m27173_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		SingleU5BU5D_t583* L_0 = ((List_1_t5726_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27174_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t5726 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		SingleU5BU5D_t583* L_3 = ((List_1_t5726_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t5726 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((SingleU5BU5D_t583*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t5726 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m27175_gshared (List_1_t5726 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_1 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_1, (String_t*)(String_t*) &_stringLiteral2471, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((SingleU5BU5D_t583*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m27176_gshared (List_1_t5726 * __this, SingleU5BU5D_t583* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SingleU5BU5D_t583* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m27177_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t5726_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((SingleU5BU5D_t583*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27178_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t5726 *)__this);
		Enumerator_t5727  L_0 = (( Enumerator_t5727  (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t5726 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5727  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27179_gshared (List_1_t5726 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27180_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t5726 *)__this);
		Enumerator_t5727  L_0 = (( Enumerator_t5727  (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t5726 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5727  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m27181_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
			NullCheck((List_1_t5726 *)__this);
			VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(T) */, (List_1_t5726 *)__this, (float)((*(float*)((float*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_2 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_2, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m27182_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t5726 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, float >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T) */, (List_1_t5726 *)__this, (float)((*(float*)((float*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27183_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t5726 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, float >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T) */, (List_1_t5726 *)__this, (float)((*(float*)((float*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m27184_gshared (List_1_t5726 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t5726 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t5726 *)__this);
			VirtActionInvoker2< int32_t, float >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T) */, (List_1_t5726 *)__this, (int32_t)L_1, (float)((*(float*)((float*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_3 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_3, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m27185_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t5726 *)__this);
			VirtFuncInvoker1< bool, float >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T) */, (List_1_t5726 *)__this, (float)((*(float*)((float*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27186_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27187_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27188_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27189_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27190_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27191_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t5726 *)__this);
		float L_1 = (float)VirtFuncInvoker1< float, int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32) */, (List_1_t5726 *)__this, (int32_t)L_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m27192_gshared (List_1_t5726 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
			NullCheck((List_1_t5726 *)__this);
			VirtActionInvoker2< int32_t, float >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T) */, (List_1_t5726 *)__this, (int32_t)L_0, (float)((*(float*)((float*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_2 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_2, (String_t*)(String_t*) &_stringLiteral956, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m27193_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		SingleU5BU5D_t583* L_1 = (SingleU5BU5D_t583*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t5726 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		SingleU5BU5D_t583* L_2 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		float L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((float*)(float*)SZArrayLdElema(L_2, L_5)) = (float)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27194_gshared (List_1_t5726 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		SingleU5BU5D_t583* L_3 = (SingleU5BU5D_t583*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t5726 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t5726 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m11501(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m11501(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t5726 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m27195_gshared (List_1_t5726 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		ArgumentOutOfRangeException_t1474 * L_1 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_1, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral632, /*hidden argument*/NULL);
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
		ArgumentException_t712 * L_7 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_7, (String_t*)(String_t*) &_stringLiteral3797, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27196_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t5726 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		SingleU5BU5D_t583* L_5 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< SingleU5BU5D_t583*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (SingleU5BU5D_t583*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m27197_gshared (List_1_t5726 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			float L_3 = (float)InterfaceFuncInvoker0< float >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (float)L_3;
			float L_4 = V_0;
			NullCheck((List_1_t5726 *)__this);
			VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(T) */, (List_1_t5726 *)__this, (float)L_4);
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
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27198_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t5726 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t5726 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t5726 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5729 * List_1_AsReadOnly_m27199_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t5729 * L_0 = (ReadOnlyCollection_1_t5729 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t5729 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m27200_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		SingleU5BU5D_t583* L_1 = (SingleU5BU5D_t583*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m27201_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		float L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, float, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (SingleU5BU5D_t583*)L_0, (float)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27202_gshared (List_1_t5726 * __this, SingleU5BU5D_t583* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		SingleU5BU5D_t583* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t5726_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern "C" float List_1_Find_m27203_gshared (List_1_t5726 * __this, Predicate_1_t5734 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t5726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2965);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Predicate_1_t5734 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t5726_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5734 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5734 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t5734 * L_2 = ___match;
		NullCheck((List_1_t5726 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t5726 *, int32_t, int32_t, Predicate_1_t5734 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t5726 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t5734 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		SingleU5BU5D_t583* L_5 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(float*)(float*)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (Single_t87_il2cpp_TypeInfo_var, (&V_1));
		float L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m27204_gshared (Object_t * __this /* static, unused */, Predicate_1_t5734 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t5734 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27205_gshared (List_1_t5726 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5734 * ___match, const MethodInfo* method)
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
		Predicate_1_t5734 * L_3 = ___match;
		SingleU5BU5D_t583* L_4 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t5734 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, float >::Invoke(11 /* System.Boolean System.Predicate`1<System.Single>::Invoke(T) */, (Predicate_1_t5734 *)L_3, (float)(*(float*)(float*)SZArrayLdElema(L_4, L_6)));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t5727  List_1_GetEnumerator_m27206_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5727  L_0 = {0};
		(( void (*) (Enumerator_t5727 *, List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t5726 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5726 * List_1_GetRange_m27207_gshared (List_1_t5726 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	SingleU5BU5D_t583* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t5726 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		V_0 = (SingleU5BU5D_t583*)((SingleU5BU5D_t583*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		SingleU5BU5D_t583* L_3 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_4 = ___index;
		SingleU5BU5D_t583* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		SingleU5BU5D_t583* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t5726 * L_9 = (List_1_t5726 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t5726 *, SingleU5BU5D_t583*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (SingleU5BU5D_t583*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27208_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		float L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, float, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (SingleU5BU5D_t583*)L_0, (float)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27209_gshared (List_1_t5726 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
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
		SingleU5BU5D_t583* L_5 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_6 = ___start;
		SingleU5BU5D_t583* L_7 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
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
		SingleU5BU5D_t583* L_15 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m27210_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27211_gshared (List_1_t5726 * __this, int32_t ___index, float ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t5726 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		SingleU5BU5D_t583* L_2 = (SingleU5BU5D_t583*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t5726 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t5726 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		SingleU5BU5D_t583* L_4 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_5 = ___index;
		float L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((float*)(float*)SZArrayLdElema(L_4, L_5)) = (float)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m27212_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral2470, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m27213_gshared (List_1_t5726 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	SingleU5BU5D_t583* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t5726 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t5726 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t5726 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (SingleU5BU5D_t583*)((SingleU5BU5D_t583*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		SingleU5BU5D_t583* L_4 = V_0;
		NullCheck((List_1_t5726 *)__this);
		VirtActionInvoker2< SingleU5BU5D_t583*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32) */, (List_1_t5726 *)__this, (SingleU5BU5D_t583*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t5726 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		SingleU5BU5D_t583* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t5726 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		SingleU5BU5D_t583* L_8 = V_0;
		SingleU5BU5D_t583* L_9 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_10 = ___index;
		SingleU5BU5D_t583* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (int32_t)0, (Array_t *)(Array_t *)L_9, (int32_t)L_10, (int32_t)(((int32_t)(((Array_t *)L_11)->max_length))), /*hidden argument*/NULL);
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
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t5726 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t5726 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m27214_gshared (List_1_t5726 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t5726 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t5726 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Object_t* L_5 = ___collection;
		SingleU5BU5D_t583* L_6 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< SingleU5BU5D_t583*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (SingleU5BU5D_t583*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m27215_gshared (List_1_t5726 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			float L_3 = (float)InterfaceFuncInvoker0< float >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (float)L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			float L_6 = V_0;
			NullCheck((List_1_t5726 *)__this);
			VirtActionInvoker2< int32_t, float >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T) */, (List_1_t5726 *)__this, (int32_t)L_5, (float)L_6);
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
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m27216_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = ___item;
		NullCheck((List_1_t5726 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, float >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T) */, (List_1_t5726 *)__this, (float)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t5726 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32) */, (List_1_t5726 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t5726_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m27217_gshared (List_1_t5726 * __this, Predicate_1_t5734 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t5726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2965);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5734 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t5726_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5734 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5734 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t5734 * L_1 = ___match;
		SingleU5BU5D_t583* L_2 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t5734 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, float >::Invoke(11 /* System.Boolean System.Predicate`1<System.Single>::Invoke(T) */, (Predicate_1_t5734 *)L_1, (float)(*(float*)(float*)SZArrayLdElema(L_2, L_4)));
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
		Predicate_1_t5734 * L_13 = ___match;
		SingleU5BU5D_t583* L_14 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t5734 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, float >::Invoke(11 /* System.Boolean System.Predicate`1<System.Single>::Invoke(T) */, (Predicate_1_t5734 *)L_13, (float)(*(float*)(float*)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		SingleU5BU5D_t583* L_18 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		SingleU5BU5D_t583* L_21 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((float*)(float*)SZArrayLdElema(L_18, L_20)) = (float)(*(float*)(float*)SZArrayLdElema(L_21, L_23));
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
		SingleU5BU5D_t583* L_29 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
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
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m27218_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t5726 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		SingleU5BU5D_t583* L_5 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m27219_gshared (List_1_t5726 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t5726 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t5726 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		SingleU5BU5D_t583* L_5 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		int32_t L_7 = ___count;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		int32_t L_8 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m27220_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m13185(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern TypeInfo* Comparer_1_t5735_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m27221_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11014);
		s_Il2CppMethodIntialized = true;
	}
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5735_il2cpp_TypeInfo_var);
		Comparer_1_t5735 * L_2 = (( Comparer_1_t5735 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		(( void (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (SingleU5BU5D_t583*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27222_gshared (List_1_t5726 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (SingleU5BU5D_t583*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m27223_gshared (List_1_t5726 * __this, Comparison_1_t5738 * ___comparison, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t5738 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, SingleU5BU5D_t583*, int32_t, Comparison_1_t5738 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (SingleU5BU5D_t583*)L_0, (int32_t)L_1, (Comparison_1_t5738 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t583* List_1_ToArray_m27224_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	SingleU5BU5D_t583* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (SingleU5BU5D_t583*)((SingleU5BU5D_t583*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		SingleU5BU5D_t583* L_1 = (SingleU5BU5D_t583*)(__this->____items_1);
		SingleU5BU5D_t583* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11476(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		SingleU5BU5D_t583* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m27225_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t5726 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27226_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		SingleU5BU5D_t583* L_0 = (SingleU5BU5D_t583*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m27227_gshared (List_1_t5726 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_2 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		SingleU5BU5D_t583** L_3 = (SingleU5BU5D_t583**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, SingleU5BU5D_t583**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (SingleU5BU5D_t583**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m27228_gshared (List_1_t5726 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" float List_1_get_Item_m27229_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_2 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_2, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		SingleU5BU5D_t583* L_3 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(float*)(float*)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m27230_gshared (List_1_t5726 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t5726 *)__this);
		(( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t5726 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		SingleU5BU5D_t583* L_4 = (SingleU5BU5D_t583*)(__this->____items_1);
		int32_t L_5 = ___index;
		float L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((float*)(float*)SZArrayLdElema(L_4, L_5)) = (float)L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m27231_gshared (Enumerator_t5727 * __this, List_1_t5726 * ___l, const MethodInfo* method)
{
	{
		List_1_t5726 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t5726 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m27232_gshared (Enumerator_t5727 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5727 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Single>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27233_gshared (Enumerator_t5727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5727 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11505(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		float L_2 = (float)(__this->___current_3);
		float L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::Dispose()
extern "C" void Enumerator_Dispose_m27234_gshared (Enumerator_t5727 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t5726 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3297_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m27235_gshared (Enumerator_t5727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5489);
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t5726 * L_0 = (List_1_t5726 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t5727  L_1 = (*(Enumerator_t5727 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m4075((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3297 * L_5 = (ObjectDisposedException_t3297 *)il2cpp_codegen_object_new (ObjectDisposedException_t3297_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11847(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t5726 * L_7 = (List_1_t5726 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1430 * L_9 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_9, (String_t*)(String_t*) &_stringLiteral3798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27236_gshared (Enumerator_t5727 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t5727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5727 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t5726 * L_2 = (List_1_t5726 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t5726 * L_4 = (List_1_t5726 *)(__this->___l_0);
		NullCheck(L_4);
		SingleU5BU5D_t583* L_5 = (SingleU5BU5D_t583*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(float*)(float*)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
extern "C" float Enumerator_get_Current_m27237_gshared (Enumerator_t5727 * __this, const MethodInfo* method)
{
	{
		float L_0 = (float)(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<System.Single>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m27238_gshared (ReadOnlyCollection_1_t5729 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3799, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27239_gshared (ReadOnlyCollection_1_t5729 * __this, float ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m27240_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m27241_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, float ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m27242_gshared (ReadOnlyCollection_1_t5729 * __this, float ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m27243_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" float ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m27244_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t5729 *)__this);
		float L_1 = (float)VirtFuncInvoker1< float, int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t5729 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m27245_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, float ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27246_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m27247_gshared (ReadOnlyCollection_1_t5729 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m27248_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
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
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m27249_gshared (ReadOnlyCollection_1_t5729 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m27250_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m27251_gshared (ReadOnlyCollection_1_t5729 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, float >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (float)((*(float*)((float*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m27252_gshared (ReadOnlyCollection_1_t5729 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, float >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (float)((*(float*)((float*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m27253_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m27254_gshared (ReadOnlyCollection_1_t5729 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m27255_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m27256_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m27257_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m27258_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m27259_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m27260_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		float L_2 = (float)InterfaceFuncInvoker1< float, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		float L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m27261_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m27262_gshared (ReadOnlyCollection_1_t5729 * __this, float ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		float L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, float >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (float)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m27263_gshared (ReadOnlyCollection_1_t5729 * __this, SingleU5BU5D_t583* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		SingleU5BU5D_t583* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< SingleU5BU5D_t583*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (SingleU5BU5D_t583*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m27264_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m27265_gshared (ReadOnlyCollection_1_t5729 * __this, float ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		float L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, float >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (float)L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m27266_gshared (ReadOnlyCollection_1_t5729 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>::get_Item(System.Int32)
extern "C" float ReadOnlyCollection_1_get_Item_m27267_gshared (ReadOnlyCollection_1_t5729 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		float L_2 = (float)InterfaceFuncInvoker1< float, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Single>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::.ctor()
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m27268_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t5726 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t5726 * L_0 = (List_1_t5726 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t5726 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t5726 *)L_0;
		List_1_t5726 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t5726 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27269_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m27270_gshared (Collection_1_t5730 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m27271_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m27272_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		float L_4 = (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker2< int32_t, float >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T) */, (Collection_1_t5730 *)__this, (int32_t)L_2, (float)L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m27273_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, float >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (float)((*(float*)((float*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m27274_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, float >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (float)((*(float*)((float*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m27275_gshared (Collection_1_t5730 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		float L_2 = (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker2< int32_t, float >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T) */, (Collection_1_t5730 *)__this, (int32_t)L_0, (float)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m27276_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		float L_2 = (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5730 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, float >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T) */, (Collection_1_t5730 *)__this, (float)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32) */, (Collection_1_t5730 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m27277_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m27278_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m27279_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m27280_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m27281_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		float L_2 = (float)InterfaceFuncInvoker1< float, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		float L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m27282_gshared (Collection_1_t5730 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		float L_2 = (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker2< int32_t, float >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T) */, (Collection_1_t5730 *)__this, (int32_t)L_0, (float)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Add(T)
extern "C" void Collection_1_Add_m27283_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		float L_3 = ___item;
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker2< int32_t, float >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T) */, (Collection_1_t5730 *)__this, (int32_t)L_2, (float)L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Clear()
extern "C" void Collection_1_Clear_m27284_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems() */, (Collection_1_t5730 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems()
extern "C" void Collection_1_ClearItems_m27285_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Contains(T)
extern "C" bool Collection_1_Contains_m27286_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		float L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, float >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (float)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m27287_gshared (Collection_1_t5730 * __this, SingleU5BU5D_t583* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		SingleU5BU5D_t583* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< SingleU5BU5D_t583*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (SingleU5BU5D_t583*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Single>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m27288_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m27289_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		float L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, float >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (float)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m27290_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		float L_1 = ___item;
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker2< int32_t, float >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T) */, (Collection_1_t5730 *)__this, (int32_t)L_0, (float)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m27291_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		float L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, float >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Single>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (float)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Remove(T)
extern "C" bool Collection_1_Remove_m27292_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = ___item;
		NullCheck((Collection_1_t5730 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, float >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T) */, (Collection_1_t5730 *)__this, (float)L_0);
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
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32) */, (Collection_1_t5730 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m27293_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32) */, (Collection_1_t5730 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m27294_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Single>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::get_Count()
extern "C" int32_t Collection_1_get_Count_m27295_gshared (Collection_1_t5730 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Single>::get_Item(System.Int32)
extern "C" float Collection_1_get_Item_m27296_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		float L_2 = (float)InterfaceFuncInvoker1< float, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m27297_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		float L_1 = ___value;
		NullCheck((Collection_1_t5730 *)__this);
		VirtActionInvoker2< int32_t, float >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T) */, (Collection_1_t5730 *)__this, (int32_t)L_0, (float)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m27298_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		float L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, float >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (float)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m27299_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
		Type_t * L_2 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
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
// T System.Collections.ObjectModel.Collection`1<System.Single>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" float Collection_1_ConvertItem_m27300_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		return ((*(float*)((float*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t712 * L_3 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_3, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m27301_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m27302_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t755_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t687_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m27303_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t687_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t687_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
// System.Collections.Generic.EqualityComparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
extern "C" void EqualityComparer_1__ctor_m27304_gshared (EqualityComparer_1_t5731 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t4938_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1204_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m27305_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t4938_0_0_0_var = il2cpp_codegen_type_from_index(8957);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(GenericEqualityComparer_1_t4938_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1204* L_4 = (TypeU5BU5D_t1204*)((TypeU5BU5D_t1204*)SZArrayNew(TypeU5BU5D_t1204_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1204* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1204*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7482(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t5731_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t5731 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5733 * L_8 = (DefaultComparer_t5733 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5733 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t5731_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m27306_gshared (EqualityComparer_1_t5731 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t5731 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, float >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, (EqualityComparer_1_t5731 *)__this, (float)((*(float*)((float*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m27307_gshared (EqualityComparer_1_t5731 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t5731 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, float, float >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, (EqualityComparer_1_t5731 *)__this, (float)((*(float*)((float*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (float)((*(float*)((float*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Single>::get_Default()
extern "C" EqualityComparer_1_t5731 * EqualityComparer_1_get_Default_m27308_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t5731 * L_0 = ((EqualityComparer_1_t5731_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__4MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Single>::.ctor()
extern TypeInfo* EqualityComparer_1_t5731_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m27309_gshared (GenericEqualityComparer_1_t5732 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11009);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t5731 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5731_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t5731 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t5731 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Single>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m27310_gshared (GenericEqualityComparer_1_t5732 * __this, float ___obj, const MethodInfo* method)
{
	{
		float L_0 = ___obj;
		float L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Single>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m27311_gshared (GenericEqualityComparer_1_t5732 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		float L_3 = ___y;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		float L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, float >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Single>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (float)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Single>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Single>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Single>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::.ctor()
extern TypeInfo* EqualityComparer_1_t5731_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m27312_gshared (DefaultComparer_t5733 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11009);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t5731 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5731_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t5731 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t5731 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m27313_gshared (DefaultComparer_t5733 * __this, float ___obj, const MethodInfo* method)
{
	{
		float L_0 = ___obj;
		float L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m27314_gshared (DefaultComparer_t5733 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		float L_3 = ___y;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		float L_6 = ___y;
		float L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m27315_gshared (Predicate_1_t5734 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m27316_gshared (Predicate_1_t5734 * __this, float ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m27316((Predicate_1_t5734 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, float ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, float ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m27317_gshared (Predicate_1_t5734 * __this, float ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t87_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m27318_gshared (Predicate_1_t5734 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Single>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Single>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Single>::.ctor()
extern "C" void Comparer_1__ctor_m27319_gshared (Comparer_1_t5735 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Single>::.cctor()
extern const Il2CppType* GenericComparer_1_t4927_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1204_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m27320_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t4927_0_0_0_var = il2cpp_codegen_type_from_index(8842);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(GenericComparer_1_t4927_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1204* L_4 = (TypeU5BU5D_t1204*)((TypeU5BU5D_t1204*)SZArrayNew(TypeU5BU5D_t1204_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1204* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1204*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7482(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t5735_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t5735 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5737 * L_8 = (DefaultComparer_t5737 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5737 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t5735_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Single>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m27321_gshared (Comparer_1_t5735 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		NullCheck((Comparer_1_t5735 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, float, float >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Single>::Compare(T,T) */, (Comparer_1_t5735 *)__this, (float)((*(float*)((float*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (float)((*(float*)((float*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t712 * L_8 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Single>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Single>::get_Default()
extern "C" Comparer_1_t5735 * Comparer_1_get_Default_m27322_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t5735 * L_0 = ((Comparer_1_t5735_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericComparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.Single>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericComparer`1<System.Single>::.ctor()
extern TypeInfo* Comparer_1_t5735_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m27323_gshared (GenericComparer_1_t5736 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11014);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t5735 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5735_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t5735 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t5735 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Single>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m27324_gshared (GenericComparer_1_t5736 * __this, float ___x, float ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		float L_3 = ___y;
		float L_4 = L_3;
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
		float L_6 = ___y;
		float L_7 = L_6;
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
		float L_9 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, float >::Invoke(0 /* System.Int32 System.IComparable`1<System.Single>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (float)L_9);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.Single>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Single>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Single>::.ctor()
extern TypeInfo* Comparer_1_t5735_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m27325_gshared (DefaultComparer_t5737 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11014);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t5735 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5735_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t5735 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t5735 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Single>::Compare(T,T)
extern TypeInfo* IComparable_t99_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m27326_gshared (DefaultComparer_t5737 * __this, float ___x, float ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		float L_3 = ___y;
		float L_4 = L_3;
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
		float L_6 = ___y;
		float L_7 = L_6;
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
		float L_9 = ___x;
		float L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_12 = ___x;
		float L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		float L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, float >::Invoke(0 /* System.Int32 System.IComparable`1<System.Single>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (float)L_15);
		return L_16;
	}

IL_003e:
	{
		float L_17 = ___x;
		float L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t99_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		float L_20 = ___x;
		float L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		float L_23 = ___y;
		float L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t99_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t712 * L_27 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_27, (String_t*)(String_t*) &_stringLiteral3786, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Single>
#include "mscorlib_System_Comparison_1_gen_27MethodDeclarations.h"



// System.Void System.Comparison`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m27327_gshared (Comparison_1_t5738 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Single>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m27328_gshared (Comparison_1_t5738 * __this, float ___x, float ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m27328((Comparison_1_t5738 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, float ___x, float ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, float ___x, float ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m27329_gshared (Comparison_1_t5738 * __this, float ___x, float ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Single_t87_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Single_t87_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m27330_gshared (Comparison_1_t5738 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// QuasiRandomGenerator`1<System.Object>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// QuasiRandomGenerator`1<System.Object>
#include "AssemblyU2DCSharp_QuasiRandomGenerator_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
struct Utilities_t674;
struct List_1_t685;
// Declaration System.Void Utilities::ShuffleList<System.Object>(System.Collections.Generic.List`1<!!0>&)
// System.Void Utilities::ShuffleList<System.Object>(System.Collections.Generic.List`1<!!0>&)
extern "C" void Utilities_ShuffleList_TisObject_t_m64600_gshared (Object_t * __this /* static, unused */, List_1_t685 ** p0, const MethodInfo* method);
#define Utilities_ShuffleList_TisObject_t_m64600(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, List_1_t685 **, const MethodInfo*))Utilities_ShuffleList_TisObject_t_m64600_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t68;
struct Object_t;
struct IEnumerable_1_t711;
// Declaration !!0 System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// !!0 System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" Object_t * Enumerable_ElementAt_TisObject_t_m64602_gshared (Object_t * __this /* static, unused */, Object_t* p0, int32_t p1, const MethodInfo* method);
#define Enumerable_ElementAt_TisObject_t_m64602(__this /* static, unused */, p0, p1, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))Enumerable_ElementAt_TisObject_t_m64602_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27604_gshared (QuasiRandomGenerator_1_t5760 * __this, List_1_t685 * ___distribution, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t685 * L_0 = ___distribution;
		NullCheck((List_1_t685 *)L_0);
		ObjectU5BU5D_t683* L_1 = (( ObjectU5BU5D_t683* (*) (List_1_t685 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((List_1_t685 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___distribution_0 = L_1;
		List_1_t685 * L_2 = (List_1_t685 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t685 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___values_1 = L_2;
		return;
	}
}
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27605_gshared (QuasiRandomGenerator_1_t5760 * __this, ObjectU5BU5D_t683* ___distribution, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t683* L_0 = ___distribution;
		__this->___distribution_0 = L_0;
		List_1_t685 * L_1 = (List_1_t685 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t685 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		__this->___values_1 = L_1;
		return;
	}
}
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern TypeInfo* Utilities_t674_il2cpp_TypeInfo_var;
extern "C" List_1_t685 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27606_gshared (QuasiRandomGenerator_1_t5760 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t685 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t685 * L_0 = (List_1_t685 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (List_1_t685 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (List_1_t685 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_000d:
	{
		List_1_t685 * L_1 = V_0;
		ObjectU5BU5D_t683* L_2 = (ObjectU5BU5D_t683*)(__this->___distribution_0);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((List_1_t685 *)L_1);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (List_1_t685 *)L_1, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4)));
		int32_t L_5 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t683* L_7 = (ObjectU5BU5D_t683*)(__this->___distribution_0);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t674_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, List_1_t685 **, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (List_1_t685 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		List_1_t685 * L_8 = V_0;
		return L_8;
	}
}
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m27607_gshared (QuasiRandomGenerator_1_t5760 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		List_1_t685 * L_0 = (List_1_t685 *)(__this->___values_1);
		NullCheck((List_1_t685 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t685 *)L_0);
		int32_t L_2 = (int32_t)(__this->___refreshTrigger_2);
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		NullCheck((QuasiRandomGenerator_1_t5760 *)__this);
		(( void (*) (QuasiRandomGenerator_1_t5760 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuasiRandomGenerator_1_t5760 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_001c:
	{
		List_1_t685 * L_3 = (List_1_t685 *)(__this->___values_1);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t*)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_0 = (Object_t *)L_4;
		List_1_t685 * L_5 = (List_1_t685 *)(__this->___values_1);
		NullCheck((List_1_t685 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t685 *)L_5, (int32_t)0);
		Object_t * L_6 = V_0;
		return L_6;
	}
}
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27608_gshared (QuasiRandomGenerator_1_t5760 * __this, const MethodInfo* method)
{
	{
		NullCheck((QuasiRandomGenerator_1_t5760 *)__this);
		List_1_t685 * L_0 = (( List_1_t685 * (*) (QuasiRandomGenerator_1_t5760 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((QuasiRandomGenerator_1_t5760 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___values_1 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m27615_gshared (UnityAction_1_t5762 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m27617_gshared (UnityAction_1_t5762 * __this, Object_t * ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m27617((UnityAction_1_t5762 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m27619_gshared (UnityAction_1_t5762 * __this, Object_t * ___arg0, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m27621_gshared (UnityAction_1_t5762 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"

// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m27622_gshared (UnityEvent_1_t5763 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t683*)SZArrayNew(ObjectU5BU5D_t683_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t2892 *)__this);
		UnityEventBase__ctor_m10077((UnityEventBase_t2892 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m27623_gshared (UnityEvent_1_t5763 * __this, UnityAction_1_t5762 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t5762 * L_0 = ___call;
		BaseInvokableCall_t2884 * L_1 = (( BaseInvokableCall_t2884 * (*) (Object_t * /* static, unused */, UnityAction_1_t5762 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t5762 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t2892 *)__this);
		UnityEventBase_AddCall_m10082((UnityEventBase_t2892 *)__this, (BaseInvokableCall_t2884 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m27625_gshared (UnityEvent_1_t5763 * __this, UnityAction_1_t5762 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t5762 * L_0 = ___call;
		NullCheck((Delegate_t725 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3766((Delegate_t725 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5762 * L_2 = ___call;
		NullCheck((Delegate_t725 *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m10208((Delegate_t725 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t2892 *)__this);
		UnityEventBase_RemoveListener_m10083((UnityEventBase_t2892 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1204_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m27626_gshared (UnityEvent_1_t5763 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2685);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1204* L_2 = (TypeU5BU5D_t1204*)((TypeU5BU5D_t1204*)SZArrayNew(TypeU5BU5D_t1204_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m10085(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1204*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2884 * UnityEvent_1_GetDelegate_m27627_gshared (UnityEvent_1_t5763 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t5764 * L_2 = (InvokableCall_1_t5764 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5764 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2884 * UnityEvent_1_GetDelegate_m27629_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5762 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t5762 * L_0 = ___action;
		InvokableCall_1_t5764 * L_1 = (InvokableCall_1_t5764 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5764 *, UnityAction_1_t5762 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (UnityAction_1_t5762 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m27630_gshared (UnityEvent_1_t5763 * __this, Object_t * ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t683* L_0 = (ObjectU5BU5D_t683*)(__this->___m_InvokeArray_4);
		Object_t * L_1 = ___arg0;
		Object_t * L_2 = L_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, ((Object_t *)L_2));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)((Object_t *)L_2);
		ObjectU5BU5D_t683* L_3 = (ObjectU5BU5D_t683*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t2892 *)__this);
		UnityEventBase_Invoke_m10084((UnityEventBase_t2892 *)__this, (ObjectU5BU5D_t683*)L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
struct BaseInvokableCall_t2884;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m64603_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m64603(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m64603_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m27631_gshared (InvokableCall_1_t5764 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
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
		NullCheck((BaseInvokableCall_t2884 *)__this);
		BaseInvokableCall__ctor_m10055((BaseInvokableCall_t2884 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t5762 * L_2 = (UnityAction_1_t5762 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t725 * L_6 = Delegate_CreateDelegate_m10209(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t725 * L_7 = Delegate_Combine_m3774(NULL /*static, unused*/, (Delegate_t725 *)L_2, (Delegate_t725 *)((UnityAction_1_t5762 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t5762 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m27632_gshared (InvokableCall_1_t5764 * __this, UnityAction_1_t5762 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t2884 *)__this);
		BaseInvokableCall__ctor_m10054((BaseInvokableCall_t2884 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t5762 * L_0 = (UnityAction_1_t5762 *)(__this->___Delegate_0);
		UnityAction_1_t5762 * L_1 = ___callback;
		Delegate_t725 * L_2 = Delegate_Combine_m3774(NULL /*static, unused*/, (Delegate_t725 *)L_0, (Delegate_t725 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t5762 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1_Invoke_m27633_gshared (InvokableCall_1_t5764 * __this, ObjectU5BU5D_t683* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t712 * L_1 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_1, (String_t*)(String_t*) &_stringLiteral2013, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t683* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t5762 * L_4 = (UnityAction_1_t5762 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m10056(NULL /*static, unused*/, (Delegate_t725 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t5762 * L_6 = (UnityAction_1_t5762 *)(__this->___Delegate_0);
		ObjectU5BU5D_t683* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t5762 *)L_6);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0) */, (UnityAction_1_t5762 *)L_6, (Object_t *)((Object_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m27634_gshared (InvokableCall_1_t5764 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t5762 * L_0 = (UnityAction_1_t5762 *)(__this->___Delegate_0);
		NullCheck((Delegate_t725 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3766((Delegate_t725 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t5762 * L_3 = (UnityAction_1_t5762 *)(__this->___Delegate_0);
		NullCheck((Delegate_t725 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m10208((Delegate_t725 *)L_3, /*hidden argument*/NULL);
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

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C" Vector2_t110  Array_InternalArray__get_Item_TisVector2_t110_m64605_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector2_t110_m64605(__this, p0, method) (( Vector2_t110  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector2_t110_m64605_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m27641_gshared (InternalEnumerator_1_t5766 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m27642_gshared (InternalEnumerator_1_t5766 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27643_gshared (InternalEnumerator_1_t5766 * __this, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = (( Vector2_t110  (*) (InternalEnumerator_1_t5766 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5766 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2_t110  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m27644_gshared (InternalEnumerator_1_t5766 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m27645_gshared (InternalEnumerator_1_t5766 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15091((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" Vector2_t110  InternalEnumerator_1_get_Current_m27646_gshared (InternalEnumerator_1_t5766 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
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
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_1, (String_t*)(String_t*) &_stringLiteral3674, /*hidden argument*/NULL);
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
		InvalidOperationException_t1430 * L_3 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_3, (String_t*)(String_t*) &_stringLiteral3675, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15091((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector2_t110  L_8 = (( Vector2_t110  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector2>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector2>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Comparison_1_genMethodDeclarations.h"

// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"


// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m5793_gshared (Comparison_1_t847 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m27749_gshared (Comparison_1_t847 * __this, RaycastResult_t881  ___x, RaycastResult_t881  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m27749((Comparison_1_t847 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t881  ___x, RaycastResult_t881  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastResult_t881  ___x, RaycastResult_t881  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* RaycastResult_t881_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m27750_gshared (Comparison_1_t847 * __this, RaycastResult_t881  ___x, RaycastResult_t881  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastResult_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1759);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(RaycastResult_t881_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(RaycastResult_t881_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m27751_gshared (Comparison_1_t847 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"

// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m27752_gshared (EventFunction_1_t1051 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m27754_gshared (EventFunction_1_t1051 * __this, Object_t * ___handler, BaseEventData_t846 * ___eventData, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventFunction_1_Invoke_m27754((EventFunction_1_t1051 *)__this->___prev_9,___handler, ___eventData, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___handler, BaseEventData_t846 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___handler, BaseEventData_t846 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, BaseEventData_t846 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m27756_gshared (EventFunction_1_t1051 * __this, Object_t * ___handler, BaseEventData_t846 * ___eventData, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___handler;
	__d_args[1] = ___eventData;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m27758_gshared (EventFunction_1_t1051 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_3.h"
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_3MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
struct Activator_t4779;
struct Object_t;
// System.Activator
#include "mscorlib_System_Activator.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m64616_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m64616(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisObject_t_m64616_gshared)(__this /* static, unused */, method)


// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m27862_gshared (ObjectPool_1_t5779 * __this, UnityAction_1_t5762 * ___actionOnGet, UnityAction_1_t5762 * ___actionOnRelease, const MethodInfo* method)
{
	{
		Stack_1_t5423 * L_0 = (Stack_1_t5423 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Stack_1_t5423 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_Stack_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		UnityAction_1_t5762 * L_1 = ___actionOnGet;
		__this->___m_ActionOnGet_1 = L_1;
		UnityAction_1_t5762 * L_2 = ___actionOnRelease;
		__this->___m_ActionOnRelease_2 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m27864_gshared (ObjectPool_1_t5779 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___U3CcountAllU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m27866_gshared (ObjectPool_1_t5779 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcountAllU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m27868_gshared (ObjectPool_1_t5779 * __this, const MethodInfo* method)
{
	{
		NullCheck((ObjectPool_1_t5779 *)__this);
		int32_t L_0 = (( int32_t (*) (ObjectPool_1_t5779 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ObjectPool_1_t5779 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((ObjectPool_1_t5779 *)__this);
		int32_t L_1 = (( int32_t (*) (ObjectPool_1_t5779 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ObjectPool_1_t5779 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((int32_t)((int32_t)L_0-(int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m27870_gshared (ObjectPool_1_t5779 * __this, const MethodInfo* method)
{
	{
		Stack_1_t5423 * L_0 = (Stack_1_t5423 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t5423 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t5423 *)L_0);
		return L_1;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectPool_1_Get_m27872_gshared (ObjectPool_1_t5779 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * G_B4_0 = {0};
	{
		Stack_1_t5423 * L_0 = (Stack_1_t5423 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t5423 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t5423 *)L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_2 = V_1;
		Object_t * L_3 = L_2;
		if (!((Object_t *)L_3))
		{
			goto IL_002e;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_4 = V_1;
		G_B4_0 = L_4;
		goto IL_0033;
	}

IL_002e:
	{
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		G_B4_0 = L_5;
	}

IL_0033:
	{
		V_0 = (Object_t *)G_B4_0;
		NullCheck((ObjectPool_1_t5779 *)__this);
		int32_t L_6 = (( int32_t (*) (ObjectPool_1_t5779 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ObjectPool_1_t5779 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((ObjectPool_1_t5779 *)__this);
		(( void (*) (ObjectPool_1_t5779 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t5779 *)__this, (int32_t)((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		Stack_1_t5423 * L_7 = (Stack_1_t5423 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t5423 *)L_7);
		Object_t * L_8 = (( Object_t * (*) (Stack_1_t5423 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Stack_1_t5423 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = (Object_t *)L_8;
	}

IL_0053:
	{
		UnityAction_1_t5762 * L_9 = (UnityAction_1_t5762 *)(__this->___m_ActionOnGet_1);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		UnityAction_1_t5762 * L_10 = (UnityAction_1_t5762 *)(__this->___m_ActionOnGet_1);
		Object_t * L_11 = V_0;
		NullCheck((UnityAction_1_t5762 *)L_10);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(!0) */, (UnityAction_1_t5762 *)L_10, (Object_t *)L_11);
	}

IL_006a:
	{
		Object_t * L_12 = V_0;
		return L_12;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m27874_gshared (ObjectPool_1_t5779 * __this, Object_t * ___element, const MethodInfo* method)
{
	{
		Stack_1_t5423 * L_0 = (Stack_1_t5423 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t5423 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t5423 *)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		Stack_1_t5423 * L_2 = (Stack_1_t5423 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t5423 *)L_2);
		Object_t * L_3 = (( Object_t * (*) (Stack_1_t5423 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Stack_1_t5423 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_4 = L_3;
		Object_t * L_5 = ___element;
		Object_t * L_6 = L_5;
		bool L_7 = Object_ReferenceEquals_m405(NULL /*static, unused*/, (Object_t *)((Object_t *)L_4), (Object_t *)((Object_t *)L_6), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (Object_t *)(String_t*) &_stringLiteral1226, /*hidden argument*/NULL);
	}

IL_003b:
	{
		UnityAction_1_t5762 * L_8 = (UnityAction_1_t5762 *)(__this->___m_ActionOnRelease_2);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		UnityAction_1_t5762 * L_9 = (UnityAction_1_t5762 *)(__this->___m_ActionOnRelease_2);
		Object_t * L_10 = ___element;
		NullCheck((UnityAction_1_t5762 *)L_9);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(!0) */, (UnityAction_1_t5762 *)L_9, (Object_t *)L_10);
	}

IL_0052:
	{
		Stack_1_t5423 * L_11 = (Stack_1_t5423 *)(__this->___m_Stack_0);
		Object_t * L_12 = ___element;
		NullCheck((Stack_1_t5423 *)L_11);
		(( void (*) (Stack_1_t5423 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((Stack_1_t5423 *)L_11, (Object_t *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"

#include "UnityEngine.UI_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_35.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_32.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_35MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Predicate_1_gen_32MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2MethodDeclarations.h"
struct Array_t;
struct RaycastResultU5BU5D_t5786;
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.RaycastResult>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisRaycastResult_t881_m64632_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t5786** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisRaycastResult_t881_m64632(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786**, int32_t, const MethodInfo*))Array_Resize_TisRaycastResult_t881_m64632_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct RaycastResultU5BU5D_t5786;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.RaycastResult>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisRaycastResult_t881_m64633_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t5786* p0, RaycastResult_t881  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisRaycastResult_t881_m64633(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, RaycastResult_t881 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisRaycastResult_t881_m64633_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct RaycastResultU5BU5D_t5786;
struct IComparer_1_t8969;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t881_m64635_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t5786* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisRaycastResult_t881_m64635(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisRaycastResult_t881_m64635_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct RaycastResultU5BU5D_t5786;
struct Comparison_1_t847;
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.RaycastResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisRaycastResult_t881_m64641_gshared (Object_t * __this /* static, unused */, RaycastResultU5BU5D_t5786* p0, int32_t p1, Comparison_1_t847 * p2, const MethodInfo* method);
#define Array_Sort_TisRaycastResult_t881_m64641(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, int32_t, Comparison_1_t847 *, const MethodInfo*))Array_Sort_TisRaycastResult_t881_m64641_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m5836_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResultU5BU5D_t5786* L_0 = ((List_1_t887_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27994_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t887 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		RaycastResultU5BU5D_t5786* L_3 = ((List_1_t887_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t887 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((RaycastResultU5BU5D_t5786*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t887 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m27995_gshared (List_1_t887 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_1 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_1, (String_t*)(String_t*) &_stringLiteral2471, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((RaycastResultU5BU5D_t5786*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m27996_gshared (List_1_t887 * __this, RaycastResultU5BU5D_t5786* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		RaycastResultU5BU5D_t5786* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m27997_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t887_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((RaycastResultU5BU5D_t5786*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27998_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t887 *)__this);
		Enumerator_t5788  L_0 = (( Enumerator_t5788  (*) (List_1_t887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5788  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27999_gshared (List_1_t887 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28000_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t887 *)__this);
		Enumerator_t5788  L_0 = (( Enumerator_t5788  (*) (List_1_t887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5788  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m28001_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
			NullCheck((List_1_t887 *)__this);
			VirtActionInvoker1< RaycastResult_t881  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T) */, (List_1_t887 *)__this, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_2 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_2, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m28002_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t887 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, RaycastResult_t881  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, (List_1_t887 *)__this, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28003_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t887 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (List_1_t887 *)__this, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m28004_gshared (List_1_t887 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t887 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t887 *)__this);
			VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T) */, (List_1_t887 *)__this, (int32_t)L_1, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_3 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_3, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m28005_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
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
			NullCheck((List_1_t887 *)__this);
			VirtFuncInvoker1< bool, RaycastResult_t881  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T) */, (List_1_t887 *)__this, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28006_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28007_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28008_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28009_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28010_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28011_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t887 *)__this);
		RaycastResult_t881  L_1 = (RaycastResult_t881 )VirtFuncInvoker1< RaycastResult_t881 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, (List_1_t887 *)__this, (int32_t)L_0);
		RaycastResult_t881  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t768_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m28012_gshared (List_1_t887 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2512);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
			NullCheck((List_1_t887 *)__this);
			VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T) */, (List_1_t887 *)__this, (int32_t)L_0, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
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
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t768_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1447_il2cpp_TypeInfo_var, e.ex->object.klass))
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
		ArgumentException_t712 * L_2 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_2, (String_t*)(String_t*) &_stringLiteral956, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m28013_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		RaycastResultU5BU5D_t5786* L_1 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t887 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		RaycastResultU5BU5D_t5786* L_2 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		RaycastResult_t881  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_2, L_5)) = (RaycastResult_t881 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28014_gshared (List_1_t887 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		RaycastResultU5BU5D_t5786* L_3 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t887 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m11501(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m11501(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t887 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m28015_gshared (List_1_t887 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		ArgumentOutOfRangeException_t1474 * L_1 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_1, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral632, /*hidden argument*/NULL);
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
		ArgumentException_t712 * L_7 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_7, (String_t*)(String_t*) &_stringLiteral3797, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28016_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t887 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		RaycastResultU5BU5D_t5786* L_5 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t5786*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (RaycastResultU5BU5D_t5786*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m28017_gshared (List_1_t887 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	RaycastResult_t881  V_0 = {0};
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			RaycastResult_t881  L_3 = (RaycastResult_t881 )InterfaceFuncInvoker0< RaycastResult_t881  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (RaycastResult_t881 )L_3;
			RaycastResult_t881  L_4 = V_0;
			NullCheck((List_1_t887 *)__this);
			VirtActionInvoker1< RaycastResult_t881  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T) */, (List_1_t887 *)__this, (RaycastResult_t881 )L_4);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28018_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t887 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t887 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t887 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5790 * List_1_AsReadOnly_m28019_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t5790 * L_0 = (ReadOnlyCollection_1_t5790 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t5790 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m28020_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		RaycastResultU5BU5D_t5786* L_1 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m28021_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		RaycastResult_t881  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, RaycastResult_t881 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t5786*)L_0, (RaycastResult_t881 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28022_gshared (List_1_t887 * __this, RaycastResultU5BU5D_t5786* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		RaycastResultU5BU5D_t5786* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t887_il2cpp_TypeInfo_var;
extern TypeInfo* RaycastResult_t881_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t881  List_1_Find_m28023_gshared (List_1_t887 * __this, Predicate_1_t5794 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t887_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1813);
		RaycastResult_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1759);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RaycastResult_t881  V_1 = {0};
	RaycastResult_t881  G_B3_0 = {0};
	{
		Predicate_1_t5794 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t887_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5794 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5794 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t5794 * L_2 = ___match;
		NullCheck((List_1_t887 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t887 *, int32_t, int32_t, Predicate_1_t5794 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t887 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t5794 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		RaycastResultU5BU5D_t5786* L_5 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (RaycastResult_t881_il2cpp_TypeInfo_var, (&V_1));
		RaycastResult_t881  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m28024_gshared (Object_t * __this /* static, unused */, Predicate_1_t5794 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t5794 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28025_gshared (List_1_t887 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5794 * ___match, const MethodInfo* method)
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
		Predicate_1_t5794 * L_3 = ___match;
		RaycastResultU5BU5D_t5786* L_4 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t5794 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, RaycastResult_t881  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T) */, (Predicate_1_t5794 *)L_3, (RaycastResult_t881 )(*(RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_4, L_6)));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t5788  List_1_GetEnumerator_m28026_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5788  L_0 = {0};
		(( void (*) (Enumerator_t5788 *, List_1_t887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t887 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t887 * List_1_GetRange_m28027_gshared (List_1_t887 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	RaycastResultU5BU5D_t5786* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t887 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		V_0 = (RaycastResultU5BU5D_t5786*)((RaycastResultU5BU5D_t5786*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		RaycastResultU5BU5D_t5786* L_3 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_4 = ___index;
		RaycastResultU5BU5D_t5786* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		RaycastResultU5BU5D_t5786* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t887 * L_9 = (List_1_t887 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t887 *, RaycastResultU5BU5D_t5786*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (RaycastResultU5BU5D_t5786*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28028_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		RaycastResult_t881  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, RaycastResult_t881 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t5786*)L_0, (RaycastResult_t881 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28029_gshared (List_1_t887 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
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
		RaycastResultU5BU5D_t5786* L_5 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_6 = ___start;
		RaycastResultU5BU5D_t5786* L_7 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
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
		RaycastResultU5BU5D_t5786* L_15 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m28030_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28031_gshared (List_1_t887 * __this, int32_t ___index, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t887 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		RaycastResultU5BU5D_t5786* L_2 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t887 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t887 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		RaycastResultU5BU5D_t5786* L_4 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t881  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t881 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m28032_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral2470, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28033_gshared (List_1_t887 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	RaycastResultU5BU5D_t5786* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t887 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t887 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t887 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (RaycastResultU5BU5D_t5786*)((RaycastResultU5BU5D_t5786*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		RaycastResultU5BU5D_t5786* L_4 = V_0;
		NullCheck((List_1_t887 *)__this);
		VirtActionInvoker2< RaycastResultU5BU5D_t5786*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, (List_1_t887 *)__this, (RaycastResultU5BU5D_t5786*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t887 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		RaycastResultU5BU5D_t5786* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t887 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		RaycastResultU5BU5D_t5786* L_8 = V_0;
		RaycastResultU5BU5D_t5786* L_9 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_10 = ___index;
		RaycastResultU5BU5D_t5786* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (int32_t)0, (Array_t *)(Array_t *)L_9, (int32_t)L_10, (int32_t)(((int32_t)(((Array_t *)L_11)->max_length))), /*hidden argument*/NULL);
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
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t887 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t887 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28034_gshared (List_1_t887 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t887 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t887 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Object_t* L_5 = ___collection;
		RaycastResultU5BU5D_t5786* L_6 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t5786*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (RaycastResultU5BU5D_t5786*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m28035_gshared (List_1_t887 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	RaycastResult_t881  V_0 = {0};
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
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
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
			RaycastResult_t881  L_3 = (RaycastResult_t881 )InterfaceFuncInvoker0< RaycastResult_t881  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (RaycastResult_t881 )L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			RaycastResult_t881  L_6 = V_0;
			NullCheck((List_1_t887 *)__this);
			VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T) */, (List_1_t887 *)__this, (int32_t)L_5, (RaycastResult_t881 )L_6);
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
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m28036_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t881  L_0 = ___item;
		NullCheck((List_1_t887 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (List_1_t887 *)__this, (RaycastResult_t881 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t887 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32) */, (List_1_t887 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t887_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m28037_gshared (List_1_t887 * __this, Predicate_1_t5794 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t887_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1813);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5794 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t887_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5794 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5794 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t5794 * L_1 = ___match;
		RaycastResultU5BU5D_t5786* L_2 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t5794 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, RaycastResult_t881  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T) */, (Predicate_1_t5794 *)L_1, (RaycastResult_t881 )(*(RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_2, L_4)));
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
		Predicate_1_t5794 * L_13 = ___match;
		RaycastResultU5BU5D_t5786* L_14 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t5794 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, RaycastResult_t881  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T) */, (Predicate_1_t5794 *)L_13, (RaycastResult_t881 )(*(RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		RaycastResultU5BU5D_t5786* L_18 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		RaycastResultU5BU5D_t5786* L_21 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_18, L_20)) = (RaycastResult_t881 )(*(RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_21, L_23));
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
		RaycastResultU5BU5D_t5786* L_29 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m28038_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t887 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		RaycastResultU5BU5D_t5786* L_5 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28039_gshared (List_1_t887 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t887 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t887 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		RaycastResultU5BU5D_t5786* L_5 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		int32_t L_7 = ___count;
		Array_Clear_m13159(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		int32_t L_8 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m28040_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m13185(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern TypeInfo* Comparer_1_t5795_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m28041_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11125);
		s_Il2CppMethodIntialized = true;
	}
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5795_il2cpp_TypeInfo_var);
		Comparer_1_t5795 * L_2 = (( Comparer_1_t5795 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t5786*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28042_gshared (List_1_t887 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t5786*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m5797_gshared (List_1_t887 * __this, Comparison_1_t847 * ___comparison, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t847 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786*, int32_t, Comparison_1_t847 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t5786*)L_0, (int32_t)L_1, (Comparison_1_t847 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t5786* List_1_ToArray_m28043_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	RaycastResultU5BU5D_t5786* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (RaycastResultU5BU5D_t5786*)((RaycastResultU5BU5D_t5786*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		RaycastResultU5BU5D_t5786* L_1 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		RaycastResultU5BU5D_t5786* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11476(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		RaycastResultU5BU5D_t5786* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m28044_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t887 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28045_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		RaycastResultU5BU5D_t5786* L_0 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m28046_gshared (List_1_t887 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_2 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		RaycastResultU5BU5D_t5786** L_3 = (RaycastResultU5BU5D_t5786**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, RaycastResultU5BU5D_t5786**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (RaycastResultU5BU5D_t5786**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m28047_gshared (List_1_t887 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t881  List_1_get_Item_m28048_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
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
		ArgumentOutOfRangeException_t1474 * L_2 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_2, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		RaycastResultU5BU5D_t5786* L_3 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m28049_gshared (List_1_t887 * __this, int32_t ___index, RaycastResult_t881  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t887 *)__this);
		(( void (*) (List_1_t887 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t887 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1474 * L_3 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11477(L_3, (String_t*)(String_t*) &_stringLiteral2285, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		RaycastResultU5BU5D_t5786* L_4 = (RaycastResultU5BU5D_t5786*)(__this->____items_1);
		int32_t L_5 = ___index;
		RaycastResult_t881  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_4, L_5)) = (RaycastResult_t881 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C" RaycastResult_t881  Array_InternalArray__get_Item_TisRaycastResult_t881_m64621_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastResult_t881_m64621(__this, p0, method) (( RaycastResult_t881  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastResult_t881_m64621_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28050_gshared (InternalEnumerator_1_t5787 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28051_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28052_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
{
	{
		RaycastResult_t881  L_0 = (( RaycastResult_t881  (*) (InternalEnumerator_1_t5787 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5787 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastResult_t881  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28053_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28054_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15091((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t881  InternalEnumerator_1_get_Current_m28055_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
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
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_1, (String_t*)(String_t*) &_stringLiteral3674, /*hidden argument*/NULL);
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
		InvalidOperationException_t1430 * L_3 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_3, (String_t*)(String_t*) &_stringLiteral3675, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15091((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastResult_t881  L_8 = (( RaycastResult_t881  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m28056_gshared (Enumerator_t5788 * __this, List_1_t887 * ___l, const MethodInfo* method)
{
	{
		List_1_t887 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t887 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28057_gshared (Enumerator_t5788 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5788 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5788 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28058_gshared (Enumerator_t5788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5788 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5788 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1430 * L_1 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11505(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		RaycastResult_t881  L_2 = (RaycastResult_t881 )(__this->___current_3);
		RaycastResult_t881  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern "C" void Enumerator_Dispose_m28059_gshared (Enumerator_t5788 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t887 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3297_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m28060_gshared (Enumerator_t5788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5489);
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t887 * L_0 = (List_1_t887 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t5788  L_1 = (*(Enumerator_t5788 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m4075((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3297 * L_5 = (ObjectDisposedException_t3297 *)il2cpp_codegen_object_new (ObjectDisposedException_t3297_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11847(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t887 * L_7 = (List_1_t887 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1430 * L_9 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7346(L_9, (String_t*)(String_t*) &_stringLiteral3798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28061_gshared (Enumerator_t5788 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t5788 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5788 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t887 * L_2 = (List_1_t887 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t887 * L_4 = (List_1_t887 *)(__this->___l_0);
		NullCheck(L_4);
		RaycastResultU5BU5D_t5786* L_5 = (RaycastResultU5BU5D_t5786*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(RaycastResult_t881 *)(RaycastResult_t881 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t881  Enumerator_get_Current_m28062_gshared (Enumerator_t5788 * __this, const MethodInfo* method)
{
	{
		RaycastResult_t881  L_0 = (RaycastResult_t881 )(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_2MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m28063_gshared (ReadOnlyCollection_1_t5790 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
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
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral3799, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28064_gshared (ReadOnlyCollection_1_t5790 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m28065_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m28066_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, RaycastResult_t881  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m28067_gshared (ReadOnlyCollection_1_t5790 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m28068_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" RaycastResult_t881  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m28069_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t5790 *)__this);
		RaycastResult_t881  L_1 = (RaycastResult_t881 )VirtFuncInvoker1< RaycastResult_t881 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t5790 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m28070_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, RaycastResult_t881  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28071_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m28072_gshared (ReadOnlyCollection_1_t5790 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m28073_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
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
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m28074_gshared (ReadOnlyCollection_1_t5790 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m28075_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m28076_gshared (ReadOnlyCollection_1_t5790 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t881  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m28077_gshared (ReadOnlyCollection_1_t5790 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m28078_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m28079_gshared (ReadOnlyCollection_1_t5790 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m28080_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m28081_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m28082_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m28083_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m28084_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m28085_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t881  L_2 = (RaycastResult_t881 )InterfaceFuncInvoker1< RaycastResult_t881 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		RaycastResult_t881  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m28086_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m28087_gshared (ReadOnlyCollection_1_t5790 * __this, RaycastResult_t881  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t881  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t881  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (RaycastResult_t881 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m28088_gshared (ReadOnlyCollection_1_t5790 * __this, RaycastResultU5BU5D_t5786* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResultU5BU5D_t5786* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t5786*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (RaycastResultU5BU5D_t5786*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m28089_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m28090_gshared (ReadOnlyCollection_1_t5790 * __this, RaycastResult_t881  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t881  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (RaycastResult_t881 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m28091_gshared (ReadOnlyCollection_1_t5790 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t881  ReadOnlyCollection_1_get_Item_m28092_gshared (ReadOnlyCollection_1_t5790 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t881  L_2 = (RaycastResult_t881 )InterfaceFuncInvoker1< RaycastResult_t881 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m28093_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t887 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t887 * L_0 = (List_1_t887 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t887 *)L_0;
		List_1_t887 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t887 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28094_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m28095_gshared (Collection_1_t5791 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t755_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m28096_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m28097_gshared (Collection_1_t5791 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		RaycastResult_t881  L_4 = (( RaycastResult_t881  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t5791 *)__this, (int32_t)L_2, (RaycastResult_t881 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m28098_gshared (Collection_1_t5791 * __this, Object_t * ___value, const MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t881  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m28099_gshared (Collection_1_t5791 * __this, Object_t * ___value, const MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m28100_gshared (Collection_1_t5791 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t881  L_2 = (( RaycastResult_t881  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t5791 *)__this, (int32_t)L_0, (RaycastResult_t881 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m28101_gshared (Collection_1_t5791 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		RaycastResult_t881  L_2 = (( RaycastResult_t881  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5791 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (Collection_1_t5791 *)__this, (RaycastResult_t881 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32) */, (Collection_1_t5791 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m28102_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m28103_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m28104_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m28105_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m28106_gshared (Collection_1_t5791 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t881  L_2 = (RaycastResult_t881 )InterfaceFuncInvoker1< RaycastResult_t881 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		RaycastResult_t881  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m28107_gshared (Collection_1_t5791 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		RaycastResult_t881  L_2 = (( RaycastResult_t881  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T) */, (Collection_1_t5791 *)__this, (int32_t)L_0, (RaycastResult_t881 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void Collection_1_Add_m28108_gshared (Collection_1_t5791 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		RaycastResult_t881  L_3 = ___item;
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t5791 *)__this, (int32_t)L_2, (RaycastResult_t881 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void Collection_1_Clear_m28109_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems() */, (Collection_1_t5791 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ClearItems()
extern "C" void Collection_1_ClearItems_m28110_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool Collection_1_Contains_m28111_gshared (Collection_1_t5791 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t881  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, RaycastResult_t881  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (RaycastResult_t881 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m28112_gshared (Collection_1_t5791 * __this, RaycastResultU5BU5D_t5786* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResultU5BU5D_t5786* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< RaycastResultU5BU5D_t5786*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (RaycastResultU5BU5D_t5786*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m28113_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m28114_gshared (Collection_1_t5791 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		RaycastResult_t881  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (RaycastResult_t881 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m28115_gshared (Collection_1_t5791 * __this, int32_t ___index, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t881  L_1 = ___item;
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T) */, (Collection_1_t5791 *)__this, (int32_t)L_0, (RaycastResult_t881 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m28116_gshared (Collection_1_t5791 * __this, int32_t ___index, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t881  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (RaycastResult_t881 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool Collection_1_Remove_m28117_gshared (Collection_1_t5791 * __this, RaycastResult_t881  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		RaycastResult_t881  L_0 = ___item;
		NullCheck((Collection_1_t5791 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T) */, (Collection_1_t5791 *)__this, (RaycastResult_t881 )L_0);
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
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32) */, (Collection_1_t5791 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m28118_gshared (Collection_1_t5791 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32) */, (Collection_1_t5791 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m28119_gshared (Collection_1_t5791 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t Collection_1_get_Count_m28120_gshared (Collection_1_t5791 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t881  Collection_1_get_Item_m28121_gshared (Collection_1_t5791 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		RaycastResult_t881  L_2 = (RaycastResult_t881 )InterfaceFuncInvoker1< RaycastResult_t881 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m28122_gshared (Collection_1_t5791 * __this, int32_t ___index, RaycastResult_t881  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		RaycastResult_t881  L_1 = ___value;
		NullCheck((Collection_1_t5791 *)__this);
		VirtActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T) */, (Collection_1_t5791 *)__this, (int32_t)L_0, (RaycastResult_t881 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m28123_gshared (Collection_1_t5791 * __this, int32_t ___index, RaycastResult_t881  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		RaycastResult_t881  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, RaycastResult_t881  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (RaycastResult_t881 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m28124_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
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
		Type_t * L_2 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
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
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" RaycastResult_t881  Collection_1_ConvertItem_m28125_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		return ((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t712 * L_3 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_3, (String_t*)(String_t*) &_stringLiteral3796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m28126_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
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
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t755_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m28127_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t755_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t755_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.RaycastResult>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t687_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m28128_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t687_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t687_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void EqualityComparer_1__ctor_m28129_gshared (EqualityComparer_1_t5792 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t4938_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1204_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m28130_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t4938_0_0_0_var = il2cpp_codegen_type_from_index(8957);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(GenericEqualityComparer_1_t4938_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1204* L_4 = (TypeU5BU5D_t1204*)((TypeU5BU5D_t1204*)SZArrayNew(TypeU5BU5D_t1204_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1204* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1204*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7482(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t5792_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t5792 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5793 * L_8 = (DefaultComparer_t5793 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5793 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t5792_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m28131_gshared (EqualityComparer_1_t5792 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t5792 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T) */, (EqualityComparer_1_t5792 *)__this, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m28132_gshared (EqualityComparer_1_t5792 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t5792 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, RaycastResult_t881 , RaycastResult_t881  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T) */, (EqualityComparer_1_t5792 *)__this, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" EqualityComparer_1_t5792 * EqualityComparer_1_get_Default_m28133_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t5792 * L_0 = ((EqualityComparer_1_t5792_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.RaycastResult>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern TypeInfo* EqualityComparer_1_t5792_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m28134_gshared (DefaultComparer_t5793 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11120);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t5792 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5792_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t5792 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t5792 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28135_gshared (DefaultComparer_t5793 * __this, RaycastResult_t881  ___obj, const MethodInfo* method)
{
	{
		RaycastResult_t881  L_0 = ___obj;
		RaycastResult_t881  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28136_gshared (DefaultComparer_t5793 * __this, RaycastResult_t881  ___x, RaycastResult_t881  ___y, const MethodInfo* method)
{
	{
		RaycastResult_t881  L_0 = ___x;
		RaycastResult_t881  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		RaycastResult_t881  L_3 = ___y;
		RaycastResult_t881  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		RaycastResult_t881  L_6 = ___y;
		RaycastResult_t881  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m28137_gshared (Predicate_1_t5794 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28138_gshared (Predicate_1_t5794 * __this, RaycastResult_t881  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m28138((Predicate_1_t5794 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastResult_t881  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, RaycastResult_t881  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* RaycastResult_t881_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m28139_gshared (Predicate_1_t5794 * __this, RaycastResult_t881  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastResult_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1759);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(RaycastResult_t881_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28140_gshared (Predicate_1_t5794 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void Comparer_1__ctor_m28141_gshared (Comparer_1_t5795 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern const Il2CppType* GenericComparer_1_t4927_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1204_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m28142_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t4927_0_0_0_var = il2cpp_codegen_type_from_index(8842);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2685);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(GenericComparer_1_t4927_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1204* L_4 = (TypeU5BU5D_t1204*)((TypeU5BU5D_t1204*)SZArrayNew(TypeU5BU5D_t1204_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m4073(NULL /*static, unused*/, (RuntimeTypeHandle_t4343 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1204* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1204*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7482(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t5795_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t5795 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5796 * L_8 = (DefaultComparer_t5796 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5796 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t5795_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m28143_gshared (Comparer_1_t5795 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		NullCheck((Comparer_1_t5795 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, RaycastResult_t881 , RaycastResult_t881  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T) */, (Comparer_1_t5795 *)__this, (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (RaycastResult_t881 )((*(RaycastResult_t881 *)((RaycastResult_t881 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t712 * L_8 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11504(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.RaycastResult>::get_Default()
extern "C" Comparer_1_t5795 * Comparer_1_get_Default_m28144_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t5795 * L_0 = ((Comparer_1_t5795_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern TypeInfo* Comparer_1_t5795_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m28145_gshared (DefaultComparer_t5796 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11125);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t5795 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5795_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t5795 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t5795 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Compare(T,T)
extern TypeInfo* IComparable_t99_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m28146_gshared (DefaultComparer_t5796 * __this, RaycastResult_t881  ___x, RaycastResult_t881  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		RaycastResult_t881  L_0 = ___x;
		RaycastResult_t881  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RaycastResult_t881  L_3 = ___y;
		RaycastResult_t881  L_4 = L_3;
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
		RaycastResult_t881  L_6 = ___y;
		RaycastResult_t881  L_7 = L_6;
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
		RaycastResult_t881  L_9 = ___x;
		RaycastResult_t881  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		RaycastResult_t881  L_12 = ___x;
		RaycastResult_t881  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		RaycastResult_t881  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, RaycastResult_t881  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.EventSystems.RaycastResult>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (RaycastResult_t881 )L_15);
		return L_16;
	}

IL_003e:
	{
		RaycastResult_t881  L_17 = ___x;
		RaycastResult_t881  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t99_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		RaycastResult_t881  L_20 = ___x;
		RaycastResult_t881  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		RaycastResult_t881  L_23 = ___y;
		RaycastResult_t881  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t99_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t712 * L_27 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_27, (String_t*)(String_t*) &_stringLiteral3786, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
