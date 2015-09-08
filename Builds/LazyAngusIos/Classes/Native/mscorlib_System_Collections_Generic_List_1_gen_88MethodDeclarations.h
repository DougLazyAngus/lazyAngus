#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t7496;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t9877;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9774;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t9769;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Boolean>
struct ReadOnlyCollection_1_t7497;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t7498;
// System.Collections.Generic.IComparer`1<System.Boolean>
struct IComparer_1_t9878;
// System.Comparison`1<System.Boolean>
struct Comparison_1_t7500;
// System.Collections.Generic.List`1/Enumerator<System.Boolean>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_71.h"

// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
// System.Collections.Generic.List`1<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_gen_78MethodDeclarations.h"
#define List_1__ctor_m47558(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1__ctor_m40340_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47559(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1__ctor_m40341_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
#define List_1__ctor_m47560(__this, ___capacity, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1__ctor_m40342_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(T[],System.Int32)
#define List_1__ctor_m47561(__this, ___data, ___size, method) (( void (*) (List_1_t7496 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1__ctor_m40343_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.cctor()
#define List_1__cctor_m47562(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40344_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47563(__this, method) (( Object_t* (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47564(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7496 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40346_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47565(__this, method) (( Object_t * (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47566(__this, ___item, method) (( int32_t (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47567(__this, ___item, method) (( bool (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40349_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47568(__this, ___item, method) (( int32_t (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40350_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47569(__this, ___index, ___item, method) (( void (*) (List_1_t7496 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40351_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47570(__this, ___item, method) (( void (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40352_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47571(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40353_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47572(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47573(__this, method) (( Object_t * (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47574(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47575(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40357_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47576(__this, ___index, method) (( Object_t * (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40358_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47577(__this, ___index, ___value, method) (( void (*) (List_1_t7496 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40359_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
#define List_1_Add_m47578(__this, ___item, method) (( void (*) (List_1_t7496 *, bool, const MethodInfo*))List_1_Add_m40360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47579(__this, ___newCount, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47580(__this, ___idx, ___count, method) (( void (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40362_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47581(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47582(__this, ___enumerable, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40364_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47583(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_AddRange_m40365_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Boolean>::AsReadOnly()
#define List_1_AsReadOnly_m47584(__this, method) (( ReadOnlyCollection_1_t7497 * (*) (List_1_t7496 *, const MethodInfo*))List_1_AsReadOnly_m40366_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
#define List_1_Clear_m47585(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_Clear_m40367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
#define List_1_Contains_m47586(__this, ___item, method) (( bool (*) (List_1_t7496 *, bool, const MethodInfo*))List_1_Contains_m40368_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47587(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7496 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1_CopyTo_m40369_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Boolean>::Find(System.Predicate`1<T>)
#define List_1_Find_m47588(__this, ___match, method) (( bool (*) (List_1_t7496 *, Predicate_1_t7498 *, const MethodInfo*))List_1_Find_m40370_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47589(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7498 *, const MethodInfo*))List_1_CheckMatch_m40371_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47590(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7496 *, int32_t, int32_t, Predicate_1_t7498 *, const MethodInfo*))List_1_GetIndex_m40372_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
#define List_1_GetEnumerator_m47591(__this, method) (( Enumerator_t7499  (*) (List_1_t7496 *, const MethodInfo*))List_1_GetEnumerator_m40373_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47592(__this, ___index, ___count, method) (( List_1_t7496 * (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40374_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::IndexOf(T)
#define List_1_IndexOf_m47593(__this, ___item, method) (( int32_t (*) (List_1_t7496 *, bool, const MethodInfo*))List_1_IndexOf_m40375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47594(__this, ___start, ___delta, method) (( void (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40376_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47595(__this, ___index, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40377_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Insert(System.Int32,T)
#define List_1_Insert_m47596(__this, ___index, ___item, method) (( void (*) (List_1_t7496 *, int32_t, bool, const MethodInfo*))List_1_Insert_m40378_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47597(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40379_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47598(__this, ___index, ___collection, method) (( void (*) (List_1_t7496 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40380_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47599(__this, ___index, ___collection, method) (( void (*) (List_1_t7496 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47600(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7496 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40382_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Remove(T)
#define List_1_Remove_m47601(__this, ___item, method) (( bool (*) (List_1_t7496 *, bool, const MethodInfo*))List_1_Remove_m40383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47602(__this, ___match, method) (( int32_t (*) (List_1_t7496 *, Predicate_1_t7498 *, const MethodInfo*))List_1_RemoveAll_m40384_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47603(__this, ___index, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40385_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47604(__this, ___index, ___count, method) (( void (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40386_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Reverse()
#define List_1_Reverse_m47605(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_Reverse_m40387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort()
#define List_1_Sort_m47606(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_Sort_m40388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47607(__this, ___comparer, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_Sort_m40389_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47608(__this, ___comparison, method) (( void (*) (List_1_t7496 *, Comparison_1_t7500 *, const MethodInfo*))List_1_Sort_m40390_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
#define List_1_ToArray_m47609(__this, method) (( BooleanU5BU5D_t487* (*) (List_1_t7496 *, const MethodInfo*))List_1_ToArray_m40391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::TrimExcess()
#define List_1_TrimExcess_m47610(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_TrimExcess_m40392_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Capacity()
#define List_1_get_Capacity_m47611(__this, method) (( int32_t (*) (List_1_t7496 *, const MethodInfo*))List_1_get_Capacity_m40393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47612(__this, ___value, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40394_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
#define List_1_get_Count_m47613(__this, method) (( int32_t (*) (List_1_t7496 *, const MethodInfo*))List_1_get_Count_m40395_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
#define List_1_get_Item_m47614(__this, ___index, method) (( bool (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_get_Item_m40396_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,T)
#define List_1_set_Item_m47615(__this, ___index, ___value, method) (( void (*) (List_1_t7496 *, int32_t, bool, const MethodInfo*))List_1_set_Item_m40397_gshared)(__this, ___index, ___value, method)
