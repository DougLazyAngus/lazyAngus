#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1088;
// UnityEngine.UI.Graphic
struct Graphic_t938;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9651;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t6431;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t6433;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t941;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m6104(__this, method) (( void (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1__ctor_m33381_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m34220(__this, method) (( Object_t * (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33383_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m34221(__this, ___item, method) (( void (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Add_m33385_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m34222(__this, ___item, method) (( bool (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Remove_m33387_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m34223(__this, method) (( Object_t* (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33389_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m34224(__this, method) (( void (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_Clear_m33391_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m34225(__this, ___item, method) (( bool (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Contains_m33393_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m34226(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1088 *, GraphicU5BU5D_t6431*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33395_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m34227(__this, method) (( int32_t (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_get_Count_m33397_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m34228(__this, method) (( bool (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33399_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m34229(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_IndexOf_m33401_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m34230(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1088 *, int32_t, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Insert_m33403_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m34231(__this, ___index, method) (( void (*) (IndexedSet_1_t1088 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33405_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m34232(__this, ___index, method) (( Graphic_t938 * (*) (IndexedSet_1_t1088 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33407_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m34233(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1088 *, int32_t, Graphic_t938 *, const MethodInfo*))IndexedSet_1_set_Item_m33409_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m34234(__this, ___match, method) (( void (*) (IndexedSet_1_t1088 *, Predicate_1_t6433 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33410_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m34235(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1088 *, Comparison_1_t941 *, const MethodInfo*))IndexedSet_1_Sort_m33411_gshared)(__this, ___sortLayoutFunction, method)
