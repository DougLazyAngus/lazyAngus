#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5826;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Predicate`1<System.Object>
struct Predicate_1_t5427;
// System.Comparison`1<System.Object>
struct Comparison_1_t5433;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m28707_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m28707(__this, method) (( void (*) (IndexedSet_1_t5826 *, const MethodInfo*))IndexedSet_1__ctor_m28707_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28709_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28709(__this, method) (( Object_t * (*) (IndexedSet_1_t5826 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28709_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m28711_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m28711(__this, ___item, method) (( void (*) (IndexedSet_1_t5826 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m28711_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m28713_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m28713(__this, ___item, method) (( bool (*) (IndexedSet_1_t5826 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m28713_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m28715_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m28715(__this, method) (( Object_t* (*) (IndexedSet_1_t5826 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28715_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m28717_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m28717(__this, method) (( void (*) (IndexedSet_1_t5826 *, const MethodInfo*))IndexedSet_1_Clear_m28717_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m28719_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m28719(__this, ___item, method) (( bool (*) (IndexedSet_1_t5826 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m28719_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m28721_gshared (IndexedSet_1_t5826 * __this, ObjectU5BU5D_t682* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m28721(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5826 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28721_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m28723_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m28723(__this, method) (( int32_t (*) (IndexedSet_1_t5826 *, const MethodInfo*))IndexedSet_1_get_Count_m28723_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m28725_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m28725(__this, method) (( bool (*) (IndexedSet_1_t5826 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28725_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m28727_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m28727(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5826 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m28727_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m28729_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m28729(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5826 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m28729_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m28731_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m28731(__this, ___index, method) (( void (*) (IndexedSet_1_t5826 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28731_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m28733_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m28733(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5826 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28733_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m28735_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m28735(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5826 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m28735_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m28736_gshared (IndexedSet_1_t5826 * __this, Predicate_1_t5427 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m28736(__this, ___match, method) (( void (*) (IndexedSet_1_t5826 *, Predicate_1_t5427 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28736_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m28737_gshared (IndexedSet_1_t5826 * __this, Comparison_1_t5433 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m28737(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5826 *, Comparison_1_t5433 *, const MethodInfo*))IndexedSet_1_Sort_m28737_gshared)(__this, ___sortLayoutFunction, method)
