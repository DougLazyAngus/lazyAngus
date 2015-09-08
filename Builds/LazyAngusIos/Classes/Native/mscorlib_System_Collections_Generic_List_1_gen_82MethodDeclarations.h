#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t7175;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6913;
// System.UInt32[]
struct UInt32U5BU5D_t3120;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6914;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9842;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t7177;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t7182;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9843;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t7186;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m43334_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1__ctor_m43334(__this, method) (( void (*) (List_1_t7175 *, const MethodInfo*))List_1__ctor_m43334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m43335_gshared (List_1_t7175 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m43335(__this, ___collection, method) (( void (*) (List_1_t7175 *, Object_t*, const MethodInfo*))List_1__ctor_m43335_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m43336_gshared (List_1_t7175 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m43336(__this, ___capacity, method) (( void (*) (List_1_t7175 *, int32_t, const MethodInfo*))List_1__ctor_m43336_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m43337_gshared (List_1_t7175 * __this, UInt32U5BU5D_t3120* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m43337(__this, ___data, ___size, method) (( void (*) (List_1_t7175 *, UInt32U5BU5D_t3120*, int32_t, const MethodInfo*))List_1__ctor_m43337_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m43338_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m43338(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m43338_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43339_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43339(__this, method) (( Object_t* (*) (List_1_t7175 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43339_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m43340_gshared (List_1_t7175 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m43340(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7175 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m43340_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m43341_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43341(__this, method) (( Object_t * (*) (List_1_t7175 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m43341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m43342_gshared (List_1_t7175 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m43342(__this, ___item, method) (( int32_t (*) (List_1_t7175 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m43342_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m43343_gshared (List_1_t7175 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m43343(__this, ___item, method) (( bool (*) (List_1_t7175 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m43343_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m43344_gshared (List_1_t7175 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m43344(__this, ___item, method) (( int32_t (*) (List_1_t7175 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m43344_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m43345_gshared (List_1_t7175 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m43345(__this, ___index, ___item, method) (( void (*) (List_1_t7175 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m43345_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m43346_gshared (List_1_t7175 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m43346(__this, ___item, method) (( void (*) (List_1_t7175 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m43346_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43347_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43347(__this, method) (( bool (*) (List_1_t7175 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m43348_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43348(__this, method) (( bool (*) (List_1_t7175 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m43348_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m43349_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m43349(__this, method) (( Object_t * (*) (List_1_t7175 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m43349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m43350_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m43350(__this, method) (( bool (*) (List_1_t7175 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m43350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m43351_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m43351(__this, method) (( bool (*) (List_1_t7175 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m43351_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m43352_gshared (List_1_t7175 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m43352(__this, ___index, method) (( Object_t * (*) (List_1_t7175 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m43352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m43353_gshared (List_1_t7175 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m43353(__this, ___index, ___value, method) (( void (*) (List_1_t7175 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m43353_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m43354_gshared (List_1_t7175 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m43354(__this, ___item, method) (( void (*) (List_1_t7175 *, uint32_t, const MethodInfo*))List_1_Add_m43354_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m43355_gshared (List_1_t7175 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m43355(__this, ___newCount, method) (( void (*) (List_1_t7175 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m43355_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m43356_gshared (List_1_t7175 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m43356(__this, ___idx, ___count, method) (( void (*) (List_1_t7175 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m43356_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m43357_gshared (List_1_t7175 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m43357(__this, ___collection, method) (( void (*) (List_1_t7175 *, Object_t*, const MethodInfo*))List_1_AddCollection_m43357_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m43358_gshared (List_1_t7175 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m43358(__this, ___enumerable, method) (( void (*) (List_1_t7175 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m43358_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m43359_gshared (List_1_t7175 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m43359(__this, ___collection, method) (( void (*) (List_1_t7175 *, Object_t*, const MethodInfo*))List_1_AddRange_m43359_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7177 * List_1_AsReadOnly_m43360_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m43360(__this, method) (( ReadOnlyCollection_1_t7177 * (*) (List_1_t7175 *, const MethodInfo*))List_1_AsReadOnly_m43360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m43361_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_Clear_m43361(__this, method) (( void (*) (List_1_t7175 *, const MethodInfo*))List_1_Clear_m43361_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m43362_gshared (List_1_t7175 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m43362(__this, ___item, method) (( bool (*) (List_1_t7175 *, uint32_t, const MethodInfo*))List_1_Contains_m43362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m43363_gshared (List_1_t7175 * __this, UInt32U5BU5D_t3120* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m43363(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7175 *, UInt32U5BU5D_t3120*, int32_t, const MethodInfo*))List_1_CopyTo_m43363_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m43364_gshared (List_1_t7175 * __this, Predicate_1_t7182 * ___match, const MethodInfo* method);
#define List_1_Find_m43364(__this, ___match, method) (( uint32_t (*) (List_1_t7175 *, Predicate_1_t7182 *, const MethodInfo*))List_1_Find_m43364_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m43365_gshared (Object_t * __this /* static, unused */, Predicate_1_t7182 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m43365(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7182 *, const MethodInfo*))List_1_CheckMatch_m43365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m43366_gshared (List_1_t7175 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7182 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m43366(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7175 *, int32_t, int32_t, Predicate_1_t7182 *, const MethodInfo*))List_1_GetIndex_m43366_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t7176  List_1_GetEnumerator_m43367_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m43367(__this, method) (( Enumerator_t7176  (*) (List_1_t7175 *, const MethodInfo*))List_1_GetEnumerator_m43367_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7175 * List_1_GetRange_m43368_gshared (List_1_t7175 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m43368(__this, ___index, ___count, method) (( List_1_t7175 * (*) (List_1_t7175 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m43368_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m43369_gshared (List_1_t7175 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m43369(__this, ___item, method) (( int32_t (*) (List_1_t7175 *, uint32_t, const MethodInfo*))List_1_IndexOf_m43369_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m43370_gshared (List_1_t7175 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m43370(__this, ___start, ___delta, method) (( void (*) (List_1_t7175 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m43370_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m43371_gshared (List_1_t7175 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m43371(__this, ___index, method) (( void (*) (List_1_t7175 *, int32_t, const MethodInfo*))List_1_CheckIndex_m43371_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m43372_gshared (List_1_t7175 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m43372(__this, ___index, ___item, method) (( void (*) (List_1_t7175 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m43372_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m43373_gshared (List_1_t7175 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m43373(__this, ___collection, method) (( void (*) (List_1_t7175 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m43373_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m43374_gshared (List_1_t7175 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m43374(__this, ___index, ___collection, method) (( void (*) (List_1_t7175 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m43374_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m43375_gshared (List_1_t7175 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m43375(__this, ___index, ___collection, method) (( void (*) (List_1_t7175 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m43375_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m43376_gshared (List_1_t7175 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m43376(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7175 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m43376_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m43377_gshared (List_1_t7175 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m43377(__this, ___item, method) (( bool (*) (List_1_t7175 *, uint32_t, const MethodInfo*))List_1_Remove_m43377_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m43378_gshared (List_1_t7175 * __this, Predicate_1_t7182 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m43378(__this, ___match, method) (( int32_t (*) (List_1_t7175 *, Predicate_1_t7182 *, const MethodInfo*))List_1_RemoveAll_m43378_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m43379_gshared (List_1_t7175 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m43379(__this, ___index, method) (( void (*) (List_1_t7175 *, int32_t, const MethodInfo*))List_1_RemoveAt_m43379_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m43380_gshared (List_1_t7175 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m43380(__this, ___index, ___count, method) (( void (*) (List_1_t7175 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m43380_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m43381_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_Reverse_m43381(__this, method) (( void (*) (List_1_t7175 *, const MethodInfo*))List_1_Reverse_m43381_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m43382_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_Sort_m43382(__this, method) (( void (*) (List_1_t7175 *, const MethodInfo*))List_1_Sort_m43382_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m43383_gshared (List_1_t7175 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m43383(__this, ___comparer, method) (( void (*) (List_1_t7175 *, Object_t*, const MethodInfo*))List_1_Sort_m43383_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m43384_gshared (List_1_t7175 * __this, Comparison_1_t7186 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m43384(__this, ___comparison, method) (( void (*) (List_1_t7175 *, Comparison_1_t7186 *, const MethodInfo*))List_1_Sort_m43384_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3120* List_1_ToArray_m43385_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_ToArray_m43385(__this, method) (( UInt32U5BU5D_t3120* (*) (List_1_t7175 *, const MethodInfo*))List_1_ToArray_m43385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m43386_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m43386(__this, method) (( void (*) (List_1_t7175 *, const MethodInfo*))List_1_TrimExcess_m43386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m43387_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m43387(__this, method) (( int32_t (*) (List_1_t7175 *, const MethodInfo*))List_1_get_Capacity_m43387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m43388_gshared (List_1_t7175 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m43388(__this, ___value, method) (( void (*) (List_1_t7175 *, int32_t, const MethodInfo*))List_1_set_Capacity_m43388_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m43389_gshared (List_1_t7175 * __this, const MethodInfo* method);
#define List_1_get_Count_m43389(__this, method) (( int32_t (*) (List_1_t7175 *, const MethodInfo*))List_1_get_Count_m43389_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m43390_gshared (List_1_t7175 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m43390(__this, ___index, method) (( uint32_t (*) (List_1_t7175 *, int32_t, const MethodInfo*))List_1_get_Item_m43390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m43391_gshared (List_1_t7175 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m43391(__this, ___index, ___value, method) (( void (*) (List_1_t7175 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m43391_gshared)(__this, ___index, ___value, method)
