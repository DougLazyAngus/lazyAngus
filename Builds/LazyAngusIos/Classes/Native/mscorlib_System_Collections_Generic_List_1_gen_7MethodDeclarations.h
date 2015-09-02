#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GPScore>
struct List_1_t697;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.IEnumerable`1<GPScore>
struct IEnumerable_1_t8841;
// GPScore[]
struct GPScoreU5BU5D_t5564;
// System.Collections.Generic.IEnumerator`1<GPScore>
struct IEnumerator_1_t8842;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8843;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GPScore>
struct ReadOnlyCollection_1_t5566;
// System.Predicate`1<GPScore>
struct Predicate_1_t5567;
// System.Collections.Generic.IComparer`1<GPScore>
struct IComparer_1_t8844;
// System.Comparison`1<GPScore>
struct Comparison_1_t5568;
// System.Collections.Generic.List`1/Enumerator<GPScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<GPScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3971(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24144(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(System.Int32)
#define List_1__ctor_m24145(__this, ___capacity, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m24146(__this, ___data, ___size, method) (( void (*) (List_1_t697 *, GPScoreU5BU5D_t5564*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GPScore>::.cctor()
#define List_1__cctor_m24147(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24148(__this, method) (( Object_t* (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24149(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24150(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24151(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24152(__this, ___item, method) (( bool (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24153(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24154(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24155(__this, ___item, method) (( void (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24156(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24157(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24158(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24159(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24160(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GPScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24161(__this, ___index, method) (( Object_t * (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24162(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Add(T)
#define List_1_Add_m24163(__this, ___item, method) (( void (*) (List_1_t697 *, GPScore_t343 *, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24164(__this, ___newCount, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24165(__this, ___idx, ___count, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24166(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24167(__this, ___enumerable, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GPScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3973(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GPScore>::AsReadOnly()
#define List_1_AsReadOnly_m24168(__this, method) (( ReadOnlyCollection_1_t5566 * (*) (List_1_t697 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Clear()
#define List_1_Clear_m24169(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Contains(T)
#define List_1_Contains_m24170(__this, ___item, method) (( bool (*) (List_1_t697 *, GPScore_t343 *, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24171(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, GPScoreU5BU5D_t5564*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GPScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m24172(__this, ___match, method) (( GPScore_t343 * (*) (List_1_t697 *, Predicate_1_t5567 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24173(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5567 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24174(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t697 *, int32_t, int32_t, Predicate_1_t5567 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GPScore>::GetEnumerator()
#define List_1_GetEnumerator_m3974(__this, method) (( Enumerator_t751  (*) (List_1_t697 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GPScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24175(__this, ___index, ___count, method) (( List_1_t697 * (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::IndexOf(T)
#define List_1_IndexOf_m24176(__this, ___item, method) (( int32_t (*) (List_1_t697 *, GPScore_t343 *, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24177(__this, ___start, ___delta, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24178(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Insert(System.Int32,T)
#define List_1_Insert_m24179(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GPScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24180(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24181(__this, ___index, ___collection, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24182(__this, ___index, ___collection, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GPScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24183(__this, ___index, ___enumerable, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GPScore>::Remove(T)
#define List_1_Remove_m24184(__this, ___item, method) (( bool (*) (List_1_t697 *, GPScore_t343 *, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24185(__this, ___match, method) (( int32_t (*) (List_1_t697 *, Predicate_1_t5567 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24186(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24187(__this, ___index, ___count, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Reverse()
#define List_1_Reverse_m24188(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort()
#define List_1_Sort_m24189(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24190(__this, ___comparer, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GPScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24191(__this, ___comparison, method) (( void (*) (List_1_t697 *, Comparison_1_t5568 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GPScore>::ToArray()
#define List_1_ToArray_m24192(__this, method) (( GPScoreU5BU5D_t5564* (*) (List_1_t697 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::TrimExcess()
#define List_1_TrimExcess_m24193(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Capacity()
#define List_1_get_Capacity_m24194(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24195(__this, ___value, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GPScore>::get_Count()
#define List_1_get_Count_m24196(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<GPScore>::get_Item(System.Int32)
#define List_1_get_Item_m24197(__this, ___index, method) (( GPScore_t343 * (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GPScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m24198(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, GPScore_t343 *, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)
