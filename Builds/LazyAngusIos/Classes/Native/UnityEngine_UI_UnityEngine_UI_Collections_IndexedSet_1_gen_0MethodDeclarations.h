#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t915;
// UnityEngine.UI.Graphic
struct Graphic_t764;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4426;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3740;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3742;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t767;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m4769(__this, method) (( void (*) (IndexedSet_1_t915 *, const MethodInfo*))IndexedSet_1__ctor_m22878_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23672(__this, method) (( Object_t * (*) (IndexedSet_1_t915 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22880_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m23673(__this, ___item, method) (( void (*) (IndexedSet_1_t915 *, Graphic_t764 *, const MethodInfo*))IndexedSet_1_Add_m22882_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m23674(__this, ___item, method) (( bool (*) (IndexedSet_1_t915 *, Graphic_t764 *, const MethodInfo*))IndexedSet_1_Remove_m22884_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m23675(__this, method) (( Object_t* (*) (IndexedSet_1_t915 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22886_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m23676(__this, method) (( void (*) (IndexedSet_1_t915 *, const MethodInfo*))IndexedSet_1_Clear_m22888_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m23677(__this, ___item, method) (( bool (*) (IndexedSet_1_t915 *, Graphic_t764 *, const MethodInfo*))IndexedSet_1_Contains_m22890_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m23678(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t915 *, GraphicU5BU5D_t3740*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22892_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m23679(__this, method) (( int32_t (*) (IndexedSet_1_t915 *, const MethodInfo*))IndexedSet_1_get_Count_m22894_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m23680(__this, method) (( bool (*) (IndexedSet_1_t915 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22896_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m23681(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t915 *, Graphic_t764 *, const MethodInfo*))IndexedSet_1_IndexOf_m22898_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m23682(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t915 *, int32_t, Graphic_t764 *, const MethodInfo*))IndexedSet_1_Insert_m22900_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m23683(__this, ___index, method) (( void (*) (IndexedSet_1_t915 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22902_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m23684(__this, ___index, method) (( Graphic_t764 * (*) (IndexedSet_1_t915 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22904_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m23685(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t915 *, int32_t, Graphic_t764 *, const MethodInfo*))IndexedSet_1_set_Item_m22906_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m23686(__this, ___match, method) (( void (*) (IndexedSet_1_t915 *, Predicate_1_t3742 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22907_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m23687(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t915 *, Comparison_1_t767 *, const MethodInfo*))IndexedSet_1_Sort_m22908_gshared)(__this, ___sortLayoutFunction, method)
