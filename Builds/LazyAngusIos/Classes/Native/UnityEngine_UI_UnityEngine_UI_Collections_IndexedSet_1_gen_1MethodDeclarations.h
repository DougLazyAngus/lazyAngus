#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5752;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t638;
// System.Predicate`1<System.Object>
struct Predicate_1_t5383;
// System.Comparison`1<System.Object>
struct Comparison_1_t5389;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m28021_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m28021(__this, method) (( void (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1__ctor_m28021_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28023_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28023(__this, method) (( Object_t * (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28023_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m28025_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m28025(__this, ___item, method) (( void (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m28025_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m28027_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m28027(__this, ___item, method) (( bool (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m28027_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m28029_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m28029(__this, method) (( Object_t* (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28029_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m28031_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m28031(__this, method) (( void (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_Clear_m28031_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m28033_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m28033(__this, ___item, method) (( bool (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m28033_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m28035_gshared (IndexedSet_1_t5752 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m28035(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5752 *, ObjectU5BU5D_t638*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28035_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m28037_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m28037(__this, method) (( int32_t (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_get_Count_m28037_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m28039_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m28039(__this, method) (( bool (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28039_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m28041_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m28041(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m28041_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m28043_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m28043(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5752 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m28043_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m28045_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m28045(__this, ___index, method) (( void (*) (IndexedSet_1_t5752 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28045_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m28047_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m28047(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5752 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28047_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m28049_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m28049(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5752 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m28049_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m28050_gshared (IndexedSet_1_t5752 * __this, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m28050(__this, ___match, method) (( void (*) (IndexedSet_1_t5752 *, Predicate_1_t5383 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28050_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m28051_gshared (IndexedSet_1_t5752 * __this, Comparison_1_t5389 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m28051(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5752 *, Comparison_1_t5389 *, const MethodInfo*))IndexedSet_1_Sort_m28051_gshared)(__this, ___sortLayoutFunction, method)
