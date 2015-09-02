#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t6555;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6366;
// System.UInt16[]
struct UInt16U5BU5D_t4077;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6367;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9247;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t6557;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t6562;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9248;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t6566;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m38057_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1__ctor_m38057(__this, method) (( void (*) (List_1_t6555 *, const MethodInfo*))List_1__ctor_m38057_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m38058_gshared (List_1_t6555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m38058(__this, ___collection, method) (( void (*) (List_1_t6555 *, Object_t*, const MethodInfo*))List_1__ctor_m38058_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m38059_gshared (List_1_t6555 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m38059(__this, ___capacity, method) (( void (*) (List_1_t6555 *, int32_t, const MethodInfo*))List_1__ctor_m38059_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m38060_gshared (List_1_t6555 * __this, UInt16U5BU5D_t4077* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m38060(__this, ___data, ___size, method) (( void (*) (List_1_t6555 *, UInt16U5BU5D_t4077*, int32_t, const MethodInfo*))List_1__ctor_m38060_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m38061_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m38061(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m38061_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38062_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38062(__this, method) (( Object_t* (*) (List_1_t6555 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m38063_gshared (List_1_t6555 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m38063(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6555 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m38063_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m38064_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38064(__this, method) (( Object_t * (*) (List_1_t6555 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m38064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m38065_gshared (List_1_t6555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m38065(__this, ___item, method) (( int32_t (*) (List_1_t6555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m38065_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m38066_gshared (List_1_t6555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m38066(__this, ___item, method) (( bool (*) (List_1_t6555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m38066_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m38067_gshared (List_1_t6555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m38067(__this, ___item, method) (( int32_t (*) (List_1_t6555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m38067_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m38068_gshared (List_1_t6555 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m38068(__this, ___index, ___item, method) (( void (*) (List_1_t6555 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m38068_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m38069_gshared (List_1_t6555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m38069(__this, ___item, method) (( void (*) (List_1_t6555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m38069_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38070_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38070(__this, method) (( bool (*) (List_1_t6555 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m38071_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38071(__this, method) (( bool (*) (List_1_t6555 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m38071_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m38072_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m38072(__this, method) (( Object_t * (*) (List_1_t6555 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m38072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m38073_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m38073(__this, method) (( bool (*) (List_1_t6555 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m38073_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m38074_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m38074(__this, method) (( bool (*) (List_1_t6555 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m38074_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m38075_gshared (List_1_t6555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m38075(__this, ___index, method) (( Object_t * (*) (List_1_t6555 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m38075_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m38076_gshared (List_1_t6555 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m38076(__this, ___index, ___value, method) (( void (*) (List_1_t6555 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m38076_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m38077_gshared (List_1_t6555 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m38077(__this, ___item, method) (( void (*) (List_1_t6555 *, uint16_t, const MethodInfo*))List_1_Add_m38077_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m38078_gshared (List_1_t6555 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m38078(__this, ___newCount, method) (( void (*) (List_1_t6555 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m38078_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m38079_gshared (List_1_t6555 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m38079(__this, ___idx, ___count, method) (( void (*) (List_1_t6555 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m38079_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m38080_gshared (List_1_t6555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m38080(__this, ___collection, method) (( void (*) (List_1_t6555 *, Object_t*, const MethodInfo*))List_1_AddCollection_m38080_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m38081_gshared (List_1_t6555 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m38081(__this, ___enumerable, method) (( void (*) (List_1_t6555 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m38081_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m38082_gshared (List_1_t6555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m38082(__this, ___collection, method) (( void (*) (List_1_t6555 *, Object_t*, const MethodInfo*))List_1_AddRange_m38082_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6557 * List_1_AsReadOnly_m38083_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m38083(__this, method) (( ReadOnlyCollection_1_t6557 * (*) (List_1_t6555 *, const MethodInfo*))List_1_AsReadOnly_m38083_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m38084_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_Clear_m38084(__this, method) (( void (*) (List_1_t6555 *, const MethodInfo*))List_1_Clear_m38084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m38085_gshared (List_1_t6555 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m38085(__this, ___item, method) (( bool (*) (List_1_t6555 *, uint16_t, const MethodInfo*))List_1_Contains_m38085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m38086_gshared (List_1_t6555 * __this, UInt16U5BU5D_t4077* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m38086(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6555 *, UInt16U5BU5D_t4077*, int32_t, const MethodInfo*))List_1_CopyTo_m38086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m38087_gshared (List_1_t6555 * __this, Predicate_1_t6562 * ___match, const MethodInfo* method);
#define List_1_Find_m38087(__this, ___match, method) (( uint16_t (*) (List_1_t6555 *, Predicate_1_t6562 *, const MethodInfo*))List_1_Find_m38087_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m38088_gshared (Object_t * __this /* static, unused */, Predicate_1_t6562 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m38088(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6562 *, const MethodInfo*))List_1_CheckMatch_m38088_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m38089_gshared (List_1_t6555 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6562 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m38089(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6555 *, int32_t, int32_t, Predicate_1_t6562 *, const MethodInfo*))List_1_GetIndex_m38089_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t6556  List_1_GetEnumerator_m38090_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m38090(__this, method) (( Enumerator_t6556  (*) (List_1_t6555 *, const MethodInfo*))List_1_GetEnumerator_m38090_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6555 * List_1_GetRange_m38091_gshared (List_1_t6555 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m38091(__this, ___index, ___count, method) (( List_1_t6555 * (*) (List_1_t6555 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m38091_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m38092_gshared (List_1_t6555 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m38092(__this, ___item, method) (( int32_t (*) (List_1_t6555 *, uint16_t, const MethodInfo*))List_1_IndexOf_m38092_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m38093_gshared (List_1_t6555 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m38093(__this, ___start, ___delta, method) (( void (*) (List_1_t6555 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m38093_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m38094_gshared (List_1_t6555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m38094(__this, ___index, method) (( void (*) (List_1_t6555 *, int32_t, const MethodInfo*))List_1_CheckIndex_m38094_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m38095_gshared (List_1_t6555 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m38095(__this, ___index, ___item, method) (( void (*) (List_1_t6555 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m38095_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m38096_gshared (List_1_t6555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m38096(__this, ___collection, method) (( void (*) (List_1_t6555 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m38096_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m38097_gshared (List_1_t6555 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m38097(__this, ___index, ___collection, method) (( void (*) (List_1_t6555 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m38097_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m38098_gshared (List_1_t6555 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m38098(__this, ___index, ___collection, method) (( void (*) (List_1_t6555 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m38098_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m38099_gshared (List_1_t6555 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m38099(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6555 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m38099_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m38100_gshared (List_1_t6555 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m38100(__this, ___item, method) (( bool (*) (List_1_t6555 *, uint16_t, const MethodInfo*))List_1_Remove_m38100_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m38101_gshared (List_1_t6555 * __this, Predicate_1_t6562 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m38101(__this, ___match, method) (( int32_t (*) (List_1_t6555 *, Predicate_1_t6562 *, const MethodInfo*))List_1_RemoveAll_m38101_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m38102_gshared (List_1_t6555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m38102(__this, ___index, method) (( void (*) (List_1_t6555 *, int32_t, const MethodInfo*))List_1_RemoveAt_m38102_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m38103_gshared (List_1_t6555 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m38103(__this, ___index, ___count, method) (( void (*) (List_1_t6555 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m38103_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m38104_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_Reverse_m38104(__this, method) (( void (*) (List_1_t6555 *, const MethodInfo*))List_1_Reverse_m38104_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m38105_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_Sort_m38105(__this, method) (( void (*) (List_1_t6555 *, const MethodInfo*))List_1_Sort_m38105_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m38106_gshared (List_1_t6555 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m38106(__this, ___comparer, method) (( void (*) (List_1_t6555 *, Object_t*, const MethodInfo*))List_1_Sort_m38106_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m38107_gshared (List_1_t6555 * __this, Comparison_1_t6566 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m38107(__this, ___comparison, method) (( void (*) (List_1_t6555 *, Comparison_1_t6566 *, const MethodInfo*))List_1_Sort_m38107_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4077* List_1_ToArray_m38108_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_ToArray_m38108(__this, method) (( UInt16U5BU5D_t4077* (*) (List_1_t6555 *, const MethodInfo*))List_1_ToArray_m38108_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m38109_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m38109(__this, method) (( void (*) (List_1_t6555 *, const MethodInfo*))List_1_TrimExcess_m38109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m38110_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m38110(__this, method) (( int32_t (*) (List_1_t6555 *, const MethodInfo*))List_1_get_Capacity_m38110_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m38111_gshared (List_1_t6555 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m38111(__this, ___value, method) (( void (*) (List_1_t6555 *, int32_t, const MethodInfo*))List_1_set_Capacity_m38111_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m38112_gshared (List_1_t6555 * __this, const MethodInfo* method);
#define List_1_get_Count_m38112(__this, method) (( int32_t (*) (List_1_t6555 *, const MethodInfo*))List_1_get_Count_m38112_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m38113_gshared (List_1_t6555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m38113(__this, ___index, method) (( uint16_t (*) (List_1_t6555 *, int32_t, const MethodInfo*))List_1_get_Item_m38113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m38114_gshared (List_1_t6555 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m38114(__this, ___index, ___value, method) (( void (*) (List_1_t6555 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m38114_gshared)(__this, ___index, ___value, method)
