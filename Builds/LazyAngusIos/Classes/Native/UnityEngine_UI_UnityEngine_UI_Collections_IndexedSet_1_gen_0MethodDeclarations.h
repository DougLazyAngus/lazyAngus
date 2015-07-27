#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t963;
// UnityEngine.UI.Graphic
struct Graphic_t812;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4523;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3807;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3809;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t815;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5326(__this, method) (( void (*) (IndexedSet_1_t963 *, const MethodInfo*))IndexedSet_1__ctor_m23911_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m24705(__this, method) (( Object_t * (*) (IndexedSet_1_t963 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23913_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m24706(__this, ___item, method) (( void (*) (IndexedSet_1_t963 *, Graphic_t812 *, const MethodInfo*))IndexedSet_1_Add_m23915_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m24707(__this, ___item, method) (( bool (*) (IndexedSet_1_t963 *, Graphic_t812 *, const MethodInfo*))IndexedSet_1_Remove_m23917_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m24708(__this, method) (( Object_t* (*) (IndexedSet_1_t963 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m23919_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m24709(__this, method) (( void (*) (IndexedSet_1_t963 *, const MethodInfo*))IndexedSet_1_Clear_m23921_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m24710(__this, ___item, method) (( bool (*) (IndexedSet_1_t963 *, Graphic_t812 *, const MethodInfo*))IndexedSet_1_Contains_m23923_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m24711(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t963 *, GraphicU5BU5D_t3807*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m23925_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m24712(__this, method) (( int32_t (*) (IndexedSet_1_t963 *, const MethodInfo*))IndexedSet_1_get_Count_m23927_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m24713(__this, method) (( bool (*) (IndexedSet_1_t963 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m23929_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m24714(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t963 *, Graphic_t812 *, const MethodInfo*))IndexedSet_1_IndexOf_m23931_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m24715(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t963 *, int32_t, Graphic_t812 *, const MethodInfo*))IndexedSet_1_Insert_m23933_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m24716(__this, ___index, method) (( void (*) (IndexedSet_1_t963 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m23935_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m24717(__this, ___index, method) (( Graphic_t812 * (*) (IndexedSet_1_t963 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m23937_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m24718(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t963 *, int32_t, Graphic_t812 *, const MethodInfo*))IndexedSet_1_set_Item_m23939_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m24719(__this, ___match, method) (( void (*) (IndexedSet_1_t963 *, Predicate_1_t3809 *, const MethodInfo*))IndexedSet_1_RemoveAll_m23940_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m24720(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t963 *, Comparison_1_t815 *, const MethodInfo*))IndexedSet_1_Sort_m23941_gshared)(__this, ___sortLayoutFunction, method)
