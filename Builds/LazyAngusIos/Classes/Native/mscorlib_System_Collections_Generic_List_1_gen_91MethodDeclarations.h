#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7301;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t9363;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7300;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7192;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t9364;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7303;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7304;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t9365;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7306;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_74.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_90MethodDeclarations.h"
#define List_1__ctor_m47192(__this, method) (( void (*) (List_1_t7301 *, const MethodInfo*))List_1__ctor_m47039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47193(__this, ___collection, method) (( void (*) (List_1_t7301 *, Object_t*, const MethodInfo*))List_1__ctor_m47040_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m47194(__this, ___capacity, method) (( void (*) (List_1_t7301 *, int32_t, const MethodInfo*))List_1__ctor_m47041_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47195(__this, ___data, ___size, method) (( void (*) (List_1_t7301 *, KeyValuePair_2U5BU5D_t7300*, int32_t, const MethodInfo*))List_1__ctor_m47042_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m47196(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47043_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47197(__this, method) (( Object_t* (*) (List_1_t7301 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47198(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7301 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47045_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47199(__this, method) (( Object_t * (*) (List_1_t7301 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47046_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47200(__this, ___item, method) (( int32_t (*) (List_1_t7301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47047_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47201(__this, ___item, method) (( bool (*) (List_1_t7301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47048_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47202(__this, ___item, method) (( int32_t (*) (List_1_t7301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47049_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47203(__this, ___index, ___item, method) (( void (*) (List_1_t7301 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47050_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47204(__this, ___item, method) (( void (*) (List_1_t7301 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47051_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47205(__this, method) (( bool (*) (List_1_t7301 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47052_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47206(__this, method) (( bool (*) (List_1_t7301 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47053_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47207(__this, method) (( Object_t * (*) (List_1_t7301 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47054_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47208(__this, method) (( bool (*) (List_1_t7301 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47055_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47209(__this, method) (( bool (*) (List_1_t7301 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47056_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47210(__this, ___index, method) (( Object_t * (*) (List_1_t7301 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47057_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47211(__this, ___index, ___value, method) (( void (*) (List_1_t7301 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47058_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m47212(__this, ___item, method) (( void (*) (List_1_t7301 *, KeyValuePair_2_t7187 , const MethodInfo*))List_1_Add_m47059_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47213(__this, ___newCount, method) (( void (*) (List_1_t7301 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47060_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47214(__this, ___idx, ___count, method) (( void (*) (List_1_t7301 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47061_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47215(__this, ___collection, method) (( void (*) (List_1_t7301 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47062_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47216(__this, ___enumerable, method) (( void (*) (List_1_t7301 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47063_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47217(__this, ___collection, method) (( void (*) (List_1_t7301 *, Object_t*, const MethodInfo*))List_1_AddRange_m47064_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m47218(__this, method) (( ReadOnlyCollection_1_t7303 * (*) (List_1_t7301 *, const MethodInfo*))List_1_AsReadOnly_m47065_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m47219(__this, method) (( void (*) (List_1_t7301 *, const MethodInfo*))List_1_Clear_m47066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m47220(__this, ___item, method) (( bool (*) (List_1_t7301 *, KeyValuePair_2_t7187 , const MethodInfo*))List_1_Contains_m47067_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47221(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7301 *, KeyValuePair_2U5BU5D_t7300*, int32_t, const MethodInfo*))List_1_CopyTo_m47068_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47222(__this, ___match, method) (( KeyValuePair_2_t7187  (*) (List_1_t7301 *, Predicate_1_t7304 *, const MethodInfo*))List_1_Find_m47069_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47223(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7304 *, const MethodInfo*))List_1_CheckMatch_m47070_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47224(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7301 *, int32_t, int32_t, Predicate_1_t7304 *, const MethodInfo*))List_1_GetIndex_m47071_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m47225(__this, method) (( Enumerator_t7305  (*) (List_1_t7301 *, const MethodInfo*))List_1_GetEnumerator_m47072_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47226(__this, ___index, ___count, method) (( List_1_t7301 * (*) (List_1_t7301 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47073_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m47227(__this, ___item, method) (( int32_t (*) (List_1_t7301 *, KeyValuePair_2_t7187 , const MethodInfo*))List_1_IndexOf_m47074_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47228(__this, ___start, ___delta, method) (( void (*) (List_1_t7301 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47075_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47229(__this, ___index, method) (( void (*) (List_1_t7301 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47076_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m47230(__this, ___index, ___item, method) (( void (*) (List_1_t7301 *, int32_t, KeyValuePair_2_t7187 , const MethodInfo*))List_1_Insert_m47077_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47231(__this, ___collection, method) (( void (*) (List_1_t7301 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47078_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47232(__this, ___index, ___collection, method) (( void (*) (List_1_t7301 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47079_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47233(__this, ___index, ___collection, method) (( void (*) (List_1_t7301 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47080_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47234(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7301 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47081_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m47235(__this, ___item, method) (( bool (*) (List_1_t7301 *, KeyValuePair_2_t7187 , const MethodInfo*))List_1_Remove_m47082_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47236(__this, ___match, method) (( int32_t (*) (List_1_t7301 *, Predicate_1_t7304 *, const MethodInfo*))List_1_RemoveAll_m47083_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47237(__this, ___index, method) (( void (*) (List_1_t7301 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47084_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47238(__this, ___index, ___count, method) (( void (*) (List_1_t7301 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47085_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m47239(__this, method) (( void (*) (List_1_t7301 *, const MethodInfo*))List_1_Reverse_m47086_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m47240(__this, method) (( void (*) (List_1_t7301 *, const MethodInfo*))List_1_Sort_m47087_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47241(__this, ___comparer, method) (( void (*) (List_1_t7301 *, Object_t*, const MethodInfo*))List_1_Sort_m47088_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47242(__this, ___comparison, method) (( void (*) (List_1_t7301 *, Comparison_1_t7306 *, const MethodInfo*))List_1_Sort_m47089_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m47243(__this, method) (( KeyValuePair_2U5BU5D_t7300* (*) (List_1_t7301 *, const MethodInfo*))List_1_ToArray_m47090_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m47244(__this, method) (( void (*) (List_1_t7301 *, const MethodInfo*))List_1_TrimExcess_m47091_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m47245(__this, method) (( int32_t (*) (List_1_t7301 *, const MethodInfo*))List_1_get_Capacity_m47092_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47246(__this, ___value, method) (( void (*) (List_1_t7301 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47093_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m47247(__this, method) (( int32_t (*) (List_1_t7301 *, const MethodInfo*))List_1_get_Count_m47094_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m47248(__this, ___index, method) (( KeyValuePair_2_t7187  (*) (List_1_t7301 *, int32_t, const MethodInfo*))List_1_get_Item_m47095_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47249(__this, ___index, ___value, method) (( void (*) (List_1_t7301 *, int32_t, KeyValuePair_2_t7187 , const MethodInfo*))List_1_set_Item_m47096_gshared)(__this, ___index, ___value, method)
