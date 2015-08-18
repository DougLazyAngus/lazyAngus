#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t6924;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t9241;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9138;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t9133;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Boolean>
struct ReadOnlyCollection_1_t6925;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t6926;
// System.Collections.Generic.IComparer`1<System.Boolean>
struct IComparer_1_t9242;
// System.Comparison`1<System.Boolean>
struct Comparison_1_t6928;
// System.Collections.Generic.List`1/Enumerator<System.Boolean>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
// System.Collections.Generic.List`1<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_gen_74MethodDeclarations.h"
#define List_1__ctor_m42839(__this, method) (( void (*) (List_1_t6924 *, const MethodInfo*))List_1__ctor_m35623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m42840(__this, ___collection, method) (( void (*) (List_1_t6924 *, Object_t*, const MethodInfo*))List_1__ctor_m35624_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
#define List_1__ctor_m42841(__this, ___capacity, method) (( void (*) (List_1_t6924 *, int32_t, const MethodInfo*))List_1__ctor_m35625_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(T[],System.Int32)
#define List_1__ctor_m42842(__this, ___data, ___size, method) (( void (*) (List_1_t6924 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1__ctor_m35626_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.cctor()
#define List_1__cctor_m42843(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m35627_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42844(__this, method) (( Object_t* (*) (List_1_t6924 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35628_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m42845(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6924 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m35629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42846(__this, method) (( Object_t * (*) (List_1_t6924 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m35630_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m42847(__this, ___item, method) (( int32_t (*) (List_1_t6924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m35631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m42848(__this, ___item, method) (( bool (*) (List_1_t6924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m35632_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m42849(__this, ___item, method) (( int32_t (*) (List_1_t6924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m35633_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m42850(__this, ___index, ___item, method) (( void (*) (List_1_t6924 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m35634_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m42851(__this, ___item, method) (( void (*) (List_1_t6924 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m35635_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42852(__this, method) (( bool (*) (List_1_t6924 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42853(__this, method) (( bool (*) (List_1_t6924 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m35637_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m42854(__this, method) (( Object_t * (*) (List_1_t6924 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m35638_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m42855(__this, method) (( bool (*) (List_1_t6924 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m35639_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m42856(__this, method) (( bool (*) (List_1_t6924 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m35640_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m42857(__this, ___index, method) (( Object_t * (*) (List_1_t6924 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m35641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m42858(__this, ___index, ___value, method) (( void (*) (List_1_t6924 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m35642_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
#define List_1_Add_m42859(__this, ___item, method) (( void (*) (List_1_t6924 *, bool, const MethodInfo*))List_1_Add_m35643_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m42860(__this, ___newCount, method) (( void (*) (List_1_t6924 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m35644_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m42861(__this, ___idx, ___count, method) (( void (*) (List_1_t6924 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m35645_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m42862(__this, ___collection, method) (( void (*) (List_1_t6924 *, Object_t*, const MethodInfo*))List_1_AddCollection_m35646_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m42863(__this, ___enumerable, method) (( void (*) (List_1_t6924 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m35647_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m42864(__this, ___collection, method) (( void (*) (List_1_t6924 *, Object_t*, const MethodInfo*))List_1_AddRange_m35648_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Boolean>::AsReadOnly()
#define List_1_AsReadOnly_m42865(__this, method) (( ReadOnlyCollection_1_t6925 * (*) (List_1_t6924 *, const MethodInfo*))List_1_AsReadOnly_m35649_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
#define List_1_Clear_m42866(__this, method) (( void (*) (List_1_t6924 *, const MethodInfo*))List_1_Clear_m35650_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
#define List_1_Contains_m42867(__this, ___item, method) (( bool (*) (List_1_t6924 *, bool, const MethodInfo*))List_1_Contains_m35651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m42868(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6924 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1_CopyTo_m35652_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Boolean>::Find(System.Predicate`1<T>)
#define List_1_Find_m42869(__this, ___match, method) (( bool (*) (List_1_t6924 *, Predicate_1_t6926 *, const MethodInfo*))List_1_Find_m35653_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m42870(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6926 *, const MethodInfo*))List_1_CheckMatch_m35654_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m42871(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6924 *, int32_t, int32_t, Predicate_1_t6926 *, const MethodInfo*))List_1_GetIndex_m35655_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
#define List_1_GetEnumerator_m42872(__this, method) (( Enumerator_t6927  (*) (List_1_t6924 *, const MethodInfo*))List_1_GetEnumerator_m35656_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m42873(__this, ___index, ___count, method) (( List_1_t6924 * (*) (List_1_t6924 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m35657_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::IndexOf(T)
#define List_1_IndexOf_m42874(__this, ___item, method) (( int32_t (*) (List_1_t6924 *, bool, const MethodInfo*))List_1_IndexOf_m35658_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m42875(__this, ___start, ___delta, method) (( void (*) (List_1_t6924 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m35659_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m42876(__this, ___index, method) (( void (*) (List_1_t6924 *, int32_t, const MethodInfo*))List_1_CheckIndex_m35660_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Insert(System.Int32,T)
#define List_1_Insert_m42877(__this, ___index, ___item, method) (( void (*) (List_1_t6924 *, int32_t, bool, const MethodInfo*))List_1_Insert_m35661_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m42878(__this, ___collection, method) (( void (*) (List_1_t6924 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m35662_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m42879(__this, ___index, ___collection, method) (( void (*) (List_1_t6924 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m35663_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m42880(__this, ___index, ___collection, method) (( void (*) (List_1_t6924 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m35664_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m42881(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6924 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m35665_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Remove(T)
#define List_1_Remove_m42882(__this, ___item, method) (( bool (*) (List_1_t6924 *, bool, const MethodInfo*))List_1_Remove_m35666_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m42883(__this, ___match, method) (( int32_t (*) (List_1_t6924 *, Predicate_1_t6926 *, const MethodInfo*))List_1_RemoveAll_m35667_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m42884(__this, ___index, method) (( void (*) (List_1_t6924 *, int32_t, const MethodInfo*))List_1_RemoveAt_m35668_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m42885(__this, ___index, ___count, method) (( void (*) (List_1_t6924 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m35669_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Reverse()
#define List_1_Reverse_m42886(__this, method) (( void (*) (List_1_t6924 *, const MethodInfo*))List_1_Reverse_m35670_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort()
#define List_1_Sort_m42887(__this, method) (( void (*) (List_1_t6924 *, const MethodInfo*))List_1_Sort_m35671_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m42888(__this, ___comparer, method) (( void (*) (List_1_t6924 *, Object_t*, const MethodInfo*))List_1_Sort_m35672_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m42889(__this, ___comparison, method) (( void (*) (List_1_t6924 *, Comparison_1_t6928 *, const MethodInfo*))List_1_Sort_m35673_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
#define List_1_ToArray_m42890(__this, method) (( BooleanU5BU5D_t487* (*) (List_1_t6924 *, const MethodInfo*))List_1_ToArray_m35674_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::TrimExcess()
#define List_1_TrimExcess_m42891(__this, method) (( void (*) (List_1_t6924 *, const MethodInfo*))List_1_TrimExcess_m35675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Capacity()
#define List_1_get_Capacity_m42892(__this, method) (( int32_t (*) (List_1_t6924 *, const MethodInfo*))List_1_get_Capacity_m35676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m42893(__this, ___value, method) (( void (*) (List_1_t6924 *, int32_t, const MethodInfo*))List_1_set_Capacity_m35677_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
#define List_1_get_Count_m42894(__this, method) (( int32_t (*) (List_1_t6924 *, const MethodInfo*))List_1_get_Count_m35678_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
#define List_1_get_Item_m42895(__this, ___index, method) (( bool (*) (List_1_t6924 *, int32_t, const MethodInfo*))List_1_get_Item_m35679_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,T)
#define List_1_set_Item_m42896(__this, ___index, ___value, method) (( void (*) (List_1_t6924 *, int32_t, bool, const MethodInfo*))List_1_set_Item_m35680_gshared)(__this, ___index, ___value, method)
