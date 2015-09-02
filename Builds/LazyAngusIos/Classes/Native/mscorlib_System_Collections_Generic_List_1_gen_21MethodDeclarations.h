#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t811;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1494;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3379;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8742;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t5702;
// System.Predicate`1<System.Int32>
struct Predicate_1_t5704;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5383;
// System.Comparison`1<System.Int32>
struct Comparison_1_t5708;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4405_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1__ctor_m4405(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1__ctor_m4405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26606_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26606(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1__ctor_m26606_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26608_gshared (List_1_t811 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26608(__this, ___capacity, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1__ctor_m26608_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26610_gshared (List_1_t811 * __this, Int32U5BU5D_t484* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26610(__this, ___data, ___size, method) (( void (*) (List_1_t811 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1__ctor_m26610_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m26612_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26612(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26612_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26614_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26614(__this, method) (( Object_t* (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26614_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26616_gshared (List_1_t811 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26616(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t811 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26616_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26618_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26618(__this, method) (( Object_t * (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26618_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26620_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26620(__this, ___item, method) (( int32_t (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26620_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26622_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26622(__this, ___item, method) (( bool (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26622_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26624_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26624(__this, ___item, method) (( int32_t (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26624_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26626_gshared (List_1_t811 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26626(__this, ___index, ___item, method) (( void (*) (List_1_t811 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26626_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26628_gshared (List_1_t811 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26628(__this, ___item, method) (( void (*) (List_1_t811 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26628_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26630_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26630(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26630_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26632_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26632(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26632_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26634_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26634(__this, method) (( Object_t * (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26634_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26636_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26636(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26638_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26638(__this, method) (( bool (*) (List_1_t811 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26638_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26640_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26640(__this, ___index, method) (( Object_t * (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26640_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26642_gshared (List_1_t811 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26642(__this, ___index, ___value, method) (( void (*) (List_1_t811 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26642_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m26644_gshared (List_1_t811 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m26644(__this, ___item, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_Add_m26644_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26646_gshared (List_1_t811 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26646(__this, ___newCount, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26646_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26648_gshared (List_1_t811 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26648(__this, ___idx, ___count, method) (( void (*) (List_1_t811 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26648_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26650_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26650(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26650_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26652_gshared (List_1_t811 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26652(__this, ___enumerable, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26652_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26654_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26654(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_AddRange_m26654_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5702 * List_1_AsReadOnly_m26656_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26656(__this, method) (( ReadOnlyCollection_1_t5702 * (*) (List_1_t811 *, const MethodInfo*))List_1_AsReadOnly_m26656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m26658_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_Clear_m26658(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_Clear_m26658_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m26660_gshared (List_1_t811 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m26660(__this, ___item, method) (( bool (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_Contains_m26660_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26662_gshared (List_1_t811 * __this, Int32U5BU5D_t484* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26662(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t811 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1_CopyTo_m26662_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m26664_gshared (List_1_t811 * __this, Predicate_1_t5704 * ___match, const MethodInfo* method);
#define List_1_Find_m26664(__this, ___match, method) (( int32_t (*) (List_1_t811 *, Predicate_1_t5704 *, const MethodInfo*))List_1_Find_m26664_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26666_gshared (Object_t * __this /* static, unused */, Predicate_1_t5704 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26666(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5704 *, const MethodInfo*))List_1_CheckMatch_m26666_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26668_gshared (List_1_t811 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5704 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26668(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t811 *, int32_t, int32_t, Predicate_1_t5704 *, const MethodInfo*))List_1_GetIndex_m26668_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t5700  List_1_GetEnumerator_m26670_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26670(__this, method) (( Enumerator_t5700  (*) (List_1_t811 *, const MethodInfo*))List_1_GetEnumerator_m26670_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t811 * List_1_GetRange_m26672_gshared (List_1_t811 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26672(__this, ___index, ___count, method) (( List_1_t811 * (*) (List_1_t811 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26672_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26674_gshared (List_1_t811 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m26674(__this, ___item, method) (( int32_t (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_IndexOf_m26674_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26676_gshared (List_1_t811 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26676(__this, ___start, ___delta, method) (( void (*) (List_1_t811 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26676_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26678_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26678(__this, ___index, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26678_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26680_gshared (List_1_t811 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m26680(__this, ___index, ___item, method) (( void (*) (List_1_t811 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26680_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26682_gshared (List_1_t811 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26682(__this, ___collection, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26682_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26684_gshared (List_1_t811 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26684(__this, ___index, ___collection, method) (( void (*) (List_1_t811 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26684_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26686_gshared (List_1_t811 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26686(__this, ___index, ___collection, method) (( void (*) (List_1_t811 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26686_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26688_gshared (List_1_t811 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26688(__this, ___index, ___enumerable, method) (( void (*) (List_1_t811 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26688_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m26690_gshared (List_1_t811 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m26690(__this, ___item, method) (( bool (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_Remove_m26690_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26692_gshared (List_1_t811 * __this, Predicate_1_t5704 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26692(__this, ___match, method) (( int32_t (*) (List_1_t811 *, Predicate_1_t5704 *, const MethodInfo*))List_1_RemoveAll_m26692_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26694_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26694(__this, ___index, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26694_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26696_gshared (List_1_t811 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26696(__this, ___index, ___count, method) (( void (*) (List_1_t811 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26696_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m26698_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_Reverse_m26698(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_Reverse_m26698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m26700_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_Sort_m26700(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_Sort_m26700_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26702_gshared (List_1_t811 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26702(__this, ___comparer, method) (( void (*) (List_1_t811 *, Object_t*, const MethodInfo*))List_1_Sort_m26702_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26704_gshared (List_1_t811 * __this, Comparison_1_t5708 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26704(__this, ___comparison, method) (( void (*) (List_1_t811 *, Comparison_1_t5708 *, const MethodInfo*))List_1_Sort_m26704_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t484* List_1_ToArray_m26706_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_ToArray_m26706(__this, method) (( Int32U5BU5D_t484* (*) (List_1_t811 *, const MethodInfo*))List_1_ToArray_m26706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26708_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26708(__this, method) (( void (*) (List_1_t811 *, const MethodInfo*))List_1_TrimExcess_m26708_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26710_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26710(__this, method) (( int32_t (*) (List_1_t811 *, const MethodInfo*))List_1_get_Capacity_m26710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26712_gshared (List_1_t811 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26712(__this, ___value, method) (( void (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26712_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m26714_gshared (List_1_t811 * __this, const MethodInfo* method);
#define List_1_get_Count_m26714(__this, method) (( int32_t (*) (List_1_t811 *, const MethodInfo*))List_1_get_Count_m26714_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m26716_gshared (List_1_t811 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26716(__this, ___index, method) (( int32_t (*) (List_1_t811 *, int32_t, const MethodInfo*))List_1_get_Item_m26716_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26718_gshared (List_1_t811 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m26718(__this, ___index, ___value, method) (( void (*) (List_1_t811 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26718_gshared)(__this, ___index, ___value, method)
