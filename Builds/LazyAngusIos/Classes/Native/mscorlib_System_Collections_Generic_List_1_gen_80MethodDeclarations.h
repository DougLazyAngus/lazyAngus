#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t6691;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t6351;
// System.UInt64[]
struct UInt64U5BU5D_t4710;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t6352;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9203;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt64>
struct ReadOnlyCollection_1_t6693;
// System.Predicate`1<System.UInt64>
struct Predicate_1_t6698;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_t9204;
// System.Comparison`1<System.UInt64>
struct Comparison_1_t6702;
// System.Collections.Generic.List`1/Enumerator<System.UInt64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
extern "C" void List_1__ctor_m39760_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1__ctor_m39760(__this, method) (( void (*) (List_1_t6691 *, const MethodInfo*))List_1__ctor_m39760_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39761_gshared (List_1_t6691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39761(__this, ___collection, method) (( void (*) (List_1_t6691 *, Object_t*, const MethodInfo*))List_1__ctor_m39761_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39762_gshared (List_1_t6691 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39762(__this, ___capacity, method) (( void (*) (List_1_t6691 *, int32_t, const MethodInfo*))List_1__ctor_m39762_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39763_gshared (List_1_t6691 * __this, UInt64U5BU5D_t4710* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39763(__this, ___data, ___size, method) (( void (*) (List_1_t6691 *, UInt64U5BU5D_t4710*, int32_t, const MethodInfo*))List_1__ctor_m39763_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.cctor()
extern "C" void List_1__cctor_m39764_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39764(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39764_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39765_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39765(__this, method) (( Object_t* (*) (List_1_t6691 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39765_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39766_gshared (List_1_t6691 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39766(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6691 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39766_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39767_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39767(__this, method) (( Object_t * (*) (List_1_t6691 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39767_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39768_gshared (List_1_t6691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39768(__this, ___item, method) (( int32_t (*) (List_1_t6691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39768_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39769_gshared (List_1_t6691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39769(__this, ___item, method) (( bool (*) (List_1_t6691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39769_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39770_gshared (List_1_t6691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39770(__this, ___item, method) (( int32_t (*) (List_1_t6691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39770_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39771_gshared (List_1_t6691 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39771(__this, ___index, ___item, method) (( void (*) (List_1_t6691 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39771_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39772_gshared (List_1_t6691 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39772(__this, ___item, method) (( void (*) (List_1_t6691 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39772_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39773_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39773(__this, method) (( bool (*) (List_1_t6691 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39773_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39774_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39774(__this, method) (( bool (*) (List_1_t6691 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39774_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39775_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39775(__this, method) (( Object_t * (*) (List_1_t6691 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39775_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39776_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39776(__this, method) (( bool (*) (List_1_t6691 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39776_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39777_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39777(__this, method) (( bool (*) (List_1_t6691 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39777_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39778_gshared (List_1_t6691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39778(__this, ___index, method) (( Object_t * (*) (List_1_t6691 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39778_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39779_gshared (List_1_t6691 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39779(__this, ___index, ___value, method) (( void (*) (List_1_t6691 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39779_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(T)
extern "C" void List_1_Add_m39780_gshared (List_1_t6691 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Add_m39780(__this, ___item, method) (( void (*) (List_1_t6691 *, uint64_t, const MethodInfo*))List_1_Add_m39780_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39781_gshared (List_1_t6691 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39781(__this, ___newCount, method) (( void (*) (List_1_t6691 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39781_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39782_gshared (List_1_t6691 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39782(__this, ___idx, ___count, method) (( void (*) (List_1_t6691 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39782_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39783_gshared (List_1_t6691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39783(__this, ___collection, method) (( void (*) (List_1_t6691 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39783_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39784_gshared (List_1_t6691 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39784(__this, ___enumerable, method) (( void (*) (List_1_t6691 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39784_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39785_gshared (List_1_t6691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39785(__this, ___collection, method) (( void (*) (List_1_t6691 *, Object_t*, const MethodInfo*))List_1_AddRange_m39785_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6693 * List_1_AsReadOnly_m39786_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39786(__this, method) (( ReadOnlyCollection_1_t6693 * (*) (List_1_t6691 *, const MethodInfo*))List_1_AsReadOnly_m39786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Clear()
extern "C" void List_1_Clear_m39787_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_Clear_m39787(__this, method) (( void (*) (List_1_t6691 *, const MethodInfo*))List_1_Clear_m39787_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Contains(T)
extern "C" bool List_1_Contains_m39788_gshared (List_1_t6691 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Contains_m39788(__this, ___item, method) (( bool (*) (List_1_t6691 *, uint64_t, const MethodInfo*))List_1_Contains_m39788_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39789_gshared (List_1_t6691 * __this, UInt64U5BU5D_t4710* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39789(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6691 *, UInt64U5BU5D_t4710*, int32_t, const MethodInfo*))List_1_CopyTo_m39789_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt64>::Find(System.Predicate`1<T>)
extern "C" uint64_t List_1_Find_m39790_gshared (List_1_t6691 * __this, Predicate_1_t6698 * ___match, const MethodInfo* method);
#define List_1_Find_m39790(__this, ___match, method) (( uint64_t (*) (List_1_t6691 *, Predicate_1_t6698 *, const MethodInfo*))List_1_Find_m39790_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39791_gshared (Object_t * __this /* static, unused */, Predicate_1_t6698 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39791(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6698 *, const MethodInfo*))List_1_CheckMatch_m39791_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39792_gshared (List_1_t6691 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6698 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39792(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6691 *, int32_t, int32_t, Predicate_1_t6698 *, const MethodInfo*))List_1_GetIndex_m39792_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
extern "C" Enumerator_t6692  List_1_GetEnumerator_m39793_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39793(__this, method) (( Enumerator_t6692  (*) (List_1_t6691 *, const MethodInfo*))List_1_GetEnumerator_m39793_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6691 * List_1_GetRange_m39794_gshared (List_1_t6691 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39794(__this, ___index, ___count, method) (( List_1_t6691 * (*) (List_1_t6691 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39794_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39795_gshared (List_1_t6691 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39795(__this, ___item, method) (( int32_t (*) (List_1_t6691 *, uint64_t, const MethodInfo*))List_1_IndexOf_m39795_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39796_gshared (List_1_t6691 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39796(__this, ___start, ___delta, method) (( void (*) (List_1_t6691 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39796_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39797_gshared (List_1_t6691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39797(__this, ___index, method) (( void (*) (List_1_t6691 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39797_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39798_gshared (List_1_t6691 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define List_1_Insert_m39798(__this, ___index, ___item, method) (( void (*) (List_1_t6691 *, int32_t, uint64_t, const MethodInfo*))List_1_Insert_m39798_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39799_gshared (List_1_t6691 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39799(__this, ___collection, method) (( void (*) (List_1_t6691 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39799_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39800_gshared (List_1_t6691 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39800(__this, ___index, ___collection, method) (( void (*) (List_1_t6691 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39800_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39801_gshared (List_1_t6691 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39801(__this, ___index, ___collection, method) (( void (*) (List_1_t6691 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39801_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39802_gshared (List_1_t6691 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39802(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6691 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39802_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Remove(T)
extern "C" bool List_1_Remove_m39803_gshared (List_1_t6691 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Remove_m39803(__this, ___item, method) (( bool (*) (List_1_t6691 *, uint64_t, const MethodInfo*))List_1_Remove_m39803_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39804_gshared (List_1_t6691 * __this, Predicate_1_t6698 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39804(__this, ___match, method) (( int32_t (*) (List_1_t6691 *, Predicate_1_t6698 *, const MethodInfo*))List_1_RemoveAll_m39804_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39805_gshared (List_1_t6691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39805(__this, ___index, method) (( void (*) (List_1_t6691 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39805_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39806_gshared (List_1_t6691 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39806(__this, ___index, ___count, method) (( void (*) (List_1_t6691 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39806_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Reverse()
extern "C" void List_1_Reverse_m39807_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_Reverse_m39807(__this, method) (( void (*) (List_1_t6691 *, const MethodInfo*))List_1_Reverse_m39807_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort()
extern "C" void List_1_Sort_m39808_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_Sort_m39808(__this, method) (( void (*) (List_1_t6691 *, const MethodInfo*))List_1_Sort_m39808_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39809_gshared (List_1_t6691 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39809(__this, ___comparer, method) (( void (*) (List_1_t6691 *, Object_t*, const MethodInfo*))List_1_Sort_m39809_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39810_gshared (List_1_t6691 * __this, Comparison_1_t6702 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39810(__this, ___comparison, method) (( void (*) (List_1_t6691 *, Comparison_1_t6702 *, const MethodInfo*))List_1_Sort_m39810_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt64>::ToArray()
extern "C" UInt64U5BU5D_t4710* List_1_ToArray_m39811_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_ToArray_m39811(__this, method) (( UInt64U5BU5D_t4710* (*) (List_1_t6691 *, const MethodInfo*))List_1_ToArray_m39811_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::TrimExcess()
extern "C" void List_1_TrimExcess_m39812_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39812(__this, method) (( void (*) (List_1_t6691 *, const MethodInfo*))List_1_TrimExcess_m39812_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39813_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39813(__this, method) (( int32_t (*) (List_1_t6691 *, const MethodInfo*))List_1_get_Capacity_m39813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39814_gshared (List_1_t6691 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39814(__this, ___value, method) (( void (*) (List_1_t6691 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39814_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Count()
extern "C" int32_t List_1_get_Count_m39815_gshared (List_1_t6691 * __this, const MethodInfo* method);
#define List_1_get_Count_m39815(__this, method) (( int32_t (*) (List_1_t6691 *, const MethodInfo*))List_1_get_Count_m39815_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt64>::get_Item(System.Int32)
extern "C" uint64_t List_1_get_Item_m39816_gshared (List_1_t6691 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39816(__this, ___index, method) (( uint64_t (*) (List_1_t6691 *, int32_t, const MethodInfo*))List_1_get_Item_m39816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39817_gshared (List_1_t6691 * __this, int32_t ___index, uint64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39817(__this, ___index, ___value, method) (( void (*) (List_1_t6691 *, int32_t, uint64_t, const MethodInfo*))List_1_set_Item_m39817_gshared)(__this, ___index, ___value, method)
