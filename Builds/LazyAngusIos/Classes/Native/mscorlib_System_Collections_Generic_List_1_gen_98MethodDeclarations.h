#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t7615;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t7175;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7614;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7176;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ICollection_1_t9292;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ReadOnlyCollection_1_t7618;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t7622;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IComparer_1_t9293;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t7625;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_81.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void List_1__ctor_m51220_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1__ctor_m51220(__this, method) (( void (*) (List_1_t7615 *, const MethodInfo*))List_1__ctor_m51220_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51221_gshared (List_1_t7615 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51221(__this, ___collection, method) (( void (*) (List_1_t7615 *, Object_t*, const MethodInfo*))List_1__ctor_m51221_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51222_gshared (List_1_t7615 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51222(__this, ___capacity, method) (( void (*) (List_1_t7615 *, int32_t, const MethodInfo*))List_1__ctor_m51222_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51223_gshared (List_1_t7615 * __this, KeyValuePair_2U5BU5D_t7614* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51223(__this, ___data, ___size, method) (( void (*) (List_1_t7615 *, KeyValuePair_2U5BU5D_t7614*, int32_t, const MethodInfo*))List_1__ctor_m51223_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.cctor()
extern "C" void List_1__cctor_m51224_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51224(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51224_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51225_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51225(__this, method) (( Object_t* (*) (List_1_t7615 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51226_gshared (List_1_t7615 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51226(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7615 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51226_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51227_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51227(__this, method) (( Object_t * (*) (List_1_t7615 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51227_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51228_gshared (List_1_t7615 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51228(__this, ___item, method) (( int32_t (*) (List_1_t7615 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51228_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51229_gshared (List_1_t7615 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51229(__this, ___item, method) (( bool (*) (List_1_t7615 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51229_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51230_gshared (List_1_t7615 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51230(__this, ___item, method) (( int32_t (*) (List_1_t7615 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51230_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51231_gshared (List_1_t7615 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51231(__this, ___index, ___item, method) (( void (*) (List_1_t7615 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51231_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51232_gshared (List_1_t7615 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51232(__this, ___item, method) (( void (*) (List_1_t7615 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51232_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51233_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51233(__this, method) (( bool (*) (List_1_t7615 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51233_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51234_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51234(__this, method) (( bool (*) (List_1_t7615 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51234_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51235_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51235(__this, method) (( Object_t * (*) (List_1_t7615 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51236_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51236(__this, method) (( bool (*) (List_1_t7615 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51236_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51237_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51237(__this, method) (( bool (*) (List_1_t7615 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51237_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51238_gshared (List_1_t7615 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51238(__this, ___index, method) (( Object_t * (*) (List_1_t7615 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51238_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51239_gshared (List_1_t7615 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51239(__this, ___index, ___value, method) (( void (*) (List_1_t7615 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51239_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
extern "C" void List_1_Add_m51240_gshared (List_1_t7615 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define List_1_Add_m51240(__this, ___item, method) (( void (*) (List_1_t7615 *, KeyValuePair_2_t7171 , const MethodInfo*))List_1_Add_m51240_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51241_gshared (List_1_t7615 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51241(__this, ___newCount, method) (( void (*) (List_1_t7615 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51241_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51242_gshared (List_1_t7615 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51242(__this, ___idx, ___count, method) (( void (*) (List_1_t7615 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51242_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51243_gshared (List_1_t7615 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51243(__this, ___collection, method) (( void (*) (List_1_t7615 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51243_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51244_gshared (List_1_t7615 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51244(__this, ___enumerable, method) (( void (*) (List_1_t7615 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51244_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51245_gshared (List_1_t7615 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51245(__this, ___collection, method) (( void (*) (List_1_t7615 *, Object_t*, const MethodInfo*))List_1_AddRange_m51245_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7618 * List_1_AsReadOnly_m51246_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51246(__this, method) (( ReadOnlyCollection_1_t7618 * (*) (List_1_t7615 *, const MethodInfo*))List_1_AsReadOnly_m51246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
extern "C" void List_1_Clear_m51247_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_Clear_m51247(__this, method) (( void (*) (List_1_t7615 *, const MethodInfo*))List_1_Clear_m51247_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
extern "C" bool List_1_Contains_m51248_gshared (List_1_t7615 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define List_1_Contains_m51248(__this, ___item, method) (( bool (*) (List_1_t7615 *, KeyValuePair_2_t7171 , const MethodInfo*))List_1_Contains_m51248_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51249_gshared (List_1_t7615 * __this, KeyValuePair_2U5BU5D_t7614* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51249(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7615 *, KeyValuePair_2U5BU5D_t7614*, int32_t, const MethodInfo*))List_1_CopyTo_m51249_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7171  List_1_Find_m51250_gshared (List_1_t7615 * __this, Predicate_1_t7622 * ___match, const MethodInfo* method);
#define List_1_Find_m51250(__this, ___match, method) (( KeyValuePair_2_t7171  (*) (List_1_t7615 *, Predicate_1_t7622 *, const MethodInfo*))List_1_Find_m51250_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51251_gshared (Object_t * __this /* static, unused */, Predicate_1_t7622 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51251(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7622 *, const MethodInfo*))List_1_CheckMatch_m51251_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51252_gshared (List_1_t7615 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7622 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51252(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7615 *, int32_t, int32_t, Predicate_1_t7622 *, const MethodInfo*))List_1_GetIndex_m51252_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
extern "C" Enumerator_t7616  List_1_GetEnumerator_m51253_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51253(__this, method) (( Enumerator_t7616  (*) (List_1_t7615 *, const MethodInfo*))List_1_GetEnumerator_m51253_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7615 * List_1_GetRange_m51254_gshared (List_1_t7615 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51254(__this, ___index, ___count, method) (( List_1_t7615 * (*) (List_1_t7615 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51254_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51255_gshared (List_1_t7615 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51255(__this, ___item, method) (( int32_t (*) (List_1_t7615 *, KeyValuePair_2_t7171 , const MethodInfo*))List_1_IndexOf_m51255_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51256_gshared (List_1_t7615 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51256(__this, ___start, ___delta, method) (( void (*) (List_1_t7615 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51256_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51257_gshared (List_1_t7615 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51257(__this, ___index, method) (( void (*) (List_1_t7615 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51257_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51258_gshared (List_1_t7615 * __this, int32_t ___index, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define List_1_Insert_m51258(__this, ___index, ___item, method) (( void (*) (List_1_t7615 *, int32_t, KeyValuePair_2_t7171 , const MethodInfo*))List_1_Insert_m51258_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51259_gshared (List_1_t7615 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51259(__this, ___collection, method) (( void (*) (List_1_t7615 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51259_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51260_gshared (List_1_t7615 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51260(__this, ___index, ___collection, method) (( void (*) (List_1_t7615 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51260_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51261_gshared (List_1_t7615 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51261(__this, ___index, ___collection, method) (( void (*) (List_1_t7615 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51261_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51262_gshared (List_1_t7615 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51262(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7615 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51262_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
extern "C" bool List_1_Remove_m51263_gshared (List_1_t7615 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define List_1_Remove_m51263(__this, ___item, method) (( bool (*) (List_1_t7615 *, KeyValuePair_2_t7171 , const MethodInfo*))List_1_Remove_m51263_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51264_gshared (List_1_t7615 * __this, Predicate_1_t7622 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51264(__this, ___match, method) (( int32_t (*) (List_1_t7615 *, Predicate_1_t7622 *, const MethodInfo*))List_1_RemoveAll_m51264_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51265_gshared (List_1_t7615 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51265(__this, ___index, method) (( void (*) (List_1_t7615 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51265_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51266_gshared (List_1_t7615 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51266(__this, ___index, ___count, method) (( void (*) (List_1_t7615 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51266_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Reverse()
extern "C" void List_1_Reverse_m51267_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_Reverse_m51267(__this, method) (( void (*) (List_1_t7615 *, const MethodInfo*))List_1_Reverse_m51267_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort()
extern "C" void List_1_Sort_m51268_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_Sort_m51268(__this, method) (( void (*) (List_1_t7615 *, const MethodInfo*))List_1_Sort_m51268_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51269_gshared (List_1_t7615 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51269(__this, ___comparer, method) (( void (*) (List_1_t7615 *, Object_t*, const MethodInfo*))List_1_Sort_m51269_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51270_gshared (List_1_t7615 * __this, Comparison_1_t7625 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51270(__this, ___comparison, method) (( void (*) (List_1_t7615 *, Comparison_1_t7625 *, const MethodInfo*))List_1_Sort_m51270_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7614* List_1_ToArray_m51271_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_ToArray_m51271(__this, method) (( KeyValuePair_2U5BU5D_t7614* (*) (List_1_t7615 *, const MethodInfo*))List_1_ToArray_m51271_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51272_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51272(__this, method) (( void (*) (List_1_t7615 *, const MethodInfo*))List_1_TrimExcess_m51272_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51273_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51273(__this, method) (( int32_t (*) (List_1_t7615 *, const MethodInfo*))List_1_get_Capacity_m51273_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51274_gshared (List_1_t7615 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51274(__this, ___value, method) (( void (*) (List_1_t7615 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51274_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
extern "C" int32_t List_1_get_Count_m51275_gshared (List_1_t7615 * __this, const MethodInfo* method);
#define List_1_get_Count_m51275(__this, method) (( int32_t (*) (List_1_t7615 *, const MethodInfo*))List_1_get_Count_m51275_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7171  List_1_get_Item_m51276_gshared (List_1_t7615 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51276(__this, ___index, method) (( KeyValuePair_2_t7171  (*) (List_1_t7615 *, int32_t, const MethodInfo*))List_1_get_Item_m51276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51277_gshared (List_1_t7615 * __this, int32_t ___index, KeyValuePair_2_t7171  ___value, const MethodInfo* method);
#define List_1_set_Item_m51277(__this, ___index, ___value, method) (( void (*) (List_1_t7615 *, int32_t, KeyValuePair_2_t7171 , const MethodInfo*))List_1_set_Item_m51277_gshared)(__this, ___index, ___value, method)
