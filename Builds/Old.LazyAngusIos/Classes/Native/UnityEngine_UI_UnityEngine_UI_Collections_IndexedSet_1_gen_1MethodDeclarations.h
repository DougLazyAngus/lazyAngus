#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3695;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Object[]
struct ObjectU5BU5D_t533;
// System.Predicate`1<System.Object>
struct Predicate_1_t3323;
// System.Comparison`1<System.Object>
struct Comparison_1_t3330;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m22837_gshared (IndexedSet_1_t3695 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m22837(__this, method) (( void (*) (IndexedSet_1_t3695 *, const MethodInfo*))IndexedSet_1__ctor_m22837_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22839_gshared (IndexedSet_1_t3695 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22839(__this, method) (( Object_t * (*) (IndexedSet_1_t3695 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22839_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m22841_gshared (IndexedSet_1_t3695 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m22841(__this, ___item, method) (( void (*) (IndexedSet_1_t3695 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m22841_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m22843_gshared (IndexedSet_1_t3695 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m22843(__this, ___item, method) (( bool (*) (IndexedSet_1_t3695 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m22843_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m22845_gshared (IndexedSet_1_t3695 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m22845(__this, method) (( Object_t* (*) (IndexedSet_1_t3695 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22845_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m22847_gshared (IndexedSet_1_t3695 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m22847(__this, method) (( void (*) (IndexedSet_1_t3695 *, const MethodInfo*))IndexedSet_1_Clear_m22847_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m22849_gshared (IndexedSet_1_t3695 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m22849(__this, ___item, method) (( bool (*) (IndexedSet_1_t3695 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m22849_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m22851_gshared (IndexedSet_1_t3695 * __this, ObjectU5BU5D_t533* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m22851(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3695 *, ObjectU5BU5D_t533*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22851_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m22853_gshared (IndexedSet_1_t3695 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m22853(__this, method) (( int32_t (*) (IndexedSet_1_t3695 *, const MethodInfo*))IndexedSet_1_get_Count_m22853_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m22855_gshared (IndexedSet_1_t3695 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m22855(__this, method) (( bool (*) (IndexedSet_1_t3695 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22855_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m22857_gshared (IndexedSet_1_t3695 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m22857(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3695 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m22857_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m22859_gshared (IndexedSet_1_t3695 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m22859(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3695 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m22859_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m22861_gshared (IndexedSet_1_t3695 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m22861(__this, ___index, method) (( void (*) (IndexedSet_1_t3695 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22861_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m22863_gshared (IndexedSet_1_t3695 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m22863(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3695 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22863_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m22865_gshared (IndexedSet_1_t3695 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m22865(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3695 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m22865_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m22866_gshared (IndexedSet_1_t3695 * __this, Predicate_1_t3323 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m22866(__this, ___match, method) (( void (*) (IndexedSet_1_t3695 *, Predicate_1_t3323 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22866_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m22867_gshared (IndexedSet_1_t3695 * __this, Comparison_1_t3330 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m22867(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3695 *, Comparison_1_t3330 *, const MethodInfo*))IndexedSet_1_Sort_m22867_gshared)(__this, ___sortLayoutFunction, method)
