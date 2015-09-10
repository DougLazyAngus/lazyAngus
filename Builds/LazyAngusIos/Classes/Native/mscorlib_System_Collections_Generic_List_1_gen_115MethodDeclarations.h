#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct List_1_t8585;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerable_1_t8576;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8584;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8577;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ICollection_1_t10059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ReadOnlyCollection_1_t8588;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t8592;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IComparer_1_t10060;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t8595;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void List_1__ctor_m60602_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1__ctor_m60602(__this, method) (( void (*) (List_1_t8585 *, const MethodInfo*))List_1__ctor_m60602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60603_gshared (List_1_t8585 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60603(__this, ___collection, method) (( void (*) (List_1_t8585 *, Object_t*, const MethodInfo*))List_1__ctor_m60603_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m60604_gshared (List_1_t8585 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m60604(__this, ___capacity, method) (( void (*) (List_1_t8585 *, int32_t, const MethodInfo*))List_1__ctor_m60604_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60605_gshared (List_1_t8585 * __this, KeyValuePair_2U5BU5D_t8584* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60605(__this, ___data, ___size, method) (( void (*) (List_1_t8585 *, KeyValuePair_2U5BU5D_t8584*, int32_t, const MethodInfo*))List_1__ctor_m60605_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.cctor()
extern "C" void List_1__cctor_m60606_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60606(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60606_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60607_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60607(__this, method) (( Object_t* (*) (List_1_t8585 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60607_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60608_gshared (List_1_t8585 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60608(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8585 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60608_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60609_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60609(__this, method) (( Object_t * (*) (List_1_t8585 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60609_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60610_gshared (List_1_t8585 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60610(__this, ___item, method) (( int32_t (*) (List_1_t8585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60610_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60611_gshared (List_1_t8585 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60611(__this, ___item, method) (( bool (*) (List_1_t8585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60611_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60612_gshared (List_1_t8585 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60612(__this, ___item, method) (( int32_t (*) (List_1_t8585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60612_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60613_gshared (List_1_t8585 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60613(__this, ___index, ___item, method) (( void (*) (List_1_t8585 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60613_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60614_gshared (List_1_t8585 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60614(__this, ___item, method) (( void (*) (List_1_t8585 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60614_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60615_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60615(__this, method) (( bool (*) (List_1_t8585 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60616_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60616(__this, method) (( bool (*) (List_1_t8585 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60616_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60617_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60617(__this, method) (( Object_t * (*) (List_1_t8585 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60618_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60618(__this, method) (( bool (*) (List_1_t8585 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60618_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60619_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60619(__this, method) (( bool (*) (List_1_t8585 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60619_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60620_gshared (List_1_t8585 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60620(__this, ___index, method) (( Object_t * (*) (List_1_t8585 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60620_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60621_gshared (List_1_t8585 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60621(__this, ___index, ___value, method) (( void (*) (List_1_t8585 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60621_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Add(T)
extern "C" void List_1_Add_m60622_gshared (List_1_t8585 * __this, KeyValuePair_2_t7610  ___item, const MethodInfo* method);
#define List_1_Add_m60622(__this, ___item, method) (( void (*) (List_1_t8585 *, KeyValuePair_2_t7610 , const MethodInfo*))List_1_Add_m60622_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60623_gshared (List_1_t8585 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60623(__this, ___newCount, method) (( void (*) (List_1_t8585 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60623_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60624_gshared (List_1_t8585 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60624(__this, ___idx, ___count, method) (( void (*) (List_1_t8585 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60624_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60625_gshared (List_1_t8585 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60625(__this, ___collection, method) (( void (*) (List_1_t8585 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60625_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60626_gshared (List_1_t8585 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60626(__this, ___enumerable, method) (( void (*) (List_1_t8585 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60626_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60627_gshared (List_1_t8585 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60627(__this, ___collection, method) (( void (*) (List_1_t8585 *, Object_t*, const MethodInfo*))List_1_AddRange_m60627_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8588 * List_1_AsReadOnly_m60628_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60628(__this, method) (( ReadOnlyCollection_1_t8588 * (*) (List_1_t8585 *, const MethodInfo*))List_1_AsReadOnly_m60628_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Clear()
extern "C" void List_1_Clear_m60629_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_Clear_m60629(__this, method) (( void (*) (List_1_t8585 *, const MethodInfo*))List_1_Clear_m60629_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Contains(T)
extern "C" bool List_1_Contains_m60630_gshared (List_1_t8585 * __this, KeyValuePair_2_t7610  ___item, const MethodInfo* method);
#define List_1_Contains_m60630(__this, ___item, method) (( bool (*) (List_1_t8585 *, KeyValuePair_2_t7610 , const MethodInfo*))List_1_Contains_m60630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60631_gshared (List_1_t8585 * __this, KeyValuePair_2U5BU5D_t8584* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60631(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8585 *, KeyValuePair_2U5BU5D_t8584*, int32_t, const MethodInfo*))List_1_CopyTo_m60631_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7610  List_1_Find_m60632_gshared (List_1_t8585 * __this, Predicate_1_t8592 * ___match, const MethodInfo* method);
#define List_1_Find_m60632(__this, ___match, method) (( KeyValuePair_2_t7610  (*) (List_1_t8585 *, Predicate_1_t8592 *, const MethodInfo*))List_1_Find_m60632_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60633_gshared (Object_t * __this /* static, unused */, Predicate_1_t8592 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60633(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8592 *, const MethodInfo*))List_1_CheckMatch_m60633_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60634_gshared (List_1_t8585 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8592 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60634(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8585 *, int32_t, int32_t, Predicate_1_t8592 *, const MethodInfo*))List_1_GetIndex_m60634_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetEnumerator()
extern "C" Enumerator_t8586  List_1_GetEnumerator_m60635_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60635(__this, method) (( Enumerator_t8586  (*) (List_1_t8585 *, const MethodInfo*))List_1_GetEnumerator_m60635_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8585 * List_1_GetRange_m60636_gshared (List_1_t8585 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60636(__this, ___index, ___count, method) (( List_1_t8585 * (*) (List_1_t8585 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60636_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60637_gshared (List_1_t8585 * __this, KeyValuePair_2_t7610  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60637(__this, ___item, method) (( int32_t (*) (List_1_t8585 *, KeyValuePair_2_t7610 , const MethodInfo*))List_1_IndexOf_m60637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60638_gshared (List_1_t8585 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60638(__this, ___start, ___delta, method) (( void (*) (List_1_t8585 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60638_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60639_gshared (List_1_t8585 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60639(__this, ___index, method) (( void (*) (List_1_t8585 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60639_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60640_gshared (List_1_t8585 * __this, int32_t ___index, KeyValuePair_2_t7610  ___item, const MethodInfo* method);
#define List_1_Insert_m60640(__this, ___index, ___item, method) (( void (*) (List_1_t8585 *, int32_t, KeyValuePair_2_t7610 , const MethodInfo*))List_1_Insert_m60640_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60641_gshared (List_1_t8585 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60641(__this, ___collection, method) (( void (*) (List_1_t8585 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60641_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60642_gshared (List_1_t8585 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60642(__this, ___index, ___collection, method) (( void (*) (List_1_t8585 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60643_gshared (List_1_t8585 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60643(__this, ___index, ___collection, method) (( void (*) (List_1_t8585 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60643_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60644_gshared (List_1_t8585 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60644(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8585 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60644_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Remove(T)
extern "C" bool List_1_Remove_m60645_gshared (List_1_t8585 * __this, KeyValuePair_2_t7610  ___item, const MethodInfo* method);
#define List_1_Remove_m60645(__this, ___item, method) (( bool (*) (List_1_t8585 *, KeyValuePair_2_t7610 , const MethodInfo*))List_1_Remove_m60645_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60646_gshared (List_1_t8585 * __this, Predicate_1_t8592 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60646(__this, ___match, method) (( int32_t (*) (List_1_t8585 *, Predicate_1_t8592 *, const MethodInfo*))List_1_RemoveAll_m60646_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60647_gshared (List_1_t8585 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60647(__this, ___index, method) (( void (*) (List_1_t8585 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60648_gshared (List_1_t8585 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60648(__this, ___index, ___count, method) (( void (*) (List_1_t8585 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60648_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Reverse()
extern "C" void List_1_Reverse_m60649_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_Reverse_m60649(__this, method) (( void (*) (List_1_t8585 *, const MethodInfo*))List_1_Reverse_m60649_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort()
extern "C" void List_1_Sort_m60650_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_Sort_m60650(__this, method) (( void (*) (List_1_t8585 *, const MethodInfo*))List_1_Sort_m60650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60651_gshared (List_1_t8585 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60651(__this, ___comparer, method) (( void (*) (List_1_t8585 *, Object_t*, const MethodInfo*))List_1_Sort_m60651_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60652_gshared (List_1_t8585 * __this, Comparison_1_t8595 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60652(__this, ___comparison, method) (( void (*) (List_1_t8585 *, Comparison_1_t8595 *, const MethodInfo*))List_1_Sort_m60652_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8584* List_1_ToArray_m60653_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_ToArray_m60653(__this, method) (( KeyValuePair_2U5BU5D_t8584* (*) (List_1_t8585 *, const MethodInfo*))List_1_ToArray_m60653_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::TrimExcess()
extern "C" void List_1_TrimExcess_m60654_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60654(__this, method) (( void (*) (List_1_t8585 *, const MethodInfo*))List_1_TrimExcess_m60654_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60655_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60655(__this, method) (( int32_t (*) (List_1_t8585 *, const MethodInfo*))List_1_get_Capacity_m60655_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60656_gshared (List_1_t8585 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60656(__this, ___value, method) (( void (*) (List_1_t8585 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60656_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Count()
extern "C" int32_t List_1_get_Count_m60657_gshared (List_1_t8585 * __this, const MethodInfo* method);
#define List_1_get_Count_m60657(__this, method) (( int32_t (*) (List_1_t8585 *, const MethodInfo*))List_1_get_Count_m60657_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7610  List_1_get_Item_m60658_gshared (List_1_t8585 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60658(__this, ___index, method) (( KeyValuePair_2_t7610  (*) (List_1_t8585 *, int32_t, const MethodInfo*))List_1_get_Item_m60658_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60659_gshared (List_1_t8585 * __this, int32_t ___index, KeyValuePair_2_t7610  ___value, const MethodInfo* method);
#define List_1_set_Item_m60659(__this, ___index, ___value, method) (( void (*) (List_1_t8585 *, int32_t, KeyValuePair_2_t7610 , const MethodInfo*))List_1_set_Item_m60659_gshared)(__this, ___index, ___value, method)
