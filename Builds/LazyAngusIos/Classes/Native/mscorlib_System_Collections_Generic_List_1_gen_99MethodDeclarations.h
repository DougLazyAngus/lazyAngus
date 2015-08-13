#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct List_1_t7622;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerable_1_t7236;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7621;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t7237;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ICollection_1_t9378;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ReadOnlyCollection_1_t7625;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t7629;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IComparer_1_t9379;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t7632;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void List_1__ctor_m51127_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1__ctor_m51127(__this, method) (( void (*) (List_1_t7622 *, const MethodInfo*))List_1__ctor_m51127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51128_gshared (List_1_t7622 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51128(__this, ___collection, method) (( void (*) (List_1_t7622 *, Object_t*, const MethodInfo*))List_1__ctor_m51128_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51129_gshared (List_1_t7622 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51129(__this, ___capacity, method) (( void (*) (List_1_t7622 *, int32_t, const MethodInfo*))List_1__ctor_m51129_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51130_gshared (List_1_t7622 * __this, KeyValuePair_2U5BU5D_t7621* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51130(__this, ___data, ___size, method) (( void (*) (List_1_t7622 *, KeyValuePair_2U5BU5D_t7621*, int32_t, const MethodInfo*))List_1__ctor_m51130_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.cctor()
extern "C" void List_1__cctor_m51131_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51131(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51131_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51132_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51132(__this, method) (( Object_t* (*) (List_1_t7622 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51133_gshared (List_1_t7622 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51133(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7622 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51133_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51134_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51134(__this, method) (( Object_t * (*) (List_1_t7622 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51134_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51135_gshared (List_1_t7622 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51135(__this, ___item, method) (( int32_t (*) (List_1_t7622 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51135_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51136_gshared (List_1_t7622 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51136(__this, ___item, method) (( bool (*) (List_1_t7622 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51136_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51137_gshared (List_1_t7622 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51137(__this, ___item, method) (( int32_t (*) (List_1_t7622 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51137_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51138_gshared (List_1_t7622 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51138(__this, ___index, ___item, method) (( void (*) (List_1_t7622 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51138_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51139_gshared (List_1_t7622 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51139(__this, ___item, method) (( void (*) (List_1_t7622 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51139_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51140_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51140(__this, method) (( bool (*) (List_1_t7622 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51140_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51141_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51141(__this, method) (( bool (*) (List_1_t7622 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51141_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51142_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51142(__this, method) (( Object_t * (*) (List_1_t7622 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51143_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51143(__this, method) (( bool (*) (List_1_t7622 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51144_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51144(__this, method) (( bool (*) (List_1_t7622 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51144_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51145_gshared (List_1_t7622 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51145(__this, ___index, method) (( Object_t * (*) (List_1_t7622 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51145_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51146_gshared (List_1_t7622 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51146(__this, ___index, ___value, method) (( void (*) (List_1_t7622 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51146_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Add(T)
extern "C" void List_1_Add_m51147_gshared (List_1_t7622 * __this, KeyValuePair_2_t7232  ___item, const MethodInfo* method);
#define List_1_Add_m51147(__this, ___item, method) (( void (*) (List_1_t7622 *, KeyValuePair_2_t7232 , const MethodInfo*))List_1_Add_m51147_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51148_gshared (List_1_t7622 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51148(__this, ___newCount, method) (( void (*) (List_1_t7622 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51148_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51149_gshared (List_1_t7622 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51149(__this, ___idx, ___count, method) (( void (*) (List_1_t7622 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51149_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51150_gshared (List_1_t7622 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51150(__this, ___collection, method) (( void (*) (List_1_t7622 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51150_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51151_gshared (List_1_t7622 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51151(__this, ___enumerable, method) (( void (*) (List_1_t7622 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51151_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51152_gshared (List_1_t7622 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51152(__this, ___collection, method) (( void (*) (List_1_t7622 *, Object_t*, const MethodInfo*))List_1_AddRange_m51152_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7625 * List_1_AsReadOnly_m51153_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51153(__this, method) (( ReadOnlyCollection_1_t7625 * (*) (List_1_t7622 *, const MethodInfo*))List_1_AsReadOnly_m51153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Clear()
extern "C" void List_1_Clear_m51154_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_Clear_m51154(__this, method) (( void (*) (List_1_t7622 *, const MethodInfo*))List_1_Clear_m51154_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Contains(T)
extern "C" bool List_1_Contains_m51155_gshared (List_1_t7622 * __this, KeyValuePair_2_t7232  ___item, const MethodInfo* method);
#define List_1_Contains_m51155(__this, ___item, method) (( bool (*) (List_1_t7622 *, KeyValuePair_2_t7232 , const MethodInfo*))List_1_Contains_m51155_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51156_gshared (List_1_t7622 * __this, KeyValuePair_2U5BU5D_t7621* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51156(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7622 *, KeyValuePair_2U5BU5D_t7621*, int32_t, const MethodInfo*))List_1_CopyTo_m51156_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7232  List_1_Find_m51157_gshared (List_1_t7622 * __this, Predicate_1_t7629 * ___match, const MethodInfo* method);
#define List_1_Find_m51157(__this, ___match, method) (( KeyValuePair_2_t7232  (*) (List_1_t7622 *, Predicate_1_t7629 *, const MethodInfo*))List_1_Find_m51157_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51158_gshared (Object_t * __this /* static, unused */, Predicate_1_t7629 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51158(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7629 *, const MethodInfo*))List_1_CheckMatch_m51158_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51159_gshared (List_1_t7622 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7629 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51159(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7622 *, int32_t, int32_t, Predicate_1_t7629 *, const MethodInfo*))List_1_GetIndex_m51159_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator()
extern "C" Enumerator_t7623  List_1_GetEnumerator_m51160_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51160(__this, method) (( Enumerator_t7623  (*) (List_1_t7622 *, const MethodInfo*))List_1_GetEnumerator_m51160_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7622 * List_1_GetRange_m51161_gshared (List_1_t7622 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51161(__this, ___index, ___count, method) (( List_1_t7622 * (*) (List_1_t7622 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51161_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51162_gshared (List_1_t7622 * __this, KeyValuePair_2_t7232  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51162(__this, ___item, method) (( int32_t (*) (List_1_t7622 *, KeyValuePair_2_t7232 , const MethodInfo*))List_1_IndexOf_m51162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51163_gshared (List_1_t7622 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51163(__this, ___start, ___delta, method) (( void (*) (List_1_t7622 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51163_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51164_gshared (List_1_t7622 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51164(__this, ___index, method) (( void (*) (List_1_t7622 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51164_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51165_gshared (List_1_t7622 * __this, int32_t ___index, KeyValuePair_2_t7232  ___item, const MethodInfo* method);
#define List_1_Insert_m51165(__this, ___index, ___item, method) (( void (*) (List_1_t7622 *, int32_t, KeyValuePair_2_t7232 , const MethodInfo*))List_1_Insert_m51165_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51166_gshared (List_1_t7622 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51166(__this, ___collection, method) (( void (*) (List_1_t7622 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51167_gshared (List_1_t7622 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51167(__this, ___index, ___collection, method) (( void (*) (List_1_t7622 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51167_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51168_gshared (List_1_t7622 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51168(__this, ___index, ___collection, method) (( void (*) (List_1_t7622 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51168_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51169_gshared (List_1_t7622 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51169(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7622 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51169_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Remove(T)
extern "C" bool List_1_Remove_m51170_gshared (List_1_t7622 * __this, KeyValuePair_2_t7232  ___item, const MethodInfo* method);
#define List_1_Remove_m51170(__this, ___item, method) (( bool (*) (List_1_t7622 *, KeyValuePair_2_t7232 , const MethodInfo*))List_1_Remove_m51170_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51171_gshared (List_1_t7622 * __this, Predicate_1_t7629 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51171(__this, ___match, method) (( int32_t (*) (List_1_t7622 *, Predicate_1_t7629 *, const MethodInfo*))List_1_RemoveAll_m51171_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51172_gshared (List_1_t7622 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51172(__this, ___index, method) (( void (*) (List_1_t7622 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51173_gshared (List_1_t7622 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51173(__this, ___index, ___count, method) (( void (*) (List_1_t7622 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51173_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Reverse()
extern "C" void List_1_Reverse_m51174_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_Reverse_m51174(__this, method) (( void (*) (List_1_t7622 *, const MethodInfo*))List_1_Reverse_m51174_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort()
extern "C" void List_1_Sort_m51175_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_Sort_m51175(__this, method) (( void (*) (List_1_t7622 *, const MethodInfo*))List_1_Sort_m51175_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51176_gshared (List_1_t7622 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51176(__this, ___comparer, method) (( void (*) (List_1_t7622 *, Object_t*, const MethodInfo*))List_1_Sort_m51176_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51177_gshared (List_1_t7622 * __this, Comparison_1_t7632 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51177(__this, ___comparison, method) (( void (*) (List_1_t7622 *, Comparison_1_t7632 *, const MethodInfo*))List_1_Sort_m51177_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7621* List_1_ToArray_m51178_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_ToArray_m51178(__this, method) (( KeyValuePair_2U5BU5D_t7621* (*) (List_1_t7622 *, const MethodInfo*))List_1_ToArray_m51178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51179_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51179(__this, method) (( void (*) (List_1_t7622 *, const MethodInfo*))List_1_TrimExcess_m51179_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51180_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51180(__this, method) (( int32_t (*) (List_1_t7622 *, const MethodInfo*))List_1_get_Capacity_m51180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51181_gshared (List_1_t7622 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51181(__this, ___value, method) (( void (*) (List_1_t7622 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51181_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count()
extern "C" int32_t List_1_get_Count_m51182_gshared (List_1_t7622 * __this, const MethodInfo* method);
#define List_1_get_Count_m51182(__this, method) (( int32_t (*) (List_1_t7622 *, const MethodInfo*))List_1_get_Count_m51182_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7232  List_1_get_Item_m51183_gshared (List_1_t7622 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51183(__this, ___index, method) (( KeyValuePair_2_t7232  (*) (List_1_t7622 *, int32_t, const MethodInfo*))List_1_get_Item_m51183_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51184_gshared (List_1_t7622 * __this, int32_t ___index, KeyValuePair_2_t7232  ___value, const MethodInfo* method);
#define List_1_set_Item_m51184(__this, ___index, ___value, method) (( void (*) (List_1_t7622 *, int32_t, KeyValuePair_2_t7232 , const MethodInfo*))List_1_set_Item_m51184_gshared)(__this, ___index, ___value, method)
