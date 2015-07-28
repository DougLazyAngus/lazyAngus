#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct List_1_t5913;
// System.Object
struct Object_t;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
struct Tuple_2_t2307;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerable_1_t8965;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>[]
struct Tuple_2U5BU5D_t5912;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerator_1_t8962;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ICollection_1_t8966;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ReadOnlyCollection_1_t8967;
// System.Predicate`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Predicate_1_t8968;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IComparer_1_t8969;
// System.Comparison`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Comparison_1_t8970;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_107.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30232(__this, method) (( void (*) (List_1_t5913 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30233(__this, ___collection, method) (( void (*) (List_1_t5913 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Int32)
#define List_1__ctor_m30234(__this, ___capacity, method) (( void (*) (List_1_t5913 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(T[],System.Int32)
#define List_1__ctor_m30235(__this, ___data, ___size, method) (( void (*) (List_1_t5913 *, Tuple_2U5BU5D_t5912*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.cctor()
#define List_1__cctor_m30236(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30237(__this, method) (( Object_t* (*) (List_1_t5913 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30238(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5913 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30239(__this, method) (( Object_t * (*) (List_1_t5913 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30240(__this, ___item, method) (( int32_t (*) (List_1_t5913 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30241(__this, ___item, method) (( bool (*) (List_1_t5913 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30242(__this, ___item, method) (( int32_t (*) (List_1_t5913 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30243(__this, ___index, ___item, method) (( void (*) (List_1_t5913 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30244(__this, ___item, method) (( void (*) (List_1_t5913 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30245(__this, method) (( bool (*) (List_1_t5913 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30246(__this, method) (( bool (*) (List_1_t5913 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30247(__this, method) (( Object_t * (*) (List_1_t5913 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30248(__this, method) (( bool (*) (List_1_t5913 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30249(__this, method) (( bool (*) (List_1_t5913 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30250(__this, ___index, method) (( Object_t * (*) (List_1_t5913 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30251(__this, ___index, ___value, method) (( void (*) (List_1_t5913 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Add(T)
#define List_1_Add_m30252(__this, ___item, method) (( void (*) (List_1_t5913 *, Tuple_2_t2307 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30253(__this, ___newCount, method) (( void (*) (List_1_t5913 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30254(__this, ___idx, ___count, method) (( void (*) (List_1_t5913 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30255(__this, ___collection, method) (( void (*) (List_1_t5913 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30256(__this, ___enumerable, method) (( void (*) (List_1_t5913 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30257(__this, ___collection, method) (( void (*) (List_1_t5913 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AsReadOnly()
#define List_1_AsReadOnly_m30258(__this, method) (( ReadOnlyCollection_1_t8967 * (*) (List_1_t5913 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Clear()
#define List_1_Clear_m30259(__this, method) (( void (*) (List_1_t5913 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Contains(T)
#define List_1_Contains_m30260(__this, ___item, method) (( bool (*) (List_1_t5913 *, Tuple_2_t2307 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30261(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5913 *, Tuple_2U5BU5D_t5912*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Find(System.Predicate`1<T>)
#define List_1_Find_m30262(__this, ___match, method) (( Tuple_2_t2307 * (*) (List_1_t5913 *, Predicate_1_t8968 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30263(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8968 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30264(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5913 *, int32_t, int32_t, Predicate_1_t8968 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetEnumerator()
#define List_1_GetEnumerator_m30265(__this, method) (( Enumerator_t8971  (*) (List_1_t5913 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30266(__this, ___index, ___count, method) (( List_1_t5913 * (*) (List_1_t5913 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::IndexOf(T)
#define List_1_IndexOf_m30267(__this, ___item, method) (( int32_t (*) (List_1_t5913 *, Tuple_2_t2307 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30268(__this, ___start, ___delta, method) (( void (*) (List_1_t5913 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30269(__this, ___index, method) (( void (*) (List_1_t5913 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Insert(System.Int32,T)
#define List_1_Insert_m30270(__this, ___index, ___item, method) (( void (*) (List_1_t5913 *, int32_t, Tuple_2_t2307 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30271(__this, ___collection, method) (( void (*) (List_1_t5913 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30272(__this, ___index, ___collection, method) (( void (*) (List_1_t5913 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30273(__this, ___index, ___collection, method) (( void (*) (List_1_t5913 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30274(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5913 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Remove(T)
#define List_1_Remove_m30275(__this, ___item, method) (( bool (*) (List_1_t5913 *, Tuple_2_t2307 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30276(__this, ___match, method) (( int32_t (*) (List_1_t5913 *, Predicate_1_t8968 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30277(__this, ___index, method) (( void (*) (List_1_t5913 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30278(__this, ___index, ___count, method) (( void (*) (List_1_t5913 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Reverse()
#define List_1_Reverse_m30279(__this, method) (( void (*) (List_1_t5913 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort()
#define List_1_Sort_m30280(__this, method) (( void (*) (List_1_t5913 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30281(__this, ___comparer, method) (( void (*) (List_1_t5913 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30282(__this, ___comparison, method) (( void (*) (List_1_t5913 *, Comparison_1_t8970 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::ToArray()
#define List_1_ToArray_m30283(__this, method) (( Tuple_2U5BU5D_t5912* (*) (List_1_t5913 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::TrimExcess()
#define List_1_TrimExcess_m30284(__this, method) (( void (*) (List_1_t5913 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Capacity()
#define List_1_get_Capacity_m30285(__this, method) (( int32_t (*) (List_1_t5913 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30286(__this, ___value, method) (( void (*) (List_1_t5913 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Count()
#define List_1_get_Count_m30287(__this, method) (( int32_t (*) (List_1_t5913 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Item(System.Int32)
#define List_1_get_Item_m30288(__this, ___index, method) (( Tuple_2_t2307 * (*) (List_1_t5913 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Item(System.Int32,T)
#define List_1_set_Item_m30289(__this, ___index, ___value, method) (( void (*) (List_1_t5913 *, int32_t, Tuple_2_t2307 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)
