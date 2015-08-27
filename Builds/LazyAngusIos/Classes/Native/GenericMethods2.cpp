﻿#include <cstring>
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
#include "stringLiterals.h"
#include "codegen/il2cpp-codegen.h"

// System.Array
#include "mscorlib_System_Array.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// System.String
#include "mscorlib_System_String.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisUriScheme_t4177_m66298_gshared (Array_t * __this, int32_t ___index, UriScheme_t4177  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisUriScheme_t4177_m66298(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, UriScheme_t4177 , const MethodInfo*))Array_InternalArray__Insert_TisUriScheme_t4177_m66298_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisUriScheme_t4177_m66298_gshared (Array_t * __this, int32_t ___index, UriScheme_t4177  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Uri/UriScheme>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisUriScheme_t4177_m66300_gshared (Array_t * __this, int32_t ___index, UriScheme_t4177  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisUriScheme_t4177_m66300(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, UriScheme_t4177 , const MethodInfo*))Array_InternalArray__set_Item_TisUriScheme_t4177_m66300_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisUriScheme_t4177_m66300_gshared (Array_t * __this, int32_t ___index, UriScheme_t4177  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t683* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)IsInst(__this, ObjectU5BU5D_t683_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t683* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = V_0;
		int32_t L_5 = ___index;
		UriScheme_t4177  L_6 = ___item;
		UriScheme_t4177  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (UriScheme_t4177 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Uri/UriScheme>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_122.h"
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_122MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
struct Array_t;
struct IEnumerator_1_t9828;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t4177_m66301_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t4177_m66301(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t4177_m66301_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t4177_m66301_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t8662  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t8662 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t8662  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
struct Array_t;
struct ObjectU5BU5D_t683;
struct IComparer_1_t5651;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m64473_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, ObjectU5BU5D_t683* p1, int32_t p2, int32_t p3, Object_t* p4, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m64473(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m64473_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Void System.Array::Sort<System.Object>(T[])
struct Array_t;
struct ObjectU5BU5D_t683;
// Declaration System.Void System.Array::Sort<System.Object>(T[])
// System.Void System.Array::Sort<System.Object>(T[])
extern "C" void Array_Sort_TisObject_t_m66302_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, const MethodInfo* method);
#define Array_Sort_TisObject_t_m66302(__this /* static, unused */, ___array, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, const MethodInfo*))Array_Sort_TisObject_t_m66302_gshared)(__this /* static, unused */, ___array, method)
// System.Void System.Array::Sort<System.Object>(T[])
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m66302_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ObjectU5BU5D_t683* L_3 = ___array;
		NullCheck(L_3);
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (ObjectU5BU5D_t683*)(ObjectU5BU5D_t683*)NULL, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
struct Array_t;
struct ObjectU5BU5D_t683;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
extern "C" void Array_Sort_TisObject_t_TisObject_t_m66303_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___keys, ObjectU5BU5D_t683* ___items, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m66303(__this /* static, unused */, ___keys, ___items, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m66303_gshared)(__this /* static, unused */, ___keys, ___items, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_TisObject_t_m66303_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___keys, ObjectU5BU5D_t683* ___items, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___keys;
		ObjectU5BU5D_t683* L_3 = ___items;
		ObjectU5BU5D_t683* L_4 = ___keys;
		NullCheck(L_4);
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (ObjectU5BU5D_t683*)L_3, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_4)->max_length))), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct IComparer_1_t5651;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
extern "C" void Array_Sort_TisObject_t_m66304_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t* ___comparer, const MethodInfo* method);
#define Array_Sort_TisObject_t_m66304(__this /* static, unused */, ___array, ___comparer, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t*, const MethodInfo*))Array_Sort_TisObject_t_m66304_gshared)(__this /* static, unused */, ___array, ___comparer, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m66304_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ObjectU5BU5D_t683* L_3 = ___array;
		NullCheck(L_3);
		Object_t* L_4 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (ObjectU5BU5D_t683*)(ObjectU5BU5D_t683*)NULL, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct IComparer_1_t5651;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m66305_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___keys, ObjectU5BU5D_t683* ___items, Object_t* ___comparer, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m66305(__this /* static, unused */, ___keys, ___items, ___comparer, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, Object_t*, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m66305_gshared)(__this /* static, unused */, ___keys, ___items, ___comparer, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_TisObject_t_m66305_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___keys, ObjectU5BU5D_t683* ___items, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1671, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___keys;
		ObjectU5BU5D_t683* L_3 = ___items;
		ObjectU5BU5D_t683* L_4 = ___keys;
		NullCheck(L_4);
		Object_t* L_5 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (ObjectU5BU5D_t683*)L_3, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_4)->max_length))), (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
struct Array_t;
struct ObjectU5BU5D_t683;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_m20190_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___index, int32_t ___length, const MethodInfo* method);
#define Array_Sort_TisObject_t_m20190(__this /* static, unused */, ___array, ___index, ___length, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, const MethodInfo*))Array_Sort_TisObject_t_m20190_gshared)(__this /* static, unused */, ___array, ___index, ___length, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m20190_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___index, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		int32_t L_3 = ___index;
		int32_t L_4 = ___length;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (ObjectU5BU5D_t683*)(ObjectU5BU5D_t683*)NULL, (int32_t)L_3, (int32_t)L_4, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
