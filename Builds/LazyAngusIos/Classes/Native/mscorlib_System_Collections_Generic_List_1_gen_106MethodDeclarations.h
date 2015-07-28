#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t7888;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t7879;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7887;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7880;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t9306;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t7891;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t7895;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t9307;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t7898;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m54668_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1__ctor_m54668(__this, method) (( void (*) (List_1_t7888 *, const MethodInfo*))List_1__ctor_m54668_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54669_gshared (List_1_t7888 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54669(__this, ___collection, method) (( void (*) (List_1_t7888 *, Object_t*, const MethodInfo*))List_1__ctor_m54669_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54670_gshared (List_1_t7888 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54670(__this, ___capacity, method) (( void (*) (List_1_t7888 *, int32_t, const MethodInfo*))List_1__ctor_m54670_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54671_gshared (List_1_t7888 * __this, KeyValuePair_2U5BU5D_t7887* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54671(__this, ___data, ___size, method) (( void (*) (List_1_t7888 *, KeyValuePair_2U5BU5D_t7887*, int32_t, const MethodInfo*))List_1__ctor_m54671_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m54672_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54672(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54672_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54673_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54673(__this, method) (( Object_t* (*) (List_1_t7888 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54673_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54674_gshared (List_1_t7888 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54674(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7888 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54674_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54675_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54675(__this, method) (( Object_t * (*) (List_1_t7888 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54676_gshared (List_1_t7888 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54676(__this, ___item, method) (( int32_t (*) (List_1_t7888 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54676_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54677_gshared (List_1_t7888 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54677(__this, ___item, method) (( bool (*) (List_1_t7888 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54677_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54678_gshared (List_1_t7888 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54678(__this, ___item, method) (( int32_t (*) (List_1_t7888 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54678_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54679_gshared (List_1_t7888 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54679(__this, ___index, ___item, method) (( void (*) (List_1_t7888 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54679_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54680_gshared (List_1_t7888 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54680(__this, ___item, method) (( void (*) (List_1_t7888 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54680_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54681_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54681(__this, method) (( bool (*) (List_1_t7888 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54681_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54682_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54682(__this, method) (( bool (*) (List_1_t7888 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54682_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54683_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54683(__this, method) (( Object_t * (*) (List_1_t7888 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54683_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54684_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54684(__this, method) (( bool (*) (List_1_t7888 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54684_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54685_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54685(__this, method) (( bool (*) (List_1_t7888 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54685_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54686_gshared (List_1_t7888 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54686(__this, ___index, method) (( Object_t * (*) (List_1_t7888 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54686_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54687_gshared (List_1_t7888 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54687(__this, ___index, ___value, method) (( void (*) (List_1_t7888 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54687_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m54688_gshared (List_1_t7888 * __this, KeyValuePair_2_t6936  ___item, const MethodInfo* method);
#define List_1_Add_m54688(__this, ___item, method) (( void (*) (List_1_t7888 *, KeyValuePair_2_t6936 , const MethodInfo*))List_1_Add_m54688_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54689_gshared (List_1_t7888 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54689(__this, ___newCount, method) (( void (*) (List_1_t7888 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54689_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54690_gshared (List_1_t7888 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54690(__this, ___idx, ___count, method) (( void (*) (List_1_t7888 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54690_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54691_gshared (List_1_t7888 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54691(__this, ___collection, method) (( void (*) (List_1_t7888 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54691_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54692_gshared (List_1_t7888 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54692(__this, ___enumerable, method) (( void (*) (List_1_t7888 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54692_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54693_gshared (List_1_t7888 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54693(__this, ___collection, method) (( void (*) (List_1_t7888 *, Object_t*, const MethodInfo*))List_1_AddRange_m54693_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7891 * List_1_AsReadOnly_m54694_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54694(__this, method) (( ReadOnlyCollection_1_t7891 * (*) (List_1_t7888 *, const MethodInfo*))List_1_AsReadOnly_m54694_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m54695_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_Clear_m54695(__this, method) (( void (*) (List_1_t7888 *, const MethodInfo*))List_1_Clear_m54695_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m54696_gshared (List_1_t7888 * __this, KeyValuePair_2_t6936  ___item, const MethodInfo* method);
#define List_1_Contains_m54696(__this, ___item, method) (( bool (*) (List_1_t7888 *, KeyValuePair_2_t6936 , const MethodInfo*))List_1_Contains_m54696_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54697_gshared (List_1_t7888 * __this, KeyValuePair_2U5BU5D_t7887* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54697(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7888 *, KeyValuePair_2U5BU5D_t7887*, int32_t, const MethodInfo*))List_1_CopyTo_m54697_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6936  List_1_Find_m54698_gshared (List_1_t7888 * __this, Predicate_1_t7895 * ___match, const MethodInfo* method);
#define List_1_Find_m54698(__this, ___match, method) (( KeyValuePair_2_t6936  (*) (List_1_t7888 *, Predicate_1_t7895 *, const MethodInfo*))List_1_Find_m54698_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54699_gshared (Object_t * __this /* static, unused */, Predicate_1_t7895 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54699(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7895 *, const MethodInfo*))List_1_CheckMatch_m54699_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54700_gshared (List_1_t7888 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7895 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54700(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7888 *, int32_t, int32_t, Predicate_1_t7895 *, const MethodInfo*))List_1_GetIndex_m54700_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t7889  List_1_GetEnumerator_m54701_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54701(__this, method) (( Enumerator_t7889  (*) (List_1_t7888 *, const MethodInfo*))List_1_GetEnumerator_m54701_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7888 * List_1_GetRange_m54702_gshared (List_1_t7888 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54702(__this, ___index, ___count, method) (( List_1_t7888 * (*) (List_1_t7888 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54702_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54703_gshared (List_1_t7888 * __this, KeyValuePair_2_t6936  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54703(__this, ___item, method) (( int32_t (*) (List_1_t7888 *, KeyValuePair_2_t6936 , const MethodInfo*))List_1_IndexOf_m54703_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54704_gshared (List_1_t7888 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54704(__this, ___start, ___delta, method) (( void (*) (List_1_t7888 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54704_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54705_gshared (List_1_t7888 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54705(__this, ___index, method) (( void (*) (List_1_t7888 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54705_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54706_gshared (List_1_t7888 * __this, int32_t ___index, KeyValuePair_2_t6936  ___item, const MethodInfo* method);
#define List_1_Insert_m54706(__this, ___index, ___item, method) (( void (*) (List_1_t7888 *, int32_t, KeyValuePair_2_t6936 , const MethodInfo*))List_1_Insert_m54706_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54707_gshared (List_1_t7888 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54707(__this, ___collection, method) (( void (*) (List_1_t7888 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54707_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54708_gshared (List_1_t7888 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54708(__this, ___index, ___collection, method) (( void (*) (List_1_t7888 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54708_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54709_gshared (List_1_t7888 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54709(__this, ___index, ___collection, method) (( void (*) (List_1_t7888 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54709_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54710_gshared (List_1_t7888 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54710(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7888 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54710_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m54711_gshared (List_1_t7888 * __this, KeyValuePair_2_t6936  ___item, const MethodInfo* method);
#define List_1_Remove_m54711(__this, ___item, method) (( bool (*) (List_1_t7888 *, KeyValuePair_2_t6936 , const MethodInfo*))List_1_Remove_m54711_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54712_gshared (List_1_t7888 * __this, Predicate_1_t7895 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54712(__this, ___match, method) (( int32_t (*) (List_1_t7888 *, Predicate_1_t7895 *, const MethodInfo*))List_1_RemoveAll_m54712_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54713_gshared (List_1_t7888 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54713(__this, ___index, method) (( void (*) (List_1_t7888 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54713_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54714_gshared (List_1_t7888 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54714(__this, ___index, ___count, method) (( void (*) (List_1_t7888 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54714_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m54715_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_Reverse_m54715(__this, method) (( void (*) (List_1_t7888 *, const MethodInfo*))List_1_Reverse_m54715_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m54716_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_Sort_m54716(__this, method) (( void (*) (List_1_t7888 *, const MethodInfo*))List_1_Sort_m54716_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54717_gshared (List_1_t7888 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54717(__this, ___comparer, method) (( void (*) (List_1_t7888 *, Object_t*, const MethodInfo*))List_1_Sort_m54717_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54718_gshared (List_1_t7888 * __this, Comparison_1_t7898 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54718(__this, ___comparison, method) (( void (*) (List_1_t7888 *, Comparison_1_t7898 *, const MethodInfo*))List_1_Sort_m54718_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7887* List_1_ToArray_m54719_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_ToArray_m54719(__this, method) (( KeyValuePair_2U5BU5D_t7887* (*) (List_1_t7888 *, const MethodInfo*))List_1_ToArray_m54719_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54720_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54720(__this, method) (( void (*) (List_1_t7888 *, const MethodInfo*))List_1_TrimExcess_m54720_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54721_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54721(__this, method) (( int32_t (*) (List_1_t7888 *, const MethodInfo*))List_1_get_Capacity_m54721_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54722_gshared (List_1_t7888 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54722(__this, ___value, method) (( void (*) (List_1_t7888 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54722_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m54723_gshared (List_1_t7888 * __this, const MethodInfo* method);
#define List_1_get_Count_m54723(__this, method) (( int32_t (*) (List_1_t7888 *, const MethodInfo*))List_1_get_Count_m54723_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6936  List_1_get_Item_m54724_gshared (List_1_t7888 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54724(__this, ___index, method) (( KeyValuePair_2_t6936  (*) (List_1_t7888 *, int32_t, const MethodInfo*))List_1_get_Item_m54724_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54725_gshared (List_1_t7888 * __this, int32_t ___index, KeyValuePair_2_t6936  ___value, const MethodInfo* method);
#define List_1_set_Item_m54725(__this, ___index, ___value, method) (( void (*) (List_1_t7888 *, int32_t, KeyValuePair_2_t6936 , const MethodInfo*))List_1_set_Item_m54725_gshared)(__this, ___index, ___value, method)
