#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t7486;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t7154;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7485;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7155;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t9283;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t7489;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t7493;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IComparer_1_t9284;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t7496;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_77.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void List_1__ctor_m49673_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1__ctor_m49673(__this, method) (( void (*) (List_1_t7486 *, const MethodInfo*))List_1__ctor_m49673_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m49674_gshared (List_1_t7486 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m49674(__this, ___collection, method) (( void (*) (List_1_t7486 *, Object_t*, const MethodInfo*))List_1__ctor_m49674_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m49675_gshared (List_1_t7486 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m49675(__this, ___capacity, method) (( void (*) (List_1_t7486 *, int32_t, const MethodInfo*))List_1__ctor_m49675_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m49676_gshared (List_1_t7486 * __this, KeyValuePair_2U5BU5D_t7485* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m49676(__this, ___data, ___size, method) (( void (*) (List_1_t7486 *, KeyValuePair_2U5BU5D_t7485*, int32_t, const MethodInfo*))List_1__ctor_m49676_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void List_1__cctor_m49677_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m49677(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49677_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49678_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49678(__this, method) (( Object_t* (*) (List_1_t7486 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49678_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m49679_gshared (List_1_t7486 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m49679(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7486 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49679_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m49680_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49680(__this, method) (( Object_t * (*) (List_1_t7486 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49680_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m49681_gshared (List_1_t7486 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m49681(__this, ___item, method) (( int32_t (*) (List_1_t7486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49681_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m49682_gshared (List_1_t7486 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m49682(__this, ___item, method) (( bool (*) (List_1_t7486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49682_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m49683_gshared (List_1_t7486 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m49683(__this, ___item, method) (( int32_t (*) (List_1_t7486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m49684_gshared (List_1_t7486 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m49684(__this, ___index, ___item, method) (( void (*) (List_1_t7486 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49684_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m49685_gshared (List_1_t7486 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m49685(__this, ___item, method) (( void (*) (List_1_t7486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49685_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49686_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49686(__this, method) (( bool (*) (List_1_t7486 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m49687_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49687(__this, method) (( bool (*) (List_1_t7486 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49687_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m49688_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m49688(__this, method) (( Object_t * (*) (List_1_t7486 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49688_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m49689_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m49689(__this, method) (( bool (*) (List_1_t7486 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m49690_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m49690(__this, method) (( bool (*) (List_1_t7486 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49690_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m49691_gshared (List_1_t7486 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m49691(__this, ___index, method) (( Object_t * (*) (List_1_t7486 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49691_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m49692_gshared (List_1_t7486 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m49692(__this, ___index, ___value, method) (( void (*) (List_1_t7486 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49692_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void List_1_Add_m49693_gshared (List_1_t7486 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define List_1_Add_m49693(__this, ___item, method) (( void (*) (List_1_t7486 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Add_m49693_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m49694_gshared (List_1_t7486 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m49694(__this, ___newCount, method) (( void (*) (List_1_t7486 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49694_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m49695_gshared (List_1_t7486 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m49695(__this, ___idx, ___count, method) (( void (*) (List_1_t7486 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49695_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m49696_gshared (List_1_t7486 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m49696(__this, ___collection, method) (( void (*) (List_1_t7486 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49696_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m49697_gshared (List_1_t7486 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m49697(__this, ___enumerable, method) (( void (*) (List_1_t7486 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49697_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m49698_gshared (List_1_t7486 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m49698(__this, ___collection, method) (( void (*) (List_1_t7486 *, Object_t*, const MethodInfo*))List_1_AddRange_m49698_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7489 * List_1_AsReadOnly_m49699_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m49699(__this, method) (( ReadOnlyCollection_1_t7489 * (*) (List_1_t7486 *, const MethodInfo*))List_1_AsReadOnly_m49699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void List_1_Clear_m49700_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_Clear_m49700(__this, method) (( void (*) (List_1_t7486 *, const MethodInfo*))List_1_Clear_m49700_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool List_1_Contains_m49701_gshared (List_1_t7486 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define List_1_Contains_m49701(__this, ___item, method) (( bool (*) (List_1_t7486 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Contains_m49701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m49702_gshared (List_1_t7486 * __this, KeyValuePair_2U5BU5D_t7485* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m49702(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7486 *, KeyValuePair_2U5BU5D_t7485*, int32_t, const MethodInfo*))List_1_CopyTo_m49702_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t5487  List_1_Find_m49703_gshared (List_1_t7486 * __this, Predicate_1_t7493 * ___match, const MethodInfo* method);
#define List_1_Find_m49703(__this, ___match, method) (( KeyValuePair_2_t5487  (*) (List_1_t7486 *, Predicate_1_t7493 *, const MethodInfo*))List_1_Find_m49703_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m49704_gshared (Object_t * __this /* static, unused */, Predicate_1_t7493 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m49704(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7493 *, const MethodInfo*))List_1_CheckMatch_m49704_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m49705_gshared (List_1_t7486 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7493 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m49705(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7486 *, int32_t, int32_t, Predicate_1_t7493 *, const MethodInfo*))List_1_GetIndex_m49705_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Enumerator_t7487  List_1_GetEnumerator_m49706_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m49706(__this, method) (( Enumerator_t7487  (*) (List_1_t7486 *, const MethodInfo*))List_1_GetEnumerator_m49706_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7486 * List_1_GetRange_m49707_gshared (List_1_t7486 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m49707(__this, ___index, ___count, method) (( List_1_t7486 * (*) (List_1_t7486 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49707_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m49708_gshared (List_1_t7486 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define List_1_IndexOf_m49708(__this, ___item, method) (( int32_t (*) (List_1_t7486 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_IndexOf_m49708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m49709_gshared (List_1_t7486 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m49709(__this, ___start, ___delta, method) (( void (*) (List_1_t7486 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49709_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m49710_gshared (List_1_t7486 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m49710(__this, ___index, method) (( void (*) (List_1_t7486 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49710_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m49711_gshared (List_1_t7486 * __this, int32_t ___index, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define List_1_Insert_m49711(__this, ___index, ___item, method) (( void (*) (List_1_t7486 *, int32_t, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Insert_m49711_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m49712_gshared (List_1_t7486 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m49712(__this, ___collection, method) (( void (*) (List_1_t7486 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49712_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m49713_gshared (List_1_t7486 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m49713(__this, ___index, ___collection, method) (( void (*) (List_1_t7486 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49713_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m49714_gshared (List_1_t7486 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m49714(__this, ___index, ___collection, method) (( void (*) (List_1_t7486 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49714_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m49715_gshared (List_1_t7486 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m49715(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7486 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49715_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool List_1_Remove_m49716_gshared (List_1_t7486 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define List_1_Remove_m49716(__this, ___item, method) (( bool (*) (List_1_t7486 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Remove_m49716_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m49717_gshared (List_1_t7486 * __this, Predicate_1_t7493 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m49717(__this, ___match, method) (( int32_t (*) (List_1_t7486 *, Predicate_1_t7493 *, const MethodInfo*))List_1_RemoveAll_m49717_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m49718_gshared (List_1_t7486 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m49718(__this, ___index, method) (( void (*) (List_1_t7486 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49718_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m49719_gshared (List_1_t7486 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m49719(__this, ___index, ___count, method) (( void (*) (List_1_t7486 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49719_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C" void List_1_Reverse_m49720_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_Reverse_m49720(__this, method) (( void (*) (List_1_t7486 *, const MethodInfo*))List_1_Reverse_m49720_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C" void List_1_Sort_m49721_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_Sort_m49721(__this, method) (( void (*) (List_1_t7486 *, const MethodInfo*))List_1_Sort_m49721_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m49722_gshared (List_1_t7486 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m49722(__this, ___comparer, method) (( void (*) (List_1_t7486 *, Object_t*, const MethodInfo*))List_1_Sort_m49722_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m49723_gshared (List_1_t7486 * __this, Comparison_1_t7496 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m49723(__this, ___comparison, method) (( void (*) (List_1_t7486 *, Comparison_1_t7496 *, const MethodInfo*))List_1_Sort_m49723_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7485* List_1_ToArray_m49724_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_ToArray_m49724(__this, method) (( KeyValuePair_2U5BU5D_t7485* (*) (List_1_t7486 *, const MethodInfo*))List_1_ToArray_m49724_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m49725_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m49725(__this, method) (( void (*) (List_1_t7486 *, const MethodInfo*))List_1_TrimExcess_m49725_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m49726_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m49726(__this, method) (( int32_t (*) (List_1_t7486 *, const MethodInfo*))List_1_get_Capacity_m49726_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m49727_gshared (List_1_t7486 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m49727(__this, ___value, method) (( void (*) (List_1_t7486 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49727_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t List_1_get_Count_m49728_gshared (List_1_t7486 * __this, const MethodInfo* method);
#define List_1_get_Count_m49728(__this, method) (( int32_t (*) (List_1_t7486 *, const MethodInfo*))List_1_get_Count_m49728_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t5487  List_1_get_Item_m49729_gshared (List_1_t7486 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m49729(__this, ___index, method) (( KeyValuePair_2_t5487  (*) (List_1_t7486 *, int32_t, const MethodInfo*))List_1_get_Item_m49729_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m49730_gshared (List_1_t7486 * __this, int32_t ___index, KeyValuePair_2_t5487  ___value, const MethodInfo* method);
#define List_1_set_Item_m49730(__this, ___index, ___value, method) (( void (*) (List_1_t7486 *, int32_t, KeyValuePair_2_t5487 , const MethodInfo*))List_1_set_Item_m49730_gshared)(__this, ___index, ___value, method)