struct Array_t;
struct ObjectU5BU5D_t683;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m66306_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___keys, ObjectU5BU5D_t683* ___items, int32_t ___index, int32_t ___length, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m66306(__this /* static, unused */, ___keys, ___items, ___index, ___length, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m66306_gshared)(__this /* static, unused */, ___keys, ___items, ___index, ___length, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m66306_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___keys, ObjectU5BU5D_t683* ___items, int32_t ___index, int32_t ___length, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t683* L_0 = ___keys;
		ObjectU5BU5D_t683* L_1 = ___items;
		int32_t L_2 = ___index;
		int32_t L_3 = ___length;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_0, (ObjectU5BU5D_t683*)L_1, (int32_t)L_2, (int32_t)L_3, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
struct Array_t;
struct ObjectU5BU5D_t683;
struct Comparison_1_t5434;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m64502_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, int32_t p1, Comparison_1_t5434 * p2, const MethodInfo* method);
#define Array_Sort_TisObject_t_m64502(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, Comparison_1_t5434 *, const MethodInfo*))Array_Sort_TisObject_t_m64502_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Comparison_1_t5434;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
extern "C" void Array_Sort_TisObject_t_m66307_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Comparison_1_t5434 * ___comparison, const MethodInfo* method);
#define Array_Sort_TisObject_t_m66307(__this /* static, unused */, ___array, ___comparison, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Comparison_1_t5434 *, const MethodInfo*))Array_Sort_TisObject_t_m66307_gshared)(__this /* static, unused */, ___array, ___comparison, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m66307_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Comparison_1_t5434 * ___comparison, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ObjectU5BU5D_t683* L_3 = ___array;
		NullCheck(L_3);
		Comparison_1_t5434 * L_4 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, Comparison_1_t5434 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Comparison_1_t5434 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" bool Array_TrueForAll_TisObject_t_m66308_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_TrueForAll_TisObject_t_m66308(__this /* static, unused */, ___array, ___match, method) (( bool (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Predicate_1_t5428 *, const MethodInfo*))Array_TrueForAll_TisObject_t_m66308_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" bool Array_TrueForAll_TisObject_t_m66308_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t683* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t5428 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t683*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t683* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t5428 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck((Predicate_1_t5428 *)L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t5428 *)L_8, (Object_t *)L_9);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_t683* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Action_1_t3370;
// Declaration System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
extern "C" void Array_ForEach_TisObject_t_m66309_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Action_1_t3370 * ___action, const MethodInfo* method);
#define Array_ForEach_TisObject_t_m66309(__this /* static, unused */, ___array, ___action, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Action_1_t3370 *, const MethodInfo*))Array_ForEach_TisObject_t_m66309_gshared)(__this /* static, unused */, ___array, ___action, method)
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" void Array_ForEach_TisObject_t_m66309_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Action_1_t3370 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t683* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Action_1_t3370 * L_2 = ___action;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral231, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t683*)L_4;
		V_2 = (int32_t)0;
		goto IL_0035;
	}

IL_0022:
	{
		ObjectU5BU5D_t683* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Action_1_t3370 * L_8 = ___action;
		Object_t * L_9 = V_0;
		NullCheck((Action_1_t3370 *)L_8);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<System.Object>::Invoke(T) */, (Action_1_t3370 *)L_8, (Object_t *)L_9);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_t683* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Converter_2_t8663;
// Declaration TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C" ObjectU5BU5D_t683* Array_ConvertAll_TisObject_t_TisObject_t_m66310_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Converter_2_t8663 * ___converter, const MethodInfo* method);
#define Array_ConvertAll_TisObject_t_TisObject_t_m66310(__this /* static, unused */, ___array, ___converter, method) (( ObjectU5BU5D_t683* (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Converter_2_t8663 *, const MethodInfo*))Array_ConvertAll_TisObject_t_TisObject_t_m66310_gshared)(__this /* static, unused */, ___array, ___converter, method)
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t683* Array_ConvertAll_TisObject_t_TisObject_t_m66310_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Converter_2_t8663 * ___converter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t683* V_0 = {0};
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Converter_2_t8663 * L_2 = ___converter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3673, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck(L_4);
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = (int32_t)0;
		goto IL_0041;
	}

IL_0029:
	{
		ObjectU5BU5D_t683* L_5 = V_0;
		int32_t L_6 = V_1;
		Converter_2_t8663 * L_7 = ___converter;
		ObjectU5BU5D_t683* L_8 = ___array;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NullCheck((Converter_2_t8663 *)L_7);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput) */, (Converter_2_t8663 *)L_7, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_10)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)) = (Object_t *)L_11;
		int32_t L_12 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t683* L_14 = ___array;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t683* L_15 = V_0;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
// System.Int32 System.Array::FindLastIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m66311_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, int32_t p1, int32_t p2, Predicate_1_t5428 * p3, const MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m66311(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Predicate_1_t5428 *, const MethodInfo*))Array_FindLastIndex_TisObject_t_m66311_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m66312_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m66312(__this /* static, unused */, ___array, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Predicate_1_t5428 *, const MethodInfo*))Array_FindLastIndex_TisObject_t_m66312_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m66312_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ObjectU5BU5D_t683* L_3 = ___array;
		NullCheck(L_3);
		Predicate_1_t5428 * L_4 = ___match;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Predicate_1_t5428 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Predicate_1_t5428 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m66311_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___startIndex, int32_t ___count, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t5428 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t683* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		int32_t L_7 = ___count;
		ObjectU5BU5D_t683* L_8 = ___array;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t1474 * L_9 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = ___startIndex;
		int32_t L_11 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10+(int32_t)L_11))-(int32_t)1));
		goto IL_004d;
	}

IL_0038:
	{
		Predicate_1_t5428 * L_12 = ___match;
		ObjectU5BU5D_t683* L_13 = ___array;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((Predicate_1_t5428 *)L_12);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t5428 *)L_12, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)));
		if (!L_16)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_004d:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___startIndex;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m66313_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___startIndex, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m66313(__this /* static, unused */, ___array, ___startIndex, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, Predicate_1_t5428 *, const MethodInfo*))Array_FindLastIndex_TisObject_t_m66313_gshared)(__this /* static, unused */, ___array, ___startIndex, ___match, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m66313_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___startIndex, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7373(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___startIndex;
		Predicate_1_t5428 * L_6 = ___match;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Predicate_1_t5428 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (int32_t)L_3, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)L_5)), (Predicate_1_t5428 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
// System.Int32 System.Array::FindIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
extern "C" int32_t Array_FindIndex_TisObject_t_m66314_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, int32_t p1, int32_t p2, Predicate_1_t5428 * p3, const MethodInfo* method);
#define Array_FindIndex_TisObject_t_m66314(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Predicate_1_t5428 *, const MethodInfo*))Array_FindIndex_TisObject_t_m66314_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
extern "C" int32_t Array_FindIndex_TisObject_t_m66315_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_FindIndex_TisObject_t_m66315(__this /* static, unused */, ___array, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Predicate_1_t5428 *, const MethodInfo*))Array_FindIndex_TisObject_t_m66315_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindIndex_TisObject_t_m66315_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ObjectU5BU5D_t683* L_3 = ___array;
		NullCheck(L_3);
		Predicate_1_t5428 * L_4 = ___match;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Predicate_1_t5428 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Predicate_1_t5428 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindIndex_TisObject_t_m66314_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___startIndex, int32_t ___count, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t5428 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t683* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		int32_t L_7 = ___count;
		ObjectU5BU5D_t683* L_8 = ___array;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t1474 * L_9 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = ___startIndex;
		V_0 = (int32_t)L_10;
		goto IL_0049;
	}

