#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1012;
// UnityEngine.UI.Graphic
struct Graphic_t861;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t8925;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5786;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5788;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t864;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5679(__this, method) (( void (*) (IndexedSet_1_t1012 *, const MethodInfo*))IndexedSet_1__ctor_m28006_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28841(__this, method) (( Object_t * (*) (IndexedSet_1_t1012 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28008_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m28842(__this, ___item, method) (( void (*) (IndexedSet_1_t1012 *, Graphic_t861 *, const MethodInfo*))IndexedSet_1_Add_m28010_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m28843(__this, ___item, method) (( bool (*) (IndexedSet_1_t1012 *, Graphic_t861 *, const MethodInfo*))IndexedSet_1_Remove_m28012_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m28844(__this, method) (( Object_t* (*) (IndexedSet_1_t1012 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28014_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m28845(__this, method) (( void (*) (IndexedSet_1_t1012 *, const MethodInfo*))IndexedSet_1_Clear_m28016_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m28846(__this, ___item, method) (( bool (*) (IndexedSet_1_t1012 *, Graphic_t861 *, const MethodInfo*))IndexedSet_1_Contains_m28018_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m28847(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1012 *, GraphicU5BU5D_t5786*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28020_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m28848(__this, method) (( int32_t (*) (IndexedSet_1_t1012 *, const MethodInfo*))IndexedSet_1_get_Count_m28022_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m28849(__this, method) (( bool (*) (IndexedSet_1_t1012 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28024_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m28850(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1012 *, Graphic_t861 *, const MethodInfo*))IndexedSet_1_IndexOf_m28026_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m28851(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1012 *, int32_t, Graphic_t861 *, const MethodInfo*))IndexedSet_1_Insert_m28028_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m28852(__this, ___index, method) (( void (*) (IndexedSet_1_t1012 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28030_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m28853(__this, ___index, method) (( Graphic_t861 * (*) (IndexedSet_1_t1012 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28032_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m28854(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1012 *, int32_t, Graphic_t861 *, const MethodInfo*))IndexedSet_1_set_Item_m28034_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m28855(__this, ___match, method) (( void (*) (IndexedSet_1_t1012 *, Predicate_1_t5788 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28035_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m28856(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1012 *, Comparison_1_t864 *, const MethodInfo*))IndexedSet_1_Sort_m28036_gshared)(__this, ___sortLayoutFunction, method)
