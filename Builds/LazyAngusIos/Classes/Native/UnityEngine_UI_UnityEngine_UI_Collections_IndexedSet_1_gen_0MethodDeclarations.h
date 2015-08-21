#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1069;
// UnityEngine.UI.Graphic
struct Graphic_t920;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9024;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5866;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5868;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t923;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5935(__this, method) (( void (*) (IndexedSet_1_t1069 *, const MethodInfo*))IndexedSet_1__ctor_m28798_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29633(__this, method) (( Object_t * (*) (IndexedSet_1_t1069 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28800_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m29634(__this, ___item, method) (( void (*) (IndexedSet_1_t1069 *, Graphic_t920 *, const MethodInfo*))IndexedSet_1_Add_m28802_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m29635(__this, ___item, method) (( bool (*) (IndexedSet_1_t1069 *, Graphic_t920 *, const MethodInfo*))IndexedSet_1_Remove_m28804_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m29636(__this, method) (( Object_t* (*) (IndexedSet_1_t1069 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28806_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m29637(__this, method) (( void (*) (IndexedSet_1_t1069 *, const MethodInfo*))IndexedSet_1_Clear_m28808_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m29638(__this, ___item, method) (( bool (*) (IndexedSet_1_t1069 *, Graphic_t920 *, const MethodInfo*))IndexedSet_1_Contains_m28810_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m29639(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1069 *, GraphicU5BU5D_t5866*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28812_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m29640(__this, method) (( int32_t (*) (IndexedSet_1_t1069 *, const MethodInfo*))IndexedSet_1_get_Count_m28814_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m29641(__this, method) (( bool (*) (IndexedSet_1_t1069 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28816_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m29642(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1069 *, Graphic_t920 *, const MethodInfo*))IndexedSet_1_IndexOf_m28818_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m29643(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1069 *, int32_t, Graphic_t920 *, const MethodInfo*))IndexedSet_1_Insert_m28820_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m29644(__this, ___index, method) (( void (*) (IndexedSet_1_t1069 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28822_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m29645(__this, ___index, method) (( Graphic_t920 * (*) (IndexedSet_1_t1069 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28824_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m29646(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1069 *, int32_t, Graphic_t920 *, const MethodInfo*))IndexedSet_1_set_Item_m28826_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m29647(__this, ___match, method) (( void (*) (IndexedSet_1_t1069 *, Predicate_1_t5868 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28827_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m29648(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1069 *, Comparison_1_t923 *, const MethodInfo*))IndexedSet_1_Sort_m28828_gshared)(__this, ___sortLayoutFunction, method)
