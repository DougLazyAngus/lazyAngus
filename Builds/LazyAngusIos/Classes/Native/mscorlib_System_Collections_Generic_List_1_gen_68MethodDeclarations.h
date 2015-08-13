#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct List_1_t5995;
// System.Object
struct Object_t;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
struct Tuple_2_t2366;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerable_1_t9065;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>[]
struct Tuple_2U5BU5D_t5994;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerator_1_t9062;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ICollection_1_t9066;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ReadOnlyCollection_1_t9067;
// System.Predicate`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Predicate_1_t9068;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IComparer_1_t9069;
// System.Comparison`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Comparison_1_t9070;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_110.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30986(__this, method) (( void (*) (List_1_t5995 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30987(__this, ___collection, method) (( void (*) (List_1_t5995 *, Object_t*, const MethodInfo*))List_1__ctor_m7470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Int32)
#define List_1__ctor_m30988(__this, ___capacity, method) (( void (*) (List_1_t5995 *, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(T[],System.Int32)
#define List_1__ctor_m30989(__this, ___data, ___size, method) (( void (*) (List_1_t5995 *, Tuple_2U5BU5D_t5994*, int32_t, const MethodInfo*))List_1__ctor_m21571_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.cctor()
#define List_1__cctor_m30990(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21573_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30991(__this, method) (( Object_t* (*) (List_1_t5995 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30992(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5995 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30993(__this, method) (( Object_t * (*) (List_1_t5995 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30994(__this, ___item, method) (( int32_t (*) (List_1_t5995 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30995(__this, ___item, method) (( bool (*) (List_1_t5995 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30996(__this, ___item, method) (( int32_t (*) (List_1_t5995 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30997(__this, ___index, ___item, method) (( void (*) (List_1_t5995 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30998(__this, ___item, method) (( void (*) (List_1_t5995 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30999(__this, method) (( bool (*) (List_1_t5995 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31000(__this, method) (( bool (*) (List_1_t5995 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31001(__this, method) (( Object_t * (*) (List_1_t5995 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31002(__this, method) (( bool (*) (List_1_t5995 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31003(__this, method) (( bool (*) (List_1_t5995 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31004(__this, ___index, method) (( Object_t * (*) (List_1_t5995 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31005(__this, ___index, ___value, method) (( void (*) (List_1_t5995 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Add(T)
#define List_1_Add_m31006(__this, ___item, method) (( void (*) (List_1_t5995 *, Tuple_2_t2366 *, const MethodInfo*))List_1_Add_m10356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31007(__this, ___newCount, method) (( void (*) (List_1_t5995 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31008(__this, ___idx, ___count, method) (( void (*) (List_1_t5995 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21593_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31009(__this, ___collection, method) (( void (*) (List_1_t5995 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31010(__this, ___enumerable, method) (( void (*) (List_1_t5995 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31011(__this, ___collection, method) (( void (*) (List_1_t5995 *, Object_t*, const MethodInfo*))List_1_AddRange_m21599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AsReadOnly()
#define List_1_AsReadOnly_m31012(__this, method) (( ReadOnlyCollection_1_t9067 * (*) (List_1_t5995 *, const MethodInfo*))List_1_AsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Clear()
#define List_1_Clear_m31013(__this, method) (( void (*) (List_1_t5995 *, const MethodInfo*))List_1_Clear_m10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Contains(T)
#define List_1_Contains_m31014(__this, ___item, method) (( bool (*) (List_1_t5995 *, Tuple_2_t2366 *, const MethodInfo*))List_1_Contains_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31015(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5995 *, Tuple_2U5BU5D_t5994*, int32_t, const MethodInfo*))List_1_CopyTo_m10358_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Find(System.Predicate`1<T>)
#define List_1_Find_m31016(__this, ___match, method) (( Tuple_2_t2366 * (*) (List_1_t5995 *, Predicate_1_t9068 *, const MethodInfo*))List_1_Find_m21606_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31017(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9068 *, const MethodInfo*))List_1_CheckMatch_m21608_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31018(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5995 *, int32_t, int32_t, Predicate_1_t9068 *, const MethodInfo*))List_1_GetIndex_m21610_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetEnumerator()
#define List_1_GetEnumerator_m31019(__this, method) (( Enumerator_t9071  (*) (List_1_t5995 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31020(__this, ___index, ___count, method) (( List_1_t5995 * (*) (List_1_t5995 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21612_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::IndexOf(T)
#define List_1_IndexOf_m31021(__this, ___item, method) (( int32_t (*) (List_1_t5995 *, Tuple_2_t2366 *, const MethodInfo*))List_1_IndexOf_m10361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31022(__this, ___start, ___delta, method) (( void (*) (List_1_t5995 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21615_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31023(__this, ___index, method) (( void (*) (List_1_t5995 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Insert(System.Int32,T)
#define List_1_Insert_m31024(__this, ___index, ___item, method) (( void (*) (List_1_t5995 *, int32_t, Tuple_2_t2366 *, const MethodInfo*))List_1_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31025(__this, ___collection, method) (( void (*) (List_1_t5995 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21620_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31026(__this, ___index, ___collection, method) (( void (*) (List_1_t5995 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31027(__this, ___index, ___collection, method) (( void (*) (List_1_t5995 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21624_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31028(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5995 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21626_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Remove(T)
#define List_1_Remove_m31029(__this, ___item, method) (( bool (*) (List_1_t5995 *, Tuple_2_t2366 *, const MethodInfo*))List_1_Remove_m10359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31030(__this, ___match, method) (( int32_t (*) (List_1_t5995 *, Predicate_1_t9068 *, const MethodInfo*))List_1_RemoveAll_m21629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31031(__this, ___index, method) (( void (*) (List_1_t5995 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31032(__this, ___index, ___count, method) (( void (*) (List_1_t5995 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Reverse()
#define List_1_Reverse_m31033(__this, method) (( void (*) (List_1_t5995 *, const MethodInfo*))List_1_Reverse_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort()
#define List_1_Sort_m31034(__this, method) (( void (*) (List_1_t5995 *, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31035(__this, ___comparer, method) (( void (*) (List_1_t5995 *, Object_t*, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31036(__this, ___comparison, method) (( void (*) (List_1_t5995 *, Comparison_1_t9070 *, const MethodInfo*))List_1_Sort_m21640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::ToArray()
#define List_1_ToArray_m31037(__this, method) (( Tuple_2U5BU5D_t5994* (*) (List_1_t5995 *, const MethodInfo*))List_1_ToArray_m21642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::TrimExcess()
#define List_1_TrimExcess_m31038(__this, method) (( void (*) (List_1_t5995 *, const MethodInfo*))List_1_TrimExcess_m21644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Capacity()
#define List_1_get_Capacity_m31039(__this, method) (( int32_t (*) (List_1_t5995 *, const MethodInfo*))List_1_get_Capacity_m21646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31040(__this, ___value, method) (( void (*) (List_1_t5995 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Count()
#define List_1_get_Count_m31041(__this, method) (( int32_t (*) (List_1_t5995 *, const MethodInfo*))List_1_get_Count_m10340_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Item(System.Int32)
#define List_1_get_Item_m31042(__this, ___index, method) (( Tuple_2_t2366 * (*) (List_1_t5995 *, int32_t, const MethodInfo*))List_1_get_Item_m10363_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Item(System.Int32,T)
#define List_1_set_Item_m31043(__this, ___index, ___value, method) (( void (*) (List_1_t5995 *, int32_t, Tuple_2_t2366 *, const MethodInfo*))List_1_set_Item_m10364_gshared)(__this, ___index, ___value, method)
