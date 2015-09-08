#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t7094;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6905;
// System.UInt16[]
struct UInt16U5BU5D_t4385;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6906;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9840;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t7096;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t7101;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9841;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t7105;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_64.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m42330_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1__ctor_m42330(__this, method) (( void (*) (List_1_t7094 *, const MethodInfo*))List_1__ctor_m42330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m42331_gshared (List_1_t7094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m42331(__this, ___collection, method) (( void (*) (List_1_t7094 *, Object_t*, const MethodInfo*))List_1__ctor_m42331_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m42332_gshared (List_1_t7094 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m42332(__this, ___capacity, method) (( void (*) (List_1_t7094 *, int32_t, const MethodInfo*))List_1__ctor_m42332_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m42333_gshared (List_1_t7094 * __this, UInt16U5BU5D_t4385* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m42333(__this, ___data, ___size, method) (( void (*) (List_1_t7094 *, UInt16U5BU5D_t4385*, int32_t, const MethodInfo*))List_1__ctor_m42333_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m42334_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m42334(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m42334_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42335_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42335(__this, method) (( Object_t* (*) (List_1_t7094 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42335_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m42336_gshared (List_1_t7094 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m42336(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7094 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m42336_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m42337_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42337(__this, method) (( Object_t * (*) (List_1_t7094 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m42337_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m42338_gshared (List_1_t7094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m42338(__this, ___item, method) (( int32_t (*) (List_1_t7094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m42338_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m42339_gshared (List_1_t7094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m42339(__this, ___item, method) (( bool (*) (List_1_t7094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m42339_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m42340_gshared (List_1_t7094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m42340(__this, ___item, method) (( int32_t (*) (List_1_t7094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m42340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m42341_gshared (List_1_t7094 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m42341(__this, ___index, ___item, method) (( void (*) (List_1_t7094 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m42341_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m42342_gshared (List_1_t7094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m42342(__this, ___item, method) (( void (*) (List_1_t7094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m42342_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42343_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42343(__this, method) (( bool (*) (List_1_t7094 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m42344_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42344(__this, method) (( bool (*) (List_1_t7094 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m42344_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m42345_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m42345(__this, method) (( Object_t * (*) (List_1_t7094 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m42345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m42346_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m42346(__this, method) (( bool (*) (List_1_t7094 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m42346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m42347_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m42347(__this, method) (( bool (*) (List_1_t7094 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m42347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m42348_gshared (List_1_t7094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m42348(__this, ___index, method) (( Object_t * (*) (List_1_t7094 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m42348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m42349_gshared (List_1_t7094 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m42349(__this, ___index, ___value, method) (( void (*) (List_1_t7094 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m42349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m42350_gshared (List_1_t7094 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m42350(__this, ___item, method) (( void (*) (List_1_t7094 *, uint16_t, const MethodInfo*))List_1_Add_m42350_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m42351_gshared (List_1_t7094 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m42351(__this, ___newCount, method) (( void (*) (List_1_t7094 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m42351_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m42352_gshared (List_1_t7094 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m42352(__this, ___idx, ___count, method) (( void (*) (List_1_t7094 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m42352_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m42353_gshared (List_1_t7094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m42353(__this, ___collection, method) (( void (*) (List_1_t7094 *, Object_t*, const MethodInfo*))List_1_AddCollection_m42353_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m42354_gshared (List_1_t7094 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m42354(__this, ___enumerable, method) (( void (*) (List_1_t7094 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m42354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m42355_gshared (List_1_t7094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m42355(__this, ___collection, method) (( void (*) (List_1_t7094 *, Object_t*, const MethodInfo*))List_1_AddRange_m42355_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7096 * List_1_AsReadOnly_m42356_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m42356(__this, method) (( ReadOnlyCollection_1_t7096 * (*) (List_1_t7094 *, const MethodInfo*))List_1_AsReadOnly_m42356_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m42357_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_Clear_m42357(__this, method) (( void (*) (List_1_t7094 *, const MethodInfo*))List_1_Clear_m42357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m42358_gshared (List_1_t7094 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m42358(__this, ___item, method) (( bool (*) (List_1_t7094 *, uint16_t, const MethodInfo*))List_1_Contains_m42358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m42359_gshared (List_1_t7094 * __this, UInt16U5BU5D_t4385* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m42359(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7094 *, UInt16U5BU5D_t4385*, int32_t, const MethodInfo*))List_1_CopyTo_m42359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m42360_gshared (List_1_t7094 * __this, Predicate_1_t7101 * ___match, const MethodInfo* method);
#define List_1_Find_m42360(__this, ___match, method) (( uint16_t (*) (List_1_t7094 *, Predicate_1_t7101 *, const MethodInfo*))List_1_Find_m42360_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m42361_gshared (Object_t * __this /* static, unused */, Predicate_1_t7101 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m42361(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7101 *, const MethodInfo*))List_1_CheckMatch_m42361_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m42362_gshared (List_1_t7094 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7101 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m42362(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7094 *, int32_t, int32_t, Predicate_1_t7101 *, const MethodInfo*))List_1_GetIndex_m42362_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t7095  List_1_GetEnumerator_m42363_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m42363(__this, method) (( Enumerator_t7095  (*) (List_1_t7094 *, const MethodInfo*))List_1_GetEnumerator_m42363_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7094 * List_1_GetRange_m42364_gshared (List_1_t7094 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m42364(__this, ___index, ___count, method) (( List_1_t7094 * (*) (List_1_t7094 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m42364_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m42365_gshared (List_1_t7094 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m42365(__this, ___item, method) (( int32_t (*) (List_1_t7094 *, uint16_t, const MethodInfo*))List_1_IndexOf_m42365_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m42366_gshared (List_1_t7094 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m42366(__this, ___start, ___delta, method) (( void (*) (List_1_t7094 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m42366_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m42367_gshared (List_1_t7094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m42367(__this, ___index, method) (( void (*) (List_1_t7094 *, int32_t, const MethodInfo*))List_1_CheckIndex_m42367_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m42368_gshared (List_1_t7094 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m42368(__this, ___index, ___item, method) (( void (*) (List_1_t7094 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m42368_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m42369_gshared (List_1_t7094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m42369(__this, ___collection, method) (( void (*) (List_1_t7094 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m42369_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m42370_gshared (List_1_t7094 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m42370(__this, ___index, ___collection, method) (( void (*) (List_1_t7094 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m42370_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m42371_gshared (List_1_t7094 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m42371(__this, ___index, ___collection, method) (( void (*) (List_1_t7094 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m42371_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m42372_gshared (List_1_t7094 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m42372(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7094 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m42372_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m42373_gshared (List_1_t7094 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m42373(__this, ___item, method) (( bool (*) (List_1_t7094 *, uint16_t, const MethodInfo*))List_1_Remove_m42373_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m42374_gshared (List_1_t7094 * __this, Predicate_1_t7101 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m42374(__this, ___match, method) (( int32_t (*) (List_1_t7094 *, Predicate_1_t7101 *, const MethodInfo*))List_1_RemoveAll_m42374_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m42375_gshared (List_1_t7094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m42375(__this, ___index, method) (( void (*) (List_1_t7094 *, int32_t, const MethodInfo*))List_1_RemoveAt_m42375_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m42376_gshared (List_1_t7094 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m42376(__this, ___index, ___count, method) (( void (*) (List_1_t7094 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m42376_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m42377_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_Reverse_m42377(__this, method) (( void (*) (List_1_t7094 *, const MethodInfo*))List_1_Reverse_m42377_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m42378_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_Sort_m42378(__this, method) (( void (*) (List_1_t7094 *, const MethodInfo*))List_1_Sort_m42378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m42379_gshared (List_1_t7094 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m42379(__this, ___comparer, method) (( void (*) (List_1_t7094 *, Object_t*, const MethodInfo*))List_1_Sort_m42379_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m42380_gshared (List_1_t7094 * __this, Comparison_1_t7105 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m42380(__this, ___comparison, method) (( void (*) (List_1_t7094 *, Comparison_1_t7105 *, const MethodInfo*))List_1_Sort_m42380_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4385* List_1_ToArray_m42381_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_ToArray_m42381(__this, method) (( UInt16U5BU5D_t4385* (*) (List_1_t7094 *, const MethodInfo*))List_1_ToArray_m42381_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m42382_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m42382(__this, method) (( void (*) (List_1_t7094 *, const MethodInfo*))List_1_TrimExcess_m42382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m42383_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m42383(__this, method) (( int32_t (*) (List_1_t7094 *, const MethodInfo*))List_1_get_Capacity_m42383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m42384_gshared (List_1_t7094 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m42384(__this, ___value, method) (( void (*) (List_1_t7094 *, int32_t, const MethodInfo*))List_1_set_Capacity_m42384_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m42385_gshared (List_1_t7094 * __this, const MethodInfo* method);
#define List_1_get_Count_m42385(__this, method) (( int32_t (*) (List_1_t7094 *, const MethodInfo*))List_1_get_Count_m42385_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m42386_gshared (List_1_t7094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m42386(__this, ___index, method) (( uint16_t (*) (List_1_t7094 *, int32_t, const MethodInfo*))List_1_get_Item_m42386_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m42387_gshared (List_1_t7094 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m42387(__this, ___index, ___value, method) (( void (*) (List_1_t7094 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m42387_gshared)(__this, ___index, ___value, method)
