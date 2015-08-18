#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct List_1_t8001;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerable_1_t7992;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8000;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7993;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ICollection_1_t9411;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ReadOnlyCollection_1_t8004;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t8008;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IComparer_1_t9412;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t8011;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_94.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void List_1__ctor_m55802_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1__ctor_m55802(__this, method) (( void (*) (List_1_t8001 *, const MethodInfo*))List_1__ctor_m55802_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55803_gshared (List_1_t8001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55803(__this, ___collection, method) (( void (*) (List_1_t8001 *, Object_t*, const MethodInfo*))List_1__ctor_m55803_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55804_gshared (List_1_t8001 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55804(__this, ___capacity, method) (( void (*) (List_1_t8001 *, int32_t, const MethodInfo*))List_1__ctor_m55804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55805_gshared (List_1_t8001 * __this, KeyValuePair_2U5BU5D_t8000* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55805(__this, ___data, ___size, method) (( void (*) (List_1_t8001 *, KeyValuePair_2U5BU5D_t8000*, int32_t, const MethodInfo*))List_1__ctor_m55805_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.cctor()
extern "C" void List_1__cctor_m55806_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55806(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55806_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55807_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55807(__this, method) (( Object_t* (*) (List_1_t8001 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55807_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55808_gshared (List_1_t8001 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55808(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8001 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55808_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55809_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55809(__this, method) (( Object_t * (*) (List_1_t8001 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55809_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55810_gshared (List_1_t8001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55810(__this, ___item, method) (( int32_t (*) (List_1_t8001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55810_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55811_gshared (List_1_t8001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55811(__this, ___item, method) (( bool (*) (List_1_t8001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55811_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55812_gshared (List_1_t8001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55812(__this, ___item, method) (( int32_t (*) (List_1_t8001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55812_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55813_gshared (List_1_t8001 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55813(__this, ___index, ___item, method) (( void (*) (List_1_t8001 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55813_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55814_gshared (List_1_t8001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55814(__this, ___item, method) (( void (*) (List_1_t8001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55814_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55815_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55815(__this, method) (( bool (*) (List_1_t8001 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55816_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55816(__this, method) (( bool (*) (List_1_t8001 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55817_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55817(__this, method) (( Object_t * (*) (List_1_t8001 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55818_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55818(__this, method) (( bool (*) (List_1_t8001 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55819_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55819(__this, method) (( bool (*) (List_1_t8001 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55820_gshared (List_1_t8001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55820(__this, ___index, method) (( Object_t * (*) (List_1_t8001 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55820_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55821_gshared (List_1_t8001 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55821(__this, ___index, ___value, method) (( void (*) (List_1_t8001 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55821_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Add(T)
extern "C" void List_1_Add_m55822_gshared (List_1_t8001 * __this, KeyValuePair_2_t7026  ___item, const MethodInfo* method);
#define List_1_Add_m55822(__this, ___item, method) (( void (*) (List_1_t8001 *, KeyValuePair_2_t7026 , const MethodInfo*))List_1_Add_m55822_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55823_gshared (List_1_t8001 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55823(__this, ___newCount, method) (( void (*) (List_1_t8001 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55824_gshared (List_1_t8001 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55824(__this, ___idx, ___count, method) (( void (*) (List_1_t8001 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55824_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55825_gshared (List_1_t8001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55825(__this, ___collection, method) (( void (*) (List_1_t8001 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55826_gshared (List_1_t8001 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55826(__this, ___enumerable, method) (( void (*) (List_1_t8001 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55826_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55827_gshared (List_1_t8001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55827(__this, ___collection, method) (( void (*) (List_1_t8001 *, Object_t*, const MethodInfo*))List_1_AddRange_m55827_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8004 * List_1_AsReadOnly_m55828_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55828(__this, method) (( ReadOnlyCollection_1_t8004 * (*) (List_1_t8001 *, const MethodInfo*))List_1_AsReadOnly_m55828_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Clear()
extern "C" void List_1_Clear_m55829_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_Clear_m55829(__this, method) (( void (*) (List_1_t8001 *, const MethodInfo*))List_1_Clear_m55829_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Contains(T)
extern "C" bool List_1_Contains_m55830_gshared (List_1_t8001 * __this, KeyValuePair_2_t7026  ___item, const MethodInfo* method);
#define List_1_Contains_m55830(__this, ___item, method) (( bool (*) (List_1_t8001 *, KeyValuePair_2_t7026 , const MethodInfo*))List_1_Contains_m55830_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55831_gshared (List_1_t8001 * __this, KeyValuePair_2U5BU5D_t8000* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55831(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8001 *, KeyValuePair_2U5BU5D_t8000*, int32_t, const MethodInfo*))List_1_CopyTo_m55831_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7026  List_1_Find_m55832_gshared (List_1_t8001 * __this, Predicate_1_t8008 * ___match, const MethodInfo* method);
#define List_1_Find_m55832(__this, ___match, method) (( KeyValuePair_2_t7026  (*) (List_1_t8001 *, Predicate_1_t8008 *, const MethodInfo*))List_1_Find_m55832_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55833_gshared (Object_t * __this /* static, unused */, Predicate_1_t8008 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55833(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8008 *, const MethodInfo*))List_1_CheckMatch_m55833_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55834_gshared (List_1_t8001 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8008 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55834(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8001 *, int32_t, int32_t, Predicate_1_t8008 *, const MethodInfo*))List_1_GetIndex_m55834_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetEnumerator()
extern "C" Enumerator_t8002  List_1_GetEnumerator_m55835_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55835(__this, method) (( Enumerator_t8002  (*) (List_1_t8001 *, const MethodInfo*))List_1_GetEnumerator_m55835_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8001 * List_1_GetRange_m55836_gshared (List_1_t8001 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55836(__this, ___index, ___count, method) (( List_1_t8001 * (*) (List_1_t8001 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55836_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55837_gshared (List_1_t8001 * __this, KeyValuePair_2_t7026  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55837(__this, ___item, method) (( int32_t (*) (List_1_t8001 *, KeyValuePair_2_t7026 , const MethodInfo*))List_1_IndexOf_m55837_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55838_gshared (List_1_t8001 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55838(__this, ___start, ___delta, method) (( void (*) (List_1_t8001 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55839_gshared (List_1_t8001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55839(__this, ___index, method) (( void (*) (List_1_t8001 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55840_gshared (List_1_t8001 * __this, int32_t ___index, KeyValuePair_2_t7026  ___item, const MethodInfo* method);
#define List_1_Insert_m55840(__this, ___index, ___item, method) (( void (*) (List_1_t8001 *, int32_t, KeyValuePair_2_t7026 , const MethodInfo*))List_1_Insert_m55840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55841_gshared (List_1_t8001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55841(__this, ___collection, method) (( void (*) (List_1_t8001 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55842_gshared (List_1_t8001 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55842(__this, ___index, ___collection, method) (( void (*) (List_1_t8001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55842_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55843_gshared (List_1_t8001 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55843(__this, ___index, ___collection, method) (( void (*) (List_1_t8001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55843_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55844_gshared (List_1_t8001 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55844(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55844_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Remove(T)
extern "C" bool List_1_Remove_m55845_gshared (List_1_t8001 * __this, KeyValuePair_2_t7026  ___item, const MethodInfo* method);
#define List_1_Remove_m55845(__this, ___item, method) (( bool (*) (List_1_t8001 *, KeyValuePair_2_t7026 , const MethodInfo*))List_1_Remove_m55845_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55846_gshared (List_1_t8001 * __this, Predicate_1_t8008 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55846(__this, ___match, method) (( int32_t (*) (List_1_t8001 *, Predicate_1_t8008 *, const MethodInfo*))List_1_RemoveAll_m55846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55847_gshared (List_1_t8001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55847(__this, ___index, method) (( void (*) (List_1_t8001 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55847_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55848_gshared (List_1_t8001 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55848(__this, ___index, ___count, method) (( void (*) (List_1_t8001 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55848_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Reverse()
extern "C" void List_1_Reverse_m55849_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_Reverse_m55849(__this, method) (( void (*) (List_1_t8001 *, const MethodInfo*))List_1_Reverse_m55849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort()
extern "C" void List_1_Sort_m55850_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_Sort_m55850(__this, method) (( void (*) (List_1_t8001 *, const MethodInfo*))List_1_Sort_m55850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55851_gshared (List_1_t8001 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55851(__this, ___comparer, method) (( void (*) (List_1_t8001 *, Object_t*, const MethodInfo*))List_1_Sort_m55851_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55852_gshared (List_1_t8001 * __this, Comparison_1_t8011 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55852(__this, ___comparison, method) (( void (*) (List_1_t8001 *, Comparison_1_t8011 *, const MethodInfo*))List_1_Sort_m55852_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8000* List_1_ToArray_m55853_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_ToArray_m55853(__this, method) (( KeyValuePair_2U5BU5D_t8000* (*) (List_1_t8001 *, const MethodInfo*))List_1_ToArray_m55853_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55854_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55854(__this, method) (( void (*) (List_1_t8001 *, const MethodInfo*))List_1_TrimExcess_m55854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55855_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55855(__this, method) (( int32_t (*) (List_1_t8001 *, const MethodInfo*))List_1_get_Capacity_m55855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55856_gshared (List_1_t8001 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55856(__this, ___value, method) (( void (*) (List_1_t8001 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Count()
extern "C" int32_t List_1_get_Count_m55857_gshared (List_1_t8001 * __this, const MethodInfo* method);
#define List_1_get_Count_m55857(__this, method) (( int32_t (*) (List_1_t8001 *, const MethodInfo*))List_1_get_Count_m55857_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7026  List_1_get_Item_m55858_gshared (List_1_t8001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55858(__this, ___index, method) (( KeyValuePair_2_t7026  (*) (List_1_t8001 *, int32_t, const MethodInfo*))List_1_get_Item_m55858_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55859_gshared (List_1_t8001 * __this, int32_t ___index, KeyValuePair_2_t7026  ___value, const MethodInfo* method);
#define List_1_set_Item_m55859(__this, ___index, ___value, method) (( void (*) (List_1_t8001 *, int32_t, KeyValuePair_2_t7026 , const MethodInfo*))List_1_set_Item_m55859_gshared)(__this, ___index, ___value, method)
