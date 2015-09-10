#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct List_1_t6631;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t846;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1440;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1427;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ICollection_1_t845;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6633;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Predicate_1_t6634;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IComparer_1_t9729;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Comparison_1_t6636;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_56.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_74MethodDeclarations.h"
#define List_1__ctor_m36352(__this, method) (( void (*) (List_1_t6631 *, const MethodInfo*))List_1__ctor_m36199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m36353(__this, ___collection, method) (( void (*) (List_1_t6631 *, Object_t*, const MethodInfo*))List_1__ctor_m36200_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m36354(__this, ___capacity, method) (( void (*) (List_1_t6631 *, int32_t, const MethodInfo*))List_1__ctor_m36201_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m36355(__this, ___data, ___size, method) (( void (*) (List_1_t6631 *, KeyValuePair_2U5BU5D_t1440*, int32_t, const MethodInfo*))List_1__ctor_m36202_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m36356(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36203_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36357(__this, method) (( Object_t* (*) (List_1_t6631 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36204_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m36358(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6631 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36205_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36359(__this, method) (( Object_t * (*) (List_1_t6631 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m36360(__this, ___item, method) (( int32_t (*) (List_1_t6631 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36207_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m36361(__this, ___item, method) (( bool (*) (List_1_t6631 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36208_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m36362(__this, ___item, method) (( int32_t (*) (List_1_t6631 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m36363(__this, ___index, ___item, method) (( void (*) (List_1_t6631 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36210_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m36364(__this, ___item, method) (( void (*) (List_1_t6631 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36211_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36365(__this, method) (( bool (*) (List_1_t6631 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36366(__this, method) (( bool (*) (List_1_t6631 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m36367(__this, method) (( Object_t * (*) (List_1_t6631 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m36368(__this, method) (( bool (*) (List_1_t6631 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36215_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m36369(__this, method) (( bool (*) (List_1_t6631 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36216_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m36370(__this, ___index, method) (( Object_t * (*) (List_1_t6631 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36217_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m36371(__this, ___index, ___value, method) (( void (*) (List_1_t6631 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36218_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m36372(__this, ___item, method) (( void (*) (List_1_t6631 *, KeyValuePair_2_t802 , const MethodInfo*))List_1_Add_m36219_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m36373(__this, ___newCount, method) (( void (*) (List_1_t6631 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36220_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m36374(__this, ___idx, ___count, method) (( void (*) (List_1_t6631 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36221_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m36375(__this, ___collection, method) (( void (*) (List_1_t6631 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36222_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m36376(__this, ___enumerable, method) (( void (*) (List_1_t6631 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36223_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m36377(__this, ___collection, method) (( void (*) (List_1_t6631 *, Object_t*, const MethodInfo*))List_1_AddRange_m36224_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m36378(__this, method) (( ReadOnlyCollection_1_t6633 * (*) (List_1_t6631 *, const MethodInfo*))List_1_AsReadOnly_m36225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m36379(__this, method) (( void (*) (List_1_t6631 *, const MethodInfo*))List_1_Clear_m36226_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m36380(__this, ___item, method) (( bool (*) (List_1_t6631 *, KeyValuePair_2_t802 , const MethodInfo*))List_1_Contains_m36227_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m36381(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6631 *, KeyValuePair_2U5BU5D_t1440*, int32_t, const MethodInfo*))List_1_CopyTo_m36228_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m36382(__this, ___match, method) (( KeyValuePair_2_t802  (*) (List_1_t6631 *, Predicate_1_t6634 *, const MethodInfo*))List_1_Find_m36229_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m36383(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6634 *, const MethodInfo*))List_1_CheckMatch_m36230_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m36384(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6631 *, int32_t, int32_t, Predicate_1_t6634 *, const MethodInfo*))List_1_GetIndex_m36231_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m36385(__this, method) (( Enumerator_t6635  (*) (List_1_t6631 *, const MethodInfo*))List_1_GetEnumerator_m36232_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m36386(__this, ___index, ___count, method) (( List_1_t6631 * (*) (List_1_t6631 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36233_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m36387(__this, ___item, method) (( int32_t (*) (List_1_t6631 *, KeyValuePair_2_t802 , const MethodInfo*))List_1_IndexOf_m36234_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m36388(__this, ___start, ___delta, method) (( void (*) (List_1_t6631 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36235_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m36389(__this, ___index, method) (( void (*) (List_1_t6631 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36236_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m36390(__this, ___index, ___item, method) (( void (*) (List_1_t6631 *, int32_t, KeyValuePair_2_t802 , const MethodInfo*))List_1_Insert_m36237_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m36391(__this, ___collection, method) (( void (*) (List_1_t6631 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36238_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m36392(__this, ___index, ___collection, method) (( void (*) (List_1_t6631 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36239_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m36393(__this, ___index, ___collection, method) (( void (*) (List_1_t6631 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36240_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m36394(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6631 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36241_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m36395(__this, ___item, method) (( bool (*) (List_1_t6631 *, KeyValuePair_2_t802 , const MethodInfo*))List_1_Remove_m36242_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m36396(__this, ___match, method) (( int32_t (*) (List_1_t6631 *, Predicate_1_t6634 *, const MethodInfo*))List_1_RemoveAll_m36243_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m36397(__this, ___index, method) (( void (*) (List_1_t6631 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36244_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m36398(__this, ___index, ___count, method) (( void (*) (List_1_t6631 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36245_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m36399(__this, method) (( void (*) (List_1_t6631 *, const MethodInfo*))List_1_Reverse_m36246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m36400(__this, method) (( void (*) (List_1_t6631 *, const MethodInfo*))List_1_Sort_m36247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m36401(__this, ___comparer, method) (( void (*) (List_1_t6631 *, Object_t*, const MethodInfo*))List_1_Sort_m36248_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m36402(__this, ___comparison, method) (( void (*) (List_1_t6631 *, Comparison_1_t6636 *, const MethodInfo*))List_1_Sort_m36249_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m36403(__this, method) (( KeyValuePair_2U5BU5D_t1440* (*) (List_1_t6631 *, const MethodInfo*))List_1_ToArray_m36250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m36404(__this, method) (( void (*) (List_1_t6631 *, const MethodInfo*))List_1_TrimExcess_m36251_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m36405(__this, method) (( int32_t (*) (List_1_t6631 *, const MethodInfo*))List_1_get_Capacity_m36252_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m36406(__this, ___value, method) (( void (*) (List_1_t6631 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36253_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m36407(__this, method) (( int32_t (*) (List_1_t6631 *, const MethodInfo*))List_1_get_Count_m36254_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m36408(__this, ___index, method) (( KeyValuePair_2_t802  (*) (List_1_t6631 *, int32_t, const MethodInfo*))List_1_get_Item_m36255_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m36409(__this, ___index, ___value, method) (( void (*) (List_1_t6631 *, int32_t, KeyValuePair_2_t802 , const MethodInfo*))List_1_set_Item_m36256_gshared)(__this, ___index, ___value, method)
