#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1003;
// UnityEngine.UI.Graphic
struct Graphic_t852;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t8915;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5776;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5778;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t855;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5620(__this, method) (( void (*) (IndexedSet_1_t1003 *, const MethodInfo*))IndexedSet_1__ctor_m27943_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28778(__this, method) (( Object_t * (*) (IndexedSet_1_t1003 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m27945_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m28779(__this, ___item, method) (( void (*) (IndexedSet_1_t1003 *, Graphic_t852 *, const MethodInfo*))IndexedSet_1_Add_m27947_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m28780(__this, ___item, method) (( bool (*) (IndexedSet_1_t1003 *, Graphic_t852 *, const MethodInfo*))IndexedSet_1_Remove_m27949_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m28781(__this, method) (( Object_t* (*) (IndexedSet_1_t1003 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m27951_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m28782(__this, method) (( void (*) (IndexedSet_1_t1003 *, const MethodInfo*))IndexedSet_1_Clear_m27953_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m28783(__this, ___item, method) (( bool (*) (IndexedSet_1_t1003 *, Graphic_t852 *, const MethodInfo*))IndexedSet_1_Contains_m27955_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m28784(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1003 *, GraphicU5BU5D_t5776*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m27957_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m28785(__this, method) (( int32_t (*) (IndexedSet_1_t1003 *, const MethodInfo*))IndexedSet_1_get_Count_m27959_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m28786(__this, method) (( bool (*) (IndexedSet_1_t1003 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m27961_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m28787(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1003 *, Graphic_t852 *, const MethodInfo*))IndexedSet_1_IndexOf_m27963_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m28788(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1003 *, int32_t, Graphic_t852 *, const MethodInfo*))IndexedSet_1_Insert_m27965_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m28789(__this, ___index, method) (( void (*) (IndexedSet_1_t1003 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m27967_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m28790(__this, ___index, method) (( Graphic_t852 * (*) (IndexedSet_1_t1003 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m27969_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m28791(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1003 *, int32_t, Graphic_t852 *, const MethodInfo*))IndexedSet_1_set_Item_m27971_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m28792(__this, ___match, method) (( void (*) (IndexedSet_1_t1003 *, Predicate_1_t5778 *, const MethodInfo*))IndexedSet_1_RemoveAll_m27972_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m28793(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1003 *, Comparison_1_t855 *, const MethodInfo*))IndexedSet_1_Sort_m27973_gshared)(__this, ___sortLayoutFunction, method)
