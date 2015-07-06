#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t882;
// UnityEngine.UI.Graphic
struct Graphic_t731;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4414;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3712;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3714;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t734;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m4563(__this, method) (( void (*) (IndexedSet_1_t882 *, const MethodInfo*))IndexedSet_1__ctor_m22781_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23575(__this, method) (( Object_t * (*) (IndexedSet_1_t882 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22783_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m23576(__this, ___item, method) (( void (*) (IndexedSet_1_t882 *, Graphic_t731 *, const MethodInfo*))IndexedSet_1_Add_m22785_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m23577(__this, ___item, method) (( bool (*) (IndexedSet_1_t882 *, Graphic_t731 *, const MethodInfo*))IndexedSet_1_Remove_m22787_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m23578(__this, method) (( Object_t* (*) (IndexedSet_1_t882 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22789_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m23579(__this, method) (( void (*) (IndexedSet_1_t882 *, const MethodInfo*))IndexedSet_1_Clear_m22791_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m23580(__this, ___item, method) (( bool (*) (IndexedSet_1_t882 *, Graphic_t731 *, const MethodInfo*))IndexedSet_1_Contains_m22793_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m23581(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t882 *, GraphicU5BU5D_t3712*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22795_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m23582(__this, method) (( int32_t (*) (IndexedSet_1_t882 *, const MethodInfo*))IndexedSet_1_get_Count_m22797_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m23583(__this, method) (( bool (*) (IndexedSet_1_t882 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22799_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m23584(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t882 *, Graphic_t731 *, const MethodInfo*))IndexedSet_1_IndexOf_m22801_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m23585(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t882 *, int32_t, Graphic_t731 *, const MethodInfo*))IndexedSet_1_Insert_m22803_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m23586(__this, ___index, method) (( void (*) (IndexedSet_1_t882 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22805_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m23587(__this, ___index, method) (( Graphic_t731 * (*) (IndexedSet_1_t882 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22807_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m23588(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t882 *, int32_t, Graphic_t731 *, const MethodInfo*))IndexedSet_1_set_Item_m22809_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m23589(__this, ___match, method) (( void (*) (IndexedSet_1_t882 *, Predicate_1_t3714 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22810_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m23590(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t882 *, Comparison_1_t734 *, const MethodInfo*))IndexedSet_1_Sort_m22811_gshared)(__this, ___sortLayoutFunction, method)
