#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t8466;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t7846;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t8465;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7847;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t10036;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t8469;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t8473;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IComparer_1_t10037;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t8476;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_94.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void List_1__ctor_m59262_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1__ctor_m59262(__this, method) (( void (*) (List_1_t8466 *, const MethodInfo*))List_1__ctor_m59262_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m59263_gshared (List_1_t8466 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m59263(__this, ___collection, method) (( void (*) (List_1_t8466 *, Object_t*, const MethodInfo*))List_1__ctor_m59263_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m59264_gshared (List_1_t8466 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m59264(__this, ___capacity, method) (( void (*) (List_1_t8466 *, int32_t, const MethodInfo*))List_1__ctor_m59264_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m59265_gshared (List_1_t8466 * __this, KeyValuePair_2U5BU5D_t8465* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m59265(__this, ___data, ___size, method) (( void (*) (List_1_t8466 *, KeyValuePair_2U5BU5D_t8465*, int32_t, const MethodInfo*))List_1__ctor_m59265_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C" void List_1__cctor_m59266_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m59266(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m59266_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59267_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59267(__this, method) (( Object_t* (*) (List_1_t8466 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59267_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m59268_gshared (List_1_t8466 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m59268(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8466 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m59268_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m59269_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59269(__this, method) (( Object_t * (*) (List_1_t8466 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m59269_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m59270_gshared (List_1_t8466 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m59270(__this, ___item, method) (( int32_t (*) (List_1_t8466 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m59270_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m59271_gshared (List_1_t8466 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m59271(__this, ___item, method) (( bool (*) (List_1_t8466 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m59271_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m59272_gshared (List_1_t8466 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m59272(__this, ___item, method) (( int32_t (*) (List_1_t8466 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m59272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m59273_gshared (List_1_t8466 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m59273(__this, ___index, ___item, method) (( void (*) (List_1_t8466 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m59273_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m59274_gshared (List_1_t8466 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m59274(__this, ___item, method) (( void (*) (List_1_t8466 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m59274_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59275_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59275(__this, method) (( bool (*) (List_1_t8466 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59275_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m59276_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59276(__this, method) (( bool (*) (List_1_t8466 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m59276_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m59277_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m59277(__this, method) (( Object_t * (*) (List_1_t8466 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m59277_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m59278_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m59278(__this, method) (( bool (*) (List_1_t8466 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m59278_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m59279_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m59279(__this, method) (( bool (*) (List_1_t8466 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m59279_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m59280_gshared (List_1_t8466 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m59280(__this, ___index, method) (( Object_t * (*) (List_1_t8466 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m59280_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m59281_gshared (List_1_t8466 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m59281(__this, ___index, ___value, method) (( void (*) (List_1_t8466 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m59281_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C" void List_1_Add_m59282_gshared (List_1_t8466 * __this, KeyValuePair_2_t7571  ___item, const MethodInfo* method);
#define List_1_Add_m59282(__this, ___item, method) (( void (*) (List_1_t8466 *, KeyValuePair_2_t7571 , const MethodInfo*))List_1_Add_m59282_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m59283_gshared (List_1_t8466 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m59283(__this, ___newCount, method) (( void (*) (List_1_t8466 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m59283_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m59284_gshared (List_1_t8466 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m59284(__this, ___idx, ___count, method) (( void (*) (List_1_t8466 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m59284_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m59285_gshared (List_1_t8466 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m59285(__this, ___collection, method) (( void (*) (List_1_t8466 *, Object_t*, const MethodInfo*))List_1_AddCollection_m59285_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m59286_gshared (List_1_t8466 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m59286(__this, ___enumerable, method) (( void (*) (List_1_t8466 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m59286_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m59287_gshared (List_1_t8466 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m59287(__this, ___collection, method) (( void (*) (List_1_t8466 *, Object_t*, const MethodInfo*))List_1_AddRange_m59287_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8469 * List_1_AsReadOnly_m59288_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m59288(__this, method) (( ReadOnlyCollection_1_t8469 * (*) (List_1_t8466 *, const MethodInfo*))List_1_AsReadOnly_m59288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C" void List_1_Clear_m59289_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_Clear_m59289(__this, method) (( void (*) (List_1_t8466 *, const MethodInfo*))List_1_Clear_m59289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C" bool List_1_Contains_m59290_gshared (List_1_t8466 * __this, KeyValuePair_2_t7571  ___item, const MethodInfo* method);
#define List_1_Contains_m59290(__this, ___item, method) (( bool (*) (List_1_t8466 *, KeyValuePair_2_t7571 , const MethodInfo*))List_1_Contains_m59290_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m59291_gshared (List_1_t8466 * __this, KeyValuePair_2U5BU5D_t8465* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m59291(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8466 *, KeyValuePair_2U5BU5D_t8465*, int32_t, const MethodInfo*))List_1_CopyTo_m59291_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7571  List_1_Find_m59292_gshared (List_1_t8466 * __this, Predicate_1_t8473 * ___match, const MethodInfo* method);
#define List_1_Find_m59292(__this, ___match, method) (( KeyValuePair_2_t7571  (*) (List_1_t8466 *, Predicate_1_t8473 *, const MethodInfo*))List_1_Find_m59292_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m59293_gshared (Object_t * __this /* static, unused */, Predicate_1_t8473 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m59293(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8473 *, const MethodInfo*))List_1_CheckMatch_m59293_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m59294_gshared (List_1_t8466 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8473 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m59294(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8466 *, int32_t, int32_t, Predicate_1_t8473 *, const MethodInfo*))List_1_GetIndex_m59294_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C" Enumerator_t8467  List_1_GetEnumerator_m59295_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m59295(__this, method) (( Enumerator_t8467  (*) (List_1_t8466 *, const MethodInfo*))List_1_GetEnumerator_m59295_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8466 * List_1_GetRange_m59296_gshared (List_1_t8466 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m59296(__this, ___index, ___count, method) (( List_1_t8466 * (*) (List_1_t8466 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m59296_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m59297_gshared (List_1_t8466 * __this, KeyValuePair_2_t7571  ___item, const MethodInfo* method);
#define List_1_IndexOf_m59297(__this, ___item, method) (( int32_t (*) (List_1_t8466 *, KeyValuePair_2_t7571 , const MethodInfo*))List_1_IndexOf_m59297_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m59298_gshared (List_1_t8466 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m59298(__this, ___start, ___delta, method) (( void (*) (List_1_t8466 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m59298_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m59299_gshared (List_1_t8466 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m59299(__this, ___index, method) (( void (*) (List_1_t8466 *, int32_t, const MethodInfo*))List_1_CheckIndex_m59299_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m59300_gshared (List_1_t8466 * __this, int32_t ___index, KeyValuePair_2_t7571  ___item, const MethodInfo* method);
#define List_1_Insert_m59300(__this, ___index, ___item, method) (( void (*) (List_1_t8466 *, int32_t, KeyValuePair_2_t7571 , const MethodInfo*))List_1_Insert_m59300_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m59301_gshared (List_1_t8466 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m59301(__this, ___collection, method) (( void (*) (List_1_t8466 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m59301_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m59302_gshared (List_1_t8466 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m59302(__this, ___index, ___collection, method) (( void (*) (List_1_t8466 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m59302_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m59303_gshared (List_1_t8466 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m59303(__this, ___index, ___collection, method) (( void (*) (List_1_t8466 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m59303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m59304_gshared (List_1_t8466 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m59304(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8466 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m59304_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C" bool List_1_Remove_m59305_gshared (List_1_t8466 * __this, KeyValuePair_2_t7571  ___item, const MethodInfo* method);
#define List_1_Remove_m59305(__this, ___item, method) (( bool (*) (List_1_t8466 *, KeyValuePair_2_t7571 , const MethodInfo*))List_1_Remove_m59305_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m59306_gshared (List_1_t8466 * __this, Predicate_1_t8473 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m59306(__this, ___match, method) (( int32_t (*) (List_1_t8466 *, Predicate_1_t8473 *, const MethodInfo*))List_1_RemoveAll_m59306_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m59307_gshared (List_1_t8466 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m59307(__this, ___index, method) (( void (*) (List_1_t8466 *, int32_t, const MethodInfo*))List_1_RemoveAt_m59307_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m59308_gshared (List_1_t8466 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m59308(__this, ___index, ___count, method) (( void (*) (List_1_t8466 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m59308_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C" void List_1_Reverse_m59309_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_Reverse_m59309(__this, method) (( void (*) (List_1_t8466 *, const MethodInfo*))List_1_Reverse_m59309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C" void List_1_Sort_m59310_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_Sort_m59310(__this, method) (( void (*) (List_1_t8466 *, const MethodInfo*))List_1_Sort_m59310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m59311_gshared (List_1_t8466 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m59311(__this, ___comparer, method) (( void (*) (List_1_t8466 *, Object_t*, const MethodInfo*))List_1_Sort_m59311_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m59312_gshared (List_1_t8466 * __this, Comparison_1_t8476 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m59312(__this, ___comparison, method) (( void (*) (List_1_t8466 *, Comparison_1_t8476 *, const MethodInfo*))List_1_Sort_m59312_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8465* List_1_ToArray_m59313_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_ToArray_m59313(__this, method) (( KeyValuePair_2U5BU5D_t8465* (*) (List_1_t8466 *, const MethodInfo*))List_1_ToArray_m59313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C" void List_1_TrimExcess_m59314_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m59314(__this, method) (( void (*) (List_1_t8466 *, const MethodInfo*))List_1_TrimExcess_m59314_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m59315_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m59315(__this, method) (( int32_t (*) (List_1_t8466 *, const MethodInfo*))List_1_get_Capacity_m59315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m59316_gshared (List_1_t8466 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m59316(__this, ___value, method) (( void (*) (List_1_t8466 *, int32_t, const MethodInfo*))List_1_set_Capacity_m59316_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C" int32_t List_1_get_Count_m59317_gshared (List_1_t8466 * __this, const MethodInfo* method);
#define List_1_get_Count_m59317(__this, method) (( int32_t (*) (List_1_t8466 *, const MethodInfo*))List_1_get_Count_m59317_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7571  List_1_get_Item_m59318_gshared (List_1_t8466 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m59318(__this, ___index, method) (( KeyValuePair_2_t7571  (*) (List_1_t8466 *, int32_t, const MethodInfo*))List_1_get_Item_m59318_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m59319_gshared (List_1_t8466 * __this, int32_t ___index, KeyValuePair_2_t7571  ___value, const MethodInfo* method);
#define List_1_set_Item_m59319(__this, ___index, ___value, method) (( void (*) (List_1_t8466 *, int32_t, KeyValuePair_2_t7571 , const MethodInfo*))List_1_set_Item_m59319_gshared)(__this, ___index, ___value, method)
