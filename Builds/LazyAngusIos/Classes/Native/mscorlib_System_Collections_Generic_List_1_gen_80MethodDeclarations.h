#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t6654;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6351;
// System.Int64[]
struct Int64U5BU5D_t4873;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6352;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9083;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t6656;
// System.Predicate`1<System.Int64>
struct Predicate_1_t6658;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5368;
// System.Comparison`1<System.Int64>
struct Comparison_1_t6662;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m39312_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1__ctor_m39312(__this, method) (( void (*) (List_1_t6654 *, const MethodInfo*))List_1__ctor_m39312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39313_gshared (List_1_t6654 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39313(__this, ___collection, method) (( void (*) (List_1_t6654 *, Object_t*, const MethodInfo*))List_1__ctor_m39313_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39314_gshared (List_1_t6654 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39314(__this, ___capacity, method) (( void (*) (List_1_t6654 *, int32_t, const MethodInfo*))List_1__ctor_m39314_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39315_gshared (List_1_t6654 * __this, Int64U5BU5D_t4873* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39315(__this, ___data, ___size, method) (( void (*) (List_1_t6654 *, Int64U5BU5D_t4873*, int32_t, const MethodInfo*))List_1__ctor_m39315_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m39316_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39316(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39316_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39317_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39317(__this, method) (( Object_t* (*) (List_1_t6654 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39318_gshared (List_1_t6654 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39318(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6654 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39318_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39319_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39319(__this, method) (( Object_t * (*) (List_1_t6654 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39319_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39320_gshared (List_1_t6654 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39320(__this, ___item, method) (( int32_t (*) (List_1_t6654 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39320_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39321_gshared (List_1_t6654 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39321(__this, ___item, method) (( bool (*) (List_1_t6654 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39321_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39322_gshared (List_1_t6654 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39322(__this, ___item, method) (( int32_t (*) (List_1_t6654 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39322_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39323_gshared (List_1_t6654 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39323(__this, ___index, ___item, method) (( void (*) (List_1_t6654 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39323_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39324_gshared (List_1_t6654 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39324(__this, ___item, method) (( void (*) (List_1_t6654 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39324_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39325_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39325(__this, method) (( bool (*) (List_1_t6654 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39325_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39326_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39326(__this, method) (( bool (*) (List_1_t6654 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39326_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39327_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39327(__this, method) (( Object_t * (*) (List_1_t6654 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39327_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39328_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39328(__this, method) (( bool (*) (List_1_t6654 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39328_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39329_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39329(__this, method) (( bool (*) (List_1_t6654 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39329_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39330_gshared (List_1_t6654 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39330(__this, ___index, method) (( Object_t * (*) (List_1_t6654 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39330_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39331_gshared (List_1_t6654 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39331(__this, ___index, ___value, method) (( void (*) (List_1_t6654 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39331_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m39332_gshared (List_1_t6654 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m39332(__this, ___item, method) (( void (*) (List_1_t6654 *, int64_t, const MethodInfo*))List_1_Add_m39332_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39333_gshared (List_1_t6654 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39333(__this, ___newCount, method) (( void (*) (List_1_t6654 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39333_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39334_gshared (List_1_t6654 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39334(__this, ___idx, ___count, method) (( void (*) (List_1_t6654 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39334_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39335_gshared (List_1_t6654 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39335(__this, ___collection, method) (( void (*) (List_1_t6654 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39335_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39336_gshared (List_1_t6654 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39336(__this, ___enumerable, method) (( void (*) (List_1_t6654 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39336_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39337_gshared (List_1_t6654 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39337(__this, ___collection, method) (( void (*) (List_1_t6654 *, Object_t*, const MethodInfo*))List_1_AddRange_m39337_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6656 * List_1_AsReadOnly_m39338_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39338(__this, method) (( ReadOnlyCollection_1_t6656 * (*) (List_1_t6654 *, const MethodInfo*))List_1_AsReadOnly_m39338_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m39339_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_Clear_m39339(__this, method) (( void (*) (List_1_t6654 *, const MethodInfo*))List_1_Clear_m39339_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m39340_gshared (List_1_t6654 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m39340(__this, ___item, method) (( bool (*) (List_1_t6654 *, int64_t, const MethodInfo*))List_1_Contains_m39340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39341_gshared (List_1_t6654 * __this, Int64U5BU5D_t4873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39341(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6654 *, Int64U5BU5D_t4873*, int32_t, const MethodInfo*))List_1_CopyTo_m39341_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m39342_gshared (List_1_t6654 * __this, Predicate_1_t6658 * ___match, const MethodInfo* method);
#define List_1_Find_m39342(__this, ___match, method) (( int64_t (*) (List_1_t6654 *, Predicate_1_t6658 *, const MethodInfo*))List_1_Find_m39342_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39343_gshared (Object_t * __this /* static, unused */, Predicate_1_t6658 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39343(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6658 *, const MethodInfo*))List_1_CheckMatch_m39343_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39344_gshared (List_1_t6654 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6658 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39344(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6654 *, int32_t, int32_t, Predicate_1_t6658 *, const MethodInfo*))List_1_GetIndex_m39344_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t6655  List_1_GetEnumerator_m39345_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39345(__this, method) (( Enumerator_t6655  (*) (List_1_t6654 *, const MethodInfo*))List_1_GetEnumerator_m39345_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6654 * List_1_GetRange_m39346_gshared (List_1_t6654 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39346(__this, ___index, ___count, method) (( List_1_t6654 * (*) (List_1_t6654 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39346_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39347_gshared (List_1_t6654 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39347(__this, ___item, method) (( int32_t (*) (List_1_t6654 *, int64_t, const MethodInfo*))List_1_IndexOf_m39347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39348_gshared (List_1_t6654 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39348(__this, ___start, ___delta, method) (( void (*) (List_1_t6654 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39348_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39349_gshared (List_1_t6654 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39349(__this, ___index, method) (( void (*) (List_1_t6654 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39349_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39350_gshared (List_1_t6654 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m39350(__this, ___index, ___item, method) (( void (*) (List_1_t6654 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m39350_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39351_gshared (List_1_t6654 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39351(__this, ___collection, method) (( void (*) (List_1_t6654 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39351_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39352_gshared (List_1_t6654 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39352(__this, ___index, ___collection, method) (( void (*) (List_1_t6654 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39352_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39353_gshared (List_1_t6654 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39353(__this, ___index, ___collection, method) (( void (*) (List_1_t6654 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39353_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39354_gshared (List_1_t6654 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39354(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6654 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39354_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m39355_gshared (List_1_t6654 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m39355(__this, ___item, method) (( bool (*) (List_1_t6654 *, int64_t, const MethodInfo*))List_1_Remove_m39355_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39356_gshared (List_1_t6654 * __this, Predicate_1_t6658 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39356(__this, ___match, method) (( int32_t (*) (List_1_t6654 *, Predicate_1_t6658 *, const MethodInfo*))List_1_RemoveAll_m39356_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39357_gshared (List_1_t6654 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39357(__this, ___index, method) (( void (*) (List_1_t6654 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39358_gshared (List_1_t6654 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39358(__this, ___index, ___count, method) (( void (*) (List_1_t6654 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m39359_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_Reverse_m39359(__this, method) (( void (*) (List_1_t6654 *, const MethodInfo*))List_1_Reverse_m39359_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m39360_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_Sort_m39360(__this, method) (( void (*) (List_1_t6654 *, const MethodInfo*))List_1_Sort_m39360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39361_gshared (List_1_t6654 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39361(__this, ___comparer, method) (( void (*) (List_1_t6654 *, Object_t*, const MethodInfo*))List_1_Sort_m39361_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39362_gshared (List_1_t6654 * __this, Comparison_1_t6662 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39362(__this, ___comparison, method) (( void (*) (List_1_t6654 *, Comparison_1_t6662 *, const MethodInfo*))List_1_Sort_m39362_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4873* List_1_ToArray_m39363_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_ToArray_m39363(__this, method) (( Int64U5BU5D_t4873* (*) (List_1_t6654 *, const MethodInfo*))List_1_ToArray_m39363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m39364_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39364(__this, method) (( void (*) (List_1_t6654 *, const MethodInfo*))List_1_TrimExcess_m39364_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39365_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39365(__this, method) (( int32_t (*) (List_1_t6654 *, const MethodInfo*))List_1_get_Capacity_m39365_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39366_gshared (List_1_t6654 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39366(__this, ___value, method) (( void (*) (List_1_t6654 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39366_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m39367_gshared (List_1_t6654 * __this, const MethodInfo* method);
#define List_1_get_Count_m39367(__this, method) (( int32_t (*) (List_1_t6654 *, const MethodInfo*))List_1_get_Count_m39367_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m39368_gshared (List_1_t6654 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39368(__this, ___index, method) (( int64_t (*) (List_1_t6654 *, int32_t, const MethodInfo*))List_1_get_Item_m39368_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39369_gshared (List_1_t6654 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39369(__this, ___index, ___value, method) (( void (*) (List_1_t6654 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m39369_gshared)(__this, ___index, ___value, method)
