#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3676;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Object[]
struct ObjectU5BU5D_t509;
// System.Predicate`1<System.Object>
struct Predicate_1_t3298;
// System.Comparison`1<System.Object>
struct Comparison_1_t3305;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m22781_gshared (IndexedSet_1_t3676 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m22781(__this, method) (( void (*) (IndexedSet_1_t3676 *, const MethodInfo*))IndexedSet_1__ctor_m22781_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22783_gshared (IndexedSet_1_t3676 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22783(__this, method) (( Object_t * (*) (IndexedSet_1_t3676 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22783_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m22785_gshared (IndexedSet_1_t3676 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m22785(__this, ___item, method) (( void (*) (IndexedSet_1_t3676 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m22785_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m22787_gshared (IndexedSet_1_t3676 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m22787(__this, ___item, method) (( bool (*) (IndexedSet_1_t3676 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m22787_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m22789_gshared (IndexedSet_1_t3676 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m22789(__this, method) (( Object_t* (*) (IndexedSet_1_t3676 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22789_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m22791_gshared (IndexedSet_1_t3676 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m22791(__this, method) (( void (*) (IndexedSet_1_t3676 *, const MethodInfo*))IndexedSet_1_Clear_m22791_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m22793_gshared (IndexedSet_1_t3676 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m22793(__this, ___item, method) (( bool (*) (IndexedSet_1_t3676 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m22793_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m22795_gshared (IndexedSet_1_t3676 * __this, ObjectU5BU5D_t509* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m22795(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3676 *, ObjectU5BU5D_t509*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22795_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m22797_gshared (IndexedSet_1_t3676 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m22797(__this, method) (( int32_t (*) (IndexedSet_1_t3676 *, const MethodInfo*))IndexedSet_1_get_Count_m22797_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m22799_gshared (IndexedSet_1_t3676 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m22799(__this, method) (( bool (*) (IndexedSet_1_t3676 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22799_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m22801_gshared (IndexedSet_1_t3676 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m22801(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3676 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m22801_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m22803_gshared (IndexedSet_1_t3676 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m22803(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3676 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m22803_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m22805_gshared (IndexedSet_1_t3676 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m22805(__this, ___index, method) (( void (*) (IndexedSet_1_t3676 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22805_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m22807_gshared (IndexedSet_1_t3676 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m22807(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3676 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22807_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m22809_gshared (IndexedSet_1_t3676 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m22809(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3676 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m22809_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m22810_gshared (IndexedSet_1_t3676 * __this, Predicate_1_t3298 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m22810(__this, ___match, method) (( void (*) (IndexedSet_1_t3676 *, Predicate_1_t3298 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22810_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m22811_gshared (IndexedSet_1_t3676 * __this, Comparison_1_t3305 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m22811(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3676 *, Comparison_1_t3305 *, const MethodInfo*))IndexedSet_1_Sort_m22811_gshared)(__this, ___sortLayoutFunction, method)
