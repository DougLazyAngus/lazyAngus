#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct List_1_t6577;
// System.Object
struct Object_t;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
struct Tuple_2_t2394;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerable_1_t9713;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>[]
struct Tuple_2U5BU5D_t6576;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerator_1_t9710;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ICollection_1_t9714;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ReadOnlyCollection_1_t9715;
// System.Predicate`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Predicate_1_t9716;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IComparer_1_t9717;
// System.Comparison`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Comparison_1_t9718;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_114.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m35750(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m35751(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Int32)
#define List_1__ctor_m35752(__this, ___capacity, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(T[],System.Int32)
#define List_1__ctor_m35753(__this, ___data, ___size, method) (( void (*) (List_1_t6577 *, Tuple_2U5BU5D_t6576*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.cctor()
#define List_1__cctor_m35754(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35755(__this, method) (( Object_t* (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m35756(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6577 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35757(__this, method) (( Object_t * (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m35758(__this, ___item, method) (( int32_t (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m35759(__this, ___item, method) (( bool (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m35760(__this, ___item, method) (( int32_t (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m35761(__this, ___index, ___item, method) (( void (*) (List_1_t6577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m35762(__this, ___item, method) (( void (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35763(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35764(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m35765(__this, method) (( Object_t * (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m35766(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m35767(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m35768(__this, ___index, method) (( Object_t * (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m35769(__this, ___index, ___value, method) (( void (*) (List_1_t6577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Add(T)
#define List_1_Add_m35770(__this, ___item, method) (( void (*) (List_1_t6577 *, Tuple_2_t2394 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m35771(__this, ___newCount, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m35772(__this, ___idx, ___count, method) (( void (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m35773(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m35774(__this, ___enumerable, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m35775(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AsReadOnly()
#define List_1_AsReadOnly_m35776(__this, method) (( ReadOnlyCollection_1_t9715 * (*) (List_1_t6577 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Clear()
#define List_1_Clear_m35777(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Contains(T)
#define List_1_Contains_m35778(__this, ___item, method) (( bool (*) (List_1_t6577 *, Tuple_2_t2394 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m35779(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6577 *, Tuple_2U5BU5D_t6576*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Find(System.Predicate`1<T>)
#define List_1_Find_m35780(__this, ___match, method) (( Tuple_2_t2394 * (*) (List_1_t6577 *, Predicate_1_t9716 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m35781(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9716 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m35782(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6577 *, int32_t, int32_t, Predicate_1_t9716 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetEnumerator()
#define List_1_GetEnumerator_m35783(__this, method) (( Enumerator_t9719  (*) (List_1_t6577 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m35784(__this, ___index, ___count, method) (( List_1_t6577 * (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::IndexOf(T)
#define List_1_IndexOf_m35785(__this, ___item, method) (( int32_t (*) (List_1_t6577 *, Tuple_2_t2394 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m35786(__this, ___start, ___delta, method) (( void (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m35787(__this, ___index, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Insert(System.Int32,T)
#define List_1_Insert_m35788(__this, ___index, ___item, method) (( void (*) (List_1_t6577 *, int32_t, Tuple_2_t2394 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m35789(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m35790(__this, ___index, ___collection, method) (( void (*) (List_1_t6577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m35791(__this, ___index, ___collection, method) (( void (*) (List_1_t6577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m35792(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Remove(T)
#define List_1_Remove_m35793(__this, ___item, method) (( bool (*) (List_1_t6577 *, Tuple_2_t2394 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m35794(__this, ___match, method) (( int32_t (*) (List_1_t6577 *, Predicate_1_t9716 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m35795(__this, ___index, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m35796(__this, ___index, ___count, method) (( void (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Reverse()
#define List_1_Reverse_m35797(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort()
#define List_1_Sort_m35798(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m35799(__this, ___comparer, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m35800(__this, ___comparison, method) (( void (*) (List_1_t6577 *, Comparison_1_t9718 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::ToArray()
#define List_1_ToArray_m35801(__this, method) (( Tuple_2U5BU5D_t6576* (*) (List_1_t6577 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::TrimExcess()
#define List_1_TrimExcess_m35802(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Capacity()
#define List_1_get_Capacity_m35803(__this, method) (( int32_t (*) (List_1_t6577 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m35804(__this, ___value, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Count()
#define List_1_get_Count_m35805(__this, method) (( int32_t (*) (List_1_t6577 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Item(System.Int32)
#define List_1_get_Item_m35806(__this, ___index, method) (( Tuple_2_t2394 * (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Item(System.Int32,T)
#define List_1_set_Item_m35807(__this, ___index, ___value, method) (( void (*) (List_1_t6577 *, int32_t, Tuple_2_t2394 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)
