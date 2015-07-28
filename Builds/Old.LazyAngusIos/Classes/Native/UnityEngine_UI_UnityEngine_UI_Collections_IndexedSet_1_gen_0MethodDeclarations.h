﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t907;
// UnityEngine.UI.Graphic
struct Graphic_t756;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4417;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3731;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3733;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t759;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m4731(__this, method) (( void (*) (IndexedSet_1_t907 *, const MethodInfo*))IndexedSet_1__ctor_m22837_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23631(__this, method) (( Object_t * (*) (IndexedSet_1_t907 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22839_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m23632(__this, ___item, method) (( void (*) (IndexedSet_1_t907 *, Graphic_t756 *, const MethodInfo*))IndexedSet_1_Add_m22841_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m23633(__this, ___item, method) (( bool (*) (IndexedSet_1_t907 *, Graphic_t756 *, const MethodInfo*))IndexedSet_1_Remove_m22843_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m23634(__this, method) (( Object_t* (*) (IndexedSet_1_t907 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22845_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m23635(__this, method) (( void (*) (IndexedSet_1_t907 *, const MethodInfo*))IndexedSet_1_Clear_m22847_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m23636(__this, ___item, method) (( bool (*) (IndexedSet_1_t907 *, Graphic_t756 *, const MethodInfo*))IndexedSet_1_Contains_m22849_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m23637(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t907 *, GraphicU5BU5D_t3731*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22851_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m23638(__this, method) (( int32_t (*) (IndexedSet_1_t907 *, const MethodInfo*))IndexedSet_1_get_Count_m22853_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m23639(__this, method) (( bool (*) (IndexedSet_1_t907 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22855_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m23640(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t907 *, Graphic_t756 *, const MethodInfo*))IndexedSet_1_IndexOf_m22857_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m23641(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t907 *, int32_t, Graphic_t756 *, const MethodInfo*))IndexedSet_1_Insert_m22859_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m23642(__this, ___index, method) (( void (*) (IndexedSet_1_t907 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22861_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m23643(__this, ___index, method) (( Graphic_t756 * (*) (IndexedSet_1_t907 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22863_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m23644(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t907 *, int32_t, Graphic_t756 *, const MethodInfo*))IndexedSet_1_set_Item_m22865_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m23645(__this, ___match, method) (( void (*) (IndexedSet_1_t907 *, Predicate_1_t3733 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22866_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m23646(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t907 *, Comparison_1_t759 *, const MethodInfo*))IndexedSet_1_Sort_m22867_gshared)(__this, ___sortLayoutFunction, method)