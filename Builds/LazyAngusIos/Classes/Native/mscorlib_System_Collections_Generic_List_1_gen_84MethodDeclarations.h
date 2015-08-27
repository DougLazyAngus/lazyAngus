#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t6867;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>
struct IEnumerable_1_t6860;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t6866;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t6861;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9220;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseGeoPoint>
struct ReadOnlyCollection_1_t6869;
// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t6873;
// System.Collections.Generic.IComparer`1<Parse.ParseGeoPoint>
struct IComparer_1_t9221;
// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t6876;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.List`1/Enumerator<Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor()
extern "C" void List_1__ctor_m42066_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1__ctor_m42066(__this, method) (( void (*) (List_1_t6867 *, const MethodInfo*))List_1__ctor_m42066_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m42067_gshared (List_1_t6867 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m42067(__this, ___collection, method) (( void (*) (List_1_t6867 *, Object_t*, const MethodInfo*))List_1__ctor_m42067_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void List_1__ctor_m42068_gshared (List_1_t6867 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m42068(__this, ___capacity, method) (( void (*) (List_1_t6867 *, int32_t, const MethodInfo*))List_1__ctor_m42068_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m42069_gshared (List_1_t6867 * __this, ParseGeoPointU5BU5D_t6866* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m42069(__this, ___data, ___size, method) (( void (*) (List_1_t6867 *, ParseGeoPointU5BU5D_t6866*, int32_t, const MethodInfo*))List_1__ctor_m42069_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.cctor()
extern "C" void List_1__cctor_m42070_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m42070(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m42070_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42071_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42071(__this, method) (( Object_t* (*) (List_1_t6867 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42071_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m42072_gshared (List_1_t6867 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m42072(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6867 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m42072_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m42073_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42073(__this, method) (( Object_t * (*) (List_1_t6867 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m42073_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m42074_gshared (List_1_t6867 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m42074(__this, ___item, method) (( int32_t (*) (List_1_t6867 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m42074_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m42075_gshared (List_1_t6867 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m42075(__this, ___item, method) (( bool (*) (List_1_t6867 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m42075_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m42076_gshared (List_1_t6867 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m42076(__this, ___item, method) (( int32_t (*) (List_1_t6867 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m42076_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m42077_gshared (List_1_t6867 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m42077(__this, ___index, ___item, method) (( void (*) (List_1_t6867 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m42077_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m42078_gshared (List_1_t6867 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m42078(__this, ___item, method) (( void (*) (List_1_t6867 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m42078_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42079_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42079(__this, method) (( bool (*) (List_1_t6867 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42079_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m42080_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42080(__this, method) (( bool (*) (List_1_t6867 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m42080_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m42081_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m42081(__this, method) (( Object_t * (*) (List_1_t6867 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m42081_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m42082_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m42082(__this, method) (( bool (*) (List_1_t6867 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m42082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m42083_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m42083(__this, method) (( bool (*) (List_1_t6867 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m42083_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m42084_gshared (List_1_t6867 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m42084(__this, ___index, method) (( Object_t * (*) (List_1_t6867 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m42084_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m42085_gshared (List_1_t6867 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m42085(__this, ___index, ___value, method) (( void (*) (List_1_t6867 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m42085_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Add(T)
extern "C" void List_1_Add_m42086_gshared (List_1_t6867 * __this, ParseGeoPoint_t1248  ___item, const MethodInfo* method);
#define List_1_Add_m42086(__this, ___item, method) (( void (*) (List_1_t6867 *, ParseGeoPoint_t1248 , const MethodInfo*))List_1_Add_m42086_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m42087_gshared (List_1_t6867 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m42087(__this, ___newCount, method) (( void (*) (List_1_t6867 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m42087_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m42088_gshared (List_1_t6867 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m42088(__this, ___idx, ___count, method) (( void (*) (List_1_t6867 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m42088_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m42089_gshared (List_1_t6867 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m42089(__this, ___collection, method) (( void (*) (List_1_t6867 *, Object_t*, const MethodInfo*))List_1_AddCollection_m42089_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m42090_gshared (List_1_t6867 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m42090(__this, ___enumerable, method) (( void (*) (List_1_t6867 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m42090_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m42091_gshared (List_1_t6867 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m42091(__this, ___collection, method) (( void (*) (List_1_t6867 *, Object_t*, const MethodInfo*))List_1_AddRange_m42091_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6869 * List_1_AsReadOnly_m42092_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m42092(__this, method) (( ReadOnlyCollection_1_t6869 * (*) (List_1_t6867 *, const MethodInfo*))List_1_AsReadOnly_m42092_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Clear()
extern "C" void List_1_Clear_m42093_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_Clear_m42093(__this, method) (( void (*) (List_1_t6867 *, const MethodInfo*))List_1_Clear_m42093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Contains(T)
extern "C" bool List_1_Contains_m42094_gshared (List_1_t6867 * __this, ParseGeoPoint_t1248  ___item, const MethodInfo* method);
#define List_1_Contains_m42094(__this, ___item, method) (( bool (*) (List_1_t6867 *, ParseGeoPoint_t1248 , const MethodInfo*))List_1_Contains_m42094_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m42095_gshared (List_1_t6867 * __this, ParseGeoPointU5BU5D_t6866* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m42095(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6867 *, ParseGeoPointU5BU5D_t6866*, int32_t, const MethodInfo*))List_1_CopyTo_m42095_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Find(System.Predicate`1<T>)
extern "C" ParseGeoPoint_t1248  List_1_Find_m42096_gshared (List_1_t6867 * __this, Predicate_1_t6873 * ___match, const MethodInfo* method);
#define List_1_Find_m42096(__this, ___match, method) (( ParseGeoPoint_t1248  (*) (List_1_t6867 *, Predicate_1_t6873 *, const MethodInfo*))List_1_Find_m42096_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m42097_gshared (Object_t * __this /* static, unused */, Predicate_1_t6873 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m42097(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6873 *, const MethodInfo*))List_1_CheckMatch_m42097_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m42098_gshared (List_1_t6867 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6873 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m42098(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6867 *, int32_t, int32_t, Predicate_1_t6873 *, const MethodInfo*))List_1_GetIndex_m42098_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t6868  List_1_GetEnumerator_m42099_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m42099(__this, method) (( Enumerator_t6868  (*) (List_1_t6867 *, const MethodInfo*))List_1_GetEnumerator_m42099_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6867 * List_1_GetRange_m42100_gshared (List_1_t6867 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m42100(__this, ___index, ___count, method) (( List_1_t6867 * (*) (List_1_t6867 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m42100_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m42101_gshared (List_1_t6867 * __this, ParseGeoPoint_t1248  ___item, const MethodInfo* method);
#define List_1_IndexOf_m42101(__this, ___item, method) (( int32_t (*) (List_1_t6867 *, ParseGeoPoint_t1248 , const MethodInfo*))List_1_IndexOf_m42101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m42102_gshared (List_1_t6867 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m42102(__this, ___start, ___delta, method) (( void (*) (List_1_t6867 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m42102_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m42103_gshared (List_1_t6867 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m42103(__this, ___index, method) (( void (*) (List_1_t6867 *, int32_t, const MethodInfo*))List_1_CheckIndex_m42103_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m42104_gshared (List_1_t6867 * __this, int32_t ___index, ParseGeoPoint_t1248  ___item, const MethodInfo* method);
#define List_1_Insert_m42104(__this, ___index, ___item, method) (( void (*) (List_1_t6867 *, int32_t, ParseGeoPoint_t1248 , const MethodInfo*))List_1_Insert_m42104_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m42105_gshared (List_1_t6867 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m42105(__this, ___collection, method) (( void (*) (List_1_t6867 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m42105_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m42106_gshared (List_1_t6867 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m42106(__this, ___index, ___collection, method) (( void (*) (List_1_t6867 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m42106_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m42107_gshared (List_1_t6867 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m42107(__this, ___index, ___collection, method) (( void (*) (List_1_t6867 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m42107_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m42108_gshared (List_1_t6867 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m42108(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6867 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m42108_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Remove(T)
extern "C" bool List_1_Remove_m42109_gshared (List_1_t6867 * __this, ParseGeoPoint_t1248  ___item, const MethodInfo* method);
#define List_1_Remove_m42109(__this, ___item, method) (( bool (*) (List_1_t6867 *, ParseGeoPoint_t1248 , const MethodInfo*))List_1_Remove_m42109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m42110_gshared (List_1_t6867 * __this, Predicate_1_t6873 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m42110(__this, ___match, method) (( int32_t (*) (List_1_t6867 *, Predicate_1_t6873 *, const MethodInfo*))List_1_RemoveAll_m42110_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m42111_gshared (List_1_t6867 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m42111(__this, ___index, method) (( void (*) (List_1_t6867 *, int32_t, const MethodInfo*))List_1_RemoveAt_m42111_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m42112_gshared (List_1_t6867 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m42112(__this, ___index, ___count, method) (( void (*) (List_1_t6867 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m42112_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Reverse()
extern "C" void List_1_Reverse_m42113_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_Reverse_m42113(__this, method) (( void (*) (List_1_t6867 *, const MethodInfo*))List_1_Reverse_m42113_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort()
extern "C" void List_1_Sort_m42114_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_Sort_m42114(__this, method) (( void (*) (List_1_t6867 *, const MethodInfo*))List_1_Sort_m42114_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m42115_gshared (List_1_t6867 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m42115(__this, ___comparer, method) (( void (*) (List_1_t6867 *, Object_t*, const MethodInfo*))List_1_Sort_m42115_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m42116_gshared (List_1_t6867 * __this, Comparison_1_t6876 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m42116(__this, ___comparison, method) (( void (*) (List_1_t6867 *, Comparison_1_t6876 *, const MethodInfo*))List_1_Sort_m42116_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseGeoPoint>::ToArray()
extern "C" ParseGeoPointU5BU5D_t6866* List_1_ToArray_m42117_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_ToArray_m42117(__this, method) (( ParseGeoPointU5BU5D_t6866* (*) (List_1_t6867 *, const MethodInfo*))List_1_ToArray_m42117_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::TrimExcess()
extern "C" void List_1_TrimExcess_m42118_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m42118(__this, method) (( void (*) (List_1_t6867 *, const MethodInfo*))List_1_TrimExcess_m42118_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m42119_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m42119(__this, method) (( int32_t (*) (List_1_t6867 *, const MethodInfo*))List_1_get_Capacity_m42119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m42120_gshared (List_1_t6867 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m42120(__this, ___value, method) (( void (*) (List_1_t6867 *, int32_t, const MethodInfo*))List_1_set_Capacity_m42120_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t List_1_get_Count_m42121_gshared (List_1_t6867 * __this, const MethodInfo* method);
#define List_1_get_Count_m42121(__this, method) (( int32_t (*) (List_1_t6867 *, const MethodInfo*))List_1_get_Count_m42121_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Item(System.Int32)
extern "C" ParseGeoPoint_t1248  List_1_get_Item_m42122_gshared (List_1_t6867 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m42122(__this, ___index, method) (( ParseGeoPoint_t1248  (*) (List_1_t6867 *, int32_t, const MethodInfo*))List_1_get_Item_m42122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m42123_gshared (List_1_t6867 * __this, int32_t ___index, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define List_1_set_Item_m42123(__this, ___index, ___value, method) (( void (*) (List_1_t6867 *, int32_t, ParseGeoPoint_t1248 , const MethodInfo*))List_1_set_Item_m42123_gshared)(__this, ___index, ___value, method)
