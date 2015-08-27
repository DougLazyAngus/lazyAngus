#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t7759;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t7265;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7758;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t7266;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t9399;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t7762;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t7766;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IComparer_1_t9400;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t7769;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void List_1__ctor_m52802_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1__ctor_m52802(__this, method) (( void (*) (List_1_t7759 *, const MethodInfo*))List_1__ctor_m52802_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m52803_gshared (List_1_t7759 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m52803(__this, ___collection, method) (( void (*) (List_1_t7759 *, Object_t*, const MethodInfo*))List_1__ctor_m52803_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m52804_gshared (List_1_t7759 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m52804(__this, ___capacity, method) (( void (*) (List_1_t7759 *, int32_t, const MethodInfo*))List_1__ctor_m52804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m52805_gshared (List_1_t7759 * __this, KeyValuePair_2U5BU5D_t7758* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m52805(__this, ___data, ___size, method) (( void (*) (List_1_t7759 *, KeyValuePair_2U5BU5D_t7758*, int32_t, const MethodInfo*))List_1__ctor_m52805_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C" void List_1__cctor_m52806_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m52806(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52806_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52807_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52807(__this, method) (( Object_t* (*) (List_1_t7759 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52807_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m52808_gshared (List_1_t7759 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m52808(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7759 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52808_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m52809_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52809(__this, method) (( Object_t * (*) (List_1_t7759 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52809_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m52810_gshared (List_1_t7759 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m52810(__this, ___item, method) (( int32_t (*) (List_1_t7759 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52810_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m52811_gshared (List_1_t7759 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m52811(__this, ___item, method) (( bool (*) (List_1_t7759 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52811_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m52812_gshared (List_1_t7759 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m52812(__this, ___item, method) (( int32_t (*) (List_1_t7759 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52812_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m52813_gshared (List_1_t7759 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m52813(__this, ___index, ___item, method) (( void (*) (List_1_t7759 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52813_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m52814_gshared (List_1_t7759 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m52814(__this, ___item, method) (( void (*) (List_1_t7759 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52814_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52815_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52815(__this, method) (( bool (*) (List_1_t7759 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m52816_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52816(__this, method) (( bool (*) (List_1_t7759 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m52817_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m52817(__this, method) (( Object_t * (*) (List_1_t7759 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m52818_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m52818(__this, method) (( bool (*) (List_1_t7759 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m52819_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m52819(__this, method) (( bool (*) (List_1_t7759 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m52820_gshared (List_1_t7759 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m52820(__this, ___index, method) (( Object_t * (*) (List_1_t7759 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52820_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m52821_gshared (List_1_t7759 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m52821(__this, ___index, ___value, method) (( void (*) (List_1_t7759 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52821_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C" void List_1_Add_m52822_gshared (List_1_t7759 * __this, KeyValuePair_2_t7261  ___item, const MethodInfo* method);
#define List_1_Add_m52822(__this, ___item, method) (( void (*) (List_1_t7759 *, KeyValuePair_2_t7261 , const MethodInfo*))List_1_Add_m52822_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m52823_gshared (List_1_t7759 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m52823(__this, ___newCount, method) (( void (*) (List_1_t7759 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m52824_gshared (List_1_t7759 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m52824(__this, ___idx, ___count, method) (( void (*) (List_1_t7759 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52824_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m52825_gshared (List_1_t7759 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m52825(__this, ___collection, method) (( void (*) (List_1_t7759 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m52826_gshared (List_1_t7759 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m52826(__this, ___enumerable, method) (( void (*) (List_1_t7759 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52826_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m52827_gshared (List_1_t7759 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m52827(__this, ___collection, method) (( void (*) (List_1_t7759 *, Object_t*, const MethodInfo*))List_1_AddRange_m52827_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7762 * List_1_AsReadOnly_m52828_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m52828(__this, method) (( ReadOnlyCollection_1_t7762 * (*) (List_1_t7759 *, const MethodInfo*))List_1_AsReadOnly_m52828_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C" void List_1_Clear_m52829_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_Clear_m52829(__this, method) (( void (*) (List_1_t7759 *, const MethodInfo*))List_1_Clear_m52829_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C" bool List_1_Contains_m52830_gshared (List_1_t7759 * __this, KeyValuePair_2_t7261  ___item, const MethodInfo* method);
#define List_1_Contains_m52830(__this, ___item, method) (( bool (*) (List_1_t7759 *, KeyValuePair_2_t7261 , const MethodInfo*))List_1_Contains_m52830_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m52831_gshared (List_1_t7759 * __this, KeyValuePair_2U5BU5D_t7758* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m52831(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7759 *, KeyValuePair_2U5BU5D_t7758*, int32_t, const MethodInfo*))List_1_CopyTo_m52831_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7261  List_1_Find_m52832_gshared (List_1_t7759 * __this, Predicate_1_t7766 * ___match, const MethodInfo* method);
#define List_1_Find_m52832(__this, ___match, method) (( KeyValuePair_2_t7261  (*) (List_1_t7759 *, Predicate_1_t7766 *, const MethodInfo*))List_1_Find_m52832_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m52833_gshared (Object_t * __this /* static, unused */, Predicate_1_t7766 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m52833(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7766 *, const MethodInfo*))List_1_CheckMatch_m52833_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m52834_gshared (List_1_t7759 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7766 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m52834(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7759 *, int32_t, int32_t, Predicate_1_t7766 *, const MethodInfo*))List_1_GetIndex_m52834_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C" Enumerator_t7760  List_1_GetEnumerator_m52835_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m52835(__this, method) (( Enumerator_t7760  (*) (List_1_t7759 *, const MethodInfo*))List_1_GetEnumerator_m52835_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7759 * List_1_GetRange_m52836_gshared (List_1_t7759 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m52836(__this, ___index, ___count, method) (( List_1_t7759 * (*) (List_1_t7759 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52836_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m52837_gshared (List_1_t7759 * __this, KeyValuePair_2_t7261  ___item, const MethodInfo* method);
#define List_1_IndexOf_m52837(__this, ___item, method) (( int32_t (*) (List_1_t7759 *, KeyValuePair_2_t7261 , const MethodInfo*))List_1_IndexOf_m52837_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m52838_gshared (List_1_t7759 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m52838(__this, ___start, ___delta, method) (( void (*) (List_1_t7759 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m52839_gshared (List_1_t7759 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m52839(__this, ___index, method) (( void (*) (List_1_t7759 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m52840_gshared (List_1_t7759 * __this, int32_t ___index, KeyValuePair_2_t7261  ___item, const MethodInfo* method);
#define List_1_Insert_m52840(__this, ___index, ___item, method) (( void (*) (List_1_t7759 *, int32_t, KeyValuePair_2_t7261 , const MethodInfo*))List_1_Insert_m52840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m52841_gshared (List_1_t7759 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m52841(__this, ___collection, method) (( void (*) (List_1_t7759 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m52842_gshared (List_1_t7759 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m52842(__this, ___index, ___collection, method) (( void (*) (List_1_t7759 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52842_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m52843_gshared (List_1_t7759 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m52843(__this, ___index, ___collection, method) (( void (*) (List_1_t7759 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52843_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m52844_gshared (List_1_t7759 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m52844(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7759 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52844_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C" bool List_1_Remove_m52845_gshared (List_1_t7759 * __this, KeyValuePair_2_t7261  ___item, const MethodInfo* method);
#define List_1_Remove_m52845(__this, ___item, method) (( bool (*) (List_1_t7759 *, KeyValuePair_2_t7261 , const MethodInfo*))List_1_Remove_m52845_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m52846_gshared (List_1_t7759 * __this, Predicate_1_t7766 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m52846(__this, ___match, method) (( int32_t (*) (List_1_t7759 *, Predicate_1_t7766 *, const MethodInfo*))List_1_RemoveAll_m52846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m52847_gshared (List_1_t7759 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m52847(__this, ___index, method) (( void (*) (List_1_t7759 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52847_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m52848_gshared (List_1_t7759 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m52848(__this, ___index, ___count, method) (( void (*) (List_1_t7759 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52848_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C" void List_1_Reverse_m52849_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_Reverse_m52849(__this, method) (( void (*) (List_1_t7759 *, const MethodInfo*))List_1_Reverse_m52849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C" void List_1_Sort_m52850_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_Sort_m52850(__this, method) (( void (*) (List_1_t7759 *, const MethodInfo*))List_1_Sort_m52850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m52851_gshared (List_1_t7759 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m52851(__this, ___comparer, method) (( void (*) (List_1_t7759 *, Object_t*, const MethodInfo*))List_1_Sort_m52851_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m52852_gshared (List_1_t7759 * __this, Comparison_1_t7769 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m52852(__this, ___comparison, method) (( void (*) (List_1_t7759 *, Comparison_1_t7769 *, const MethodInfo*))List_1_Sort_m52852_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7758* List_1_ToArray_m52853_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_ToArray_m52853(__this, method) (( KeyValuePair_2U5BU5D_t7758* (*) (List_1_t7759 *, const MethodInfo*))List_1_ToArray_m52853_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m52854_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m52854(__this, method) (( void (*) (List_1_t7759 *, const MethodInfo*))List_1_TrimExcess_m52854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m52855_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m52855(__this, method) (( int32_t (*) (List_1_t7759 *, const MethodInfo*))List_1_get_Capacity_m52855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m52856_gshared (List_1_t7759 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m52856(__this, ___value, method) (( void (*) (List_1_t7759 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C" int32_t List_1_get_Count_m52857_gshared (List_1_t7759 * __this, const MethodInfo* method);
#define List_1_get_Count_m52857(__this, method) (( int32_t (*) (List_1_t7759 *, const MethodInfo*))List_1_get_Count_m52857_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7261  List_1_get_Item_m52858_gshared (List_1_t7759 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m52858(__this, ___index, method) (( KeyValuePair_2_t7261  (*) (List_1_t7759 *, int32_t, const MethodInfo*))List_1_get_Item_m52858_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m52859_gshared (List_1_t7759 * __this, int32_t ___index, KeyValuePair_2_t7261  ___value, const MethodInfo* method);
#define List_1_set_Item_m52859(__this, ___index, ___value, method) (( void (*) (List_1_t7759 *, int32_t, KeyValuePair_2_t7261 , const MethodInfo*))List_1_set_Item_m52859_gshared)(__this, ___index, ___value, method)
