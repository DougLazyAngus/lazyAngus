#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t962;
// UnityEngine.UI.Graphic
struct Graphic_t811;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4522;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3806;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3808;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t814;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5323(__this, method) (( void (*) (IndexedSet_1_t962 *, const MethodInfo*))IndexedSet_1__ctor_m23908_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24702(__this, method) (( Object_t * (*) (IndexedSet_1_t962 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23910_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m24703(__this, ___item, method) (( void (*) (IndexedSet_1_t962 *, Graphic_t811 *, const MethodInfo*))IndexedSet_1_Add_m23912_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m24704(__this, ___item, method) (( bool (*) (IndexedSet_1_t962 *, Graphic_t811 *, const MethodInfo*))IndexedSet_1_Remove_m23914_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m24705(__this, method) (( Object_t* (*) (IndexedSet_1_t962 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m23916_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m24706(__this, method) (( void (*) (IndexedSet_1_t962 *, const MethodInfo*))IndexedSet_1_Clear_m23918_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m24707(__this, ___item, method) (( bool (*) (IndexedSet_1_t962 *, Graphic_t811 *, const MethodInfo*))IndexedSet_1_Contains_m23920_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m24708(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t962 *, GraphicU5BU5D_t3806*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m23922_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m24709(__this, method) (( int32_t (*) (IndexedSet_1_t962 *, const MethodInfo*))IndexedSet_1_get_Count_m23924_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m24710(__this, method) (( bool (*) (IndexedSet_1_t962 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m23926_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m24711(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t962 *, Graphic_t811 *, const MethodInfo*))IndexedSet_1_IndexOf_m23928_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m24712(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t962 *, int32_t, Graphic_t811 *, const MethodInfo*))IndexedSet_1_Insert_m23930_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m24713(__this, ___index, method) (( void (*) (IndexedSet_1_t962 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m23932_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m24714(__this, ___index, method) (( Graphic_t811 * (*) (IndexedSet_1_t962 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m23934_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m24715(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t962 *, int32_t, Graphic_t811 *, const MethodInfo*))IndexedSet_1_set_Item_m23936_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m24716(__this, ___match, method) (( void (*) (IndexedSet_1_t962 *, Predicate_1_t3808 *, const MethodInfo*))IndexedSet_1_RemoveAll_m23937_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m24717(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t962 *, Comparison_1_t814 *, const MethodInfo*))IndexedSet_1_Sort_m23938_gshared)(__this, ___sortLayoutFunction, method)
