#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2164;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1430;
// System.Exception[]
struct ExceptionU5BU5D_t8368;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2165;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t9618;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1354;
// System.Predicate`1<System.Exception>
struct Predicate_1_t8369;
// System.Collections.Generic.IComparer`1<System.Exception>
struct IComparer_1_t9619;
// System.Comparison`1<System.Exception>
struct Comparison_1_t8371;
// System.Collections.Generic.List`1/Enumerator<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_99.h"

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7946(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m60026(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
#define List_1__ctor_m60027(__this, ___capacity, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(T[],System.Int32)
#define List_1__ctor_m60028(__this, ___data, ___size, method) (( void (*) (List_1_t2164 *, ExceptionU5BU5D_t8368*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.cctor()
#define List_1__cctor_m60029(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60030(__this, method) (( Object_t* (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m60031(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2164 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Exception>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60032(__this, method) (( Object_t * (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m60033(__this, ___item, method) (( int32_t (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m60034(__this, ___item, method) (( bool (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m60035(__this, ___item, method) (( int32_t (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m60036(__this, ___index, ___item, method) (( void (*) (List_1_t2164 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m60037(__this, ___item, method) (( void (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60038(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60039(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m60040(__this, method) (( Object_t * (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m60041(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m60042(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m60043(__this, ___index, method) (( Object_t * (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m60044(__this, ___index, ___value, method) (( void (*) (List_1_t2164 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
#define List_1_Add_m60045(__this, ___item, method) (( void (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m60046(__this, ___newCount, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m60047(__this, ___idx, ___count, method) (( void (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m60048(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m60049(__this, ___enumerable, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m7947(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Exception>::AsReadOnly()
#define List_1_AsReadOnly_m60050(__this, method) (( ReadOnlyCollection_1_t1354 * (*) (List_1_t2164 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
#define List_1_Clear_m60051(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Contains(T)
#define List_1_Contains_m60052(__this, ___item, method) (( bool (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m60053(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2164 *, ExceptionU5BU5D_t8368*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Exception>::Find(System.Predicate`1<T>)
#define List_1_Find_m60054(__this, ___match, method) (( Exception_t57 * (*) (List_1_t2164 *, Predicate_1_t8369 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m60055(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8369 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m60056(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2164 *, int32_t, int32_t, Predicate_1_t8369 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Exception>::GetEnumerator()
#define List_1_GetEnumerator_m60057(__this, method) (( Enumerator_t8370  (*) (List_1_t2164 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m60058(__this, ___index, ___count, method) (( List_1_t2164 * (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::IndexOf(T)
#define List_1_IndexOf_m60059(__this, ___item, method) (( int32_t (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m60060(__this, ___start, ___delta, method) (( void (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m60061(__this, ___index, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Insert(System.Int32,T)
#define List_1_Insert_m60062(__this, ___index, ___item, method) (( void (*) (List_1_t2164 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m60063(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m60064(__this, ___index, ___collection, method) (( void (*) (List_1_t2164 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m60065(__this, ___index, ___collection, method) (( void (*) (List_1_t2164 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m60066(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2164 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Remove(T)
#define List_1_Remove_m60067(__this, ___item, method) (( bool (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m60068(__this, ___match, method) (( int32_t (*) (List_1_t2164 *, Predicate_1_t8369 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m60069(__this, ___index, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m60070(__this, ___index, ___count, method) (( void (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Reverse()
#define List_1_Reverse_m60071(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort()
#define List_1_Sort_m60072(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m60073(__this, ___comparer, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m60074(__this, ___comparison, method) (( void (*) (List_1_t2164 *, Comparison_1_t8371 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
#define List_1_ToArray_m60075(__this, method) (( ExceptionU5BU5D_t8368* (*) (List_1_t2164 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::TrimExcess()
#define List_1_TrimExcess_m60076(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Capacity()
#define List_1_get_Capacity_m60077(__this, method) (( int32_t (*) (List_1_t2164 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m60078(__this, ___value, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
#define List_1_get_Count_m60079(__this, method) (( int32_t (*) (List_1_t2164 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
#define List_1_get_Item_m60080(__this, ___index, method) (( Exception_t57 * (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Item(System.Int32,T)
#define List_1_set_Item_m60081(__this, ___index, ___value, method) (( void (*) (List_1_t2164 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)
