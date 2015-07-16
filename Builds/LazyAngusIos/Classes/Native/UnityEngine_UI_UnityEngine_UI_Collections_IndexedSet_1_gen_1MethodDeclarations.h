#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3704;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Object[]
struct ObjectU5BU5D_t541;
// System.Predicate`1<System.Object>
struct Predicate_1_t3331;
// System.Comparison`1<System.Object>
struct Comparison_1_t3338;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m22878_gshared (IndexedSet_1_t3704 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m22878(__this, method) (( void (*) (IndexedSet_1_t3704 *, const MethodInfo*))IndexedSet_1__ctor_m22878_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22880_gshared (IndexedSet_1_t3704 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22880(__this, method) (( Object_t * (*) (IndexedSet_1_t3704 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m22880_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m22882_gshared (IndexedSet_1_t3704 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m22882(__this, ___item, method) (( void (*) (IndexedSet_1_t3704 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m22882_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m22884_gshared (IndexedSet_1_t3704 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m22884(__this, ___item, method) (( bool (*) (IndexedSet_1_t3704 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m22884_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m22886_gshared (IndexedSet_1_t3704 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m22886(__this, method) (( Object_t* (*) (IndexedSet_1_t3704 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m22886_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m22888_gshared (IndexedSet_1_t3704 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m22888(__this, method) (( void (*) (IndexedSet_1_t3704 *, const MethodInfo*))IndexedSet_1_Clear_m22888_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m22890_gshared (IndexedSet_1_t3704 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m22890(__this, ___item, method) (( bool (*) (IndexedSet_1_t3704 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m22890_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m22892_gshared (IndexedSet_1_t3704 * __this, ObjectU5BU5D_t541* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m22892(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3704 *, ObjectU5BU5D_t541*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m22892_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m22894_gshared (IndexedSet_1_t3704 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m22894(__this, method) (( int32_t (*) (IndexedSet_1_t3704 *, const MethodInfo*))IndexedSet_1_get_Count_m22894_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m22896_gshared (IndexedSet_1_t3704 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m22896(__this, method) (( bool (*) (IndexedSet_1_t3704 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m22896_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m22898_gshared (IndexedSet_1_t3704 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m22898(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3704 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m22898_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m22900_gshared (IndexedSet_1_t3704 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m22900(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3704 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m22900_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m22902_gshared (IndexedSet_1_t3704 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m22902(__this, ___index, method) (( void (*) (IndexedSet_1_t3704 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m22902_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m22904_gshared (IndexedSet_1_t3704 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m22904(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3704 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m22904_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m22906_gshared (IndexedSet_1_t3704 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m22906(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3704 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m22906_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m22907_gshared (IndexedSet_1_t3704 * __this, Predicate_1_t3331 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m22907(__this, ___match, method) (( void (*) (IndexedSet_1_t3704 *, Predicate_1_t3331 *, const MethodInfo*))IndexedSet_1_RemoveAll_m22907_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m22908_gshared (IndexedSet_1_t3704 * __this, Comparison_1_t3338 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m22908(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3704 *, Comparison_1_t3338 *, const MethodInfo*))IndexedSet_1_Sort_m22908_gshared)(__this, ___sortLayoutFunction, method)
