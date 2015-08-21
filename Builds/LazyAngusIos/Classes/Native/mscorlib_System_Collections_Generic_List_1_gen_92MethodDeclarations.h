#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t7366;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t7200;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7365;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t7201;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t9366;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t7369;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7373;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IComparer_1_t9367;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7376;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_75.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void List_1__ctor_m48107_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1__ctor_m48107(__this, method) (( void (*) (List_1_t7366 *, const MethodInfo*))List_1__ctor_m48107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m48108_gshared (List_1_t7366 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m48108(__this, ___collection, method) (( void (*) (List_1_t7366 *, Object_t*, const MethodInfo*))List_1__ctor_m48108_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m48109_gshared (List_1_t7366 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m48109(__this, ___capacity, method) (( void (*) (List_1_t7366 *, int32_t, const MethodInfo*))List_1__ctor_m48109_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m48110_gshared (List_1_t7366 * __this, KeyValuePair_2U5BU5D_t7365* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m48110(__this, ___data, ___size, method) (( void (*) (List_1_t7366 *, KeyValuePair_2U5BU5D_t7365*, int32_t, const MethodInfo*))List_1__ctor_m48110_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C" void List_1__cctor_m48111_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m48111(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48111_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48112_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48112(__this, method) (( Object_t* (*) (List_1_t7366 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m48113_gshared (List_1_t7366 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m48113(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7366 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48113_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m48114_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48114(__this, method) (( Object_t * (*) (List_1_t7366 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48114_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m48115_gshared (List_1_t7366 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m48115(__this, ___item, method) (( int32_t (*) (List_1_t7366 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48115_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m48116_gshared (List_1_t7366 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m48116(__this, ___item, method) (( bool (*) (List_1_t7366 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m48117_gshared (List_1_t7366 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m48117(__this, ___item, method) (( int32_t (*) (List_1_t7366 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m48118_gshared (List_1_t7366 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m48118(__this, ___index, ___item, method) (( void (*) (List_1_t7366 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m48119_gshared (List_1_t7366 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m48119(__this, ___item, method) (( void (*) (List_1_t7366 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48120_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48120(__this, method) (( bool (*) (List_1_t7366 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m48121_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48121(__this, method) (( bool (*) (List_1_t7366 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48121_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m48122_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m48122(__this, method) (( Object_t * (*) (List_1_t7366 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m48123_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m48123(__this, method) (( bool (*) (List_1_t7366 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48123_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m48124_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m48124(__this, method) (( bool (*) (List_1_t7366 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48124_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m48125_gshared (List_1_t7366 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m48125(__this, ___index, method) (( Object_t * (*) (List_1_t7366 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48125_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m48126_gshared (List_1_t7366 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m48126(__this, ___index, ___value, method) (( void (*) (List_1_t7366 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48126_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C" void List_1_Add_m48127_gshared (List_1_t7366 * __this, KeyValuePair_2_t7196  ___item, const MethodInfo* method);
#define List_1_Add_m48127(__this, ___item, method) (( void (*) (List_1_t7366 *, KeyValuePair_2_t7196 , const MethodInfo*))List_1_Add_m48127_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m48128_gshared (List_1_t7366 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m48128(__this, ___newCount, method) (( void (*) (List_1_t7366 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48128_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m48129_gshared (List_1_t7366 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m48129(__this, ___idx, ___count, method) (( void (*) (List_1_t7366 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48129_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m48130_gshared (List_1_t7366 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m48130(__this, ___collection, method) (( void (*) (List_1_t7366 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48130_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m48131_gshared (List_1_t7366 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m48131(__this, ___enumerable, method) (( void (*) (List_1_t7366 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48131_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m48132_gshared (List_1_t7366 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m48132(__this, ___collection, method) (( void (*) (List_1_t7366 *, Object_t*, const MethodInfo*))List_1_AddRange_m48132_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7369 * List_1_AsReadOnly_m48133_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m48133(__this, method) (( ReadOnlyCollection_1_t7369 * (*) (List_1_t7366 *, const MethodInfo*))List_1_AsReadOnly_m48133_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C" void List_1_Clear_m48134_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_Clear_m48134(__this, method) (( void (*) (List_1_t7366 *, const MethodInfo*))List_1_Clear_m48134_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C" bool List_1_Contains_m48135_gshared (List_1_t7366 * __this, KeyValuePair_2_t7196  ___item, const MethodInfo* method);
#define List_1_Contains_m48135(__this, ___item, method) (( bool (*) (List_1_t7366 *, KeyValuePair_2_t7196 , const MethodInfo*))List_1_Contains_m48135_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m48136_gshared (List_1_t7366 * __this, KeyValuePair_2U5BU5D_t7365* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m48136(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7366 *, KeyValuePair_2U5BU5D_t7365*, int32_t, const MethodInfo*))List_1_CopyTo_m48136_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7196  List_1_Find_m48137_gshared (List_1_t7366 * __this, Predicate_1_t7373 * ___match, const MethodInfo* method);
#define List_1_Find_m48137(__this, ___match, method) (( KeyValuePair_2_t7196  (*) (List_1_t7366 *, Predicate_1_t7373 *, const MethodInfo*))List_1_Find_m48137_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m48138_gshared (Object_t * __this /* static, unused */, Predicate_1_t7373 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m48138(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7373 *, const MethodInfo*))List_1_CheckMatch_m48138_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m48139_gshared (List_1_t7366 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7373 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m48139(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7366 *, int32_t, int32_t, Predicate_1_t7373 *, const MethodInfo*))List_1_GetIndex_m48139_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C" Enumerator_t7367  List_1_GetEnumerator_m48140_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m48140(__this, method) (( Enumerator_t7367  (*) (List_1_t7366 *, const MethodInfo*))List_1_GetEnumerator_m48140_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7366 * List_1_GetRange_m48141_gshared (List_1_t7366 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m48141(__this, ___index, ___count, method) (( List_1_t7366 * (*) (List_1_t7366 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48141_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m48142_gshared (List_1_t7366 * __this, KeyValuePair_2_t7196  ___item, const MethodInfo* method);
#define List_1_IndexOf_m48142(__this, ___item, method) (( int32_t (*) (List_1_t7366 *, KeyValuePair_2_t7196 , const MethodInfo*))List_1_IndexOf_m48142_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m48143_gshared (List_1_t7366 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m48143(__this, ___start, ___delta, method) (( void (*) (List_1_t7366 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48143_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m48144_gshared (List_1_t7366 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m48144(__this, ___index, method) (( void (*) (List_1_t7366 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48144_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m48145_gshared (List_1_t7366 * __this, int32_t ___index, KeyValuePair_2_t7196  ___item, const MethodInfo* method);
#define List_1_Insert_m48145(__this, ___index, ___item, method) (( void (*) (List_1_t7366 *, int32_t, KeyValuePair_2_t7196 , const MethodInfo*))List_1_Insert_m48145_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m48146_gshared (List_1_t7366 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m48146(__this, ___collection, method) (( void (*) (List_1_t7366 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48146_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m48147_gshared (List_1_t7366 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m48147(__this, ___index, ___collection, method) (( void (*) (List_1_t7366 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48147_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m48148_gshared (List_1_t7366 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m48148(__this, ___index, ___collection, method) (( void (*) (List_1_t7366 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48148_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m48149_gshared (List_1_t7366 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m48149(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7366 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48149_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C" bool List_1_Remove_m48150_gshared (List_1_t7366 * __this, KeyValuePair_2_t7196  ___item, const MethodInfo* method);
#define List_1_Remove_m48150(__this, ___item, method) (( bool (*) (List_1_t7366 *, KeyValuePair_2_t7196 , const MethodInfo*))List_1_Remove_m48150_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m48151_gshared (List_1_t7366 * __this, Predicate_1_t7373 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m48151(__this, ___match, method) (( int32_t (*) (List_1_t7366 *, Predicate_1_t7373 *, const MethodInfo*))List_1_RemoveAll_m48151_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m48152_gshared (List_1_t7366 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m48152(__this, ___index, method) (( void (*) (List_1_t7366 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48152_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m48153_gshared (List_1_t7366 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m48153(__this, ___index, ___count, method) (( void (*) (List_1_t7366 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48153_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C" void List_1_Reverse_m48154_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_Reverse_m48154(__this, method) (( void (*) (List_1_t7366 *, const MethodInfo*))List_1_Reverse_m48154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C" void List_1_Sort_m48155_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_Sort_m48155(__this, method) (( void (*) (List_1_t7366 *, const MethodInfo*))List_1_Sort_m48155_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m48156_gshared (List_1_t7366 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m48156(__this, ___comparer, method) (( void (*) (List_1_t7366 *, Object_t*, const MethodInfo*))List_1_Sort_m48156_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m48157_gshared (List_1_t7366 * __this, Comparison_1_t7376 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m48157(__this, ___comparison, method) (( void (*) (List_1_t7366 *, Comparison_1_t7376 *, const MethodInfo*))List_1_Sort_m48157_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7365* List_1_ToArray_m48158_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_ToArray_m48158(__this, method) (( KeyValuePair_2U5BU5D_t7365* (*) (List_1_t7366 *, const MethodInfo*))List_1_ToArray_m48158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m48159_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m48159(__this, method) (( void (*) (List_1_t7366 *, const MethodInfo*))List_1_TrimExcess_m48159_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m48160_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m48160(__this, method) (( int32_t (*) (List_1_t7366 *, const MethodInfo*))List_1_get_Capacity_m48160_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m48161_gshared (List_1_t7366 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m48161(__this, ___value, method) (( void (*) (List_1_t7366 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48161_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C" int32_t List_1_get_Count_m48162_gshared (List_1_t7366 * __this, const MethodInfo* method);
#define List_1_get_Count_m48162(__this, method) (( int32_t (*) (List_1_t7366 *, const MethodInfo*))List_1_get_Count_m48162_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7196  List_1_get_Item_m48163_gshared (List_1_t7366 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m48163(__this, ___index, method) (( KeyValuePair_2_t7196  (*) (List_1_t7366 *, int32_t, const MethodInfo*))List_1_get_Item_m48163_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m48164_gshared (List_1_t7366 * __this, int32_t ___index, KeyValuePair_2_t7196  ___value, const MethodInfo* method);
#define List_1_set_Item_m48164(__this, ___index, ___value, method) (( void (*) (List_1_t7366 *, int32_t, KeyValuePair_2_t7196 , const MethodInfo*))List_1_set_Item_m48164_gshared)(__this, ___index, ___value, method)
