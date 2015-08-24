#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5833;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Predicate`1<System.Object>
struct Predicate_1_t5428;
// System.Comparison`1<System.Object>
struct Comparison_1_t5434;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m28831_gshared (IndexedSet_1_t5833 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m28831(__this, method) (( void (*) (IndexedSet_1_t5833 *, const MethodInfo*))IndexedSet_1__ctor_m28831_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28833_gshared (IndexedSet_1_t5833 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28833(__this, method) (( Object_t * (*) (IndexedSet_1_t5833 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28833_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m28835_gshared (IndexedSet_1_t5833 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m28835(__this, ___item, method) (( void (*) (IndexedSet_1_t5833 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m28835_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m28837_gshared (IndexedSet_1_t5833 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m28837(__this, ___item, method) (( bool (*) (IndexedSet_1_t5833 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m28837_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m28839_gshared (IndexedSet_1_t5833 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m28839(__this, method) (( Object_t* (*) (IndexedSet_1_t5833 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28839_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m28841_gshared (IndexedSet_1_t5833 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m28841(__this, method) (( void (*) (IndexedSet_1_t5833 *, const MethodInfo*))IndexedSet_1_Clear_m28841_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m28843_gshared (IndexedSet_1_t5833 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m28843(__this, ___item, method) (( bool (*) (IndexedSet_1_t5833 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m28843_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m28845_gshared (IndexedSet_1_t5833 * __this, ObjectU5BU5D_t683* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m28845(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5833 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28845_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m28847_gshared (IndexedSet_1_t5833 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m28847(__this, method) (( int32_t (*) (IndexedSet_1_t5833 *, const MethodInfo*))IndexedSet_1_get_Count_m28847_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m28849_gshared (IndexedSet_1_t5833 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m28849(__this, method) (( bool (*) (IndexedSet_1_t5833 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28849_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m28851_gshared (IndexedSet_1_t5833 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m28851(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5833 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m28851_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m28853_gshared (IndexedSet_1_t5833 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m28853(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5833 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m28853_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m28855_gshared (IndexedSet_1_t5833 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m28855(__this, ___index, method) (( void (*) (IndexedSet_1_t5833 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28855_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m28857_gshared (IndexedSet_1_t5833 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m28857(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5833 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28857_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m28859_gshared (IndexedSet_1_t5833 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m28859(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5833 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m28859_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m28860_gshared (IndexedSet_1_t5833 * __this, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m28860(__this, ___match, method) (( void (*) (IndexedSet_1_t5833 *, Predicate_1_t5428 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28860_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m28861_gshared (IndexedSet_1_t5833 * __this, Comparison_1_t5434 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m28861(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5833 *, Comparison_1_t5434 *, const MethodInfo*))IndexedSet_1_Sort_m28861_gshared)(__this, ___sortLayoutFunction, method)
