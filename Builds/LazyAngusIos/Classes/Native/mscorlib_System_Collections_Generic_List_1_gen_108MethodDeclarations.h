#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct List_1_t7927;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerable_1_t7918;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t7926;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7919;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ICollection_1_t9318;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ReadOnlyCollection_1_t7930;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t7934;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IComparer_1_t9319;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t7937;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_91.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void List_1__ctor_m55105_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1__ctor_m55105(__this, method) (( void (*) (List_1_t7927 *, const MethodInfo*))List_1__ctor_m55105_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55106_gshared (List_1_t7927 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55106(__this, ___collection, method) (( void (*) (List_1_t7927 *, Object_t*, const MethodInfo*))List_1__ctor_m55106_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55107_gshared (List_1_t7927 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55107(__this, ___capacity, method) (( void (*) (List_1_t7927 *, int32_t, const MethodInfo*))List_1__ctor_m55107_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55108_gshared (List_1_t7927 * __this, KeyValuePair_2U5BU5D_t7926* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55108(__this, ___data, ___size, method) (( void (*) (List_1_t7927 *, KeyValuePair_2U5BU5D_t7926*, int32_t, const MethodInfo*))List_1__ctor_m55108_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.cctor()
extern "C" void List_1__cctor_m55109_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55109(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55109_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55110_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55110(__this, method) (( Object_t* (*) (List_1_t7927 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55110_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55111_gshared (List_1_t7927 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55111(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7927 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55111_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55112_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55112(__this, method) (( Object_t * (*) (List_1_t7927 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55113_gshared (List_1_t7927 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55113(__this, ___item, method) (( int32_t (*) (List_1_t7927 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55113_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55114_gshared (List_1_t7927 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55114(__this, ___item, method) (( bool (*) (List_1_t7927 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55114_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55115_gshared (List_1_t7927 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55115(__this, ___item, method) (( int32_t (*) (List_1_t7927 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55116_gshared (List_1_t7927 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55116(__this, ___index, ___item, method) (( void (*) (List_1_t7927 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55116_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55117_gshared (List_1_t7927 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55117(__this, ___item, method) (( void (*) (List_1_t7927 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55117_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55118_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55118(__this, method) (( bool (*) (List_1_t7927 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55118_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55119_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55119(__this, method) (( bool (*) (List_1_t7927 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55119_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55120_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55120(__this, method) (( Object_t * (*) (List_1_t7927 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55121_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55121(__this, method) (( bool (*) (List_1_t7927 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55122_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55122(__this, method) (( bool (*) (List_1_t7927 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55122_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55123_gshared (List_1_t7927 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55123(__this, ___index, method) (( Object_t * (*) (List_1_t7927 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55123_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55124_gshared (List_1_t7927 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55124(__this, ___index, ___value, method) (( void (*) (List_1_t7927 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55124_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Add(T)
extern "C" void List_1_Add_m55125_gshared (List_1_t7927 * __this, KeyValuePair_2_t6952  ___item, const MethodInfo* method);
#define List_1_Add_m55125(__this, ___item, method) (( void (*) (List_1_t7927 *, KeyValuePair_2_t6952 , const MethodInfo*))List_1_Add_m55125_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55126_gshared (List_1_t7927 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55126(__this, ___newCount, method) (( void (*) (List_1_t7927 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55126_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55127_gshared (List_1_t7927 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55127(__this, ___idx, ___count, method) (( void (*) (List_1_t7927 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55127_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55128_gshared (List_1_t7927 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55128(__this, ___collection, method) (( void (*) (List_1_t7927 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55128_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55129_gshared (List_1_t7927 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55129(__this, ___enumerable, method) (( void (*) (List_1_t7927 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55129_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55130_gshared (List_1_t7927 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55130(__this, ___collection, method) (( void (*) (List_1_t7927 *, Object_t*, const MethodInfo*))List_1_AddRange_m55130_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7930 * List_1_AsReadOnly_m55131_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55131(__this, method) (( ReadOnlyCollection_1_t7930 * (*) (List_1_t7927 *, const MethodInfo*))List_1_AsReadOnly_m55131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Clear()
extern "C" void List_1_Clear_m55132_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_Clear_m55132(__this, method) (( void (*) (List_1_t7927 *, const MethodInfo*))List_1_Clear_m55132_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Contains(T)
extern "C" bool List_1_Contains_m55133_gshared (List_1_t7927 * __this, KeyValuePair_2_t6952  ___item, const MethodInfo* method);
#define List_1_Contains_m55133(__this, ___item, method) (( bool (*) (List_1_t7927 *, KeyValuePair_2_t6952 , const MethodInfo*))List_1_Contains_m55133_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55134_gshared (List_1_t7927 * __this, KeyValuePair_2U5BU5D_t7926* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55134(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7927 *, KeyValuePair_2U5BU5D_t7926*, int32_t, const MethodInfo*))List_1_CopyTo_m55134_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6952  List_1_Find_m55135_gshared (List_1_t7927 * __this, Predicate_1_t7934 * ___match, const MethodInfo* method);
#define List_1_Find_m55135(__this, ___match, method) (( KeyValuePair_2_t6952  (*) (List_1_t7927 *, Predicate_1_t7934 *, const MethodInfo*))List_1_Find_m55135_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55136_gshared (Object_t * __this /* static, unused */, Predicate_1_t7934 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55136(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7934 *, const MethodInfo*))List_1_CheckMatch_m55136_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55137_gshared (List_1_t7927 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7934 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55137(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7927 *, int32_t, int32_t, Predicate_1_t7934 *, const MethodInfo*))List_1_GetIndex_m55137_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetEnumerator()
extern "C" Enumerator_t7928  List_1_GetEnumerator_m55138_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55138(__this, method) (( Enumerator_t7928  (*) (List_1_t7927 *, const MethodInfo*))List_1_GetEnumerator_m55138_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7927 * List_1_GetRange_m55139_gshared (List_1_t7927 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55139(__this, ___index, ___count, method) (( List_1_t7927 * (*) (List_1_t7927 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55139_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55140_gshared (List_1_t7927 * __this, KeyValuePair_2_t6952  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55140(__this, ___item, method) (( int32_t (*) (List_1_t7927 *, KeyValuePair_2_t6952 , const MethodInfo*))List_1_IndexOf_m55140_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55141_gshared (List_1_t7927 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55141(__this, ___start, ___delta, method) (( void (*) (List_1_t7927 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55141_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55142_gshared (List_1_t7927 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55142(__this, ___index, method) (( void (*) (List_1_t7927 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55142_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55143_gshared (List_1_t7927 * __this, int32_t ___index, KeyValuePair_2_t6952  ___item, const MethodInfo* method);
#define List_1_Insert_m55143(__this, ___index, ___item, method) (( void (*) (List_1_t7927 *, int32_t, KeyValuePair_2_t6952 , const MethodInfo*))List_1_Insert_m55143_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55144_gshared (List_1_t7927 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55144(__this, ___collection, method) (( void (*) (List_1_t7927 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55144_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55145_gshared (List_1_t7927 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55145(__this, ___index, ___collection, method) (( void (*) (List_1_t7927 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55145_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55146_gshared (List_1_t7927 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55146(__this, ___index, ___collection, method) (( void (*) (List_1_t7927 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55146_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55147_gshared (List_1_t7927 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55147(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7927 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55147_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Remove(T)
extern "C" bool List_1_Remove_m55148_gshared (List_1_t7927 * __this, KeyValuePair_2_t6952  ___item, const MethodInfo* method);
#define List_1_Remove_m55148(__this, ___item, method) (( bool (*) (List_1_t7927 *, KeyValuePair_2_t6952 , const MethodInfo*))List_1_Remove_m55148_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55149_gshared (List_1_t7927 * __this, Predicate_1_t7934 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55149(__this, ___match, method) (( int32_t (*) (List_1_t7927 *, Predicate_1_t7934 *, const MethodInfo*))List_1_RemoveAll_m55149_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55150_gshared (List_1_t7927 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55150(__this, ___index, method) (( void (*) (List_1_t7927 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55150_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55151_gshared (List_1_t7927 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55151(__this, ___index, ___count, method) (( void (*) (List_1_t7927 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55151_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Reverse()
extern "C" void List_1_Reverse_m55152_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_Reverse_m55152(__this, method) (( void (*) (List_1_t7927 *, const MethodInfo*))List_1_Reverse_m55152_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort()
extern "C" void List_1_Sort_m55153_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_Sort_m55153(__this, method) (( void (*) (List_1_t7927 *, const MethodInfo*))List_1_Sort_m55153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55154_gshared (List_1_t7927 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55154(__this, ___comparer, method) (( void (*) (List_1_t7927 *, Object_t*, const MethodInfo*))List_1_Sort_m55154_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55155_gshared (List_1_t7927 * __this, Comparison_1_t7937 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55155(__this, ___comparison, method) (( void (*) (List_1_t7927 *, Comparison_1_t7937 *, const MethodInfo*))List_1_Sort_m55155_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7926* List_1_ToArray_m55156_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_ToArray_m55156(__this, method) (( KeyValuePair_2U5BU5D_t7926* (*) (List_1_t7927 *, const MethodInfo*))List_1_ToArray_m55156_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55157_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55157(__this, method) (( void (*) (List_1_t7927 *, const MethodInfo*))List_1_TrimExcess_m55157_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55158_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55158(__this, method) (( int32_t (*) (List_1_t7927 *, const MethodInfo*))List_1_get_Capacity_m55158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55159_gshared (List_1_t7927 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55159(__this, ___value, method) (( void (*) (List_1_t7927 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55159_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Count()
extern "C" int32_t List_1_get_Count_m55160_gshared (List_1_t7927 * __this, const MethodInfo* method);
#define List_1_get_Count_m55160(__this, method) (( int32_t (*) (List_1_t7927 *, const MethodInfo*))List_1_get_Count_m55160_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6952  List_1_get_Item_m55161_gshared (List_1_t7927 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55161(__this, ___index, method) (( KeyValuePair_2_t6952  (*) (List_1_t7927 *, int32_t, const MethodInfo*))List_1_get_Item_m55161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55162_gshared (List_1_t7927 * __this, int32_t ___index, KeyValuePair_2_t6952  ___value, const MethodInfo* method);
#define List_1_set_Item_m55162(__this, ___index, ___value, method) (( void (*) (List_1_t7927 *, int32_t, KeyValuePair_2_t6952 , const MethodInfo*))List_1_set_Item_m55162_gshared)(__this, ___index, ___value, method)
