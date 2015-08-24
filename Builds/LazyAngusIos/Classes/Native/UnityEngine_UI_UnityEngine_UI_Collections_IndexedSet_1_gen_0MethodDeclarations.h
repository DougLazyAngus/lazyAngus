#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1072;
// UnityEngine.UI.Graphic
struct Graphic_t923;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9027;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5869;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5871;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t926;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5968(__this, method) (( void (*) (IndexedSet_1_t1072 *, const MethodInfo*))IndexedSet_1__ctor_m28831_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29666(__this, method) (( Object_t * (*) (IndexedSet_1_t1072 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28833_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m29667(__this, ___item, method) (( void (*) (IndexedSet_1_t1072 *, Graphic_t923 *, const MethodInfo*))IndexedSet_1_Add_m28835_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m29668(__this, ___item, method) (( bool (*) (IndexedSet_1_t1072 *, Graphic_t923 *, const MethodInfo*))IndexedSet_1_Remove_m28837_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m29669(__this, method) (( Object_t* (*) (IndexedSet_1_t1072 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28839_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m29670(__this, method) (( void (*) (IndexedSet_1_t1072 *, const MethodInfo*))IndexedSet_1_Clear_m28841_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m29671(__this, ___item, method) (( bool (*) (IndexedSet_1_t1072 *, Graphic_t923 *, const MethodInfo*))IndexedSet_1_Contains_m28843_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m29672(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1072 *, GraphicU5BU5D_t5869*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28845_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m29673(__this, method) (( int32_t (*) (IndexedSet_1_t1072 *, const MethodInfo*))IndexedSet_1_get_Count_m28847_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m29674(__this, method) (( bool (*) (IndexedSet_1_t1072 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28849_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m29675(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1072 *, Graphic_t923 *, const MethodInfo*))IndexedSet_1_IndexOf_m28851_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m29676(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1072 *, int32_t, Graphic_t923 *, const MethodInfo*))IndexedSet_1_Insert_m28853_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m29677(__this, ___index, method) (( void (*) (IndexedSet_1_t1072 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28855_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m29678(__this, ___index, method) (( Graphic_t923 * (*) (IndexedSet_1_t1072 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28857_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m29679(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1072 *, int32_t, Graphic_t923 *, const MethodInfo*))IndexedSet_1_set_Item_m28859_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m29680(__this, ___match, method) (( void (*) (IndexedSet_1_t1072 *, Predicate_1_t5871 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28860_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m29681(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1072 *, Comparison_1_t926 *, const MethodInfo*))IndexedSet_1_Sort_m28861_gshared)(__this, ___sortLayoutFunction, method)
