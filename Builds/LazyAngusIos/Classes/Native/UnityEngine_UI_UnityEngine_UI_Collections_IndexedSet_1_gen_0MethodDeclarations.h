#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1088;
// UnityEngine.UI.Graphic
struct Graphic_t938;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9064;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5898;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5900;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t941;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m6100(__this, method) (( void (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1__ctor_m29163_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29998(__this, method) (( Object_t * (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m29165_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m29999(__this, ___item, method) (( void (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Add_m29167_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m30000(__this, ___item, method) (( bool (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Remove_m29169_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m30001(__this, method) (( Object_t* (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m29171_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m30002(__this, method) (( void (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_Clear_m29173_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m30003(__this, ___item, method) (( bool (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Contains_m29175_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m30004(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1088 *, GraphicU5BU5D_t5898*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m29177_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m30005(__this, method) (( int32_t (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_get_Count_m29179_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m30006(__this, method) (( bool (*) (IndexedSet_1_t1088 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m29181_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m30007(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1088 *, Graphic_t938 *, const MethodInfo*))IndexedSet_1_IndexOf_m29183_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m30008(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1088 *, int32_t, Graphic_t938 *, const MethodInfo*))IndexedSet_1_Insert_m29185_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m30009(__this, ___index, method) (( void (*) (IndexedSet_1_t1088 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m29187_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m30010(__this, ___index, method) (( Graphic_t938 * (*) (IndexedSet_1_t1088 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m29189_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m30011(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1088 *, int32_t, Graphic_t938 *, const MethodInfo*))IndexedSet_1_set_Item_m29191_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m30012(__this, ___match, method) (( void (*) (IndexedSet_1_t1088 *, Predicate_1_t5900 *, const MethodInfo*))IndexedSet_1_RemoveAll_m29192_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m30013(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1088 *, Comparison_1_t941 *, const MethodInfo*))IndexedSet_1_Sort_m29193_gshared)(__this, ___sortLayoutFunction, method)
