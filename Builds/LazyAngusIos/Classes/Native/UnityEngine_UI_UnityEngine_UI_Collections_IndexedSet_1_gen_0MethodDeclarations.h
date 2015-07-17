#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t961;
// UnityEngine.UI.Graphic
struct Graphic_t810;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4521;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3805;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3807;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t813;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5315(__this, method) (( void (*) (IndexedSet_1_t961 *, const MethodInfo*))IndexedSet_1__ctor_m23900_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24694(__this, method) (( Object_t * (*) (IndexedSet_1_t961 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23902_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m24695(__this, ___item, method) (( void (*) (IndexedSet_1_t961 *, Graphic_t810 *, const MethodInfo*))IndexedSet_1_Add_m23904_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m24696(__this, ___item, method) (( bool (*) (IndexedSet_1_t961 *, Graphic_t810 *, const MethodInfo*))IndexedSet_1_Remove_m23906_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m24697(__this, method) (( Object_t* (*) (IndexedSet_1_t961 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m23908_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m24698(__this, method) (( void (*) (IndexedSet_1_t961 *, const MethodInfo*))IndexedSet_1_Clear_m23910_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m24699(__this, ___item, method) (( bool (*) (IndexedSet_1_t961 *, Graphic_t810 *, const MethodInfo*))IndexedSet_1_Contains_m23912_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m24700(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t961 *, GraphicU5BU5D_t3805*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m23914_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m24701(__this, method) (( int32_t (*) (IndexedSet_1_t961 *, const MethodInfo*))IndexedSet_1_get_Count_m23916_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m24702(__this, method) (( bool (*) (IndexedSet_1_t961 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m23918_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m24703(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t961 *, Graphic_t810 *, const MethodInfo*))IndexedSet_1_IndexOf_m23920_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m24704(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t961 *, int32_t, Graphic_t810 *, const MethodInfo*))IndexedSet_1_Insert_m23922_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m24705(__this, ___index, method) (( void (*) (IndexedSet_1_t961 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m23924_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m24706(__this, ___index, method) (( Graphic_t810 * (*) (IndexedSet_1_t961 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m23926_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m24707(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t961 *, int32_t, Graphic_t810 *, const MethodInfo*))IndexedSet_1_set_Item_m23928_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m24708(__this, ___match, method) (( void (*) (IndexedSet_1_t961 *, Predicate_1_t3807 *, const MethodInfo*))IndexedSet_1_RemoveAll_m23929_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m24709(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t961 *, Comparison_1_t813 *, const MethodInfo*))IndexedSet_1_Sort_m23930_gshared)(__this, ___sortLayoutFunction, method)
