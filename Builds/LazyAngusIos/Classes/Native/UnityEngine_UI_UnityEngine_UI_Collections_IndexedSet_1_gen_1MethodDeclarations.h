#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t6401;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Predicate`1<System.Object>
struct Predicate_1_t5981;
// System.Comparison`1<System.Object>
struct Comparison_1_t5987;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m33406_gshared (IndexedSet_1_t6401 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m33406(__this, method) (( void (*) (IndexedSet_1_t6401 *, const MethodInfo*))IndexedSet_1__ctor_m33406_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33408_gshared (IndexedSet_1_t6401 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33408(__this, method) (( Object_t * (*) (IndexedSet_1_t6401 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33408_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m33410_gshared (IndexedSet_1_t6401 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m33410(__this, ___item, method) (( void (*) (IndexedSet_1_t6401 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m33410_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m33412_gshared (IndexedSet_1_t6401 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m33412(__this, ___item, method) (( bool (*) (IndexedSet_1_t6401 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m33412_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m33414_gshared (IndexedSet_1_t6401 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m33414(__this, method) (( Object_t* (*) (IndexedSet_1_t6401 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33414_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m33416_gshared (IndexedSet_1_t6401 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m33416(__this, method) (( void (*) (IndexedSet_1_t6401 *, const MethodInfo*))IndexedSet_1_Clear_m33416_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m33418_gshared (IndexedSet_1_t6401 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m33418(__this, ___item, method) (( bool (*) (IndexedSet_1_t6401 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m33418_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m33420_gshared (IndexedSet_1_t6401 * __this, ObjectU5BU5D_t700* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m33420(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t6401 *, ObjectU5BU5D_t700*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33420_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m33422_gshared (IndexedSet_1_t6401 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m33422(__this, method) (( int32_t (*) (IndexedSet_1_t6401 *, const MethodInfo*))IndexedSet_1_get_Count_m33422_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m33424_gshared (IndexedSet_1_t6401 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m33424(__this, method) (( bool (*) (IndexedSet_1_t6401 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33424_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m33426_gshared (IndexedSet_1_t6401 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m33426(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t6401 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m33426_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m33428_gshared (IndexedSet_1_t6401 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m33428(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t6401 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m33428_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m33430_gshared (IndexedSet_1_t6401 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m33430(__this, ___index, method) (( void (*) (IndexedSet_1_t6401 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33430_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m33432_gshared (IndexedSet_1_t6401 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m33432(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t6401 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33432_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m33434_gshared (IndexedSet_1_t6401 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m33434(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t6401 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m33434_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m33435_gshared (IndexedSet_1_t6401 * __this, Predicate_1_t5981 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m33435(__this, ___match, method) (( void (*) (IndexedSet_1_t6401 *, Predicate_1_t5981 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33435_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m33436_gshared (IndexedSet_1_t6401 * __this, Comparison_1_t5987 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m33436(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t6401 *, Comparison_1_t5987 *, const MethodInfo*))IndexedSet_1_Sort_m33436_gshared)(__this, ___sortLayoutFunction, method)
