#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3693;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Object[]
struct ObjectU5BU5D_t531;
// System.Predicate`1<System.Object>
struct Predicate_1_t3321;
// System.Comparison`1<System.Object>
struct Comparison_1_t3328;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m22812_gshared (IndexedSet_1_t3693 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m22812(__this, method) (( void (*) (IndexedSet_1_t3693 *, const MethodInfo*))IndexedSet_1__ctor_m22812_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22814_gshared (IndexedSet_1_t3693 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22814(__this, method) (( Object_t * (*) (IndexedSet_1_t3693 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22814_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m22816_gshared (IndexedSet_1_t3693 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m22816(__this, ___item, method) (( void (*) (IndexedSet_1_t3693 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m22816_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m22818_gshared (IndexedSet_1_t3693 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m22818(__this, ___item, method) (( bool (*) (IndexedSet_1_t3693 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m22818_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m22820_gshared (IndexedSet_1_t3693 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m22820(__this, method) (( Object_t* (*) (IndexedSet_1_t3693 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22820_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m22822_gshared (IndexedSet_1_t3693 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m22822(__this, method) (( void (*) (IndexedSet_1_t3693 *, const MethodInfo*))IndexedSet_1_Clear_m22822_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m22824_gshared (IndexedSet_1_t3693 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m22824(__this, ___item, method) (( bool (*) (IndexedSet_1_t3693 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m22824_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m22826_gshared (IndexedSet_1_t3693 * __this, ObjectU5BU5D_t531* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m22826(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3693 *, ObjectU5BU5D_t531*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22826_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m22828_gshared (IndexedSet_1_t3693 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m22828(__this, method) (( int32_t (*) (IndexedSet_1_t3693 *, const MethodInfo*))IndexedSet_1_get_Count_m22828_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m22830_gshared (IndexedSet_1_t3693 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m22830(__this, method) (( bool (*) (IndexedSet_1_t3693 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22830_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m22832_gshared (IndexedSet_1_t3693 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m22832(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3693 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m22832_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m22834_gshared (IndexedSet_1_t3693 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m22834(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3693 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m22834_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m22836_gshared (IndexedSet_1_t3693 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m22836(__this, ___index, method) (( void (*) (IndexedSet_1_t3693 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22836_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m22838_gshared (IndexedSet_1_t3693 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m22838(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3693 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22838_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m22840_gshared (IndexedSet_1_t3693 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m22840(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3693 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m22840_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m22841_gshared (IndexedSet_1_t3693 * __this, Predicate_1_t3321 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m22841(__this, ___match, method) (( void (*) (IndexedSet_1_t3693 *, Predicate_1_t3321 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22841_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m22842_gshared (IndexedSet_1_t3693 * __this, Comparison_1_t3328 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m22842(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3693 *, Comparison_1_t3328 *, const MethodInfo*))IndexedSet_1_Sort_m22842_gshared)(__this, ___sortLayoutFunction, method)
