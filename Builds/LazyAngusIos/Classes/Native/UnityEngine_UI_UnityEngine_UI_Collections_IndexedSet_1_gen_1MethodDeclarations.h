#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5741;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Predicate`1<System.Object>
struct Predicate_1_t5372;
// System.Comparison`1<System.Object>
struct Comparison_1_t5378;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m27943_gshared (IndexedSet_1_t5741 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m27943(__this, method) (( void (*) (IndexedSet_1_t5741 *, const MethodInfo*))IndexedSet_1__ctor_m27943_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m27945_gshared (IndexedSet_1_t5741 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m27945(__this, method) (( Object_t * (*) (IndexedSet_1_t5741 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m27945_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m27947_gshared (IndexedSet_1_t5741 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m27947(__this, ___item, method) (( void (*) (IndexedSet_1_t5741 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m27947_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m27949_gshared (IndexedSet_1_t5741 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m27949(__this, ___item, method) (( bool (*) (IndexedSet_1_t5741 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m27949_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m27951_gshared (IndexedSet_1_t5741 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m27951(__this, method) (( Object_t* (*) (IndexedSet_1_t5741 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m27951_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m27953_gshared (IndexedSet_1_t5741 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m27953(__this, method) (( void (*) (IndexedSet_1_t5741 *, const MethodInfo*))IndexedSet_1_Clear_m27953_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m27955_gshared (IndexedSet_1_t5741 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m27955(__this, ___item, method) (( bool (*) (IndexedSet_1_t5741 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m27955_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m27957_gshared (IndexedSet_1_t5741 * __this, ObjectU5BU5D_t627* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m27957(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5741 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m27957_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m27959_gshared (IndexedSet_1_t5741 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m27959(__this, method) (( int32_t (*) (IndexedSet_1_t5741 *, const MethodInfo*))IndexedSet_1_get_Count_m27959_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m27961_gshared (IndexedSet_1_t5741 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m27961(__this, method) (( bool (*) (IndexedSet_1_t5741 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m27961_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m27963_gshared (IndexedSet_1_t5741 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m27963(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5741 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m27963_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m27965_gshared (IndexedSet_1_t5741 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m27965(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5741 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m27965_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m27967_gshared (IndexedSet_1_t5741 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m27967(__this, ___index, method) (( void (*) (IndexedSet_1_t5741 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m27967_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m27969_gshared (IndexedSet_1_t5741 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m27969(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5741 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m27969_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m27971_gshared (IndexedSet_1_t5741 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m27971(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5741 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m27971_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m27972_gshared (IndexedSet_1_t5741 * __this, Predicate_1_t5372 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m27972(__this, ___match, method) (( void (*) (IndexedSet_1_t5741 *, Predicate_1_t5372 *, const MethodInfo*))IndexedSet_1_RemoveAll_m27972_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m27973_gshared (IndexedSet_1_t5741 * __this, Comparison_1_t5378 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m27973(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5741 *, Comparison_1_t5378 *, const MethodInfo*))IndexedSet_1_Sort_m27973_gshared)(__this, ___sortLayoutFunction, method)