IL_0034:
	{
		Predicate_1_t5428 * L_11 = ___match;
		ObjectU5BU5D_t683* L_12 = ___array;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck((Predicate_1_t5428 *)L_11);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t5428 *)L_11, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_0045:
	{
		int32_t L_17 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = ___startIndex;
		int32_t L_20 = ___count;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20)))))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindIndex_TisObject_t_m66316_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___startIndex, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_FindIndex_TisObject_t_m66316(__this /* static, unused */, ___array, ___startIndex, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, Predicate_1_t5428 *, const MethodInfo*))Array_FindIndex_TisObject_t_m66316_gshared)(__this /* static, unused */, ___array, ___startIndex, ___match, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindIndex_TisObject_t_m66316_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___startIndex, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___startIndex;
		Predicate_1_t5428 * L_6 = ___match;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Predicate_1_t5428 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (int32_t)L_3, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)L_5)), (Predicate_1_t5428 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
struct IComparer_1_t5651;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::BinarySearch<System.Object>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" int32_t Array_BinarySearch_TisObject_t_m66317_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, int32_t p1, int32_t p2, Object_t * p3, Object_t* p4, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m66317(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))Array_BinarySearch_TisObject_t_m66317_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m66318_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m66318(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, const MethodInfo*))Array_BinarySearch_TisObject_t_m66318_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisObject_t_m66318_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ObjectU5BU5D_t683* L_3 = ___array;
		NullCheck(L_3);
		Object_t * L_4 = ___value;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t *)L_4, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* Comparer_1_t5429_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1430_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisObject_t_m66317_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Comparer_1_t5429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10427);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		InvalidOperationException_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2472);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t57 * V_4 = {0};
	int32_t V_5 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3656, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1474 * L_4 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7522(L_4, (String_t*)(String_t*) &_stringLiteral2285, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___length;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3634, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1474 * L_7 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7522(L_7, (String_t*)(String_t*) &_stringLiteral2196, (String_t*)L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int32_t L_8 = ___index;
		ObjectU5BU5D_t683* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = ___length;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_11 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3657, /*hidden argument*/NULL);
		ArgumentException_t712 * L_12 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_12, (String_t*)L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		Object_t* L_13 = ___comparer;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5429_il2cpp_TypeInfo_var);
		Comparer_1_t5429 * L_14 = (( Comparer_1_t5429 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		___comparer = (Object_t*)L_14;
	}

IL_0065:
	{
		int32_t L_15 = ___index;
		V_0 = (int32_t)L_15;
		int32_t L_16 = ___index;
		int32_t L_17 = ___length;
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17))-(int32_t)1));
		V_2 = (int32_t)0;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0071:
		{
			int32_t L_18 = V_0;
			int32_t L_19 = V_1;
			int32_t L_20 = V_0;
			V_3 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)L_20))/(int32_t)2))));
			Object_t* L_21 = ___comparer;
			Object_t * L_22 = ___value;
			ObjectU5BU5D_t683* L_23 = ___array;
			int32_t L_24 = V_3;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
			int32_t L_25 = L_24;
			NullCheck((Object_t*)L_21);
			int32_t L_26 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (Object_t*)L_21, (Object_t *)L_22, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)));
			V_2 = (int32_t)L_26;
			int32_t L_27 = V_2;
			if (L_27)
			{
				goto IL_0091;
			}
		}

IL_008c:
		{
			int32_t L_28 = V_3;
			V_5 = (int32_t)L_28;
			goto IL_00be;
		}

IL_0091:
		{
			int32_t L_29 = V_2;
			if ((((int32_t)L_29) >= ((int32_t)0)))
			{
				goto IL_009b;
			}
		}

IL_0095:
		{
			int32_t L_30 = V_3;
			V_1 = (int32_t)((int32_t)((int32_t)L_30-(int32_t)1));
			goto IL_009f;
		}

IL_009b:
		{
			int32_t L_31 = V_3;
			V_0 = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		}

IL_009f:
		{
			int32_t L_32 = V_0;
			int32_t L_33 = V_1;
			if ((((int32_t)L_32) <= ((int32_t)L_33)))
			{
				goto IL_0071;
			}
		}

IL_00a3:
		{
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00a5;
		throw e;
	}

