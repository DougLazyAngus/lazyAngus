#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1099;
// UnityEngine.UI.Graphic
struct Graphic_t949;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9664;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t6444;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t6446;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t952;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m6175(__this, method) (( void (*) (IndexedSet_1_t1099 *, const MethodInfo*))IndexedSet_1__ctor_m33463_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m34302(__this, method) (( Object_t * (*) (IndexedSet_1_t1099 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33465_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m34303(__this, ___item, method) (( void (*) (IndexedSet_1_t1099 *, Graphic_t949 *, const MethodInfo*))IndexedSet_1_Add_m33467_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m34304(__this, ___item, method) (( bool (*) (IndexedSet_1_t1099 *, Graphic_t949 *, const MethodInfo*))IndexedSet_1_Remove_m33469_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m34305(__this, method) (( Object_t* (*) (IndexedSet_1_t1099 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33471_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m34306(__this, method) (( void (*) (IndexedSet_1_t1099 *, const MethodInfo*))IndexedSet_1_Clear_m33473_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m34307(__this, ___item, method) (( bool (*) (IndexedSet_1_t1099 *, Graphic_t949 *, const MethodInfo*))IndexedSet_1_Contains_m33475_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m34308(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1099 *, GraphicU5BU5D_t6444*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33477_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m34309(__this, method) (( int32_t (*) (IndexedSet_1_t1099 *, const MethodInfo*))IndexedSet_1_get_Count_m33479_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m34310(__this, method) (( bool (*) (IndexedSet_1_t1099 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33481_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m34311(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1099 *, Graphic_t949 *, const MethodInfo*))IndexedSet_1_IndexOf_m33483_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m34312(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1099 *, int32_t, Graphic_t949 *, const MethodInfo*))IndexedSet_1_Insert_m33485_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m34313(__this, ___index, method) (( void (*) (IndexedSet_1_t1099 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33487_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m34314(__this, ___index, method) (( Graphic_t949 * (*) (IndexedSet_1_t1099 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33489_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m34315(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1099 *, int32_t, Graphic_t949 *, const MethodInfo*))IndexedSet_1_set_Item_m33491_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m34316(__this, ___match, method) (( void (*) (IndexedSet_1_t1099 *, Predicate_1_t6446 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33492_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m34317(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1099 *, Comparison_1_t952 *, const MethodInfo*))IndexedSet_1_Sort_m33493_gshared)(__this, ___sortLayoutFunction, method)
