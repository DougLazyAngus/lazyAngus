#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t7169;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6907;
// System.UInt32[]
struct UInt32U5BU5D_t3116;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6908;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9836;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t7171;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t7176;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9837;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t7180;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m43309_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1__ctor_m43309(__this, method) (( void (*) (List_1_t7169 *, const MethodInfo*))List_1__ctor_m43309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m43310_gshared (List_1_t7169 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m43310(__this, ___collection, method) (( void (*) (List_1_t7169 *, Object_t*, const MethodInfo*))List_1__ctor_m43310_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m43311_gshared (List_1_t7169 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m43311(__this, ___capacity, method) (( void (*) (List_1_t7169 *, int32_t, const MethodInfo*))List_1__ctor_m43311_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m43312_gshared (List_1_t7169 * __this, UInt32U5BU5D_t3116* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m43312(__this, ___data, ___size, method) (( void (*) (List_1_t7169 *, UInt32U5BU5D_t3116*, int32_t, const MethodInfo*))List_1__ctor_m43312_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m43313_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m43313(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m43313_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43314_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43314(__this, method) (( Object_t* (*) (List_1_t7169 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m43315_gshared (List_1_t7169 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m43315(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7169 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m43315_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m43316_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43316(__this, method) (( Object_t * (*) (List_1_t7169 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m43316_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m43317_gshared (List_1_t7169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m43317(__this, ___item, method) (( int32_t (*) (List_1_t7169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m43317_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m43318_gshared (List_1_t7169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m43318(__this, ___item, method) (( bool (*) (List_1_t7169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m43318_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m43319_gshared (List_1_t7169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m43319(__this, ___item, method) (( int32_t (*) (List_1_t7169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m43319_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m43320_gshared (List_1_t7169 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m43320(__this, ___index, ___item, method) (( void (*) (List_1_t7169 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m43320_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m43321_gshared (List_1_t7169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m43321(__this, ___item, method) (( void (*) (List_1_t7169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m43321_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43322_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43322(__this, method) (( bool (*) (List_1_t7169 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43322_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m43323_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43323(__this, method) (( bool (*) (List_1_t7169 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m43323_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m43324_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m43324(__this, method) (( Object_t * (*) (List_1_t7169 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m43324_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m43325_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m43325(__this, method) (( bool (*) (List_1_t7169 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m43325_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m43326_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m43326(__this, method) (( bool (*) (List_1_t7169 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m43326_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m43327_gshared (List_1_t7169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m43327(__this, ___index, method) (( Object_t * (*) (List_1_t7169 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m43327_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m43328_gshared (List_1_t7169 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m43328(__this, ___index, ___value, method) (( void (*) (List_1_t7169 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m43328_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m43329_gshared (List_1_t7169 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m43329(__this, ___item, method) (( void (*) (List_1_t7169 *, uint32_t, const MethodInfo*))List_1_Add_m43329_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m43330_gshared (List_1_t7169 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m43330(__this, ___newCount, method) (( void (*) (List_1_t7169 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m43330_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m43331_gshared (List_1_t7169 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m43331(__this, ___idx, ___count, method) (( void (*) (List_1_t7169 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m43331_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m43332_gshared (List_1_t7169 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m43332(__this, ___collection, method) (( void (*) (List_1_t7169 *, Object_t*, const MethodInfo*))List_1_AddCollection_m43332_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m43333_gshared (List_1_t7169 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m43333(__this, ___enumerable, method) (( void (*) (List_1_t7169 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m43333_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m43334_gshared (List_1_t7169 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m43334(__this, ___collection, method) (( void (*) (List_1_t7169 *, Object_t*, const MethodInfo*))List_1_AddRange_m43334_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7171 * List_1_AsReadOnly_m43335_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m43335(__this, method) (( ReadOnlyCollection_1_t7171 * (*) (List_1_t7169 *, const MethodInfo*))List_1_AsReadOnly_m43335_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m43336_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_Clear_m43336(__this, method) (( void (*) (List_1_t7169 *, const MethodInfo*))List_1_Clear_m43336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m43337_gshared (List_1_t7169 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m43337(__this, ___item, method) (( bool (*) (List_1_t7169 *, uint32_t, const MethodInfo*))List_1_Contains_m43337_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m43338_gshared (List_1_t7169 * __this, UInt32U5BU5D_t3116* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m43338(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7169 *, UInt32U5BU5D_t3116*, int32_t, const MethodInfo*))List_1_CopyTo_m43338_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m43339_gshared (List_1_t7169 * __this, Predicate_1_t7176 * ___match, const MethodInfo* method);
#define List_1_Find_m43339(__this, ___match, method) (( uint32_t (*) (List_1_t7169 *, Predicate_1_t7176 *, const MethodInfo*))List_1_Find_m43339_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m43340_gshared (Object_t * __this /* static, unused */, Predicate_1_t7176 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m43340(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7176 *, const MethodInfo*))List_1_CheckMatch_m43340_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m43341_gshared (List_1_t7169 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7176 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m43341(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7169 *, int32_t, int32_t, Predicate_1_t7176 *, const MethodInfo*))List_1_GetIndex_m43341_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t7170  List_1_GetEnumerator_m43342_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m43342(__this, method) (( Enumerator_t7170  (*) (List_1_t7169 *, const MethodInfo*))List_1_GetEnumerator_m43342_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7169 * List_1_GetRange_m43343_gshared (List_1_t7169 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m43343(__this, ___index, ___count, method) (( List_1_t7169 * (*) (List_1_t7169 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m43343_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m43344_gshared (List_1_t7169 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m43344(__this, ___item, method) (( int32_t (*) (List_1_t7169 *, uint32_t, const MethodInfo*))List_1_IndexOf_m43344_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m43345_gshared (List_1_t7169 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m43345(__this, ___start, ___delta, method) (( void (*) (List_1_t7169 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m43345_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m43346_gshared (List_1_t7169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m43346(__this, ___index, method) (( void (*) (List_1_t7169 *, int32_t, const MethodInfo*))List_1_CheckIndex_m43346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m43347_gshared (List_1_t7169 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m43347(__this, ___index, ___item, method) (( void (*) (List_1_t7169 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m43347_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m43348_gshared (List_1_t7169 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m43348(__this, ___collection, method) (( void (*) (List_1_t7169 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m43348_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m43349_gshared (List_1_t7169 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m43349(__this, ___index, ___collection, method) (( void (*) (List_1_t7169 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m43349_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m43350_gshared (List_1_t7169 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m43350(__this, ___index, ___collection, method) (( void (*) (List_1_t7169 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m43350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m43351_gshared (List_1_t7169 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m43351(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7169 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m43351_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m43352_gshared (List_1_t7169 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m43352(__this, ___item, method) (( bool (*) (List_1_t7169 *, uint32_t, const MethodInfo*))List_1_Remove_m43352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m43353_gshared (List_1_t7169 * __this, Predicate_1_t7176 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m43353(__this, ___match, method) (( int32_t (*) (List_1_t7169 *, Predicate_1_t7176 *, const MethodInfo*))List_1_RemoveAll_m43353_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m43354_gshared (List_1_t7169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m43354(__this, ___index, method) (( void (*) (List_1_t7169 *, int32_t, const MethodInfo*))List_1_RemoveAt_m43354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m43355_gshared (List_1_t7169 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m43355(__this, ___index, ___count, method) (( void (*) (List_1_t7169 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m43355_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m43356_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_Reverse_m43356(__this, method) (( void (*) (List_1_t7169 *, const MethodInfo*))List_1_Reverse_m43356_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m43357_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_Sort_m43357(__this, method) (( void (*) (List_1_t7169 *, const MethodInfo*))List_1_Sort_m43357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m43358_gshared (List_1_t7169 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m43358(__this, ___comparer, method) (( void (*) (List_1_t7169 *, Object_t*, const MethodInfo*))List_1_Sort_m43358_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m43359_gshared (List_1_t7169 * __this, Comparison_1_t7180 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m43359(__this, ___comparison, method) (( void (*) (List_1_t7169 *, Comparison_1_t7180 *, const MethodInfo*))List_1_Sort_m43359_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3116* List_1_ToArray_m43360_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_ToArray_m43360(__this, method) (( UInt32U5BU5D_t3116* (*) (List_1_t7169 *, const MethodInfo*))List_1_ToArray_m43360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m43361_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m43361(__this, method) (( void (*) (List_1_t7169 *, const MethodInfo*))List_1_TrimExcess_m43361_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m43362_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m43362(__this, method) (( int32_t (*) (List_1_t7169 *, const MethodInfo*))List_1_get_Capacity_m43362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m43363_gshared (List_1_t7169 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m43363(__this, ___value, method) (( void (*) (List_1_t7169 *, int32_t, const MethodInfo*))List_1_set_Capacity_m43363_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m43364_gshared (List_1_t7169 * __this, const MethodInfo* method);
#define List_1_get_Count_m43364(__this, method) (( int32_t (*) (List_1_t7169 *, const MethodInfo*))List_1_get_Count_m43364_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m43365_gshared (List_1_t7169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m43365(__this, ___index, method) (( uint32_t (*) (List_1_t7169 *, int32_t, const MethodInfo*))List_1_get_Item_m43365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m43366_gshared (List_1_t7169 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m43366(__this, ___index, ___value, method) (( void (*) (List_1_t7169 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m43366_gshared)(__this, ___index, ___value, method)
