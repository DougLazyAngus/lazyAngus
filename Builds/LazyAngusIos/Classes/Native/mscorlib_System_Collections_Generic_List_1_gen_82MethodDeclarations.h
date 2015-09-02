#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t6683;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6380;
// System.Int64[]
struct Int64U5BU5D_t4889;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6381;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9120;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t6685;
// System.Predicate`1<System.Int64>
struct Predicate_1_t6687;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5384;
// System.Comparison`1<System.Int64>
struct Comparison_1_t6691;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m39644_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1__ctor_m39644(__this, method) (( void (*) (List_1_t6683 *, const MethodInfo*))List_1__ctor_m39644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39645_gshared (List_1_t6683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39645(__this, ___collection, method) (( void (*) (List_1_t6683 *, Object_t*, const MethodInfo*))List_1__ctor_m39645_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39646_gshared (List_1_t6683 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39646(__this, ___capacity, method) (( void (*) (List_1_t6683 *, int32_t, const MethodInfo*))List_1__ctor_m39646_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39647_gshared (List_1_t6683 * __this, Int64U5BU5D_t4889* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39647(__this, ___data, ___size, method) (( void (*) (List_1_t6683 *, Int64U5BU5D_t4889*, int32_t, const MethodInfo*))List_1__ctor_m39647_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m39648_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39648(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39648_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39649_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39649(__this, method) (( Object_t* (*) (List_1_t6683 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39649_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39650_gshared (List_1_t6683 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39650(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6683 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39650_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39651_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39651(__this, method) (( Object_t * (*) (List_1_t6683 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39651_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39652_gshared (List_1_t6683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39652(__this, ___item, method) (( int32_t (*) (List_1_t6683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39652_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39653_gshared (List_1_t6683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39653(__this, ___item, method) (( bool (*) (List_1_t6683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39653_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39654_gshared (List_1_t6683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39654(__this, ___item, method) (( int32_t (*) (List_1_t6683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39655_gshared (List_1_t6683 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39655(__this, ___index, ___item, method) (( void (*) (List_1_t6683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39655_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39656_gshared (List_1_t6683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39656(__this, ___item, method) (( void (*) (List_1_t6683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39656_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39657_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39657(__this, method) (( bool (*) (List_1_t6683 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39658_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39658(__this, method) (( bool (*) (List_1_t6683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39659_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39659(__this, method) (( Object_t * (*) (List_1_t6683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39659_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39660_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39660(__this, method) (( bool (*) (List_1_t6683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39661_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39661(__this, method) (( bool (*) (List_1_t6683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39661_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39662_gshared (List_1_t6683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39662(__this, ___index, method) (( Object_t * (*) (List_1_t6683 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39662_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39663_gshared (List_1_t6683 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39663(__this, ___index, ___value, method) (( void (*) (List_1_t6683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39663_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m39664_gshared (List_1_t6683 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m39664(__this, ___item, method) (( void (*) (List_1_t6683 *, int64_t, const MethodInfo*))List_1_Add_m39664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39665_gshared (List_1_t6683 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39665(__this, ___newCount, method) (( void (*) (List_1_t6683 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39665_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39666_gshared (List_1_t6683 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39666(__this, ___idx, ___count, method) (( void (*) (List_1_t6683 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39666_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39667_gshared (List_1_t6683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39667(__this, ___collection, method) (( void (*) (List_1_t6683 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39667_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39668_gshared (List_1_t6683 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39668(__this, ___enumerable, method) (( void (*) (List_1_t6683 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39668_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39669_gshared (List_1_t6683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39669(__this, ___collection, method) (( void (*) (List_1_t6683 *, Object_t*, const MethodInfo*))List_1_AddRange_m39669_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6685 * List_1_AsReadOnly_m39670_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39670(__this, method) (( ReadOnlyCollection_1_t6685 * (*) (List_1_t6683 *, const MethodInfo*))List_1_AsReadOnly_m39670_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m39671_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_Clear_m39671(__this, method) (( void (*) (List_1_t6683 *, const MethodInfo*))List_1_Clear_m39671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m39672_gshared (List_1_t6683 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m39672(__this, ___item, method) (( bool (*) (List_1_t6683 *, int64_t, const MethodInfo*))List_1_Contains_m39672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39673_gshared (List_1_t6683 * __this, Int64U5BU5D_t4889* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39673(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6683 *, Int64U5BU5D_t4889*, int32_t, const MethodInfo*))List_1_CopyTo_m39673_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m39674_gshared (List_1_t6683 * __this, Predicate_1_t6687 * ___match, const MethodInfo* method);
#define List_1_Find_m39674(__this, ___match, method) (( int64_t (*) (List_1_t6683 *, Predicate_1_t6687 *, const MethodInfo*))List_1_Find_m39674_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39675_gshared (Object_t * __this /* static, unused */, Predicate_1_t6687 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39675(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6687 *, const MethodInfo*))List_1_CheckMatch_m39675_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39676_gshared (List_1_t6683 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6687 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39676(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6683 *, int32_t, int32_t, Predicate_1_t6687 *, const MethodInfo*))List_1_GetIndex_m39676_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t6684  List_1_GetEnumerator_m39677_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39677(__this, method) (( Enumerator_t6684  (*) (List_1_t6683 *, const MethodInfo*))List_1_GetEnumerator_m39677_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6683 * List_1_GetRange_m39678_gshared (List_1_t6683 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39678(__this, ___index, ___count, method) (( List_1_t6683 * (*) (List_1_t6683 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39678_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39679_gshared (List_1_t6683 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39679(__this, ___item, method) (( int32_t (*) (List_1_t6683 *, int64_t, const MethodInfo*))List_1_IndexOf_m39679_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39680_gshared (List_1_t6683 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39680(__this, ___start, ___delta, method) (( void (*) (List_1_t6683 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39680_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39681_gshared (List_1_t6683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39681(__this, ___index, method) (( void (*) (List_1_t6683 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39681_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39682_gshared (List_1_t6683 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m39682(__this, ___index, ___item, method) (( void (*) (List_1_t6683 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m39682_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39683_gshared (List_1_t6683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39683(__this, ___collection, method) (( void (*) (List_1_t6683 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39683_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39684_gshared (List_1_t6683 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39684(__this, ___index, ___collection, method) (( void (*) (List_1_t6683 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39684_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39685_gshared (List_1_t6683 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39685(__this, ___index, ___collection, method) (( void (*) (List_1_t6683 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39685_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39686_gshared (List_1_t6683 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39686(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6683 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39686_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m39687_gshared (List_1_t6683 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m39687(__this, ___item, method) (( bool (*) (List_1_t6683 *, int64_t, const MethodInfo*))List_1_Remove_m39687_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39688_gshared (List_1_t6683 * __this, Predicate_1_t6687 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39688(__this, ___match, method) (( int32_t (*) (List_1_t6683 *, Predicate_1_t6687 *, const MethodInfo*))List_1_RemoveAll_m39688_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39689_gshared (List_1_t6683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39689(__this, ___index, method) (( void (*) (List_1_t6683 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39689_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39690_gshared (List_1_t6683 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39690(__this, ___index, ___count, method) (( void (*) (List_1_t6683 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39690_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m39691_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_Reverse_m39691(__this, method) (( void (*) (List_1_t6683 *, const MethodInfo*))List_1_Reverse_m39691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m39692_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_Sort_m39692(__this, method) (( void (*) (List_1_t6683 *, const MethodInfo*))List_1_Sort_m39692_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39693_gshared (List_1_t6683 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39693(__this, ___comparer, method) (( void (*) (List_1_t6683 *, Object_t*, const MethodInfo*))List_1_Sort_m39693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39694_gshared (List_1_t6683 * __this, Comparison_1_t6691 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39694(__this, ___comparison, method) (( void (*) (List_1_t6683 *, Comparison_1_t6691 *, const MethodInfo*))List_1_Sort_m39694_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4889* List_1_ToArray_m39695_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_ToArray_m39695(__this, method) (( Int64U5BU5D_t4889* (*) (List_1_t6683 *, const MethodInfo*))List_1_ToArray_m39695_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m39696_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39696(__this, method) (( void (*) (List_1_t6683 *, const MethodInfo*))List_1_TrimExcess_m39696_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39697_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39697(__this, method) (( int32_t (*) (List_1_t6683 *, const MethodInfo*))List_1_get_Capacity_m39697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39698_gshared (List_1_t6683 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39698(__this, ___value, method) (( void (*) (List_1_t6683 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39698_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m39699_gshared (List_1_t6683 * __this, const MethodInfo* method);
#define List_1_get_Count_m39699(__this, method) (( int32_t (*) (List_1_t6683 *, const MethodInfo*))List_1_get_Count_m39699_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m39700_gshared (List_1_t6683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39700(__this, ___index, method) (( int64_t (*) (List_1_t6683 *, int32_t, const MethodInfo*))List_1_get_Item_m39700_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39701_gshared (List_1_t6683 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39701(__this, ___index, ___value, method) (( void (*) (List_1_t6683 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m39701_gshared)(__this, ___index, ___value, method)