CATCH_00a5:
	{ // begin catch(System.Exception)
		V_4 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		String_t* L_34 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3659, /*hidden argument*/NULL);
		Exception_t57 * L_35 = V_4;
		InvalidOperationException_t1430 * L_36 = (InvalidOperationException_t1430 *)il2cpp_codegen_object_new (InvalidOperationException_t1430_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m15166(L_36, (String_t*)L_34, (Exception_t57 *)L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
		goto IL_00bb;
	} // end catch (depth: 1)

IL_00bb:
	{
		int32_t L_37 = V_0;
		return ((~L_37));
	}

IL_00be:
	{
		int32_t L_38 = V_5;
		return L_38;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
struct IComparer_1_t5651;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
extern "C" int32_t Array_BinarySearch_TisObject_t_m66319_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, Object_t* ___comparer, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m66319(__this /* static, unused */, ___array, ___value, ___comparer, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, Object_t*, const MethodInfo*))Array_BinarySearch_TisObject_t_m66319_gshared)(__this /* static, unused */, ___array, ___value, ___comparer, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisObject_t_m66319_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ObjectU5BU5D_t683* L_3 = ___array;
		NullCheck(L_3);
		Object_t * L_4 = ___value;
		Object_t* L_5 = ___comparer;
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t *)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m66320_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m66320(__this /* static, unused */, ___array, ___index, ___length, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t *, const MethodInfo*))Array_BinarySearch_TisObject_t_m66320_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___value, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m66320_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		int32_t L_1 = ___index;
		int32_t L_2 = ___length;
		Object_t * L_3 = ___value;
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_0, (int32_t)L_1, (int32_t)L_2, (Object_t *)L_3, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m20189_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, Object_t * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m20189(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisObject_t_m20189_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m66321_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m66321(__this /* static, unused */, ___array, ___value, ___startIndex, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, int32_t, const MethodInfo*))Array_IndexOf_TisObject_t_m66321_gshared)(__this /* static, unused */, ___array, ___value, ___startIndex, method)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_IndexOf_TisObject_t_m66321_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		Object_t * L_3 = ___value;
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t683* L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = ___startIndex;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (Object_t *)L_3, (int32_t)L_4, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)L_6)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m66322_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, Object_t * p1, int32_t p2, const MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m66322(__this /* static, unused */, p0, p1, p2, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, int32_t, const MethodInfo*))Array_LastIndexOf_TisObject_t_m66322_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m66323_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, const MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m66323(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, const MethodInfo*))Array_LastIndexOf_TisObject_t_m66323_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m66323_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		ObjectU5BU5D_t683* L_3 = ___array;
		Object_t * L_4 = ___value;
		ObjectU5BU5D_t683* L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_3, (Object_t *)L_4, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t683;
struct Object_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m66324_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* p0, Object_t * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m66324(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, int32_t, int32_t, const MethodInfo*))Array_LastIndexOf_TisObject_t_m66324_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m66322_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		Object_t * L_3 = ___value;
		int32_t L_4 = ___startIndex;
		int32_t L_5 = ___startIndex;
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683*)L_2, (Object_t *)L_3, (int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5416_il2cpp_TypeInfo_var;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m66324_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		EqualityComparer_1_t5416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10399);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t5416 * V_0 = {0};
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck((Array_t *)L_4);
		int32_t L_5 = Array_GetLowerBound_m16140((Array_t *)L_4, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		ObjectU5BU5D_t683* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetUpperBound_m16152((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)L_8)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_9 = ___startIndex;
		int32_t L_10 = ___count;
		ObjectU5BU5D_t683* L_11 = ___array;
		NullCheck((Array_t *)L_11);
		int32_t L_12 = Array_GetLowerBound_m16140((Array_t *)L_11, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))+(int32_t)1))) >= ((int32_t)L_12)))
		{
			goto IL_003a;
		}
	}

IL_0034:
	{
		ArgumentOutOfRangeException_t1474 * L_13 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11506(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5416_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5416 * L_14 = (( EqualityComparer_1_t5416 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (EqualityComparer_1_t5416 *)L_14;
		int32_t L_15 = ___startIndex;
		V_1 = (int32_t)L_15;
		goto IL_005a;
	}

IL_0044:
	{
		EqualityComparer_1_t5416 * L_16 = V_0;
		ObjectU5BU5D_t683* L_17 = ___array;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___value;
		NullCheck((EqualityComparer_1_t5416 *)L_16);
		bool L_21 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t5416 *)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_22 = V_1;
		return L_22;
	}

IL_0056:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = ___startIndex;
		int32_t L_26 = ___count;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25-(int32_t)L_26))+(int32_t)1)))))
		{
			goto IL_0044;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t683;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m11845_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisObject_t_m11845(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683**, int32_t, const MethodInfo*))Array_Resize_TisObject_t_m11845_gshared)(__this /* static, unused */, p0, p1, method)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" ObjectU5BU5D_t683* Array_FindAll_TisObject_t_m66325_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_FindAll_TisObject_t_m66325(__this /* static, unused */, ___array, ___match, method) (( ObjectU5BU5D_t683* (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Predicate_1_t5428 *, const MethodInfo*))Array_FindAll_TisObject_t_m66325_gshared)(__this /* static, unused */, ___array, ___match, method)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t683* Array_FindAll_TisObject_t_m66325_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t683* V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t683* V_3 = {0};
	int32_t V_4 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t5428 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck(L_4);
		V_1 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((Array_t *)L_4)->max_length)))));
		ObjectU5BU5D_t683* L_5 = ___array;
		V_3 = (ObjectU5BU5D_t683*)L_5;
		V_4 = (int32_t)0;
		goto IL_0052;
	}

IL_002e:
	{
		ObjectU5BU5D_t683* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_2 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8));
		Predicate_1_t5428 * L_9 = ___match;
		Object_t * L_10 = V_2;
		NullCheck((Predicate_1_t5428 *)L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t5428 *)L_9, (Object_t *)L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t683* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (int32_t)L_13;
		V_0 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		Object_t * L_15 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)) = (Object_t *)L_15;
	}

IL_004c:
	{
		int32_t L_16 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_4;
		ObjectU5BU5D_t683* L_18 = V_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_19 = V_0;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t683**)(&V_1), (int32_t)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t683* L_20 = V_1;
		return L_20;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
