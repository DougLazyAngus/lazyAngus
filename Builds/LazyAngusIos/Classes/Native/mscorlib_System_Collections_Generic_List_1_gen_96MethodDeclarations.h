#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct List_1_t7496;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerable_1_t7222;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7495;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t7223;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ICollection_1_t9376;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ReadOnlyCollection_1_t7499;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Predicate_1_t7503;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IComparer_1_t9377;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Comparison_1_t7506;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void List_1__ctor_m49662_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1__ctor_m49662(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1__ctor_m49662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m49663_gshared (List_1_t7496 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m49663(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1__ctor_m49663_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m49664_gshared (List_1_t7496 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m49664(__this, ___capacity, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1__ctor_m49664_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m49665_gshared (List_1_t7496 * __this, KeyValuePair_2U5BU5D_t7495* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m49665(__this, ___data, ___size, method) (( void (*) (List_1_t7496 *, KeyValuePair_2U5BU5D_t7495*, int32_t, const MethodInfo*))List_1__ctor_m49665_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.cctor()
extern "C" void List_1__cctor_m49666_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m49666(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49666_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49667_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49667(__this, method) (( Object_t* (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49667_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m49668_gshared (List_1_t7496 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m49668(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7496 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49668_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m49669_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49669(__this, method) (( Object_t * (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49669_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m49670_gshared (List_1_t7496 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m49670(__this, ___item, method) (( int32_t (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49670_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m49671_gshared (List_1_t7496 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m49671(__this, ___item, method) (( bool (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m49672_gshared (List_1_t7496 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m49672(__this, ___item, method) (( int32_t (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m49673_gshared (List_1_t7496 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m49673(__this, ___index, ___item, method) (( void (*) (List_1_t7496 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49673_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m49674_gshared (List_1_t7496 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m49674(__this, ___item, method) (( void (*) (List_1_t7496 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49674_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49675_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49675(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49675_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m49676_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49676(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49676_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m49677_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m49677(__this, method) (( Object_t * (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49677_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m49678_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m49678(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49678_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m49679_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m49679(__this, method) (( bool (*) (List_1_t7496 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49679_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m49680_gshared (List_1_t7496 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m49680(__this, ___index, method) (( Object_t * (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m49681_gshared (List_1_t7496 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m49681(__this, ___index, ___value, method) (( void (*) (List_1_t7496 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49681_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Add(T)
extern "C" void List_1_Add_m49682_gshared (List_1_t7496 * __this, KeyValuePair_2_t7218  ___item, const MethodInfo* method);
#define List_1_Add_m49682(__this, ___item, method) (( void (*) (List_1_t7496 *, KeyValuePair_2_t7218 , const MethodInfo*))List_1_Add_m49682_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m49683_gshared (List_1_t7496 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m49683(__this, ___newCount, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49683_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m49684_gshared (List_1_t7496 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m49684(__this, ___idx, ___count, method) (( void (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49684_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m49685_gshared (List_1_t7496 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m49685(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49685_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m49686_gshared (List_1_t7496 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m49686(__this, ___enumerable, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49686_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m49687_gshared (List_1_t7496 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m49687(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_AddRange_m49687_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7499 * List_1_AsReadOnly_m49688_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m49688(__this, method) (( ReadOnlyCollection_1_t7499 * (*) (List_1_t7496 *, const MethodInfo*))List_1_AsReadOnly_m49688_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Clear()
extern "C" void List_1_Clear_m49689_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_Clear_m49689(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_Clear_m49689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Contains(T)
extern "C" bool List_1_Contains_m49690_gshared (List_1_t7496 * __this, KeyValuePair_2_t7218  ___item, const MethodInfo* method);
#define List_1_Contains_m49690(__this, ___item, method) (( bool (*) (List_1_t7496 *, KeyValuePair_2_t7218 , const MethodInfo*))List_1_Contains_m49690_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m49691_gshared (List_1_t7496 * __this, KeyValuePair_2U5BU5D_t7495* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m49691(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7496 *, KeyValuePair_2U5BU5D_t7495*, int32_t, const MethodInfo*))List_1_CopyTo_m49691_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7218  List_1_Find_m49692_gshared (List_1_t7496 * __this, Predicate_1_t7503 * ___match, const MethodInfo* method);
#define List_1_Find_m49692(__this, ___match, method) (( KeyValuePair_2_t7218  (*) (List_1_t7496 *, Predicate_1_t7503 *, const MethodInfo*))List_1_Find_m49692_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m49693_gshared (Object_t * __this /* static, unused */, Predicate_1_t7503 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m49693(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7503 *, const MethodInfo*))List_1_CheckMatch_m49693_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m49694_gshared (List_1_t7496 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7503 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m49694(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7496 *, int32_t, int32_t, Predicate_1_t7503 *, const MethodInfo*))List_1_GetIndex_m49694_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetEnumerator()
extern "C" Enumerator_t7497  List_1_GetEnumerator_m49695_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m49695(__this, method) (( Enumerator_t7497  (*) (List_1_t7496 *, const MethodInfo*))List_1_GetEnumerator_m49695_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7496 * List_1_GetRange_m49696_gshared (List_1_t7496 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m49696(__this, ___index, ___count, method) (( List_1_t7496 * (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49696_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m49697_gshared (List_1_t7496 * __this, KeyValuePair_2_t7218  ___item, const MethodInfo* method);
#define List_1_IndexOf_m49697(__this, ___item, method) (( int32_t (*) (List_1_t7496 *, KeyValuePair_2_t7218 , const MethodInfo*))List_1_IndexOf_m49697_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m49698_gshared (List_1_t7496 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m49698(__this, ___start, ___delta, method) (( void (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49698_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m49699_gshared (List_1_t7496 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m49699(__this, ___index, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49699_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m49700_gshared (List_1_t7496 * __this, int32_t ___index, KeyValuePair_2_t7218  ___item, const MethodInfo* method);
#define List_1_Insert_m49700(__this, ___index, ___item, method) (( void (*) (List_1_t7496 *, int32_t, KeyValuePair_2_t7218 , const MethodInfo*))List_1_Insert_m49700_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m49701_gshared (List_1_t7496 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m49701(__this, ___collection, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49701_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m49702_gshared (List_1_t7496 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m49702(__this, ___index, ___collection, method) (( void (*) (List_1_t7496 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49702_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m49703_gshared (List_1_t7496 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m49703(__this, ___index, ___collection, method) (( void (*) (List_1_t7496 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49703_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m49704_gshared (List_1_t7496 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m49704(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7496 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49704_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Remove(T)
extern "C" bool List_1_Remove_m49705_gshared (List_1_t7496 * __this, KeyValuePair_2_t7218  ___item, const MethodInfo* method);
#define List_1_Remove_m49705(__this, ___item, method) (( bool (*) (List_1_t7496 *, KeyValuePair_2_t7218 , const MethodInfo*))List_1_Remove_m49705_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m49706_gshared (List_1_t7496 * __this, Predicate_1_t7503 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m49706(__this, ___match, method) (( int32_t (*) (List_1_t7496 *, Predicate_1_t7503 *, const MethodInfo*))List_1_RemoveAll_m49706_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m49707_gshared (List_1_t7496 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m49707(__this, ___index, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49707_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m49708_gshared (List_1_t7496 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m49708(__this, ___index, ___count, method) (( void (*) (List_1_t7496 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49708_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Reverse()
extern "C" void List_1_Reverse_m49709_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_Reverse_m49709(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_Reverse_m49709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort()
extern "C" void List_1_Sort_m49710_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_Sort_m49710(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_Sort_m49710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m49711_gshared (List_1_t7496 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m49711(__this, ___comparer, method) (( void (*) (List_1_t7496 *, Object_t*, const MethodInfo*))List_1_Sort_m49711_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m49712_gshared (List_1_t7496 * __this, Comparison_1_t7506 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m49712(__this, ___comparison, method) (( void (*) (List_1_t7496 *, Comparison_1_t7506 *, const MethodInfo*))List_1_Sort_m49712_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7495* List_1_ToArray_m49713_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_ToArray_m49713(__this, method) (( KeyValuePair_2U5BU5D_t7495* (*) (List_1_t7496 *, const MethodInfo*))List_1_ToArray_m49713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m49714_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m49714(__this, method) (( void (*) (List_1_t7496 *, const MethodInfo*))List_1_TrimExcess_m49714_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m49715_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m49715(__this, method) (( int32_t (*) (List_1_t7496 *, const MethodInfo*))List_1_get_Capacity_m49715_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m49716_gshared (List_1_t7496 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m49716(__this, ___value, method) (( void (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49716_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Count()
extern "C" int32_t List_1_get_Count_m49717_gshared (List_1_t7496 * __this, const MethodInfo* method);
#define List_1_get_Count_m49717(__this, method) (( int32_t (*) (List_1_t7496 *, const MethodInfo*))List_1_get_Count_m49717_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7218  List_1_get_Item_m49718_gshared (List_1_t7496 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m49718(__this, ___index, method) (( KeyValuePair_2_t7218  (*) (List_1_t7496 *, int32_t, const MethodInfo*))List_1_get_Item_m49718_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m49719_gshared (List_1_t7496 * __this, int32_t ___index, KeyValuePair_2_t7218  ___value, const MethodInfo* method);
#define List_1_set_Item_m49719(__this, ___index, ___value, method) (( void (*) (List_1_t7496 *, int32_t, KeyValuePair_2_t7218 , const MethodInfo*))List_1_set_Item_m49719_gshared)(__this, ___index, ___value, method)
