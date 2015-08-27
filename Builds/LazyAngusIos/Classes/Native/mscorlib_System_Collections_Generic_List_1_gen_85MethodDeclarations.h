#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t6931;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t9252;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9149;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t9144;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Boolean>
struct ReadOnlyCollection_1_t6932;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t6933;
// System.Collections.Generic.IComparer`1<System.Boolean>
struct IComparer_1_t9253;
// System.Comparison`1<System.Boolean>
struct Comparison_1_t6935;
// System.Collections.Generic.List`1/Enumerator<System.Boolean>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_68.h"

// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
// System.Collections.Generic.List`1<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_gen_75MethodDeclarations.h"
#define List_1__ctor_m42963(__this, method) (( void (*) (List_1_t6931 *, const MethodInfo*))List_1__ctor_m35747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m42964(__this, ___collection, method) (( void (*) (List_1_t6931 *, Object_t*, const MethodInfo*))List_1__ctor_m35748_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
#define List_1__ctor_m42965(__this, ___capacity, method) (( void (*) (List_1_t6931 *, int32_t, const MethodInfo*))List_1__ctor_m35749_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(T[],System.Int32)
#define List_1__ctor_m42966(__this, ___data, ___size, method) (( void (*) (List_1_t6931 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1__ctor_m35750_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.cctor()
#define List_1__cctor_m42967(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m35751_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42968(__this, method) (( Object_t* (*) (List_1_t6931 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m42969(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6931 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m35753_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42970(__this, method) (( Object_t * (*) (List_1_t6931 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m35754_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m42971(__this, ___item, method) (( int32_t (*) (List_1_t6931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m35755_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m42972(__this, ___item, method) (( bool (*) (List_1_t6931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m35756_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m42973(__this, ___item, method) (( int32_t (*) (List_1_t6931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m35757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m42974(__this, ___index, ___item, method) (( void (*) (List_1_t6931 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m35758_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m42975(__this, ___item, method) (( void (*) (List_1_t6931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m35759_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42976(__this, method) (( bool (*) (List_1_t6931 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35760_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42977(__this, method) (( bool (*) (List_1_t6931 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m35761_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m42978(__this, method) (( Object_t * (*) (List_1_t6931 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m35762_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m42979(__this, method) (( bool (*) (List_1_t6931 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m35763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m42980(__this, method) (( bool (*) (List_1_t6931 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m35764_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m42981(__this, ___index, method) (( Object_t * (*) (List_1_t6931 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m35765_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m42982(__this, ___index, ___value, method) (( void (*) (List_1_t6931 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m35766_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
#define List_1_Add_m42983(__this, ___item, method) (( void (*) (List_1_t6931 *, bool, const MethodInfo*))List_1_Add_m35767_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m42984(__this, ___newCount, method) (( void (*) (List_1_t6931 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m35768_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m42985(__this, ___idx, ___count, method) (( void (*) (List_1_t6931 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m35769_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m42986(__this, ___collection, method) (( void (*) (List_1_t6931 *, Object_t*, const MethodInfo*))List_1_AddCollection_m35770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m42987(__this, ___enumerable, method) (( void (*) (List_1_t6931 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m35771_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m42988(__this, ___collection, method) (( void (*) (List_1_t6931 *, Object_t*, const MethodInfo*))List_1_AddRange_m35772_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Boolean>::AsReadOnly()
#define List_1_AsReadOnly_m42989(__this, method) (( ReadOnlyCollection_1_t6932 * (*) (List_1_t6931 *, const MethodInfo*))List_1_AsReadOnly_m35773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
#define List_1_Clear_m42990(__this, method) (( void (*) (List_1_t6931 *, const MethodInfo*))List_1_Clear_m35774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
#define List_1_Contains_m42991(__this, ___item, method) (( bool (*) (List_1_t6931 *, bool, const MethodInfo*))List_1_Contains_m35775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m42992(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6931 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1_CopyTo_m35776_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Boolean>::Find(System.Predicate`1<T>)
#define List_1_Find_m42993(__this, ___match, method) (( bool (*) (List_1_t6931 *, Predicate_1_t6933 *, const MethodInfo*))List_1_Find_m35777_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m42994(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6933 *, const MethodInfo*))List_1_CheckMatch_m35778_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m42995(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6931 *, int32_t, int32_t, Predicate_1_t6933 *, const MethodInfo*))List_1_GetIndex_m35779_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
#define List_1_GetEnumerator_m42996(__this, method) (( Enumerator_t6934  (*) (List_1_t6931 *, const MethodInfo*))List_1_GetEnumerator_m35780_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m42997(__this, ___index, ___count, method) (( List_1_t6931 * (*) (List_1_t6931 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m35781_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::IndexOf(T)
#define List_1_IndexOf_m42998(__this, ___item, method) (( int32_t (*) (List_1_t6931 *, bool, const MethodInfo*))List_1_IndexOf_m35782_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m42999(__this, ___start, ___delta, method) (( void (*) (List_1_t6931 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m35783_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m43000(__this, ___index, method) (( void (*) (List_1_t6931 *, int32_t, const MethodInfo*))List_1_CheckIndex_m35784_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Insert(System.Int32,T)
#define List_1_Insert_m43001(__this, ___index, ___item, method) (( void (*) (List_1_t6931 *, int32_t, bool, const MethodInfo*))List_1_Insert_m35785_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m43002(__this, ___collection, method) (( void (*) (List_1_t6931 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m35786_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m43003(__this, ___index, ___collection, method) (( void (*) (List_1_t6931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m35787_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m43004(__this, ___index, ___collection, method) (( void (*) (List_1_t6931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m35788_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m43005(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m35789_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Remove(T)
#define List_1_Remove_m43006(__this, ___item, method) (( bool (*) (List_1_t6931 *, bool, const MethodInfo*))List_1_Remove_m35790_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m43007(__this, ___match, method) (( int32_t (*) (List_1_t6931 *, Predicate_1_t6933 *, const MethodInfo*))List_1_RemoveAll_m35791_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m43008(__this, ___index, method) (( void (*) (List_1_t6931 *, int32_t, const MethodInfo*))List_1_RemoveAt_m35792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m43009(__this, ___index, ___count, method) (( void (*) (List_1_t6931 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m35793_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Reverse()
#define List_1_Reverse_m43010(__this, method) (( void (*) (List_1_t6931 *, const MethodInfo*))List_1_Reverse_m35794_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort()
#define List_1_Sort_m43011(__this, method) (( void (*) (List_1_t6931 *, const MethodInfo*))List_1_Sort_m35795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m43012(__this, ___comparer, method) (( void (*) (List_1_t6931 *, Object_t*, const MethodInfo*))List_1_Sort_m35796_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m43013(__this, ___comparison, method) (( void (*) (List_1_t6931 *, Comparison_1_t6935 *, const MethodInfo*))List_1_Sort_m35797_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
#define List_1_ToArray_m43014(__this, method) (( BooleanU5BU5D_t487* (*) (List_1_t6931 *, const MethodInfo*))List_1_ToArray_m35798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::TrimExcess()
#define List_1_TrimExcess_m43015(__this, method) (( void (*) (List_1_t6931 *, const MethodInfo*))List_1_TrimExcess_m35799_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Capacity()
#define List_1_get_Capacity_m43016(__this, method) (( int32_t (*) (List_1_t6931 *, const MethodInfo*))List_1_get_Capacity_m35800_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m43017(__this, ___value, method) (( void (*) (List_1_t6931 *, int32_t, const MethodInfo*))List_1_set_Capacity_m35801_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
#define List_1_get_Count_m43018(__this, method) (( int32_t (*) (List_1_t6931 *, const MethodInfo*))List_1_get_Count_m35802_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
#define List_1_get_Item_m43019(__this, ___index, method) (( bool (*) (List_1_t6931 *, int32_t, const MethodInfo*))List_1_get_Item_m35803_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,T)
#define List_1_set_Item_m43020(__this, ___index, ___value, method) (( void (*) (List_1_t6931 *, int32_t, bool, const MethodInfo*))List_1_set_Item_m35804_gshared)(__this, ___index, ___value, method)