extern "C" bool Array_Exists_TisObject_t_m66326_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_Exists_TisObject_t_m66326(__this /* static, unused */, ___array, ___match, method) (( bool (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Predicate_1_t5428 *, const MethodInfo*))Array_Exists_TisObject_t_m66326_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" bool Array_Exists_TisObject_t_m66326_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t683* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t5428 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t683*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t683* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t5428 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck((Predicate_1_t5428 *)L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t5428 *)L_8, (Object_t *)L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_t683* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
struct Array_t;
struct ReadOnlyCollection_1_t1186;
struct ObjectU5BU5D_t683;
// Declaration System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
extern "C" ReadOnlyCollection_1_t1186 * Array_AsReadOnly_TisObject_t_m66327_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, const MethodInfo* method);
#define Array_AsReadOnly_TisObject_t_m66327(__this /* static, unused */, ___array, method) (( ReadOnlyCollection_1_t1186 * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, const MethodInfo*))Array_AsReadOnly_TisObject_t_m66327_gshared)(__this /* static, unused */, ___array, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern "C" ReadOnlyCollection_1_t1186 * Array_AsReadOnly_TisObject_t_m66327_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t683* L_2 = ___array;
		ArrayReadOnlyList_1_t8664 * L_3 = (ArrayReadOnlyList_1_t8664 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (ArrayReadOnlyList_1_t8664 *, ObjectU5BU5D_t683*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_3, (ObjectU5BU5D_t683*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		ReadOnlyCollection_1_t1186 * L_4 = (ReadOnlyCollection_1_t1186 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		(( void (*) (ReadOnlyCollection_1_t1186 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->method)(L_4, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct Object_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern "C" Object_t * Array_Find_TisObject_t_m66328_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_Find_TisObject_t_m66328(__this /* static, unused */, ___array, ___match, method) (( Object_t * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Predicate_1_t5428 *, const MethodInfo*))Array_Find_TisObject_t_m66328_gshared)(__this /* static, unused */, ___array, ___match, method)
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * Array_Find_TisObject_t_m66328_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t683* V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t5428 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t683*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t683* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t5428 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck((Predicate_1_t5428 *)L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t5428 *)L_8, (Object_t *)L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		Object_t * L_11 = V_0;
		return L_11;
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t683* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_3));
		Object_t * L_15 = V_3;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct Object_t;
struct ObjectU5BU5D_t683;
struct Predicate_1_t5428;
// Declaration T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern "C" Object_t * Array_FindLast_TisObject_t_m66329_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define Array_FindLast_TisObject_t_m66329(__this /* static, unused */, ___array, ___match, method) (( Object_t * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t683*, Predicate_1_t5428 *, const MethodInfo*))Array_FindLast_TisObject_t_m66329_gshared)(__this /* static, unused */, ___array, ___match, method)
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * Array_FindLast_TisObject_t_m66329_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___array, Predicate_1_t5428 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		ObjectU5BU5D_t683* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t5428 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t771 * L_3 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_3, (String_t*)(String_t*) &_stringLiteral3672, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t683* L_4 = ___array;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1));
		goto IL_003f;
	}

IL_0024:
	{
		Predicate_1_t5428 * L_5 = ___match;
		ObjectU5BU5D_t683* L_6 = ___array;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((Predicate_1_t5428 *)L_5);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t5428 *)L_5, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8)));
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_t683* L_10 = ___array;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12));
	}

