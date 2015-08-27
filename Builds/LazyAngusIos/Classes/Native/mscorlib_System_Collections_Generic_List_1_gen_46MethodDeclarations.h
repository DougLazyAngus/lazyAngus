#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t1494;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1415;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1343;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2157;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>
struct ICollection_1_t9074;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Threading.Tasks.Task>
struct ReadOnlyCollection_1_t5993;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t5994;
// System.Collections.Generic.IComparer`1<System.Threading.Tasks.Task>
struct IComparer_1_t9075;
// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t5996;
// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30991(__this, method) (( void (*) (List_1_t1494 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30992(__this, ___collection, method) (( void (*) (List_1_t1494 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Int32)
#define List_1__ctor_m30993(__this, ___capacity, method) (( void (*) (List_1_t1494 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(T[],System.Int32)
#define List_1__ctor_m30994(__this, ___data, ___size, method) (( void (*) (List_1_t1494 *, TaskU5BU5D_t1343*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.cctor()
#define List_1__cctor_m30995(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30996(__this, method) (( Object_t* (*) (List_1_t1494 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30997(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1494 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30998(__this, method) (( Object_t * (*) (List_1_t1494 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30999(__this, ___item, method) (( int32_t (*) (List_1_t1494 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31000(__this, ___item, method) (( bool (*) (List_1_t1494 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31001(__this, ___item, method) (( int32_t (*) (List_1_t1494 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31002(__this, ___index, ___item, method) (( void (*) (List_1_t1494 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31003(__this, ___item, method) (( void (*) (List_1_t1494 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31004(__this, method) (( bool (*) (List_1_t1494 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31005(__this, method) (( bool (*) (List_1_t1494 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31006(__this, method) (( Object_t * (*) (List_1_t1494 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31007(__this, method) (( bool (*) (List_1_t1494 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31008(__this, method) (( bool (*) (List_1_t1494 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31009(__this, ___index, method) (( Object_t * (*) (List_1_t1494 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31010(__this, ___index, ___value, method) (( void (*) (List_1_t1494 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
#define List_1_Add_m31011(__this, ___item, method) (( void (*) (List_1_t1494 *, Task_t1211 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31012(__this, ___newCount, method) (( void (*) (List_1_t1494 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31013(__this, ___idx, ___count, method) (( void (*) (List_1_t1494 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31014(__this, ___collection, method) (( void (*) (List_1_t1494 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31015(__this, ___enumerable, method) (( void (*) (List_1_t1494 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31016(__this, ___collection, method) (( void (*) (List_1_t1494 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AsReadOnly()
#define List_1_AsReadOnly_m31017(__this, method) (( ReadOnlyCollection_1_t5993 * (*) (List_1_t1494 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Clear()
#define List_1_Clear_m31018(__this, method) (( void (*) (List_1_t1494 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Contains(T)
#define List_1_Contains_m31019(__this, ___item, method) (( bool (*) (List_1_t1494 *, Task_t1211 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31020(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1494 *, TaskU5BU5D_t1343*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Find(System.Predicate`1<T>)
#define List_1_Find_m31021(__this, ___match, method) (( Task_t1211 * (*) (List_1_t1494 *, Predicate_1_t5994 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31022(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5994 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31023(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1494 *, int32_t, int32_t, Predicate_1_t5994 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetEnumerator()
#define List_1_GetEnumerator_m31024(__this, method) (( Enumerator_t5995  (*) (List_1_t1494 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31025(__this, ___index, ___count, method) (( List_1_t1494 * (*) (List_1_t1494 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::IndexOf(T)
#define List_1_IndexOf_m31026(__this, ___item, method) (( int32_t (*) (List_1_t1494 *, Task_t1211 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31027(__this, ___start, ___delta, method) (( void (*) (List_1_t1494 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31028(__this, ___index, method) (( void (*) (List_1_t1494 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define List_1_Insert_m31029(__this, ___index, ___item, method) (( void (*) (List_1_t1494 *, int32_t, Task_t1211 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31030(__this, ___collection, method) (( void (*) (List_1_t1494 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31031(__this, ___index, ___collection, method) (( void (*) (List_1_t1494 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31032(__this, ___index, ___collection, method) (( void (*) (List_1_t1494 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31033(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1494 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Remove(T)
#define List_1_Remove_m31034(__this, ___item, method) (( bool (*) (List_1_t1494 *, Task_t1211 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31035(__this, ___match, method) (( int32_t (*) (List_1_t1494 *, Predicate_1_t5994 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31036(__this, ___index, method) (( void (*) (List_1_t1494 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31037(__this, ___index, ___count, method) (( void (*) (List_1_t1494 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Reverse()
#define List_1_Reverse_m31038(__this, method) (( void (*) (List_1_t1494 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort()
#define List_1_Sort_m31039(__this, method) (( void (*) (List_1_t1494 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31040(__this, ___comparer, method) (( void (*) (List_1_t1494 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31041(__this, ___comparison, method) (( void (*) (List_1_t1494 *, Comparison_1_t5996 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Threading.Tasks.Task>::ToArray()
#define List_1_ToArray_m31042(__this, method) (( TaskU5BU5D_t1343* (*) (List_1_t1494 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::TrimExcess()
#define List_1_TrimExcess_m31043(__this, method) (( void (*) (List_1_t1494 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Capacity()
#define List_1_get_Capacity_m31044(__this, method) (( int32_t (*) (List_1_t1494 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31045(__this, ___value, method) (( void (*) (List_1_t1494 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Count()
#define List_1_get_Count_m31046(__this, method) (( int32_t (*) (List_1_t1494 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define List_1_get_Item_m31047(__this, ___index, method) (( Task_t1211 * (*) (List_1_t1494 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define List_1_set_Item_m31048(__this, ___index, ___value, method) (( void (*) (List_1_t1494 *, int32_t, Task_t1211 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
