#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5862;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Predicate`1<System.Object>
struct Predicate_1_t5444;
// System.Comparison`1<System.Object>
struct Comparison_1_t5450;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m29163_gshared (IndexedSet_1_t5862 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m29163(__this, method) (( void (*) (IndexedSet_1_t5862 *, const MethodInfo*))IndexedSet_1__ctor_m29163_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29165_gshared (IndexedSet_1_t5862 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29165(__this, method) (( Object_t * (*) (IndexedSet_1_t5862 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29165_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m29167_gshared (IndexedSet_1_t5862 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m29167(__this, ___item, method) (( void (*) (IndexedSet_1_t5862 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m29167_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m29169_gshared (IndexedSet_1_t5862 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m29169(__this, ___item, method) (( bool (*) (IndexedSet_1_t5862 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m29169_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m29171_gshared (IndexedSet_1_t5862 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m29171(__this, method) (( Object_t* (*) (IndexedSet_1_t5862 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m29171_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m29173_gshared (IndexedSet_1_t5862 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m29173(__this, method) (( void (*) (IndexedSet_1_t5862 *, const MethodInfo*))IndexedSet_1_Clear_m29173_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m29175_gshared (IndexedSet_1_t5862 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m29175(__this, ___item, method) (( bool (*) (IndexedSet_1_t5862 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m29175_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m29177_gshared (IndexedSet_1_t5862 * __this, ObjectU5BU5D_t696* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m29177(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5862 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m29177_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m29179_gshared (IndexedSet_1_t5862 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m29179(__this, method) (( int32_t (*) (IndexedSet_1_t5862 *, const MethodInfo*))IndexedSet_1_get_Count_m29179_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m29181_gshared (IndexedSet_1_t5862 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m29181(__this, method) (( bool (*) (IndexedSet_1_t5862 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m29181_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m29183_gshared (IndexedSet_1_t5862 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m29183(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5862 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m29183_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m29185_gshared (IndexedSet_1_t5862 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m29185(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5862 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m29185_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m29187_gshared (IndexedSet_1_t5862 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m29187(__this, ___index, method) (( void (*) (IndexedSet_1_t5862 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m29187_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m29189_gshared (IndexedSet_1_t5862 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m29189(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5862 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m29189_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m29191_gshared (IndexedSet_1_t5862 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m29191(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5862 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m29191_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m29192_gshared (IndexedSet_1_t5862 * __this, Predicate_1_t5444 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m29192(__this, ___match, method) (( void (*) (IndexedSet_1_t5862 *, Predicate_1_t5444 *, const MethodInfo*))IndexedSet_1_RemoveAll_m29192_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m29193_gshared (IndexedSet_1_t5862 * __this, Comparison_1_t5450 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m29193(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5862 *, Comparison_1_t5450 *, const MethodInfo*))IndexedSet_1_Sort_m29193_gshared)(__this, ___sortLayoutFunction, method)