IL_003b:
	{
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_15 = V_1;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t4365  Array_InternalArray__get_Item_TisTableRange_t4365_m66331_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t4365_m66331(__this, ___index, method) (( TableRange_t4365  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t4365_m66331_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" TableRange_t4365  Array_InternalArray__get_Item_TisTableRange_t4365_m66331_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	TableRange_t4365  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (TableRange_t4365 *)(&V_0));
		TableRange_t4365  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTableRange_t4365_m66332_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTableRange_t4365_m66332(__this, ___item, method) (( void (*) (Array_t *, TableRange_t4365 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisTableRange_t4365_m66332_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisTableRange_t4365_m66332_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.RankException
#include "mscorlib_System_RankException.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTableRange_t4365_m66333_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTableRange_t4365_m66333(__this, ___item, method) (( bool (*) (Array_t *, TableRange_t4365 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisTableRange_t4365_m66333_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTableRange_t4365_m66333_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_t4365  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TableRange_t4365 *)(&V_2));
		TableRange_t4365  L_5 = ___item;
		TableRange_t4365  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		TableRange_t4365  L_8 = V_2;
		TableRange_t4365  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		TableRange_t4365  L_11 = V_2;
		TableRange_t4365  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
struct Array_t;
struct TableRangeU5BU5D_t4366;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTableRange_t4365_m66334_gshared (Array_t * __this, TableRangeU5BU5D_t4366* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTableRange_t4365_m66334(__this, ___array, ___index, method) (( void (*) (Array_t *, TableRangeU5BU5D_t4366*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTableRange_t4365_m66334_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTableRange_t4365_m66334_gshared (Array_t * __this, TableRangeU5BU5D_t4366* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		TableRangeU5BU5D_t4366* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_4 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TableRangeU5BU5D_t4366* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m16140((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		TableRangeU5BU5D_t4366* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m16138((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t712 * L_11 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_11, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		TableRangeU5BU5D_t4366* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m15093((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_15 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3634, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1474 * L_18 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7522(L_18, (String_t*)(String_t*) &_stringLiteral2285, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TableRangeU5BU5D_t4366* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTableRange_t4365_m66335_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTableRange_t4365_m66335(__this, ___item, method) (( bool (*) (Array_t *, TableRange_t4365 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisTableRange_t4365_m66335_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTableRange_t4365_m66335_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTableRange_t4365_m66336_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTableRange_t4365_m66336(__this, ___item, method) (( int32_t (*) (Array_t *, TableRange_t4365 , const MethodInfo*))Array_InternalArray__IndexOf_TisTableRange_t4365_m66336_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisTableRange_t4365_m66336_gshared (Array_t * __this, TableRange_t4365  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_t4365  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TableRange_t4365 *)(&V_2));
		TableRange_t4365  L_5 = ___item;
		TableRange_t4365  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		TableRange_t4365  L_8 = V_2;
		TableRange_t4365  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		TableRange_t4365  L_14 = ___item;
		TableRange_t4365  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTableRange_t4365_m66337_gshared (Array_t * __this, int32_t ___index, TableRange_t4365  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisTableRange_t4365_m66337(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TableRange_t4365 , const MethodInfo*))Array_InternalArray__Insert_TisTableRange_t4365_m66337_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisTableRange_t4365_m66337_gshared (Array_t * __this, int32_t ___index, TableRange_t4365  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTableRange_t4365_m66339_gshared (Array_t * __this, int32_t ___index, TableRange_t4365  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisTableRange_t4365_m66339(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TableRange_t4365 , const MethodInfo*))Array_InternalArray__set_Item_TisTableRange_t4365_m66339_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisTableRange_t4365_m66339_gshared (Array_t * __this, int32_t ___index, TableRange_t4365  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t683* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)IsInst(__this, ObjectU5BU5D_t683_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t683* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = V_0;
		int32_t L_5 = ___index;
		TableRange_t4365  L_6 = ___item;
		TableRange_t4365  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (TableRange_t4365 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_123.h"
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_123MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
struct Array_t;
struct IEnumerator_1_t9829;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t4365_m66340_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t4365_m66340(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t4365_m66340_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t4365_m66340_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t8666  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t8666 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t8666  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" Slot_t4441  Array_InternalArray__get_Item_TisSlot_t4441_m66342_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t4441_m66342(__this, ___index, method) (( Slot_t4441  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t4441_m66342_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" Slot_t4441  Array_InternalArray__get_Item_TisSlot_t4441_m66342_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	Slot_t4441  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Slot_t4441 *)(&V_0));
		Slot_t4441  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t4441_m66343_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSlot_t4441_m66343(__this, ___item, method) (( void (*) (Array_t *, Slot_t4441 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisSlot_t4441_m66343_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t4441_m66343_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t4441_m66344_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSlot_t4441_m66344(__this, ___item, method) (( bool (*) (Array_t *, Slot_t4441 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisSlot_t4441_m66344_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t4441_m66344_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t4441  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t4441 *)(&V_2));
		Slot_t4441  L_5 = ___item;
		Slot_t4441  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Slot_t4441  L_8 = V_2;
		Slot_t4441  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Slot_t4441  L_11 = V_2;
		Slot_t4441  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
struct Array_t;
struct SlotU5BU5D_t4448;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t4441_m66345_gshared (Array_t * __this, SlotU5BU5D_t4448* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSlot_t4441_m66345(__this, ___array, ___index, method) (( void (*) (Array_t *, SlotU5BU5D_t4448*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSlot_t4441_m66345_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t4441_m66345_gshared (Array_t * __this, SlotU5BU5D_t4448* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		SlotU5BU5D_t4448* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_4 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t4448* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m16140((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t4448* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m16138((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t712 * L_11 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_11, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SlotU5BU5D_t4448* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m15093((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_15 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3634, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1474 * L_18 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7522(L_18, (String_t*)(String_t*) &_stringLiteral2285, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t4448* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t4441_m66346_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSlot_t4441_m66346(__this, ___item, method) (( bool (*) (Array_t *, Slot_t4441 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisSlot_t4441_m66346_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t4441_m66346_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t4441_m66347_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSlot_t4441_m66347(__this, ___item, method) (( int32_t (*) (Array_t *, Slot_t4441 , const MethodInfo*))Array_InternalArray__IndexOf_TisSlot_t4441_m66347_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t4441_m66347_gshared (Array_t * __this, Slot_t4441  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t4441  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t4441 *)(&V_2));
		Slot_t4441  L_5 = ___item;
		Slot_t4441  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Slot_t4441  L_8 = V_2;
		Slot_t4441  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Slot_t4441  L_14 = ___item;
		Slot_t4441  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSlot_t4441_m66348_gshared (Array_t * __this, int32_t ___index, Slot_t4441  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisSlot_t4441_m66348(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t4441 , const MethodInfo*))Array_InternalArray__Insert_TisSlot_t4441_m66348_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisSlot_t4441_m66348_gshared (Array_t * __this, int32_t ___index, Slot_t4441  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSlot_t4441_m66350_gshared (Array_t * __this, int32_t ___index, Slot_t4441  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisSlot_t4441_m66350(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t4441 , const MethodInfo*))Array_InternalArray__set_Item_TisSlot_t4441_m66350_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSlot_t4441_m66350_gshared (Array_t * __this, int32_t ___index, Slot_t4441  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t683* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)IsInst(__this, ObjectU5BU5D_t683_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t683* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = V_0;
		int32_t L_5 = ___index;
		Slot_t4441  L_6 = ___item;
		Slot_t4441  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Slot_t4441 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_128.h"
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_128MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
struct Array_t;
struct IEnumerator_1_t9830;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4441_m66351_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4441_m66351(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4441_m66351_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4441_m66351_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t8675  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t8675 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t8675  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C" Slot_t4450  Array_InternalArray__get_Item_TisSlot_t4450_m66353_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t4450_m66353(__this, ___index, method) (( Slot_t4450  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t4450_m66353_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" Slot_t4450  Array_InternalArray__get_Item_TisSlot_t4450_m66353_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	Slot_t4450  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Slot_t4450 *)(&V_0));
		Slot_t4450  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t4450_m66354_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSlot_t4450_m66354(__this, ___item, method) (( void (*) (Array_t *, Slot_t4450 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisSlot_t4450_m66354_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t4450_m66354_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t4450_m66355_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSlot_t4450_m66355(__this, ___item, method) (( bool (*) (Array_t *, Slot_t4450 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisSlot_t4450_m66355_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t4450_m66355_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t4450  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t4450 *)(&V_2));
		Slot_t4450  L_5 = ___item;
		Slot_t4450  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Slot_t4450  L_8 = V_2;
		Slot_t4450  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Slot_t4450  L_11 = V_2;
		Slot_t4450  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
struct Array_t;
struct SlotU5BU5D_t4454;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t4450_m66356_gshared (Array_t * __this, SlotU5BU5D_t4454* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSlot_t4450_m66356(__this, ___array, ___index, method) (( void (*) (Array_t *, SlotU5BU5D_t4454*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSlot_t4450_m66356_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t4450_m66356_gshared (Array_t * __this, SlotU5BU5D_t4454* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		SlotU5BU5D_t4454* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_4 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t4454* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m16140((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t4454* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m16138((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t712 * L_11 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_11, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SlotU5BU5D_t4454* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m15093((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_15 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3634, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1474 * L_18 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7522(L_18, (String_t*)(String_t*) &_stringLiteral2285, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t4454* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t4450_m66357_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSlot_t4450_m66357(__this, ___item, method) (( bool (*) (Array_t *, Slot_t4450 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisSlot_t4450_m66357_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t4450_m66357_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t4450_m66358_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSlot_t4450_m66358(__this, ___item, method) (( int32_t (*) (Array_t *, Slot_t4450 , const MethodInfo*))Array_InternalArray__IndexOf_TisSlot_t4450_m66358_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t4450_m66358_gshared (Array_t * __this, Slot_t4450  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t4450  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t4450 *)(&V_2));
		Slot_t4450  L_5 = ___item;
		Slot_t4450  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Slot_t4450  L_8 = V_2;
		Slot_t4450  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Slot_t4450  L_14 = ___item;
		Slot_t4450  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSlot_t4450_m66359_gshared (Array_t * __this, int32_t ___index, Slot_t4450  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisSlot_t4450_m66359(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t4450 , const MethodInfo*))Array_InternalArray__Insert_TisSlot_t4450_m66359_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisSlot_t4450_m66359_gshared (Array_t * __this, int32_t ___index, Slot_t4450  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSlot_t4450_m66361_gshared (Array_t * __this, int32_t ___index, Slot_t4450  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisSlot_t4450_m66361(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t4450 , const MethodInfo*))Array_InternalArray__set_Item_TisSlot_t4450_m66361_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSlot_t4450_m66361_gshared (Array_t * __this, int32_t ___index, Slot_t4450  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t683* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)IsInst(__this, ObjectU5BU5D_t683_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t683* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = V_0;
		int32_t L_5 = ___index;
		Slot_t4450  L_6 = ___item;
		Slot_t4450  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Slot_t4450 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_129.h"
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_129MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
struct Array_t;
struct IEnumerator_1_t9831;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4450_m66362_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4450_m66362(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4450_m66362_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t4450_m66362_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t8676  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t8676 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t8676  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
struct MonoProperty_t;
struct Object_t;
struct Getter_2_t8686;
// Declaration System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m66363_gshared (Object_t * __this /* static, unused */, Getter_2_t8686 * ___getter, Object_t * ___obj, const MethodInfo* method);
#define MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m66363(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, Getter_2_t8686 *, Object_t *, const MethodInfo*))MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m66363_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m66363_gshared (Object_t * __this /* static, unused */, Getter_2_t8686 * ___getter, Object_t * ___obj, const MethodInfo* method)
{
	{
		Getter_2_t8686 * L_0 = ___getter;
		Object_t * L_1 = ___obj;
		NullCheck((Getter_2_t8686 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T) */, (Getter_2_t8686 *)L_0, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
struct MonoProperty_t;
struct Object_t;
struct StaticGetter_1_t8687;
// Declaration System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m66364_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t8687 * ___getter, Object_t * ___obj, const MethodInfo* method);
#define MonoProperty_StaticGetterAdapterFrame_TisObject_t_m66364(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, StaticGetter_1_t8687 *, Object_t *, const MethodInfo*))MonoProperty_StaticGetterAdapterFrame_TisObject_t_m66364_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m66364_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t8687 * ___getter, Object_t * ___obj, const MethodInfo* method)
{
	{
		StaticGetter_1_t8687 * L_0 = ___getter;
		NullCheck((StaticGetter_1_t8687 *)L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke() */, (StaticGetter_1_t8687 *)L_0);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Decimal
#include "mscorlib_System_Decimal.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t746  Array_InternalArray__get_Item_TisDecimal_t746_m66366_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t746_m66366(__this, ___index, method) (( Decimal_t746  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t746_m66366_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" Decimal_t746  Array_InternalArray__get_Item_TisDecimal_t746_m66366_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	Decimal_t746  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Decimal_t746 *)(&V_0));
		Decimal_t746  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t746_m66367_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisDecimal_t746_m66367(__this, ___item, method) (( void (*) (Array_t *, Decimal_t746 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisDecimal_t746_m66367_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t746_m66367_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t746_m66368_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisDecimal_t746_m66368(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t746 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisDecimal_t746_m66368_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t746_m66368_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t746  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Decimal_t746 *)(&V_2));
		Decimal_t746  L_5 = ___item;
		Decimal_t746  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Decimal_t746  L_8 = V_2;
		Decimal_t746  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Decimal_t746  L_11 = V_2;
		Decimal_t746  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
struct Array_t;
struct DecimalU5BU5D_t4897;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t746_m66369_gshared (Array_t * __this, DecimalU5BU5D_t4897* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisDecimal_t746_m66369(__this, ___array, ___index, method) (( void (*) (Array_t *, DecimalU5BU5D_t4897*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisDecimal_t746_m66369_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t746_m66369_gshared (Array_t * __this, DecimalU5BU5D_t4897* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		DecimalU5BU5D_t4897* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_4 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t4897* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m16140((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t4897* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m16138((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t712 * L_11 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_11, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		DecimalU5BU5D_t4897* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m15093((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_15 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3634, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1474 * L_18 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7522(L_18, (String_t*)(String_t*) &_stringLiteral2285, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t4897* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t746_m66370_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisDecimal_t746_m66370(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t746 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisDecimal_t746_m66370_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t746_m66370_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t746_m66371_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisDecimal_t746_m66371(__this, ___item, method) (( int32_t (*) (Array_t *, Decimal_t746 , const MethodInfo*))Array_InternalArray__IndexOf_TisDecimal_t746_m66371_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t746_m66371_gshared (Array_t * __this, Decimal_t746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t746  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Decimal_t746 *)(&V_2));
		Decimal_t746  L_5 = ___item;
		Decimal_t746  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Decimal_t746  L_8 = V_2;
		Decimal_t746  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Decimal_t746  L_14 = ___item;
		Decimal_t746  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisDecimal_t746_m66372_gshared (Array_t * __this, int32_t ___index, Decimal_t746  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisDecimal_t746_m66372(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t746 , const MethodInfo*))Array_InternalArray__Insert_TisDecimal_t746_m66372_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisDecimal_t746_m66372_gshared (Array_t * __this, int32_t ___index, Decimal_t746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisDecimal_t746_m66374_gshared (Array_t * __this, int32_t ___index, Decimal_t746  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisDecimal_t746_m66374(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t746 , const MethodInfo*))Array_InternalArray__set_Item_TisDecimal_t746_m66374_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisDecimal_t746_m66374_gshared (Array_t * __this, int32_t ___index, Decimal_t746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t683* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)IsInst(__this, ObjectU5BU5D_t683_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t683* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = V_0;
		int32_t L_5 = ___index;
		Decimal_t746  L_6 = ___item;
		Decimal_t746  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Decimal_t746 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142.h"
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
struct Array_t;
struct IEnumerator_1_t9832;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t746_m66375_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t746_m66375(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t746_m66375_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t746_m66375_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t8691  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t8691 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t8691  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t334  Array_InternalArray__get_Item_TisTimeSpan_t334_m66377_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t334_m66377(__this, ___index, method) (( TimeSpan_t334  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t334_m66377_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  Array_InternalArray__get_Item_TisTimeSpan_t334_m66377_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t334  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (TimeSpan_t334 *)(&V_0));
		TimeSpan_t334  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t334_m66378_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTimeSpan_t334_m66378(__this, ___item, method) (( void (*) (Array_t *, TimeSpan_t334 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisTimeSpan_t334_m66378_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t334_m66378_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t334_m66379_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTimeSpan_t334_m66379(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t334 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisTimeSpan_t334_m66379_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t334_m66379_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t334  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeSpan_t334 *)(&V_2));
		TimeSpan_t334  L_5 = ___item;
		TimeSpan_t334  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		TimeSpan_t334  L_8 = V_2;
		TimeSpan_t334  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		TimeSpan_t334  L_11 = V_2;
		TimeSpan_t334  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
struct Array_t;
struct TimeSpanU5BU5D_t4898;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t334_m66380_gshared (Array_t * __this, TimeSpanU5BU5D_t4898* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t334_m66380(__this, ___array, ___index, method) (( void (*) (Array_t *, TimeSpanU5BU5D_t4898*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t334_m66380_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t771_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t712_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t334_m66380_gshared (Array_t * __this, TimeSpanU5BU5D_t4898* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		ArgumentException_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpanU5BU5D_t4898* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t771 * L_1 = (ArgumentNullException_t771 *)il2cpp_codegen_object_new (ArgumentNullException_t771_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4079(L_1, (String_t*)(String_t*) &_stringLiteral1945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_4 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t4898* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m16140((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t4898* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m16138((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t712 * L_11 = (ArgumentException_t712 *)il2cpp_codegen_object_new (ArgumentException_t712_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4084(L_11, (String_t*)(String_t*) &_stringLiteral3633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		TimeSpanU5BU5D_t4898* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m15093((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_15 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3634, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1474 * L_18 = (ArgumentOutOfRangeException_t1474 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7522(L_18, (String_t*)(String_t*) &_stringLiteral2285, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t4898* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m16138((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11493(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t334_m66381_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTimeSpan_t334_m66381(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t334 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisTimeSpan_t334_m66381_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t334_m66381_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t334_m66382_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTimeSpan_t334_m66382(__this, ___item, method) (( int32_t (*) (Array_t *, TimeSpan_t334 , const MethodInfo*))Array_InternalArray__IndexOf_TisTimeSpan_t334_m66382_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern TypeInfo* RankException_t4835_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t334_m66382_gshared (Array_t * __this, TimeSpan_t334  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t334  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m15093((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16318(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3632, /*hidden argument*/NULL);
		RankException_t4835 * L_2 = (RankException_t4835 *)il2cpp_codegen_object_new (RankException_t4835_il2cpp_TypeInfo_var);
		RankException__ctor_m20036(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeSpan_t334 *)(&V_2));
		TimeSpan_t334  L_5 = ___item;
		TimeSpan_t334  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		TimeSpan_t334  L_8 = V_2;
		TimeSpan_t334  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		TimeSpan_t334  L_14 = ___item;
		TimeSpan_t334  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m16140((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t334_m66383_gshared (Array_t * __this, int32_t ___index, TimeSpan_t334  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisTimeSpan_t334_m66383(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t334 , const MethodInfo*))Array_InternalArray__Insert_TisTimeSpan_t334_m66383_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t334_m66383_gshared (Array_t * __this, int32_t ___index, TimeSpan_t334  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10440(L_0, (String_t*)(String_t*) &_stringLiteral2912, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t334_m66385_gshared (Array_t * __this, int32_t ___index, TimeSpan_t334  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisTimeSpan_t334_m66385(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t334 , const MethodInfo*))Array_InternalArray__set_Item_TisTimeSpan_t334_m66385_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t683_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t334_m66385_gshared (Array_t * __this, int32_t ___index, TimeSpan_t334  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2584);
		ObjectU5BU5D_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t683* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m15091((Array_t *)__this, /*hidden argument*/NULL);
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
		V_0 = (ObjectU5BU5D_t683*)((ObjectU5BU5D_t683*)IsInst(__this, ObjectU5BU5D_t683_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t683* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t683* L_4 = V_0;
		int32_t L_5 = ___index;
		TimeSpan_t334  L_6 = ___item;
		TimeSpan_t334  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (TimeSpan_t334 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_143.h"
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_143MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
struct Array_t;
struct IEnumerator_1_t9833;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t334_m66386_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t334_m66386(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t334_m66386_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t334_m66386_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t8692  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t8692 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t8692  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
