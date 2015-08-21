#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5830;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Predicate`1<System.Object>
struct Predicate_1_t5425;
// System.Comparison`1<System.Object>
struct Comparison_1_t5431;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m28798_gshared (IndexedSet_1_t5830 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m28798(__this, method) (( void (*) (IndexedSet_1_t5830 *, const MethodInfo*))IndexedSet_1__ctor_m28798_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28800_gshared (IndexedSet_1_t5830 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28800(__this, method) (( Object_t * (*) (IndexedSet_1_t5830 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28800_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m28802_gshared (IndexedSet_1_t5830 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m28802(__this, ___item, method) (( void (*) (IndexedSet_1_t5830 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m28802_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m28804_gshared (IndexedSet_1_t5830 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m28804(__this, ___item, method) (( bool (*) (IndexedSet_1_t5830 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m28804_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m28806_gshared (IndexedSet_1_t5830 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m28806(__this, method) (( Object_t* (*) (IndexedSet_1_t5830 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28806_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m28808_gshared (IndexedSet_1_t5830 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m28808(__this, method) (( void (*) (IndexedSet_1_t5830 *, const MethodInfo*))IndexedSet_1_Clear_m28808_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m28810_gshared (IndexedSet_1_t5830 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m28810(__this, ___item, method) (( bool (*) (IndexedSet_1_t5830 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m28810_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m28812_gshared (IndexedSet_1_t5830 * __this, ObjectU5BU5D_t680* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m28812(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5830 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28812_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m28814_gshared (IndexedSet_1_t5830 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m28814(__this, method) (( int32_t (*) (IndexedSet_1_t5830 *, const MethodInfo*))IndexedSet_1_get_Count_m28814_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m28816_gshared (IndexedSet_1_t5830 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m28816(__this, method) (( bool (*) (IndexedSet_1_t5830 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28816_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m28818_gshared (IndexedSet_1_t5830 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m28818(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5830 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m28818_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m28820_gshared (IndexedSet_1_t5830 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m28820(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5830 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m28820_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m28822_gshared (IndexedSet_1_t5830 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m28822(__this, ___index, method) (( void (*) (IndexedSet_1_t5830 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28822_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m28824_gshared (IndexedSet_1_t5830 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m28824(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5830 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28824_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m28826_gshared (IndexedSet_1_t5830 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m28826(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5830 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m28826_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m28827_gshared (IndexedSet_1_t5830 * __this, Predicate_1_t5425 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m28827(__this, ___match, method) (( void (*) (IndexedSet_1_t5830 *, Predicate_1_t5425 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28827_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m28828_gshared (IndexedSet_1_t5830 * __this, Comparison_1_t5431 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m28828(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5830 *, Comparison_1_t5431 *, const MethodInfo*))IndexedSet_1_Sort_m28828_gshared)(__this, ___sortLayoutFunction, method)
