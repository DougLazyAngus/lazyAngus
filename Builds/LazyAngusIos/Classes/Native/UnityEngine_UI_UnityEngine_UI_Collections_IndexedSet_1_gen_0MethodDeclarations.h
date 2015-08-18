#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1071;
// UnityEngine.UI.Graphic
struct Graphic_t922;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9016;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5862;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5864;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t925;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5945(__this, method) (( void (*) (IndexedSet_1_t1071 *, const MethodInfo*))IndexedSet_1__ctor_m28707_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29542(__this, method) (( Object_t * (*) (IndexedSet_1_t1071 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28709_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m29543(__this, ___item, method) (( void (*) (IndexedSet_1_t1071 *, Graphic_t922 *, const MethodInfo*))IndexedSet_1_Add_m28711_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m29544(__this, ___item, method) (( bool (*) (IndexedSet_1_t1071 *, Graphic_t922 *, const MethodInfo*))IndexedSet_1_Remove_m28713_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m29545(__this, method) (( Object_t* (*) (IndexedSet_1_t1071 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28715_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m29546(__this, method) (( void (*) (IndexedSet_1_t1071 *, const MethodInfo*))IndexedSet_1_Clear_m28717_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m29547(__this, ___item, method) (( bool (*) (IndexedSet_1_t1071 *, Graphic_t922 *, const MethodInfo*))IndexedSet_1_Contains_m28719_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m29548(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1071 *, GraphicU5BU5D_t5862*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28721_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m29549(__this, method) (( int32_t (*) (IndexedSet_1_t1071 *, const MethodInfo*))IndexedSet_1_get_Count_m28723_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m29550(__this, method) (( bool (*) (IndexedSet_1_t1071 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28725_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m29551(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1071 *, Graphic_t922 *, const MethodInfo*))IndexedSet_1_IndexOf_m28727_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m29552(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1071 *, int32_t, Graphic_t922 *, const MethodInfo*))IndexedSet_1_Insert_m28729_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m29553(__this, ___index, method) (( void (*) (IndexedSet_1_t1071 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28731_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m29554(__this, ___index, method) (( Graphic_t922 * (*) (IndexedSet_1_t1071 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28733_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m29555(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1071 *, int32_t, Graphic_t922 *, const MethodInfo*))IndexedSet_1_set_Item_m28735_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m29556(__this, ___match, method) (( void (*) (IndexedSet_1_t1071 *, Predicate_1_t5864 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28736_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m29557(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1071 *, Comparison_1_t925 *, const MethodInfo*))IndexedSet_1_Sort_m28737_gshared)(__this, ___sortLayoutFunction, method)
