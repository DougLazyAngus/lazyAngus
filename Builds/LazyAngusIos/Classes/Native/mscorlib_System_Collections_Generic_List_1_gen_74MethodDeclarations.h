#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t6620;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6619;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6012;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t9727;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t6623;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t6627;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t9728;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t6630;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m36199_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1__ctor_m36199(__this, method) (( void (*) (List_1_t6620 *, const MethodInfo*))List_1__ctor_m36199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36200_gshared (List_1_t6620 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36200(__this, ___collection, method) (( void (*) (List_1_t6620 *, Object_t*, const MethodInfo*))List_1__ctor_m36200_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36201_gshared (List_1_t6620 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36201(__this, ___capacity, method) (( void (*) (List_1_t6620 *, int32_t, const MethodInfo*))List_1__ctor_m36201_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36202_gshared (List_1_t6620 * __this, KeyValuePair_2U5BU5D_t6619* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36202(__this, ___data, ___size, method) (( void (*) (List_1_t6620 *, KeyValuePair_2U5BU5D_t6619*, int32_t, const MethodInfo*))List_1__ctor_m36202_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m36203_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36203(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36203_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36204_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36204(__this, method) (( Object_t* (*) (List_1_t6620 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36204_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36205_gshared (List_1_t6620 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36205(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6620 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36205_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36206_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36206(__this, method) (( Object_t * (*) (List_1_t6620 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36207_gshared (List_1_t6620 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36207(__this, ___item, method) (( int32_t (*) (List_1_t6620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36207_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36208_gshared (List_1_t6620 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36208(__this, ___item, method) (( bool (*) (List_1_t6620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36208_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36209_gshared (List_1_t6620 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36209(__this, ___item, method) (( int32_t (*) (List_1_t6620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36210_gshared (List_1_t6620 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36210(__this, ___index, ___item, method) (( void (*) (List_1_t6620 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36210_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36211_gshared (List_1_t6620 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36211(__this, ___item, method) (( void (*) (List_1_t6620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36211_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36212_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36212(__this, method) (( bool (*) (List_1_t6620 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36213_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36213(__this, method) (( bool (*) (List_1_t6620 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36214_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36214(__this, method) (( Object_t * (*) (List_1_t6620 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36215_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36215(__this, method) (( bool (*) (List_1_t6620 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36215_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36216_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36216(__this, method) (( bool (*) (List_1_t6620 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36216_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36217_gshared (List_1_t6620 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36217(__this, ___index, method) (( Object_t * (*) (List_1_t6620 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36217_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36218_gshared (List_1_t6620 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36218(__this, ___index, ___value, method) (( void (*) (List_1_t6620 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36218_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m36219_gshared (List_1_t6620 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Add_m36219(__this, ___item, method) (( void (*) (List_1_t6620 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Add_m36219_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36220_gshared (List_1_t6620 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36220(__this, ___newCount, method) (( void (*) (List_1_t6620 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36220_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36221_gshared (List_1_t6620 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36221(__this, ___idx, ___count, method) (( void (*) (List_1_t6620 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36221_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36222_gshared (List_1_t6620 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36222(__this, ___collection, method) (( void (*) (List_1_t6620 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36222_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36223_gshared (List_1_t6620 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36223(__this, ___enumerable, method) (( void (*) (List_1_t6620 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36223_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36224_gshared (List_1_t6620 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36224(__this, ___collection, method) (( void (*) (List_1_t6620 *, Object_t*, const MethodInfo*))List_1_AddRange_m36224_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6623 * List_1_AsReadOnly_m36225_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36225(__this, method) (( ReadOnlyCollection_1_t6623 * (*) (List_1_t6620 *, const MethodInfo*))List_1_AsReadOnly_m36225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m36226_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_Clear_m36226(__this, method) (( void (*) (List_1_t6620 *, const MethodInfo*))List_1_Clear_m36226_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m36227_gshared (List_1_t6620 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Contains_m36227(__this, ___item, method) (( bool (*) (List_1_t6620 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Contains_m36227_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36228_gshared (List_1_t6620 * __this, KeyValuePair_2U5BU5D_t6619* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36228(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6620 *, KeyValuePair_2U5BU5D_t6619*, int32_t, const MethodInfo*))List_1_CopyTo_m36228_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t70  List_1_Find_m36229_gshared (List_1_t6620 * __this, Predicate_1_t6627 * ___match, const MethodInfo* method);
#define List_1_Find_m36229(__this, ___match, method) (( KeyValuePair_2_t70  (*) (List_1_t6620 *, Predicate_1_t6627 *, const MethodInfo*))List_1_Find_m36229_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36230_gshared (Object_t * __this /* static, unused */, Predicate_1_t6627 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36230(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6627 *, const MethodInfo*))List_1_CheckMatch_m36230_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36231_gshared (List_1_t6620 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6627 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36231(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6620 *, int32_t, int32_t, Predicate_1_t6627 *, const MethodInfo*))List_1_GetIndex_m36231_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t6621  List_1_GetEnumerator_m36232_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36232(__this, method) (( Enumerator_t6621  (*) (List_1_t6620 *, const MethodInfo*))List_1_GetEnumerator_m36232_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6620 * List_1_GetRange_m36233_gshared (List_1_t6620 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36233(__this, ___index, ___count, method) (( List_1_t6620 * (*) (List_1_t6620 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36233_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36234_gshared (List_1_t6620 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_IndexOf_m36234(__this, ___item, method) (( int32_t (*) (List_1_t6620 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_IndexOf_m36234_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36235_gshared (List_1_t6620 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36235(__this, ___start, ___delta, method) (( void (*) (List_1_t6620 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36235_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36236_gshared (List_1_t6620 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36236(__this, ___index, method) (( void (*) (List_1_t6620 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36236_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36237_gshared (List_1_t6620 * __this, int32_t ___index, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Insert_m36237(__this, ___index, ___item, method) (( void (*) (List_1_t6620 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_Insert_m36237_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36238_gshared (List_1_t6620 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36238(__this, ___collection, method) (( void (*) (List_1_t6620 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36238_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36239_gshared (List_1_t6620 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36239(__this, ___index, ___collection, method) (( void (*) (List_1_t6620 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36239_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36240_gshared (List_1_t6620 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36240(__this, ___index, ___collection, method) (( void (*) (List_1_t6620 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36240_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36241_gshared (List_1_t6620 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36241(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6620 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36241_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m36242_gshared (List_1_t6620 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Remove_m36242(__this, ___item, method) (( bool (*) (List_1_t6620 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Remove_m36242_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36243_gshared (List_1_t6620 * __this, Predicate_1_t6627 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36243(__this, ___match, method) (( int32_t (*) (List_1_t6620 *, Predicate_1_t6627 *, const MethodInfo*))List_1_RemoveAll_m36243_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36244_gshared (List_1_t6620 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36244(__this, ___index, method) (( void (*) (List_1_t6620 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36244_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36245_gshared (List_1_t6620 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36245(__this, ___index, ___count, method) (( void (*) (List_1_t6620 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36245_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m36246_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_Reverse_m36246(__this, method) (( void (*) (List_1_t6620 *, const MethodInfo*))List_1_Reverse_m36246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m36247_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_Sort_m36247(__this, method) (( void (*) (List_1_t6620 *, const MethodInfo*))List_1_Sort_m36247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36248_gshared (List_1_t6620 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36248(__this, ___comparer, method) (( void (*) (List_1_t6620 *, Object_t*, const MethodInfo*))List_1_Sort_m36248_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36249_gshared (List_1_t6620 * __this, Comparison_1_t6630 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36249(__this, ___comparison, method) (( void (*) (List_1_t6620 *, Comparison_1_t6630 *, const MethodInfo*))List_1_Sort_m36249_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t6619* List_1_ToArray_m36250_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_ToArray_m36250(__this, method) (( KeyValuePair_2U5BU5D_t6619* (*) (List_1_t6620 *, const MethodInfo*))List_1_ToArray_m36250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m36251_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36251(__this, method) (( void (*) (List_1_t6620 *, const MethodInfo*))List_1_TrimExcess_m36251_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36252_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36252(__this, method) (( int32_t (*) (List_1_t6620 *, const MethodInfo*))List_1_get_Capacity_m36252_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36253_gshared (List_1_t6620 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36253(__this, ___value, method) (( void (*) (List_1_t6620 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36253_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m36254_gshared (List_1_t6620 * __this, const MethodInfo* method);
#define List_1_get_Count_m36254(__this, method) (( int32_t (*) (List_1_t6620 *, const MethodInfo*))List_1_get_Count_m36254_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t70  List_1_get_Item_m36255_gshared (List_1_t6620 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36255(__this, ___index, method) (( KeyValuePair_2_t70  (*) (List_1_t6620 *, int32_t, const MethodInfo*))List_1_get_Item_m36255_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36256_gshared (List_1_t6620 * __this, int32_t ___index, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define List_1_set_Item_m36256(__this, ___index, ___value, method) (( void (*) (List_1_t6620 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_set_Item_m36256_gshared)(__this, ___index, ___value, method)
