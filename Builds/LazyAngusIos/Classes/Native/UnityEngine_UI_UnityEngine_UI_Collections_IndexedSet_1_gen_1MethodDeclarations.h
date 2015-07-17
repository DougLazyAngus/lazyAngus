#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3769;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Object[]
struct ObjectU5BU5D_t580;
// System.Predicate`1<System.Object>
struct Predicate_1_t3375;
// System.Comparison`1<System.Object>
struct Comparison_1_t3382;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m23900_gshared (IndexedSet_1_t3769 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m23900(__this, method) (( void (*) (IndexedSet_1_t3769 *, const MethodInfo*))IndexedSet_1__ctor_m23900_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23902_gshared (IndexedSet_1_t3769 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23902(__this, method) (( Object_t * (*) (IndexedSet_1_t3769 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m23902_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m23904_gshared (IndexedSet_1_t3769 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m23904(__this, ___item, method) (( void (*) (IndexedSet_1_t3769 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m23904_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m23906_gshared (IndexedSet_1_t3769 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m23906(__this, ___item, method) (( bool (*) (IndexedSet_1_t3769 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m23906_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m23908_gshared (IndexedSet_1_t3769 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m23908(__this, method) (( Object_t* (*) (IndexedSet_1_t3769 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m23908_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m23910_gshared (IndexedSet_1_t3769 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m23910(__this, method) (( void (*) (IndexedSet_1_t3769 *, const MethodInfo*))IndexedSet_1_Clear_m23910_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m23912_gshared (IndexedSet_1_t3769 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m23912(__this, ___item, method) (( bool (*) (IndexedSet_1_t3769 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m23912_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m23914_gshared (IndexedSet_1_t3769 * __this, ObjectU5BU5D_t580* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m23914(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3769 *, ObjectU5BU5D_t580*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m23914_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m23916_gshared (IndexedSet_1_t3769 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m23916(__this, method) (( int32_t (*) (IndexedSet_1_t3769 *, const MethodInfo*))IndexedSet_1_get_Count_m23916_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m23918_gshared (IndexedSet_1_t3769 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m23918(__this, method) (( bool (*) (IndexedSet_1_t3769 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m23918_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m23920_gshared (IndexedSet_1_t3769 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m23920(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3769 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m23920_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m23922_gshared (IndexedSet_1_t3769 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m23922(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3769 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m23922_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m23924_gshared (IndexedSet_1_t3769 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m23924(__this, ___index, method) (( void (*) (IndexedSet_1_t3769 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m23924_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m23926_gshared (IndexedSet_1_t3769 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m23926(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3769 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m23926_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m23928_gshared (IndexedSet_1_t3769 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m23928(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3769 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m23928_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m23929_gshared (IndexedSet_1_t3769 * __this, Predicate_1_t3375 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m23929(__this, ___match, method) (( void (*) (IndexedSet_1_t3769 *, Predicate_1_t3375 *, const MethodInfo*))IndexedSet_1_RemoveAll_m23929_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m23930_gshared (IndexedSet_1_t3769 * __this, Comparison_1_t3382 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m23930(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3769 *, Comparison_1_t3382 *, const MethodInfo*))IndexedSet_1_Sort_m23930_gshared)(__this, ___sortLayoutFunction, method)
