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
struct ObjectU5BU5D_t637;
// System.Predicate`1<System.Object>
struct Predicate_1_t5383;
// System.Comparison`1<System.Object>
struct Comparison_1_t5389;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m28018_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m28018(__this, method) (( void (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1__ctor_m28018_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28020_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28020(__this, method) (( Object_t * (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28020_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m28022_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m28022(__this, ___item, method) (( void (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m28022_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m28024_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m28024(__this, ___item, method) (( bool (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m28024_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m28026_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m28026(__this, method) (( Object_t* (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m28026_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m28028_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m28028(__this, method) (( void (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_Clear_m28028_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m28030_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m28030(__this, ___item, method) (( bool (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m28030_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m28032_gshared (IndexedSet_1_t5752 * __this, ObjectU5BU5D_t637* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m28032(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5752 *, ObjectU5BU5D_t637*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m28032_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m28034_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m28034(__this, method) (( int32_t (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_get_Count_m28034_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m28036_gshared (IndexedSet_1_t5752 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m28036(__this, method) (( bool (*) (IndexedSet_1_t5752 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m28036_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m28038_gshared (IndexedSet_1_t5752 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m28038(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5752 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m28038_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m28040_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m28040(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5752 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m28040_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m28042_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m28042(__this, ___index, method) (( void (*) (IndexedSet_1_t5752 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m28042_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m28044_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m28044(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5752 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m28044_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m28046_gshared (IndexedSet_1_t5752 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m28046(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5752 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m28046_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m28047_gshared (IndexedSet_1_t5752 * __this, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m28047(__this, ___match, method) (( void (*) (IndexedSet_1_t5752 *, Predicate_1_t5383 *, const MethodInfo*))IndexedSet_1_RemoveAll_m28047_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m28048_gshared (IndexedSet_1_t5752 * __this, Comparison_1_t5389 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m28048(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5752 *, Comparison_1_t5389 *, const MethodInfo*))IndexedSet_1_Sort_m28048_gshared)(__this, ___sortLayoutFunction, method)
