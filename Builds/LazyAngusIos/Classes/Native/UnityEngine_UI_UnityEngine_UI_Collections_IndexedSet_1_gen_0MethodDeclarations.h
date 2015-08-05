#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1014;
// UnityEngine.UI.Graphic
struct Graphic_t863;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t8927;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5788;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5790;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t866;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5694(__this, method) (( void (*) (IndexedSet_1_t1014 *, const MethodInfo*))IndexedSet_1__ctor_m28021_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28856(__this, method) (( Object_t * (*) (IndexedSet_1_t1014 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28023_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m28857(__this, ___item, method) (( void (*) (IndexedSet_1_t1014 *, Graphic_t863 *, const MethodInfo*))IndexedSet_1_Add_m28025_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m28858(__this, ___item, method) (( bool (*) (IndexedSet_1_t1014 *, Graphic_t863 *, const MethodInfo*))IndexedSet_1_Remove_m28027_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m28859(__this, method) (( Object_t* (*) (IndexedSet_1_t1014 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28029_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m28860(__this, method) (( void (*) (IndexedSet_1_t1014 *, const MethodInfo*))IndexedSet_1_Clear_m28031_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m28861(__this, ___item, method) (( bool (*) (IndexedSet_1_t1014 *, Graphic_t863 *, const MethodInfo*))IndexedSet_1_Contains_m28033_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m28862(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1014 *, GraphicU5BU5D_t5788*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28035_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m28863(__this, method) (( int32_t (*) (IndexedSet_1_t1014 *, const MethodInfo*))IndexedSet_1_get_Count_m28037_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m28864(__this, method) (( bool (*) (IndexedSet_1_t1014 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28039_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m28865(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1014 *, Graphic_t863 *, const MethodInfo*))IndexedSet_1_IndexOf_m28041_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m28866(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1014 *, int32_t, Graphic_t863 *, const MethodInfo*))IndexedSet_1_Insert_m28043_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m28867(__this, ___index, method) (( void (*) (IndexedSet_1_t1014 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28045_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m28868(__this, ___index, method) (( Graphic_t863 * (*) (IndexedSet_1_t1014 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28047_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m28869(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1014 *, int32_t, Graphic_t863 *, const MethodInfo*))IndexedSet_1_set_Item_m28049_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m28870(__this, ___match, method) (( void (*) (IndexedSet_1_t1014 *, Predicate_1_t5790 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28050_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m28871(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1014 *, Comparison_1_t866 *, const MethodInfo*))IndexedSet_1_Sort_m28051_gshared)(__this, ___sortLayoutFunction, method)
