#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t8011;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t7791;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8010;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t7792;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t10011;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t8014;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t8018;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IComparer_1_t10012;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t8021;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_80.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void List_1__ctor_m53593_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1__ctor_m53593(__this, method) (( void (*) (List_1_t8011 *, const MethodInfo*))List_1__ctor_m53593_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53594_gshared (List_1_t8011 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53594(__this, ___collection, method) (( void (*) (List_1_t8011 *, Object_t*, const MethodInfo*))List_1__ctor_m53594_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53595_gshared (List_1_t8011 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53595(__this, ___capacity, method) (( void (*) (List_1_t8011 *, int32_t, const MethodInfo*))List_1__ctor_m53595_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53596_gshared (List_1_t8011 * __this, KeyValuePair_2U5BU5D_t8010* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53596(__this, ___data, ___size, method) (( void (*) (List_1_t8011 *, KeyValuePair_2U5BU5D_t8010*, int32_t, const MethodInfo*))List_1__ctor_m53596_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C" void List_1__cctor_m53597_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53597(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53597_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53598_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53598(__this, method) (( Object_t* (*) (List_1_t8011 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53598_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53599_gshared (List_1_t8011 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53599(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8011 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53599_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53600_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53600(__this, method) (( Object_t * (*) (List_1_t8011 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53600_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53601_gshared (List_1_t8011 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53601(__this, ___item, method) (( int32_t (*) (List_1_t8011 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53601_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53602_gshared (List_1_t8011 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53602(__this, ___item, method) (( bool (*) (List_1_t8011 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53602_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53603_gshared (List_1_t8011 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53603(__this, ___item, method) (( int32_t (*) (List_1_t8011 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53603_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53604_gshared (List_1_t8011 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53604(__this, ___index, ___item, method) (( void (*) (List_1_t8011 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53604_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53605_gshared (List_1_t8011 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53605(__this, ___item, method) (( void (*) (List_1_t8011 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53605_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53606_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53606(__this, method) (( bool (*) (List_1_t8011 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53607_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53607(__this, method) (( bool (*) (List_1_t8011 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53607_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53608_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53608(__this, method) (( Object_t * (*) (List_1_t8011 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53608_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53609_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53609(__this, method) (( bool (*) (List_1_t8011 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53609_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53610_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53610(__this, method) (( bool (*) (List_1_t8011 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53610_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53611_gshared (List_1_t8011 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53611(__this, ___index, method) (( Object_t * (*) (List_1_t8011 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53611_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53612_gshared (List_1_t8011 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53612(__this, ___index, ___value, method) (( void (*) (List_1_t8011 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53612_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C" void List_1_Add_m53613_gshared (List_1_t8011 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define List_1_Add_m53613(__this, ___item, method) (( void (*) (List_1_t8011 *, KeyValuePair_2_t7787 , const MethodInfo*))List_1_Add_m53613_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53614_gshared (List_1_t8011 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53614(__this, ___newCount, method) (( void (*) (List_1_t8011 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53614_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53615_gshared (List_1_t8011 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53615(__this, ___idx, ___count, method) (( void (*) (List_1_t8011 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53615_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53616_gshared (List_1_t8011 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53616(__this, ___collection, method) (( void (*) (List_1_t8011 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53616_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53617_gshared (List_1_t8011 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53617(__this, ___enumerable, method) (( void (*) (List_1_t8011 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53618_gshared (List_1_t8011 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53618(__this, ___collection, method) (( void (*) (List_1_t8011 *, Object_t*, const MethodInfo*))List_1_AddRange_m53618_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8014 * List_1_AsReadOnly_m53619_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53619(__this, method) (( ReadOnlyCollection_1_t8014 * (*) (List_1_t8011 *, const MethodInfo*))List_1_AsReadOnly_m53619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C" void List_1_Clear_m53620_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_Clear_m53620(__this, method) (( void (*) (List_1_t8011 *, const MethodInfo*))List_1_Clear_m53620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C" bool List_1_Contains_m53621_gshared (List_1_t8011 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define List_1_Contains_m53621(__this, ___item, method) (( bool (*) (List_1_t8011 *, KeyValuePair_2_t7787 , const MethodInfo*))List_1_Contains_m53621_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53622_gshared (List_1_t8011 * __this, KeyValuePair_2U5BU5D_t8010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53622(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8011 *, KeyValuePair_2U5BU5D_t8010*, int32_t, const MethodInfo*))List_1_CopyTo_m53622_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7787  List_1_Find_m53623_gshared (List_1_t8011 * __this, Predicate_1_t8018 * ___match, const MethodInfo* method);
#define List_1_Find_m53623(__this, ___match, method) (( KeyValuePair_2_t7787  (*) (List_1_t8011 *, Predicate_1_t8018 *, const MethodInfo*))List_1_Find_m53623_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53624_gshared (Object_t * __this /* static, unused */, Predicate_1_t8018 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53624(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8018 *, const MethodInfo*))List_1_CheckMatch_m53624_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53625_gshared (List_1_t8011 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8018 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53625(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8011 *, int32_t, int32_t, Predicate_1_t8018 *, const MethodInfo*))List_1_GetIndex_m53625_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C" Enumerator_t8012  List_1_GetEnumerator_m53626_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53626(__this, method) (( Enumerator_t8012  (*) (List_1_t8011 *, const MethodInfo*))List_1_GetEnumerator_m53626_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8011 * List_1_GetRange_m53627_gshared (List_1_t8011 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53627(__this, ___index, ___count, method) (( List_1_t8011 * (*) (List_1_t8011 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53627_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53628_gshared (List_1_t8011 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53628(__this, ___item, method) (( int32_t (*) (List_1_t8011 *, KeyValuePair_2_t7787 , const MethodInfo*))List_1_IndexOf_m53628_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53629_gshared (List_1_t8011 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53629(__this, ___start, ___delta, method) (( void (*) (List_1_t8011 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53629_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53630_gshared (List_1_t8011 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53630(__this, ___index, method) (( void (*) (List_1_t8011 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53630_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53631_gshared (List_1_t8011 * __this, int32_t ___index, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define List_1_Insert_m53631(__this, ___index, ___item, method) (( void (*) (List_1_t8011 *, int32_t, KeyValuePair_2_t7787 , const MethodInfo*))List_1_Insert_m53631_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53632_gshared (List_1_t8011 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53632(__this, ___collection, method) (( void (*) (List_1_t8011 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53632_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53633_gshared (List_1_t8011 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53633(__this, ___index, ___collection, method) (( void (*) (List_1_t8011 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53633_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53634_gshared (List_1_t8011 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53634(__this, ___index, ___collection, method) (( void (*) (List_1_t8011 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53634_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53635_gshared (List_1_t8011 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53635(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8011 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53635_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C" bool List_1_Remove_m53636_gshared (List_1_t8011 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define List_1_Remove_m53636(__this, ___item, method) (( bool (*) (List_1_t8011 *, KeyValuePair_2_t7787 , const MethodInfo*))List_1_Remove_m53636_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53637_gshared (List_1_t8011 * __this, Predicate_1_t8018 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53637(__this, ___match, method) (( int32_t (*) (List_1_t8011 *, Predicate_1_t8018 *, const MethodInfo*))List_1_RemoveAll_m53637_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53638_gshared (List_1_t8011 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53638(__this, ___index, method) (( void (*) (List_1_t8011 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53638_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53639_gshared (List_1_t8011 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53639(__this, ___index, ___count, method) (( void (*) (List_1_t8011 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53639_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C" void List_1_Reverse_m53640_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_Reverse_m53640(__this, method) (( void (*) (List_1_t8011 *, const MethodInfo*))List_1_Reverse_m53640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C" void List_1_Sort_m53641_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_Sort_m53641(__this, method) (( void (*) (List_1_t8011 *, const MethodInfo*))List_1_Sort_m53641_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53642_gshared (List_1_t8011 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53642(__this, ___comparer, method) (( void (*) (List_1_t8011 *, Object_t*, const MethodInfo*))List_1_Sort_m53642_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53643_gshared (List_1_t8011 * __this, Comparison_1_t8021 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53643(__this, ___comparison, method) (( void (*) (List_1_t8011 *, Comparison_1_t8021 *, const MethodInfo*))List_1_Sort_m53643_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8010* List_1_ToArray_m53644_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_ToArray_m53644(__this, method) (( KeyValuePair_2U5BU5D_t8010* (*) (List_1_t8011 *, const MethodInfo*))List_1_ToArray_m53644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53645_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53645(__this, method) (( void (*) (List_1_t8011 *, const MethodInfo*))List_1_TrimExcess_m53645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53646_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53646(__this, method) (( int32_t (*) (List_1_t8011 *, const MethodInfo*))List_1_get_Capacity_m53646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53647_gshared (List_1_t8011 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53647(__this, ___value, method) (( void (*) (List_1_t8011 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53647_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C" int32_t List_1_get_Count_m53648_gshared (List_1_t8011 * __this, const MethodInfo* method);
#define List_1_get_Count_m53648(__this, method) (( int32_t (*) (List_1_t8011 *, const MethodInfo*))List_1_get_Count_m53648_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7787  List_1_get_Item_m53649_gshared (List_1_t8011 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53649(__this, ___index, method) (( KeyValuePair_2_t7787  (*) (List_1_t8011 *, int32_t, const MethodInfo*))List_1_get_Item_m53649_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53650_gshared (List_1_t8011 * __this, int32_t ___index, KeyValuePair_2_t7787  ___value, const MethodInfo* method);
#define List_1_set_Item_m53650(__this, ___index, ___value, method) (( void (*) (List_1_t8011 *, int32_t, KeyValuePair_2_t7787 , const MethodInfo*))List_1_set_Item_m53650_gshared)(__this, ___index, ___value, method)
