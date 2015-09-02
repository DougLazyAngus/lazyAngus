#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t8005;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t7996;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8004;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7997;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t9454;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t8008;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t8012;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t9455;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t8015;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_95.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m55868_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1__ctor_m55868(__this, method) (( void (*) (List_1_t8005 *, const MethodInfo*))List_1__ctor_m55868_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55869_gshared (List_1_t8005 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55869(__this, ___collection, method) (( void (*) (List_1_t8005 *, Object_t*, const MethodInfo*))List_1__ctor_m55869_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55870_gshared (List_1_t8005 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55870(__this, ___capacity, method) (( void (*) (List_1_t8005 *, int32_t, const MethodInfo*))List_1__ctor_m55870_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55871_gshared (List_1_t8005 * __this, KeyValuePair_2U5BU5D_t8004* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55871(__this, ___data, ___size, method) (( void (*) (List_1_t8005 *, KeyValuePair_2U5BU5D_t8004*, int32_t, const MethodInfo*))List_1__ctor_m55871_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m55872_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55872(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55872_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55873_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55873(__this, method) (( Object_t* (*) (List_1_t8005 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55874_gshared (List_1_t8005 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55874(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8005 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55874_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55875_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55875(__this, method) (( Object_t * (*) (List_1_t8005 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55875_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55876_gshared (List_1_t8005 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55876(__this, ___item, method) (( int32_t (*) (List_1_t8005 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55876_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55877_gshared (List_1_t8005 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55877(__this, ___item, method) (( bool (*) (List_1_t8005 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55877_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55878_gshared (List_1_t8005 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55878(__this, ___item, method) (( int32_t (*) (List_1_t8005 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55878_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55879_gshared (List_1_t8005 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55879(__this, ___index, ___item, method) (( void (*) (List_1_t8005 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55879_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55880_gshared (List_1_t8005 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55880(__this, ___item, method) (( void (*) (List_1_t8005 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55880_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55881_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55881(__this, method) (( bool (*) (List_1_t8005 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55881_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55882_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55882(__this, method) (( bool (*) (List_1_t8005 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55882_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55883_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55883(__this, method) (( Object_t * (*) (List_1_t8005 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55884_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55884(__this, method) (( bool (*) (List_1_t8005 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55885_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55885(__this, method) (( bool (*) (List_1_t8005 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55885_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55886_gshared (List_1_t8005 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55886(__this, ___index, method) (( Object_t * (*) (List_1_t8005 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55886_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55887_gshared (List_1_t8005 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55887(__this, ___index, ___value, method) (( void (*) (List_1_t8005 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55887_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m55888_gshared (List_1_t8005 * __this, KeyValuePair_2_t7053  ___item, const MethodInfo* method);
#define List_1_Add_m55888(__this, ___item, method) (( void (*) (List_1_t8005 *, KeyValuePair_2_t7053 , const MethodInfo*))List_1_Add_m55888_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55889_gshared (List_1_t8005 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55889(__this, ___newCount, method) (( void (*) (List_1_t8005 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55889_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55890_gshared (List_1_t8005 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55890(__this, ___idx, ___count, method) (( void (*) (List_1_t8005 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55890_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55891_gshared (List_1_t8005 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55891(__this, ___collection, method) (( void (*) (List_1_t8005 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55891_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55892_gshared (List_1_t8005 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55892(__this, ___enumerable, method) (( void (*) (List_1_t8005 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55892_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55893_gshared (List_1_t8005 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55893(__this, ___collection, method) (( void (*) (List_1_t8005 *, Object_t*, const MethodInfo*))List_1_AddRange_m55893_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8008 * List_1_AsReadOnly_m55894_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55894(__this, method) (( ReadOnlyCollection_1_t8008 * (*) (List_1_t8005 *, const MethodInfo*))List_1_AsReadOnly_m55894_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m55895_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_Clear_m55895(__this, method) (( void (*) (List_1_t8005 *, const MethodInfo*))List_1_Clear_m55895_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m55896_gshared (List_1_t8005 * __this, KeyValuePair_2_t7053  ___item, const MethodInfo* method);
#define List_1_Contains_m55896(__this, ___item, method) (( bool (*) (List_1_t8005 *, KeyValuePair_2_t7053 , const MethodInfo*))List_1_Contains_m55896_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55897_gshared (List_1_t8005 * __this, KeyValuePair_2U5BU5D_t8004* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55897(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8005 *, KeyValuePair_2U5BU5D_t8004*, int32_t, const MethodInfo*))List_1_CopyTo_m55897_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7053  List_1_Find_m55898_gshared (List_1_t8005 * __this, Predicate_1_t8012 * ___match, const MethodInfo* method);
#define List_1_Find_m55898(__this, ___match, method) (( KeyValuePair_2_t7053  (*) (List_1_t8005 *, Predicate_1_t8012 *, const MethodInfo*))List_1_Find_m55898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55899_gshared (Object_t * __this /* static, unused */, Predicate_1_t8012 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55899(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8012 *, const MethodInfo*))List_1_CheckMatch_m55899_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55900_gshared (List_1_t8005 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8012 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55900(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8005 *, int32_t, int32_t, Predicate_1_t8012 *, const MethodInfo*))List_1_GetIndex_m55900_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t8006  List_1_GetEnumerator_m55901_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55901(__this, method) (( Enumerator_t8006  (*) (List_1_t8005 *, const MethodInfo*))List_1_GetEnumerator_m55901_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8005 * List_1_GetRange_m55902_gshared (List_1_t8005 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55902(__this, ___index, ___count, method) (( List_1_t8005 * (*) (List_1_t8005 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55902_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55903_gshared (List_1_t8005 * __this, KeyValuePair_2_t7053  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55903(__this, ___item, method) (( int32_t (*) (List_1_t8005 *, KeyValuePair_2_t7053 , const MethodInfo*))List_1_IndexOf_m55903_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55904_gshared (List_1_t8005 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55904(__this, ___start, ___delta, method) (( void (*) (List_1_t8005 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55904_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55905_gshared (List_1_t8005 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55905(__this, ___index, method) (( void (*) (List_1_t8005 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55905_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55906_gshared (List_1_t8005 * __this, int32_t ___index, KeyValuePair_2_t7053  ___item, const MethodInfo* method);
#define List_1_Insert_m55906(__this, ___index, ___item, method) (( void (*) (List_1_t8005 *, int32_t, KeyValuePair_2_t7053 , const MethodInfo*))List_1_Insert_m55906_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55907_gshared (List_1_t8005 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55907(__this, ___collection, method) (( void (*) (List_1_t8005 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55907_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55908_gshared (List_1_t8005 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55908(__this, ___index, ___collection, method) (( void (*) (List_1_t8005 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55908_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55909_gshared (List_1_t8005 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55909(__this, ___index, ___collection, method) (( void (*) (List_1_t8005 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55909_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55910_gshared (List_1_t8005 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55910(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8005 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55910_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m55911_gshared (List_1_t8005 * __this, KeyValuePair_2_t7053  ___item, const MethodInfo* method);
#define List_1_Remove_m55911(__this, ___item, method) (( bool (*) (List_1_t8005 *, KeyValuePair_2_t7053 , const MethodInfo*))List_1_Remove_m55911_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55912_gshared (List_1_t8005 * __this, Predicate_1_t8012 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55912(__this, ___match, method) (( int32_t (*) (List_1_t8005 *, Predicate_1_t8012 *, const MethodInfo*))List_1_RemoveAll_m55912_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55913_gshared (List_1_t8005 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55913(__this, ___index, method) (( void (*) (List_1_t8005 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55913_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55914_gshared (List_1_t8005 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55914(__this, ___index, ___count, method) (( void (*) (List_1_t8005 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55914_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m55915_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_Reverse_m55915(__this, method) (( void (*) (List_1_t8005 *, const MethodInfo*))List_1_Reverse_m55915_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m55916_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_Sort_m55916(__this, method) (( void (*) (List_1_t8005 *, const MethodInfo*))List_1_Sort_m55916_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55917_gshared (List_1_t8005 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55917(__this, ___comparer, method) (( void (*) (List_1_t8005 *, Object_t*, const MethodInfo*))List_1_Sort_m55917_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55918_gshared (List_1_t8005 * __this, Comparison_1_t8015 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55918(__this, ___comparison, method) (( void (*) (List_1_t8005 *, Comparison_1_t8015 *, const MethodInfo*))List_1_Sort_m55918_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8004* List_1_ToArray_m55919_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_ToArray_m55919(__this, method) (( KeyValuePair_2U5BU5D_t8004* (*) (List_1_t8005 *, const MethodInfo*))List_1_ToArray_m55919_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55920_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55920(__this, method) (( void (*) (List_1_t8005 *, const MethodInfo*))List_1_TrimExcess_m55920_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55921_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55921(__this, method) (( int32_t (*) (List_1_t8005 *, const MethodInfo*))List_1_get_Capacity_m55921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55922_gshared (List_1_t8005 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55922(__this, ___value, method) (( void (*) (List_1_t8005 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55922_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m55923_gshared (List_1_t8005 * __this, const MethodInfo* method);
#define List_1_get_Count_m55923(__this, method) (( int32_t (*) (List_1_t8005 *, const MethodInfo*))List_1_get_Count_m55923_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7053  List_1_get_Item_m55924_gshared (List_1_t8005 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55924(__this, ___index, method) (( KeyValuePair_2_t7053  (*) (List_1_t8005 *, int32_t, const MethodInfo*))List_1_get_Item_m55924_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55925_gshared (List_1_t8005 * __this, int32_t ___index, KeyValuePair_2_t7053  ___value, const MethodInfo* method);
#define List_1_set_Item_m55925(__this, ___index, ___value, method) (( void (*) (List_1_t8005 *, int32_t, KeyValuePair_2_t7053 , const MethodInfo*))List_1_set_Item_m55925_gshared)(__this, ___index, ___value, method)
