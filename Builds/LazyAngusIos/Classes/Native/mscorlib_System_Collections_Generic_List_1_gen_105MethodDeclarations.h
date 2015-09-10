#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t8271;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t7831;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8270;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7832;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ICollection_1_t10031;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ReadOnlyCollection_1_t8274;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t8278;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IComparer_1_t10032;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t8281;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_88.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void List_1__ctor_m56701_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1__ctor_m56701(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1__ctor_m56701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m56702_gshared (List_1_t8271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m56702(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1__ctor_m56702_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m56703_gshared (List_1_t8271 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m56703(__this, ___capacity, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1__ctor_m56703_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m56704_gshared (List_1_t8271 * __this, KeyValuePair_2U5BU5D_t8270* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m56704(__this, ___data, ___size, method) (( void (*) (List_1_t8271 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))List_1__ctor_m56704_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.cctor()
extern "C" void List_1__cctor_m56705_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m56705(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m56705_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56706_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56706(__this, method) (( Object_t* (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m56707_gshared (List_1_t8271 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m56707(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8271 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m56707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m56708_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56708(__this, method) (( Object_t * (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m56708_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m56709_gshared (List_1_t8271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m56709(__this, ___item, method) (( int32_t (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m56709_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m56710_gshared (List_1_t8271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m56710(__this, ___item, method) (( bool (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m56710_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m56711_gshared (List_1_t8271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m56711(__this, ___item, method) (( int32_t (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m56711_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m56712_gshared (List_1_t8271 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m56712(__this, ___index, ___item, method) (( void (*) (List_1_t8271 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m56712_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m56713_gshared (List_1_t8271 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m56713(__this, ___item, method) (( void (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m56713_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56714_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56714(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m56715_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56715(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m56715_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m56716_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m56716(__this, method) (( Object_t * (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m56716_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m56717_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m56717(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m56717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m56718_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m56718(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m56718_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m56719_gshared (List_1_t8271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m56719(__this, ___index, method) (( Object_t * (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m56719_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m56720_gshared (List_1_t8271 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m56720(__this, ___index, ___value, method) (( void (*) (List_1_t8271 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m56720_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
extern "C" void List_1_Add_m56721_gshared (List_1_t8271 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define List_1_Add_m56721(__this, ___item, method) (( void (*) (List_1_t8271 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Add_m56721_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m56722_gshared (List_1_t8271 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m56722(__this, ___newCount, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m56722_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m56723_gshared (List_1_t8271 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m56723(__this, ___idx, ___count, method) (( void (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m56723_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m56724_gshared (List_1_t8271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m56724(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_AddCollection_m56724_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m56725_gshared (List_1_t8271 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m56725(__this, ___enumerable, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m56725_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m56726_gshared (List_1_t8271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m56726(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_AddRange_m56726_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8274 * List_1_AsReadOnly_m56727_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m56727(__this, method) (( ReadOnlyCollection_1_t8274 * (*) (List_1_t8271 *, const MethodInfo*))List_1_AsReadOnly_m56727_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
extern "C" void List_1_Clear_m56728_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_Clear_m56728(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_Clear_m56728_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
extern "C" bool List_1_Contains_m56729_gshared (List_1_t8271 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define List_1_Contains_m56729(__this, ___item, method) (( bool (*) (List_1_t8271 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Contains_m56729_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m56730_gshared (List_1_t8271 * __this, KeyValuePair_2U5BU5D_t8270* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m56730(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8271 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))List_1_CopyTo_m56730_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7827  List_1_Find_m56731_gshared (List_1_t8271 * __this, Predicate_1_t8278 * ___match, const MethodInfo* method);
#define List_1_Find_m56731(__this, ___match, method) (( KeyValuePair_2_t7827  (*) (List_1_t8271 *, Predicate_1_t8278 *, const MethodInfo*))List_1_Find_m56731_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m56732_gshared (Object_t * __this /* static, unused */, Predicate_1_t8278 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m56732(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8278 *, const MethodInfo*))List_1_CheckMatch_m56732_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m56733_gshared (List_1_t8271 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8278 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m56733(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8271 *, int32_t, int32_t, Predicate_1_t8278 *, const MethodInfo*))List_1_GetIndex_m56733_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
extern "C" Enumerator_t8272  List_1_GetEnumerator_m56734_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m56734(__this, method) (( Enumerator_t8272  (*) (List_1_t8271 *, const MethodInfo*))List_1_GetEnumerator_m56734_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8271 * List_1_GetRange_m56735_gshared (List_1_t8271 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m56735(__this, ___index, ___count, method) (( List_1_t8271 * (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m56735_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m56736_gshared (List_1_t8271 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define List_1_IndexOf_m56736(__this, ___item, method) (( int32_t (*) (List_1_t8271 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_IndexOf_m56736_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m56737_gshared (List_1_t8271 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m56737(__this, ___start, ___delta, method) (( void (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m56737_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m56738_gshared (List_1_t8271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m56738(__this, ___index, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_CheckIndex_m56738_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m56739_gshared (List_1_t8271 * __this, int32_t ___index, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define List_1_Insert_m56739(__this, ___index, ___item, method) (( void (*) (List_1_t8271 *, int32_t, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Insert_m56739_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m56740_gshared (List_1_t8271 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m56740(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m56740_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m56741_gshared (List_1_t8271 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m56741(__this, ___index, ___collection, method) (( void (*) (List_1_t8271 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m56741_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m56742_gshared (List_1_t8271 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m56742(__this, ___index, ___collection, method) (( void (*) (List_1_t8271 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m56742_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m56743_gshared (List_1_t8271 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m56743(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8271 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m56743_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
extern "C" bool List_1_Remove_m56744_gshared (List_1_t8271 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define List_1_Remove_m56744(__this, ___item, method) (( bool (*) (List_1_t8271 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Remove_m56744_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m56745_gshared (List_1_t8271 * __this, Predicate_1_t8278 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m56745(__this, ___match, method) (( int32_t (*) (List_1_t8271 *, Predicate_1_t8278 *, const MethodInfo*))List_1_RemoveAll_m56745_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m56746_gshared (List_1_t8271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m56746(__this, ___index, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_RemoveAt_m56746_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m56747_gshared (List_1_t8271 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m56747(__this, ___index, ___count, method) (( void (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m56747_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Reverse()
extern "C" void List_1_Reverse_m56748_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_Reverse_m56748(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_Reverse_m56748_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort()
extern "C" void List_1_Sort_m56749_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_Sort_m56749(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_Sort_m56749_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m56750_gshared (List_1_t8271 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m56750(__this, ___comparer, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_Sort_m56750_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m56751_gshared (List_1_t8271 * __this, Comparison_1_t8281 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m56751(__this, ___comparison, method) (( void (*) (List_1_t8271 *, Comparison_1_t8281 *, const MethodInfo*))List_1_Sort_m56751_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8270* List_1_ToArray_m56752_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_ToArray_m56752(__this, method) (( KeyValuePair_2U5BU5D_t8270* (*) (List_1_t8271 *, const MethodInfo*))List_1_ToArray_m56752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m56753_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m56753(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_TrimExcess_m56753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m56754_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m56754(__this, method) (( int32_t (*) (List_1_t8271 *, const MethodInfo*))List_1_get_Capacity_m56754_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m56755_gshared (List_1_t8271 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m56755(__this, ___value, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_set_Capacity_m56755_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
extern "C" int32_t List_1_get_Count_m56756_gshared (List_1_t8271 * __this, const MethodInfo* method);
#define List_1_get_Count_m56756(__this, method) (( int32_t (*) (List_1_t8271 *, const MethodInfo*))List_1_get_Count_m56756_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7827  List_1_get_Item_m56757_gshared (List_1_t8271 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m56757(__this, ___index, method) (( KeyValuePair_2_t7827  (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_get_Item_m56757_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m56758_gshared (List_1_t8271 * __this, int32_t ___index, KeyValuePair_2_t7827  ___value, const MethodInfo* method);
#define List_1_set_Item_m56758(__this, ___index, ___value, method) (( void (*) (List_1_t8271 *, int32_t, KeyValuePair_2_t7827 , const MethodInfo*))List_1_set_Item_m56758_gshared)(__this, ___index, ___value, method)
