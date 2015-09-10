#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t6408;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Predicate`1<System.Object>
struct Predicate_1_t5988;
// System.Comparison`1<System.Object>
struct Comparison_1_t5994;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m33463_gshared (IndexedSet_1_t6408 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m33463(__this, method) (( void (*) (IndexedSet_1_t6408 *, const MethodInfo*))IndexedSet_1__ctor_m33463_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33465_gshared (IndexedSet_1_t6408 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33465(__this, method) (( Object_t * (*) (IndexedSet_1_t6408 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33465_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m33467_gshared (IndexedSet_1_t6408 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m33467(__this, ___item, method) (( void (*) (IndexedSet_1_t6408 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m33467_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m33469_gshared (IndexedSet_1_t6408 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m33469(__this, ___item, method) (( bool (*) (IndexedSet_1_t6408 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m33469_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m33471_gshared (IndexedSet_1_t6408 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m33471(__this, method) (( Object_t* (*) (IndexedSet_1_t6408 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33471_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m33473_gshared (IndexedSet_1_t6408 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m33473(__this, method) (( void (*) (IndexedSet_1_t6408 *, const MethodInfo*))IndexedSet_1_Clear_m33473_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m33475_gshared (IndexedSet_1_t6408 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m33475(__this, ___item, method) (( bool (*) (IndexedSet_1_t6408 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m33475_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m33477_gshared (IndexedSet_1_t6408 * __this, ObjectU5BU5D_t707* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m33477(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t6408 *, ObjectU5BU5D_t707*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33477_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m33479_gshared (IndexedSet_1_t6408 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m33479(__this, method) (( int32_t (*) (IndexedSet_1_t6408 *, const MethodInfo*))IndexedSet_1_get_Count_m33479_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m33481_gshared (IndexedSet_1_t6408 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m33481(__this, method) (( bool (*) (IndexedSet_1_t6408 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33481_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m33483_gshared (IndexedSet_1_t6408 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m33483(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t6408 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m33483_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m33485_gshared (IndexedSet_1_t6408 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m33485(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t6408 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m33485_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m33487_gshared (IndexedSet_1_t6408 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m33487(__this, ___index, method) (( void (*) (IndexedSet_1_t6408 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33487_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m33489_gshared (IndexedSet_1_t6408 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m33489(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t6408 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33489_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m33491_gshared (IndexedSet_1_t6408 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m33491(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t6408 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m33491_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m33492_gshared (IndexedSet_1_t6408 * __this, Predicate_1_t5988 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m33492(__this, ___match, method) (( void (*) (IndexedSet_1_t6408 *, Predicate_1_t5988 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33492_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m33493_gshared (IndexedSet_1_t6408 * __this, Comparison_1_t5994 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m33493(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t6408 *, Comparison_1_t5994 *, const MethodInfo*))IndexedSet_1_Sort_m33493_gshared)(__this, ___sortLayoutFunction, method)
