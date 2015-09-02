#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t6727;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t6387;
// System.UInt64[]
struct UInt64U5BU5D_t4727;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t6388;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9251;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt64>
struct ReadOnlyCollection_1_t6729;
// System.Predicate`1<System.UInt64>
struct Predicate_1_t6734;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_t9252;
// System.Comparison`1<System.UInt64>
struct Comparison_1_t6738;
// System.Collections.Generic.List`1/Enumerator<System.UInt64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
extern "C" void List_1__ctor_m40216_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1__ctor_m40216(__this, method) (( void (*) (List_1_t6727 *, const MethodInfo*))List_1__ctor_m40216_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m40217_gshared (List_1_t6727 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m40217(__this, ___collection, method) (( void (*) (List_1_t6727 *, Object_t*, const MethodInfo*))List_1__ctor_m40217_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m40218_gshared (List_1_t6727 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m40218(__this, ___capacity, method) (( void (*) (List_1_t6727 *, int32_t, const MethodInfo*))List_1__ctor_m40218_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m40219_gshared (List_1_t6727 * __this, UInt64U5BU5D_t4727* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m40219(__this, ___data, ___size, method) (( void (*) (List_1_t6727 *, UInt64U5BU5D_t4727*, int32_t, const MethodInfo*))List_1__ctor_m40219_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.cctor()
extern "C" void List_1__cctor_m40220_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m40220(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40220_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40221_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40221(__this, method) (( Object_t* (*) (List_1_t6727 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40221_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m40222_gshared (List_1_t6727 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m40222(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6727 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40222_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m40223_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40223(__this, method) (( Object_t * (*) (List_1_t6727 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40223_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m40224_gshared (List_1_t6727 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m40224(__this, ___item, method) (( int32_t (*) (List_1_t6727 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40224_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m40225_gshared (List_1_t6727 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m40225(__this, ___item, method) (( bool (*) (List_1_t6727 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40225_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m40226_gshared (List_1_t6727 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m40226(__this, ___item, method) (( int32_t (*) (List_1_t6727 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40226_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m40227_gshared (List_1_t6727 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m40227(__this, ___index, ___item, method) (( void (*) (List_1_t6727 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40227_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m40228_gshared (List_1_t6727 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m40228(__this, ___item, method) (( void (*) (List_1_t6727 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40228_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40229_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40229(__this, method) (( bool (*) (List_1_t6727 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40229_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m40230_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40230(__this, method) (( bool (*) (List_1_t6727 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40230_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m40231_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m40231(__this, method) (( Object_t * (*) (List_1_t6727 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m40232_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m40232(__this, method) (( bool (*) (List_1_t6727 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40232_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m40233_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m40233(__this, method) (( bool (*) (List_1_t6727 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40233_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m40234_gshared (List_1_t6727 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m40234(__this, ___index, method) (( Object_t * (*) (List_1_t6727 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m40235_gshared (List_1_t6727 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m40235(__this, ___index, ___value, method) (( void (*) (List_1_t6727 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40235_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(T)
extern "C" void List_1_Add_m40236_gshared (List_1_t6727 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Add_m40236(__this, ___item, method) (( void (*) (List_1_t6727 *, uint64_t, const MethodInfo*))List_1_Add_m40236_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m40237_gshared (List_1_t6727 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m40237(__this, ___newCount, method) (( void (*) (List_1_t6727 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40237_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m40238_gshared (List_1_t6727 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m40238(__this, ___idx, ___count, method) (( void (*) (List_1_t6727 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40238_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m40239_gshared (List_1_t6727 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m40239(__this, ___collection, method) (( void (*) (List_1_t6727 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40239_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m40240_gshared (List_1_t6727 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m40240(__this, ___enumerable, method) (( void (*) (List_1_t6727 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40240_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m40241_gshared (List_1_t6727 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m40241(__this, ___collection, method) (( void (*) (List_1_t6727 *, Object_t*, const MethodInfo*))List_1_AddRange_m40241_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6729 * List_1_AsReadOnly_m40242_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m40242(__this, method) (( ReadOnlyCollection_1_t6729 * (*) (List_1_t6727 *, const MethodInfo*))List_1_AsReadOnly_m40242_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Clear()
extern "C" void List_1_Clear_m40243_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_Clear_m40243(__this, method) (( void (*) (List_1_t6727 *, const MethodInfo*))List_1_Clear_m40243_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Contains(T)
extern "C" bool List_1_Contains_m40244_gshared (List_1_t6727 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Contains_m40244(__this, ___item, method) (( bool (*) (List_1_t6727 *, uint64_t, const MethodInfo*))List_1_Contains_m40244_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m40245_gshared (List_1_t6727 * __this, UInt64U5BU5D_t4727* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m40245(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6727 *, UInt64U5BU5D_t4727*, int32_t, const MethodInfo*))List_1_CopyTo_m40245_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt64>::Find(System.Predicate`1<T>)
extern "C" uint64_t List_1_Find_m40246_gshared (List_1_t6727 * __this, Predicate_1_t6734 * ___match, const MethodInfo* method);
#define List_1_Find_m40246(__this, ___match, method) (( uint64_t (*) (List_1_t6727 *, Predicate_1_t6734 *, const MethodInfo*))List_1_Find_m40246_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m40247_gshared (Object_t * __this /* static, unused */, Predicate_1_t6734 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m40247(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6734 *, const MethodInfo*))List_1_CheckMatch_m40247_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m40248_gshared (List_1_t6727 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6734 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m40248(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6727 *, int32_t, int32_t, Predicate_1_t6734 *, const MethodInfo*))List_1_GetIndex_m40248_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
extern "C" Enumerator_t6728  List_1_GetEnumerator_m40249_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m40249(__this, method) (( Enumerator_t6728  (*) (List_1_t6727 *, const MethodInfo*))List_1_GetEnumerator_m40249_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6727 * List_1_GetRange_m40250_gshared (List_1_t6727 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m40250(__this, ___index, ___count, method) (( List_1_t6727 * (*) (List_1_t6727 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40250_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m40251_gshared (List_1_t6727 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m40251(__this, ___item, method) (( int32_t (*) (List_1_t6727 *, uint64_t, const MethodInfo*))List_1_IndexOf_m40251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m40252_gshared (List_1_t6727 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m40252(__this, ___start, ___delta, method) (( void (*) (List_1_t6727 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40252_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m40253_gshared (List_1_t6727 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m40253(__this, ___index, method) (( void (*) (List_1_t6727 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40253_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m40254_gshared (List_1_t6727 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define List_1_Insert_m40254(__this, ___index, ___item, method) (( void (*) (List_1_t6727 *, int32_t, uint64_t, const MethodInfo*))List_1_Insert_m40254_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m40255_gshared (List_1_t6727 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m40255(__this, ___collection, method) (( void (*) (List_1_t6727 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40255_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m40256_gshared (List_1_t6727 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m40256(__this, ___index, ___collection, method) (( void (*) (List_1_t6727 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40256_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m40257_gshared (List_1_t6727 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m40257(__this, ___index, ___collection, method) (( void (*) (List_1_t6727 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40257_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m40258_gshared (List_1_t6727 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m40258(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6727 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40258_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Remove(T)
extern "C" bool List_1_Remove_m40259_gshared (List_1_t6727 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Remove_m40259(__this, ___item, method) (( bool (*) (List_1_t6727 *, uint64_t, const MethodInfo*))List_1_Remove_m40259_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m40260_gshared (List_1_t6727 * __this, Predicate_1_t6734 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m40260(__this, ___match, method) (( int32_t (*) (List_1_t6727 *, Predicate_1_t6734 *, const MethodInfo*))List_1_RemoveAll_m40260_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m40261_gshared (List_1_t6727 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m40261(__this, ___index, method) (( void (*) (List_1_t6727 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40261_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m40262_gshared (List_1_t6727 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m40262(__this, ___index, ___count, method) (( void (*) (List_1_t6727 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40262_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Reverse()
extern "C" void List_1_Reverse_m40263_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_Reverse_m40263(__this, method) (( void (*) (List_1_t6727 *, const MethodInfo*))List_1_Reverse_m40263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort()
extern "C" void List_1_Sort_m40264_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_Sort_m40264(__this, method) (( void (*) (List_1_t6727 *, const MethodInfo*))List_1_Sort_m40264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m40265_gshared (List_1_t6727 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m40265(__this, ___comparer, method) (( void (*) (List_1_t6727 *, Object_t*, const MethodInfo*))List_1_Sort_m40265_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m40266_gshared (List_1_t6727 * __this, Comparison_1_t6738 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m40266(__this, ___comparison, method) (( void (*) (List_1_t6727 *, Comparison_1_t6738 *, const MethodInfo*))List_1_Sort_m40266_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt64>::ToArray()
extern "C" UInt64U5BU5D_t4727* List_1_ToArray_m40267_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_ToArray_m40267(__this, method) (( UInt64U5BU5D_t4727* (*) (List_1_t6727 *, const MethodInfo*))List_1_ToArray_m40267_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::TrimExcess()
extern "C" void List_1_TrimExcess_m40268_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m40268(__this, method) (( void (*) (List_1_t6727 *, const MethodInfo*))List_1_TrimExcess_m40268_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m40269_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m40269(__this, method) (( int32_t (*) (List_1_t6727 *, const MethodInfo*))List_1_get_Capacity_m40269_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m40270_gshared (List_1_t6727 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m40270(__this, ___value, method) (( void (*) (List_1_t6727 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40270_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Count()
extern "C" int32_t List_1_get_Count_m40271_gshared (List_1_t6727 * __this, const MethodInfo* method);
#define List_1_get_Count_m40271(__this, method) (( int32_t (*) (List_1_t6727 *, const MethodInfo*))List_1_get_Count_m40271_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt64>::get_Item(System.Int32)
extern "C" uint64_t List_1_get_Item_m40272_gshared (List_1_t6727 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m40272(__this, ___index, method) (( uint64_t (*) (List_1_t6727 *, int32_t, const MethodInfo*))List_1_get_Item_m40272_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m40273_gshared (List_1_t6727 * __this, int32_t ___index, uint64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m40273(__this, ___index, ___value, method) (( void (*) (List_1_t6727 *, int32_t, uint64_t, const MethodInfo*))List_1_set_Item_m40273_gshared)(__this, ___index, ___value, method)
