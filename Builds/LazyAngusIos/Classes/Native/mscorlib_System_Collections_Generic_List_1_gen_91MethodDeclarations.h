#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7304;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t9366;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7195;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t9367;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7306;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7307;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t9368;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7309;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_74.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_90MethodDeclarations.h"
#define List_1__ctor_m47224(__this, method) (( void (*) (List_1_t7304 *, const MethodInfo*))List_1__ctor_m47071_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47225(__this, ___collection, method) (( void (*) (List_1_t7304 *, Object_t*, const MethodInfo*))List_1__ctor_m47072_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m47226(__this, ___capacity, method) (( void (*) (List_1_t7304 *, int32_t, const MethodInfo*))List_1__ctor_m47073_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47227(__this, ___data, ___size, method) (( void (*) (List_1_t7304 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))List_1__ctor_m47074_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m47228(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47075_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47229(__this, method) (( Object_t* (*) (List_1_t7304 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47076_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47230(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7304 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47077_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47231(__this, method) (( Object_t * (*) (List_1_t7304 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47078_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47232(__this, ___item, method) (( int32_t (*) (List_1_t7304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47079_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47233(__this, ___item, method) (( bool (*) (List_1_t7304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47080_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47234(__this, ___item, method) (( int32_t (*) (List_1_t7304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47081_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47235(__this, ___index, ___item, method) (( void (*) (List_1_t7304 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47082_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47236(__this, ___item, method) (( void (*) (List_1_t7304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47083_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47237(__this, method) (( bool (*) (List_1_t7304 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47238(__this, method) (( bool (*) (List_1_t7304 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47239(__this, method) (( Object_t * (*) (List_1_t7304 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47240(__this, method) (( bool (*) (List_1_t7304 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47087_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47241(__this, method) (( bool (*) (List_1_t7304 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47088_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47242(__this, ___index, method) (( Object_t * (*) (List_1_t7304 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47089_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47243(__this, ___index, ___value, method) (( void (*) (List_1_t7304 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47090_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m47244(__this, ___item, method) (( void (*) (List_1_t7304 *, KeyValuePair_2_t7190 , const MethodInfo*))List_1_Add_m47091_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47245(__this, ___newCount, method) (( void (*) (List_1_t7304 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47092_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47246(__this, ___idx, ___count, method) (( void (*) (List_1_t7304 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47093_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47247(__this, ___collection, method) (( void (*) (List_1_t7304 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47094_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47248(__this, ___enumerable, method) (( void (*) (List_1_t7304 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47095_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47249(__this, ___collection, method) (( void (*) (List_1_t7304 *, Object_t*, const MethodInfo*))List_1_AddRange_m47096_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m47250(__this, method) (( ReadOnlyCollection_1_t7306 * (*) (List_1_t7304 *, const MethodInfo*))List_1_AsReadOnly_m47097_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m47251(__this, method) (( void (*) (List_1_t7304 *, const MethodInfo*))List_1_Clear_m47098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m47252(__this, ___item, method) (( bool (*) (List_1_t7304 *, KeyValuePair_2_t7190 , const MethodInfo*))List_1_Contains_m47099_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47253(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7304 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))List_1_CopyTo_m47100_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47254(__this, ___match, method) (( KeyValuePair_2_t7190  (*) (List_1_t7304 *, Predicate_1_t7307 *, const MethodInfo*))List_1_Find_m47101_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47255(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7307 *, const MethodInfo*))List_1_CheckMatch_m47102_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47256(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7304 *, int32_t, int32_t, Predicate_1_t7307 *, const MethodInfo*))List_1_GetIndex_m47103_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m47257(__this, method) (( Enumerator_t7308  (*) (List_1_t7304 *, const MethodInfo*))List_1_GetEnumerator_m47104_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47258(__this, ___index, ___count, method) (( List_1_t7304 * (*) (List_1_t7304 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47105_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m47259(__this, ___item, method) (( int32_t (*) (List_1_t7304 *, KeyValuePair_2_t7190 , const MethodInfo*))List_1_IndexOf_m47106_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47260(__this, ___start, ___delta, method) (( void (*) (List_1_t7304 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47107_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47261(__this, ___index, method) (( void (*) (List_1_t7304 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m47262(__this, ___index, ___item, method) (( void (*) (List_1_t7304 *, int32_t, KeyValuePair_2_t7190 , const MethodInfo*))List_1_Insert_m47109_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47263(__this, ___collection, method) (( void (*) (List_1_t7304 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47110_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47264(__this, ___index, ___collection, method) (( void (*) (List_1_t7304 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47111_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47265(__this, ___index, ___collection, method) (( void (*) (List_1_t7304 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47112_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47266(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7304 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47113_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m47267(__this, ___item, method) (( bool (*) (List_1_t7304 *, KeyValuePair_2_t7190 , const MethodInfo*))List_1_Remove_m47114_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47268(__this, ___match, method) (( int32_t (*) (List_1_t7304 *, Predicate_1_t7307 *, const MethodInfo*))List_1_RemoveAll_m47115_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47269(__this, ___index, method) (( void (*) (List_1_t7304 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47116_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47270(__this, ___index, ___count, method) (( void (*) (List_1_t7304 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47117_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m47271(__this, method) (( void (*) (List_1_t7304 *, const MethodInfo*))List_1_Reverse_m47118_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m47272(__this, method) (( void (*) (List_1_t7304 *, const MethodInfo*))List_1_Sort_m47119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47273(__this, ___comparer, method) (( void (*) (List_1_t7304 *, Object_t*, const MethodInfo*))List_1_Sort_m47120_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47274(__this, ___comparison, method) (( void (*) (List_1_t7304 *, Comparison_1_t7309 *, const MethodInfo*))List_1_Sort_m47121_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m47275(__this, method) (( KeyValuePair_2U5BU5D_t7303* (*) (List_1_t7304 *, const MethodInfo*))List_1_ToArray_m47122_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m47276(__this, method) (( void (*) (List_1_t7304 *, const MethodInfo*))List_1_TrimExcess_m47123_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m47277(__this, method) (( int32_t (*) (List_1_t7304 *, const MethodInfo*))List_1_get_Capacity_m47124_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47278(__this, ___value, method) (( void (*) (List_1_t7304 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47125_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m47279(__this, method) (( int32_t (*) (List_1_t7304 *, const MethodInfo*))List_1_get_Count_m47126_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m47280(__this, ___index, method) (( KeyValuePair_2_t7190  (*) (List_1_t7304 *, int32_t, const MethodInfo*))List_1_get_Item_m47127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47281(__this, ___index, ___value, method) (( void (*) (List_1_t7304 *, int32_t, KeyValuePair_2_t7190 , const MethodInfo*))List_1_set_Item_m47128_gshared)(__this, ___index, ___value, method)
