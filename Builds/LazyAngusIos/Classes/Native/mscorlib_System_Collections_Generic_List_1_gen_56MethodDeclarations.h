#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t4046;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3329;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4548;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t4049;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3932;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t4051;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t4595;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t4054;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m27638_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1__ctor_m27638(__this, method) (( void (*) (List_1_t4046 *, const MethodInfo*))List_1__ctor_m27638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27640_gshared (List_1_t4046 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27640(__this, ___collection, method) (( void (*) (List_1_t4046 *, Object_t*, const MethodInfo*))List_1__ctor_m27640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27642_gshared (List_1_t4046 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27642(__this, ___capacity, method) (( void (*) (List_1_t4046 *, int32_t, const MethodInfo*))List_1__ctor_m27642_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m27644_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27644(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27644_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27645_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27645(__this, method) (( Object_t* (*) (List_1_t4046 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27645_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27646_gshared (List_1_t4046 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27646(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4046 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27646_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27647_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27647(__this, method) (( Object_t * (*) (List_1_t4046 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m27647_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m27648_gshared (List_1_t4046 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m27648(__this, ___item, method) (( int32_t (*) (List_1_t4046 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m27648_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m27649_gshared (List_1_t4046 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m27649(__this, ___item, method) (( bool (*) (List_1_t4046 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m27649_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27650_gshared (List_1_t4046 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m27650(__this, ___item, method) (( int32_t (*) (List_1_t4046 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m27650_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m27651_gshared (List_1_t4046 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m27651(__this, ___index, ___item, method) (( void (*) (List_1_t4046 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m27651_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m27652_gshared (List_1_t4046 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m27652(__this, ___item, method) (( void (*) (List_1_t4046 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m27652_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27653_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27653(__this, method) (( bool (*) (List_1_t4046 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27654_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27654(__this, method) (( bool (*) (List_1_t4046 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m27654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27655_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m27655(__this, method) (( Object_t * (*) (List_1_t4046 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m27655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27656_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m27656(__this, method) (( bool (*) (List_1_t4046 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m27656_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27657_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m27657(__this, method) (( bool (*) (List_1_t4046 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m27657_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27658_gshared (List_1_t4046 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m27658(__this, ___index, method) (( Object_t * (*) (List_1_t4046 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m27658_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m27659_gshared (List_1_t4046 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m27659(__this, ___index, ___value, method) (( void (*) (List_1_t4046 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m27659_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m27660_gshared (List_1_t4046 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Add_m27660(__this, ___item, method) (( void (*) (List_1_t4046 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Add_m27660_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27662_gshared (List_1_t4046 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m27662(__this, ___newCount, method) (( void (*) (List_1_t4046 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m27662_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27664_gshared (List_1_t4046 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m27664(__this, ___collection, method) (( void (*) (List_1_t4046 *, Object_t*, const MethodInfo*))List_1_AddCollection_m27664_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m27666_gshared (List_1_t4046 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m27666(__this, ___enumerable, method) (( void (*) (List_1_t4046 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m27666_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27668_gshared (List_1_t4046 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m27668(__this, ___collection, method) (( void (*) (List_1_t4046 *, Object_t*, const MethodInfo*))List_1_AddRange_m27668_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t4049 * List_1_AsReadOnly_m27670_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m27670(__this, method) (( ReadOnlyCollection_1_t4049 * (*) (List_1_t4046 *, const MethodInfo*))List_1_AsReadOnly_m27670_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m27671_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_Clear_m27671(__this, method) (( void (*) (List_1_t4046 *, const MethodInfo*))List_1_Clear_m27671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m27672_gshared (List_1_t4046 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Contains_m27672(__this, ___item, method) (( bool (*) (List_1_t4046 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Contains_m27672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27673_gshared (List_1_t4046 * __this, KeyValuePair_2U5BU5D_t3932* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m27673(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4046 *, KeyValuePair_2U5BU5D_t3932*, int32_t, const MethodInfo*))List_1_CopyTo_m27673_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t40  List_1_Find_m27675_gshared (List_1_t4046 * __this, Predicate_1_t4051 * ___match, const MethodInfo* method);
#define List_1_Find_m27675(__this, ___match, method) (( KeyValuePair_2_t40  (*) (List_1_t4046 *, Predicate_1_t4051 *, const MethodInfo*))List_1_Find_m27675_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m27677_gshared (Object_t * __this /* static, unused */, Predicate_1_t4051 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m27677(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4051 *, const MethodInfo*))List_1_CheckMatch_m27677_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27679_gshared (List_1_t4046 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4051 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m27679(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4046 *, int32_t, int32_t, Predicate_1_t4051 *, const MethodInfo*))List_1_GetIndex_m27679_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t4047  List_1_GetEnumerator_m27680_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m27680(__this, method) (( Enumerator_t4047  (*) (List_1_t4046 *, const MethodInfo*))List_1_GetEnumerator_m27680_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27681_gshared (List_1_t4046 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_IndexOf_m27681(__this, ___item, method) (( int32_t (*) (List_1_t4046 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_IndexOf_m27681_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27683_gshared (List_1_t4046 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m27683(__this, ___start, ___delta, method) (( void (*) (List_1_t4046 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m27683_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m27685_gshared (List_1_t4046 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m27685(__this, ___index, method) (( void (*) (List_1_t4046 *, int32_t, const MethodInfo*))List_1_CheckIndex_m27685_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27686_gshared (List_1_t4046 * __this, int32_t ___index, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Insert_m27686(__this, ___index, ___item, method) (( void (*) (List_1_t4046 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_Insert_m27686_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m27688_gshared (List_1_t4046 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27688(__this, ___collection, method) (( void (*) (List_1_t4046 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27688_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m27689_gshared (List_1_t4046 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Remove_m27689(__this, ___item, method) (( bool (*) (List_1_t4046 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Remove_m27689_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m27691_gshared (List_1_t4046 * __this, Predicate_1_t4051 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m27691(__this, ___match, method) (( int32_t (*) (List_1_t4046 *, Predicate_1_t4051 *, const MethodInfo*))List_1_RemoveAll_m27691_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m27692_gshared (List_1_t4046 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m27692(__this, ___index, method) (( void (*) (List_1_t4046 *, int32_t, const MethodInfo*))List_1_RemoveAt_m27692_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m27694_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_Reverse_m27694(__this, method) (( void (*) (List_1_t4046 *, const MethodInfo*))List_1_Reverse_m27694_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m27696_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_Sort_m27696(__this, method) (( void (*) (List_1_t4046 *, const MethodInfo*))List_1_Sort_m27696_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27698_gshared (List_1_t4046 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m27698(__this, ___comparer, method) (( void (*) (List_1_t4046 *, Object_t*, const MethodInfo*))List_1_Sort_m27698_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m27700_gshared (List_1_t4046 * __this, Comparison_1_t4054 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m27700(__this, ___comparison, method) (( void (*) (List_1_t4046 *, Comparison_1_t4054 *, const MethodInfo*))List_1_Sort_m27700_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t3932* List_1_ToArray_m27702_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_ToArray_m27702(__this, method) (( KeyValuePair_2U5BU5D_t3932* (*) (List_1_t4046 *, const MethodInfo*))List_1_ToArray_m27702_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m27704_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m27704(__this, method) (( void (*) (List_1_t4046 *, const MethodInfo*))List_1_TrimExcess_m27704_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27706_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m27706(__this, method) (( int32_t (*) (List_1_t4046 *, const MethodInfo*))List_1_get_Capacity_m27706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m27708_gshared (List_1_t4046 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m27708(__this, ___value, method) (( void (*) (List_1_t4046 *, int32_t, const MethodInfo*))List_1_set_Capacity_m27708_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m27709_gshared (List_1_t4046 * __this, const MethodInfo* method);
#define List_1_get_Count_m27709(__this, method) (( int32_t (*) (List_1_t4046 *, const MethodInfo*))List_1_get_Count_m27709_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t40  List_1_get_Item_m27710_gshared (List_1_t4046 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m27710(__this, ___index, method) (( KeyValuePair_2_t40  (*) (List_1_t4046 *, int32_t, const MethodInfo*))List_1_get_Item_m27710_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m27711_gshared (List_1_t4046 * __this, int32_t ___index, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define List_1_set_Item_m27711(__this, ___index, ___value, method) (( void (*) (List_1_t4046 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_set_Item_m27711_gshared)(__this, ___index, ___value, method)
