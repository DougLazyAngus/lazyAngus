#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5748;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Predicate`1<System.Object>
struct Predicate_1_t5379;
// System.Comparison`1<System.Object>
struct Comparison_1_t5385;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m27990_gshared (IndexedSet_1_t5748 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m27990(__this, method) (( void (*) (IndexedSet_1_t5748 *, const MethodInfo*))IndexedSet_1__ctor_m27990_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m27992_gshared (IndexedSet_1_t5748 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m27992(__this, method) (( Object_t * (*) (IndexedSet_1_t5748 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m27992_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m27994_gshared (IndexedSet_1_t5748 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m27994(__this, ___item, method) (( void (*) (IndexedSet_1_t5748 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m27994_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m27996_gshared (IndexedSet_1_t5748 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m27996(__this, ___item, method) (( bool (*) (IndexedSet_1_t5748 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m27996_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m27998_gshared (IndexedSet_1_t5748 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m27998(__this, method) (( Object_t* (*) (IndexedSet_1_t5748 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m27998_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m28000_gshared (IndexedSet_1_t5748 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m28000(__this, method) (( void (*) (IndexedSet_1_t5748 *, const MethodInfo*))IndexedSet_1_Clear_m28000_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m28002_gshared (IndexedSet_1_t5748 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m28002(__this, ___item, method) (( bool (*) (IndexedSet_1_t5748 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m28002_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m28004_gshared (IndexedSet_1_t5748 * __this, ObjectU5BU5D_t634* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m28004(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5748 *, ObjectU5BU5D_t634*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28004_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m28006_gshared (IndexedSet_1_t5748 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m28006(__this, method) (( int32_t (*) (IndexedSet_1_t5748 *, const MethodInfo*))IndexedSet_1_get_Count_m28006_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m28008_gshared (IndexedSet_1_t5748 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m28008(__this, method) (( bool (*) (IndexedSet_1_t5748 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28008_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m28010_gshared (IndexedSet_1_t5748 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m28010(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5748 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m28010_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m28012_gshared (IndexedSet_1_t5748 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m28012(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5748 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m28012_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m28014_gshared (IndexedSet_1_t5748 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m28014(__this, ___index, method) (( void (*) (IndexedSet_1_t5748 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28014_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m28016_gshared (IndexedSet_1_t5748 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m28016(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5748 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28016_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m28018_gshared (IndexedSet_1_t5748 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m28018(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5748 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m28018_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m28019_gshared (IndexedSet_1_t5748 * __this, Predicate_1_t5379 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m28019(__this, ___match, method) (( void (*) (IndexedSet_1_t5748 *, Predicate_1_t5379 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28019_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m28020_gshared (IndexedSet_1_t5748 * __this, Comparison_1_t5385 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m28020(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5748 *, Comparison_1_t5385 *, const MethodInfo*))IndexedSet_1_Sort_m28020_gshared)(__this, ___sortLayoutFunction, method)
