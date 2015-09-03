#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t7088;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6899;
// System.UInt16[]
struct UInt16U5BU5D_t4381;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9834;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t7090;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t7095;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9835;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t7099;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_64.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m42305_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1__ctor_m42305(__this, method) (( void (*) (List_1_t7088 *, const MethodInfo*))List_1__ctor_m42305_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m42306_gshared (List_1_t7088 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m42306(__this, ___collection, method) (( void (*) (List_1_t7088 *, Object_t*, const MethodInfo*))List_1__ctor_m42306_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m42307_gshared (List_1_t7088 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m42307(__this, ___capacity, method) (( void (*) (List_1_t7088 *, int32_t, const MethodInfo*))List_1__ctor_m42307_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m42308_gshared (List_1_t7088 * __this, UInt16U5BU5D_t4381* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m42308(__this, ___data, ___size, method) (( void (*) (List_1_t7088 *, UInt16U5BU5D_t4381*, int32_t, const MethodInfo*))List_1__ctor_m42308_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m42309_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m42309(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m42309_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42310_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42310(__this, method) (( Object_t* (*) (List_1_t7088 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m42311_gshared (List_1_t7088 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m42311(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7088 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m42311_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m42312_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42312(__this, method) (( Object_t * (*) (List_1_t7088 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m42312_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m42313_gshared (List_1_t7088 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m42313(__this, ___item, method) (( int32_t (*) (List_1_t7088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m42313_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m42314_gshared (List_1_t7088 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m42314(__this, ___item, method) (( bool (*) (List_1_t7088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m42314_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m42315_gshared (List_1_t7088 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m42315(__this, ___item, method) (( int32_t (*) (List_1_t7088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m42315_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m42316_gshared (List_1_t7088 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m42316(__this, ___index, ___item, method) (( void (*) (List_1_t7088 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m42316_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m42317_gshared (List_1_t7088 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m42317(__this, ___item, method) (( void (*) (List_1_t7088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m42317_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42318_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42318(__this, method) (( bool (*) (List_1_t7088 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42318_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m42319_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42319(__this, method) (( bool (*) (List_1_t7088 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m42319_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m42320_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m42320(__this, method) (( Object_t * (*) (List_1_t7088 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m42320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m42321_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m42321(__this, method) (( bool (*) (List_1_t7088 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m42321_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m42322_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m42322(__this, method) (( bool (*) (List_1_t7088 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m42322_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m42323_gshared (List_1_t7088 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m42323(__this, ___index, method) (( Object_t * (*) (List_1_t7088 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m42323_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m42324_gshared (List_1_t7088 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m42324(__this, ___index, ___value, method) (( void (*) (List_1_t7088 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m42324_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m42325_gshared (List_1_t7088 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m42325(__this, ___item, method) (( void (*) (List_1_t7088 *, uint16_t, const MethodInfo*))List_1_Add_m42325_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m42326_gshared (List_1_t7088 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m42326(__this, ___newCount, method) (( void (*) (List_1_t7088 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m42326_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m42327_gshared (List_1_t7088 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m42327(__this, ___idx, ___count, method) (( void (*) (List_1_t7088 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m42327_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m42328_gshared (List_1_t7088 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m42328(__this, ___collection, method) (( void (*) (List_1_t7088 *, Object_t*, const MethodInfo*))List_1_AddCollection_m42328_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m42329_gshared (List_1_t7088 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m42329(__this, ___enumerable, method) (( void (*) (List_1_t7088 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m42329_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m42330_gshared (List_1_t7088 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m42330(__this, ___collection, method) (( void (*) (List_1_t7088 *, Object_t*, const MethodInfo*))List_1_AddRange_m42330_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7090 * List_1_AsReadOnly_m42331_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m42331(__this, method) (( ReadOnlyCollection_1_t7090 * (*) (List_1_t7088 *, const MethodInfo*))List_1_AsReadOnly_m42331_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m42332_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_Clear_m42332(__this, method) (( void (*) (List_1_t7088 *, const MethodInfo*))List_1_Clear_m42332_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m42333_gshared (List_1_t7088 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m42333(__this, ___item, method) (( bool (*) (List_1_t7088 *, uint16_t, const MethodInfo*))List_1_Contains_m42333_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m42334_gshared (List_1_t7088 * __this, UInt16U5BU5D_t4381* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m42334(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7088 *, UInt16U5BU5D_t4381*, int32_t, const MethodInfo*))List_1_CopyTo_m42334_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m42335_gshared (List_1_t7088 * __this, Predicate_1_t7095 * ___match, const MethodInfo* method);
#define List_1_Find_m42335(__this, ___match, method) (( uint16_t (*) (List_1_t7088 *, Predicate_1_t7095 *, const MethodInfo*))List_1_Find_m42335_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m42336_gshared (Object_t * __this /* static, unused */, Predicate_1_t7095 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m42336(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7095 *, const MethodInfo*))List_1_CheckMatch_m42336_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m42337_gshared (List_1_t7088 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7095 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m42337(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7088 *, int32_t, int32_t, Predicate_1_t7095 *, const MethodInfo*))List_1_GetIndex_m42337_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t7089  List_1_GetEnumerator_m42338_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m42338(__this, method) (( Enumerator_t7089  (*) (List_1_t7088 *, const MethodInfo*))List_1_GetEnumerator_m42338_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7088 * List_1_GetRange_m42339_gshared (List_1_t7088 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m42339(__this, ___index, ___count, method) (( List_1_t7088 * (*) (List_1_t7088 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m42339_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m42340_gshared (List_1_t7088 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m42340(__this, ___item, method) (( int32_t (*) (List_1_t7088 *, uint16_t, const MethodInfo*))List_1_IndexOf_m42340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m42341_gshared (List_1_t7088 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m42341(__this, ___start, ___delta, method) (( void (*) (List_1_t7088 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m42341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m42342_gshared (List_1_t7088 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m42342(__this, ___index, method) (( void (*) (List_1_t7088 *, int32_t, const MethodInfo*))List_1_CheckIndex_m42342_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m42343_gshared (List_1_t7088 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m42343(__this, ___index, ___item, method) (( void (*) (List_1_t7088 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m42343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m42344_gshared (List_1_t7088 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m42344(__this, ___collection, method) (( void (*) (List_1_t7088 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m42344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m42345_gshared (List_1_t7088 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m42345(__this, ___index, ___collection, method) (( void (*) (List_1_t7088 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m42345_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m42346_gshared (List_1_t7088 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m42346(__this, ___index, ___collection, method) (( void (*) (List_1_t7088 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m42346_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m42347_gshared (List_1_t7088 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m42347(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7088 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m42347_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m42348_gshared (List_1_t7088 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m42348(__this, ___item, method) (( bool (*) (List_1_t7088 *, uint16_t, const MethodInfo*))List_1_Remove_m42348_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m42349_gshared (List_1_t7088 * __this, Predicate_1_t7095 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m42349(__this, ___match, method) (( int32_t (*) (List_1_t7088 *, Predicate_1_t7095 *, const MethodInfo*))List_1_RemoveAll_m42349_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m42350_gshared (List_1_t7088 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m42350(__this, ___index, method) (( void (*) (List_1_t7088 *, int32_t, const MethodInfo*))List_1_RemoveAt_m42350_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m42351_gshared (List_1_t7088 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m42351(__this, ___index, ___count, method) (( void (*) (List_1_t7088 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m42351_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m42352_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_Reverse_m42352(__this, method) (( void (*) (List_1_t7088 *, const MethodInfo*))List_1_Reverse_m42352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m42353_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_Sort_m42353(__this, method) (( void (*) (List_1_t7088 *, const MethodInfo*))List_1_Sort_m42353_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m42354_gshared (List_1_t7088 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m42354(__this, ___comparer, method) (( void (*) (List_1_t7088 *, Object_t*, const MethodInfo*))List_1_Sort_m42354_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m42355_gshared (List_1_t7088 * __this, Comparison_1_t7099 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m42355(__this, ___comparison, method) (( void (*) (List_1_t7088 *, Comparison_1_t7099 *, const MethodInfo*))List_1_Sort_m42355_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4381* List_1_ToArray_m42356_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_ToArray_m42356(__this, method) (( UInt16U5BU5D_t4381* (*) (List_1_t7088 *, const MethodInfo*))List_1_ToArray_m42356_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m42357_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m42357(__this, method) (( void (*) (List_1_t7088 *, const MethodInfo*))List_1_TrimExcess_m42357_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m42358_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m42358(__this, method) (( int32_t (*) (List_1_t7088 *, const MethodInfo*))List_1_get_Capacity_m42358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m42359_gshared (List_1_t7088 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m42359(__this, ___value, method) (( void (*) (List_1_t7088 *, int32_t, const MethodInfo*))List_1_set_Capacity_m42359_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m42360_gshared (List_1_t7088 * __this, const MethodInfo* method);
#define List_1_get_Count_m42360(__this, method) (( int32_t (*) (List_1_t7088 *, const MethodInfo*))List_1_get_Count_m42360_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m42361_gshared (List_1_t7088 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m42361(__this, ___index, method) (( uint16_t (*) (List_1_t7088 *, int32_t, const MethodInfo*))List_1_get_Item_m42361_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m42362_gshared (List_1_t7088 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m42362(__this, ___index, ___value, method) (( void (*) (List_1_t7088 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m42362_gshared)(__this, ___index, ___value, method)
