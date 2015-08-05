#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t6354;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t6246;
// System.SByte[]
struct SByteU5BU5D_t4716;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6247;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9107;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.SByte>
struct ReadOnlyCollection_1_t6356;
// System.Predicate`1<System.SByte>
struct Predicate_1_t6361;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_t5319;
// System.Comparison`1<System.SByte>
struct Comparison_1_t6365;
// System.Collections.Generic.List`1/Enumerator<System.SByte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55.h"

// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor()
extern "C" void List_1__ctor_m35761_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1__ctor_m35761(__this, method) (( void (*) (List_1_t6354 *, const MethodInfo*))List_1__ctor_m35761_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m35762_gshared (List_1_t6354 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m35762(__this, ___collection, method) (( void (*) (List_1_t6354 *, Object_t*, const MethodInfo*))List_1__ctor_m35762_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m35763_gshared (List_1_t6354 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m35763(__this, ___capacity, method) (( void (*) (List_1_t6354 *, int32_t, const MethodInfo*))List_1__ctor_m35763_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m35764_gshared (List_1_t6354 * __this, SByteU5BU5D_t4716* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m35764(__this, ___data, ___size, method) (( void (*) (List_1_t6354 *, SByteU5BU5D_t4716*, int32_t, const MethodInfo*))List_1__ctor_m35764_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.cctor()
extern "C" void List_1__cctor_m35765_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m35765(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m35765_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35766_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35766(__this, method) (( Object_t* (*) (List_1_t6354 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35766_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m35767_gshared (List_1_t6354 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m35767(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6354 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m35767_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m35768_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35768(__this, method) (( Object_t * (*) (List_1_t6354 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m35768_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m35769_gshared (List_1_t6354 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m35769(__this, ___item, method) (( int32_t (*) (List_1_t6354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m35769_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m35770_gshared (List_1_t6354 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m35770(__this, ___item, method) (( bool (*) (List_1_t6354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m35770_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m35771_gshared (List_1_t6354 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m35771(__this, ___item, method) (( int32_t (*) (List_1_t6354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m35771_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m35772_gshared (List_1_t6354 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m35772(__this, ___index, ___item, method) (( void (*) (List_1_t6354 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m35772_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m35773_gshared (List_1_t6354 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m35773(__this, ___item, method) (( void (*) (List_1_t6354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m35773_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35774_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35774(__this, method) (( bool (*) (List_1_t6354 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m35775_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35775(__this, method) (( bool (*) (List_1_t6354 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m35775_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m35776_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m35776(__this, method) (( Object_t * (*) (List_1_t6354 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m35776_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m35777_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m35777(__this, method) (( bool (*) (List_1_t6354 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m35777_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m35778_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m35778(__this, method) (( bool (*) (List_1_t6354 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m35778_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m35779_gshared (List_1_t6354 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m35779(__this, ___index, method) (( Object_t * (*) (List_1_t6354 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m35779_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m35780_gshared (List_1_t6354 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m35780(__this, ___index, ___value, method) (( void (*) (List_1_t6354 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m35780_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Add(T)
extern "C" void List_1_Add_m35781_gshared (List_1_t6354 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Add_m35781(__this, ___item, method) (( void (*) (List_1_t6354 *, int8_t, const MethodInfo*))List_1_Add_m35781_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m35782_gshared (List_1_t6354 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m35782(__this, ___newCount, method) (( void (*) (List_1_t6354 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m35782_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m35783_gshared (List_1_t6354 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m35783(__this, ___idx, ___count, method) (( void (*) (List_1_t6354 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m35783_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m35784_gshared (List_1_t6354 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m35784(__this, ___collection, method) (( void (*) (List_1_t6354 *, Object_t*, const MethodInfo*))List_1_AddCollection_m35784_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m35785_gshared (List_1_t6354 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m35785(__this, ___enumerable, method) (( void (*) (List_1_t6354 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m35785_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m35786_gshared (List_1_t6354 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m35786(__this, ___collection, method) (( void (*) (List_1_t6354 *, Object_t*, const MethodInfo*))List_1_AddRange_m35786_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.SByte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6356 * List_1_AsReadOnly_m35787_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m35787(__this, method) (( ReadOnlyCollection_1_t6356 * (*) (List_1_t6354 *, const MethodInfo*))List_1_AsReadOnly_m35787_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Clear()
extern "C" void List_1_Clear_m35788_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_Clear_m35788(__this, method) (( void (*) (List_1_t6354 *, const MethodInfo*))List_1_Clear_m35788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Contains(T)
extern "C" bool List_1_Contains_m35789_gshared (List_1_t6354 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Contains_m35789(__this, ___item, method) (( bool (*) (List_1_t6354 *, int8_t, const MethodInfo*))List_1_Contains_m35789_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m35790_gshared (List_1_t6354 * __this, SByteU5BU5D_t4716* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m35790(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6354 *, SByteU5BU5D_t4716*, int32_t, const MethodInfo*))List_1_CopyTo_m35790_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.SByte>::Find(System.Predicate`1<T>)
extern "C" int8_t List_1_Find_m35791_gshared (List_1_t6354 * __this, Predicate_1_t6361 * ___match, const MethodInfo* method);
#define List_1_Find_m35791(__this, ___match, method) (( int8_t (*) (List_1_t6354 *, Predicate_1_t6361 *, const MethodInfo*))List_1_Find_m35791_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m35792_gshared (Object_t * __this /* static, unused */, Predicate_1_t6361 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m35792(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6361 *, const MethodInfo*))List_1_CheckMatch_m35792_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m35793_gshared (List_1_t6354 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6361 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m35793(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6354 *, int32_t, int32_t, Predicate_1_t6361 *, const MethodInfo*))List_1_GetIndex_m35793_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.SByte>::GetEnumerator()
extern "C" Enumerator_t6355  List_1_GetEnumerator_m35794_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m35794(__this, method) (( Enumerator_t6355  (*) (List_1_t6354 *, const MethodInfo*))List_1_GetEnumerator_m35794_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.SByte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6354 * List_1_GetRange_m35795_gshared (List_1_t6354 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m35795(__this, ___index, ___count, method) (( List_1_t6354 * (*) (List_1_t6354 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m35795_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m35796_gshared (List_1_t6354 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m35796(__this, ___item, method) (( int32_t (*) (List_1_t6354 *, int8_t, const MethodInfo*))List_1_IndexOf_m35796_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m35797_gshared (List_1_t6354 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m35797(__this, ___start, ___delta, method) (( void (*) (List_1_t6354 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m35797_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m35798_gshared (List_1_t6354 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m35798(__this, ___index, method) (( void (*) (List_1_t6354 *, int32_t, const MethodInfo*))List_1_CheckIndex_m35798_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m35799_gshared (List_1_t6354 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define List_1_Insert_m35799(__this, ___index, ___item, method) (( void (*) (List_1_t6354 *, int32_t, int8_t, const MethodInfo*))List_1_Insert_m35799_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m35800_gshared (List_1_t6354 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m35800(__this, ___collection, method) (( void (*) (List_1_t6354 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m35800_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m35801_gshared (List_1_t6354 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m35801(__this, ___index, ___collection, method) (( void (*) (List_1_t6354 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m35801_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m35802_gshared (List_1_t6354 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m35802(__this, ___index, ___collection, method) (( void (*) (List_1_t6354 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m35802_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m35803_gshared (List_1_t6354 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m35803(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6354 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m35803_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Remove(T)
extern "C" bool List_1_Remove_m35804_gshared (List_1_t6354 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Remove_m35804(__this, ___item, method) (( bool (*) (List_1_t6354 *, int8_t, const MethodInfo*))List_1_Remove_m35804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m35805_gshared (List_1_t6354 * __this, Predicate_1_t6361 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m35805(__this, ___match, method) (( int32_t (*) (List_1_t6354 *, Predicate_1_t6361 *, const MethodInfo*))List_1_RemoveAll_m35805_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m35806_gshared (List_1_t6354 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m35806(__this, ___index, method) (( void (*) (List_1_t6354 *, int32_t, const MethodInfo*))List_1_RemoveAt_m35806_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m35807_gshared (List_1_t6354 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m35807(__this, ___index, ___count, method) (( void (*) (List_1_t6354 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m35807_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Reverse()
extern "C" void List_1_Reverse_m35808_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_Reverse_m35808(__this, method) (( void (*) (List_1_t6354 *, const MethodInfo*))List_1_Reverse_m35808_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort()
extern "C" void List_1_Sort_m35809_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_Sort_m35809(__this, method) (( void (*) (List_1_t6354 *, const MethodInfo*))List_1_Sort_m35809_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m35810_gshared (List_1_t6354 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m35810(__this, ___comparer, method) (( void (*) (List_1_t6354 *, Object_t*, const MethodInfo*))List_1_Sort_m35810_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m35811_gshared (List_1_t6354 * __this, Comparison_1_t6365 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m35811(__this, ___comparison, method) (( void (*) (List_1_t6354 *, Comparison_1_t6365 *, const MethodInfo*))List_1_Sort_m35811_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.SByte>::ToArray()
extern "C" SByteU5BU5D_t4716* List_1_ToArray_m35812_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_ToArray_m35812(__this, method) (( SByteU5BU5D_t4716* (*) (List_1_t6354 *, const MethodInfo*))List_1_ToArray_m35812_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::TrimExcess()
extern "C" void List_1_TrimExcess_m35813_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m35813(__this, method) (( void (*) (List_1_t6354 *, const MethodInfo*))List_1_TrimExcess_m35813_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m35814_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m35814(__this, method) (( int32_t (*) (List_1_t6354 *, const MethodInfo*))List_1_get_Capacity_m35814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m35815_gshared (List_1_t6354 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m35815(__this, ___value, method) (( void (*) (List_1_t6354 *, int32_t, const MethodInfo*))List_1_set_Capacity_m35815_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Count()
extern "C" int32_t List_1_get_Count_m35816_gshared (List_1_t6354 * __this, const MethodInfo* method);
#define List_1_get_Count_m35816(__this, method) (( int32_t (*) (List_1_t6354 *, const MethodInfo*))List_1_get_Count_m35816_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t List_1_get_Item_m35817_gshared (List_1_t6354 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m35817(__this, ___index, method) (( int8_t (*) (List_1_t6354 *, int32_t, const MethodInfo*))List_1_get_Item_m35817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m35818_gshared (List_1_t6354 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m35818(__this, ___index, ___value, method) (( void (*) (List_1_t6354 *, int32_t, int8_t, const MethodInfo*))List_1_set_Item_m35818_gshared)(__this, ___index, ___value, method)
