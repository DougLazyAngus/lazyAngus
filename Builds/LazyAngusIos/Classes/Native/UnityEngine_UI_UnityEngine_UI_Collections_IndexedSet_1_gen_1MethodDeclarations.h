#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3652;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Object[]
struct ObjectU5BU5D_t485;
// System.Predicate`1<System.Object>
struct Predicate_1_t3276;
// System.Comparison`1<System.Object>
struct Comparison_1_t3283;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m22623_gshared (IndexedSet_1_t3652 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m22623(__this, method) (( void (*) (IndexedSet_1_t3652 *, const MethodInfo*))IndexedSet_1__ctor_m22623_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22625_gshared (IndexedSet_1_t3652 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22625(__this, method) (( Object_t * (*) (IndexedSet_1_t3652 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22625_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m22627_gshared (IndexedSet_1_t3652 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m22627(__this, ___item, method) (( void (*) (IndexedSet_1_t3652 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m22627_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m22629_gshared (IndexedSet_1_t3652 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m22629(__this, ___item, method) (( bool (*) (IndexedSet_1_t3652 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m22629_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m22631_gshared (IndexedSet_1_t3652 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m22631(__this, method) (( Object_t* (*) (IndexedSet_1_t3652 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22631_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m22633_gshared (IndexedSet_1_t3652 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m22633(__this, method) (( void (*) (IndexedSet_1_t3652 *, const MethodInfo*))IndexedSet_1_Clear_m22633_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m22635_gshared (IndexedSet_1_t3652 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m22635(__this, ___item, method) (( bool (*) (IndexedSet_1_t3652 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m22635_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m22637_gshared (IndexedSet_1_t3652 * __this, ObjectU5BU5D_t485* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m22637(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3652 *, ObjectU5BU5D_t485*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22637_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m22639_gshared (IndexedSet_1_t3652 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m22639(__this, method) (( int32_t (*) (IndexedSet_1_t3652 *, const MethodInfo*))IndexedSet_1_get_Count_m22639_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m22641_gshared (IndexedSet_1_t3652 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m22641(__this, method) (( bool (*) (IndexedSet_1_t3652 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22641_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m22643_gshared (IndexedSet_1_t3652 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m22643(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3652 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m22643_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m22645_gshared (IndexedSet_1_t3652 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m22645(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3652 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m22645_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m22647_gshared (IndexedSet_1_t3652 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m22647(__this, ___index, method) (( void (*) (IndexedSet_1_t3652 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22647_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m22649_gshared (IndexedSet_1_t3652 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m22649(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3652 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22649_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m22651_gshared (IndexedSet_1_t3652 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m22651(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3652 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m22651_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m22652_gshared (IndexedSet_1_t3652 * __this, Predicate_1_t3276 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m22652(__this, ___match, method) (( void (*) (IndexedSet_1_t3652 *, Predicate_1_t3276 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22652_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m22653_gshared (IndexedSet_1_t3652 * __this, Comparison_1_t3283 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m22653(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3652 *, Comparison_1_t3283 *, const MethodInfo*))IndexedSet_1_Sort_m22653_gshared)(__this, ___sortLayoutFunction, method)
