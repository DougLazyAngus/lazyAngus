#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1092;
// UnityEngine.UI.Graphic
struct Graphic_t942;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9657;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t6437;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t6439;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t945;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m6117(__this, method) (( void (*) (IndexedSet_1_t1092 *, const MethodInfo*))IndexedSet_1__ctor_m33406_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m34245(__this, method) (( Object_t * (*) (IndexedSet_1_t1092 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33408_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m34246(__this, ___item, method) (( void (*) (IndexedSet_1_t1092 *, Graphic_t942 *, const MethodInfo*))IndexedSet_1_Add_m33410_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m34247(__this, ___item, method) (( bool (*) (IndexedSet_1_t1092 *, Graphic_t942 *, const MethodInfo*))IndexedSet_1_Remove_m33412_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m34248(__this, method) (( Object_t* (*) (IndexedSet_1_t1092 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33414_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m34249(__this, method) (( void (*) (IndexedSet_1_t1092 *, const MethodInfo*))IndexedSet_1_Clear_m33416_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m34250(__this, ___item, method) (( bool (*) (IndexedSet_1_t1092 *, Graphic_t942 *, const MethodInfo*))IndexedSet_1_Contains_m33418_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m34251(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1092 *, GraphicU5BU5D_t6437*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33420_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m34252(__this, method) (( int32_t (*) (IndexedSet_1_t1092 *, const MethodInfo*))IndexedSet_1_get_Count_m33422_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m34253(__this, method) (( bool (*) (IndexedSet_1_t1092 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33424_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m34254(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1092 *, Graphic_t942 *, const MethodInfo*))IndexedSet_1_IndexOf_m33426_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m34255(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1092 *, int32_t, Graphic_t942 *, const MethodInfo*))IndexedSet_1_Insert_m33428_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m34256(__this, ___index, method) (( void (*) (IndexedSet_1_t1092 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33430_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m34257(__this, ___index, method) (( Graphic_t942 * (*) (IndexedSet_1_t1092 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33432_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m34258(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1092 *, int32_t, Graphic_t942 *, const MethodInfo*))IndexedSet_1_set_Item_m33434_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m34259(__this, ___match, method) (( void (*) (IndexedSet_1_t1092 *, Predicate_1_t6439 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33435_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m34260(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1092 *, Comparison_1_t945 *, const MethodInfo*))IndexedSet_1_Sort_m33436_gshared)(__this, ___sortLayoutFunction, method)
