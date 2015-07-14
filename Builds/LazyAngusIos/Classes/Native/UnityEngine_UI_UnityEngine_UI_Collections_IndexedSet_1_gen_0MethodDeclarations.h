#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t906;
// UnityEngine.UI.Graphic
struct Graphic_t755;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4415;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3729;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3731;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t758;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m4706(__this, method) (( void (*) (IndexedSet_1_t906 *, const MethodInfo*))IndexedSet_1__ctor_m22812_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23606(__this, method) (( Object_t * (*) (IndexedSet_1_t906 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22814_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m23607(__this, ___item, method) (( void (*) (IndexedSet_1_t906 *, Graphic_t755 *, const MethodInfo*))IndexedSet_1_Add_m22816_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m23608(__this, ___item, method) (( bool (*) (IndexedSet_1_t906 *, Graphic_t755 *, const MethodInfo*))IndexedSet_1_Remove_m22818_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m23609(__this, method) (( Object_t* (*) (IndexedSet_1_t906 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22820_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m23610(__this, method) (( void (*) (IndexedSet_1_t906 *, const MethodInfo*))IndexedSet_1_Clear_m22822_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m23611(__this, ___item, method) (( bool (*) (IndexedSet_1_t906 *, Graphic_t755 *, const MethodInfo*))IndexedSet_1_Contains_m22824_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m23612(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t906 *, GraphicU5BU5D_t3729*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22826_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m23613(__this, method) (( int32_t (*) (IndexedSet_1_t906 *, const MethodInfo*))IndexedSet_1_get_Count_m22828_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m23614(__this, method) (( bool (*) (IndexedSet_1_t906 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22830_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m23615(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t906 *, Graphic_t755 *, const MethodInfo*))IndexedSet_1_IndexOf_m22832_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m23616(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t906 *, int32_t, Graphic_t755 *, const MethodInfo*))IndexedSet_1_Insert_m22834_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m23617(__this, ___index, method) (( void (*) (IndexedSet_1_t906 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22836_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m23618(__this, ___index, method) (( Graphic_t755 * (*) (IndexedSet_1_t906 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22838_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m23619(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t906 *, int32_t, Graphic_t755 *, const MethodInfo*))IndexedSet_1_set_Item_m22840_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m23620(__this, ___match, method) (( void (*) (IndexedSet_1_t906 *, Predicate_1_t3731 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22841_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m23621(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t906 *, Comparison_1_t758 *, const MethodInfo*))IndexedSet_1_Sort_m22842_gshared)(__this, ___sortLayoutFunction, method)
