#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t6860;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>
struct IEnumerable_1_t6853;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t6859;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t6854;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9209;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseGeoPoint>
struct ReadOnlyCollection_1_t6862;
// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t6866;
// System.Collections.Generic.IComparer`1<Parse.ParseGeoPoint>
struct IComparer_1_t9210;
// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t6869;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.List`1/Enumerator<Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor()
extern "C" void List_1__ctor_m41942_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1__ctor_m41942(__this, method) (( void (*) (List_1_t6860 *, const MethodInfo*))List_1__ctor_m41942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41943_gshared (List_1_t6860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41943(__this, ___collection, method) (( void (*) (List_1_t6860 *, Object_t*, const MethodInfo*))List_1__ctor_m41943_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41944_gshared (List_1_t6860 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41944(__this, ___capacity, method) (( void (*) (List_1_t6860 *, int32_t, const MethodInfo*))List_1__ctor_m41944_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41945_gshared (List_1_t6860 * __this, ParseGeoPointU5BU5D_t6859* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41945(__this, ___data, ___size, method) (( void (*) (List_1_t6860 *, ParseGeoPointU5BU5D_t6859*, int32_t, const MethodInfo*))List_1__ctor_m41945_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.cctor()
extern "C" void List_1__cctor_m41946_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41946(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41946_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41947_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41947(__this, method) (( Object_t* (*) (List_1_t6860 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41948_gshared (List_1_t6860 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41948(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6860 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41948_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41949_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41949(__this, method) (( Object_t * (*) (List_1_t6860 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41949_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41950_gshared (List_1_t6860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41950(__this, ___item, method) (( int32_t (*) (List_1_t6860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41950_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41951_gshared (List_1_t6860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41951(__this, ___item, method) (( bool (*) (List_1_t6860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41951_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41952_gshared (List_1_t6860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41952(__this, ___item, method) (( int32_t (*) (List_1_t6860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41952_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41953_gshared (List_1_t6860 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41953(__this, ___index, ___item, method) (( void (*) (List_1_t6860 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41953_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41954_gshared (List_1_t6860 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41954(__this, ___item, method) (( void (*) (List_1_t6860 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41954_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41955_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41955(__this, method) (( bool (*) (List_1_t6860 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41955_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41956_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41956(__this, method) (( bool (*) (List_1_t6860 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41956_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41957_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41957(__this, method) (( Object_t * (*) (List_1_t6860 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41957_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41958_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41958(__this, method) (( bool (*) (List_1_t6860 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41958_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41959_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41959(__this, method) (( bool (*) (List_1_t6860 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41959_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41960_gshared (List_1_t6860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41960(__this, ___index, method) (( Object_t * (*) (List_1_t6860 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41960_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41961_gshared (List_1_t6860 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41961(__this, ___index, ___value, method) (( void (*) (List_1_t6860 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41961_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Add(T)
extern "C" void List_1_Add_m41962_gshared (List_1_t6860 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define List_1_Add_m41962(__this, ___item, method) (( void (*) (List_1_t6860 *, ParseGeoPoint_t1247 , const MethodInfo*))List_1_Add_m41962_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41963_gshared (List_1_t6860 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41963(__this, ___newCount, method) (( void (*) (List_1_t6860 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41963_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41964_gshared (List_1_t6860 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41964(__this, ___idx, ___count, method) (( void (*) (List_1_t6860 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41964_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41965_gshared (List_1_t6860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41965(__this, ___collection, method) (( void (*) (List_1_t6860 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41965_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41966_gshared (List_1_t6860 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41966(__this, ___enumerable, method) (( void (*) (List_1_t6860 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41966_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41967_gshared (List_1_t6860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41967(__this, ___collection, method) (( void (*) (List_1_t6860 *, Object_t*, const MethodInfo*))List_1_AddRange_m41967_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6862 * List_1_AsReadOnly_m41968_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41968(__this, method) (( ReadOnlyCollection_1_t6862 * (*) (List_1_t6860 *, const MethodInfo*))List_1_AsReadOnly_m41968_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Clear()
extern "C" void List_1_Clear_m41969_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_Clear_m41969(__this, method) (( void (*) (List_1_t6860 *, const MethodInfo*))List_1_Clear_m41969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Contains(T)
extern "C" bool List_1_Contains_m41970_gshared (List_1_t6860 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define List_1_Contains_m41970(__this, ___item, method) (( bool (*) (List_1_t6860 *, ParseGeoPoint_t1247 , const MethodInfo*))List_1_Contains_m41970_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41971_gshared (List_1_t6860 * __this, ParseGeoPointU5BU5D_t6859* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41971(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6860 *, ParseGeoPointU5BU5D_t6859*, int32_t, const MethodInfo*))List_1_CopyTo_m41971_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Find(System.Predicate`1<T>)
extern "C" ParseGeoPoint_t1247  List_1_Find_m41972_gshared (List_1_t6860 * __this, Predicate_1_t6866 * ___match, const MethodInfo* method);
#define List_1_Find_m41972(__this, ___match, method) (( ParseGeoPoint_t1247  (*) (List_1_t6860 *, Predicate_1_t6866 *, const MethodInfo*))List_1_Find_m41972_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41973_gshared (Object_t * __this /* static, unused */, Predicate_1_t6866 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41973(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6866 *, const MethodInfo*))List_1_CheckMatch_m41973_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41974_gshared (List_1_t6860 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6866 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41974(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6860 *, int32_t, int32_t, Predicate_1_t6866 *, const MethodInfo*))List_1_GetIndex_m41974_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t6861  List_1_GetEnumerator_m41975_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41975(__this, method) (( Enumerator_t6861  (*) (List_1_t6860 *, const MethodInfo*))List_1_GetEnumerator_m41975_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6860 * List_1_GetRange_m41976_gshared (List_1_t6860 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41976(__this, ___index, ___count, method) (( List_1_t6860 * (*) (List_1_t6860 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41976_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41977_gshared (List_1_t6860 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41977(__this, ___item, method) (( int32_t (*) (List_1_t6860 *, ParseGeoPoint_t1247 , const MethodInfo*))List_1_IndexOf_m41977_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41978_gshared (List_1_t6860 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41978(__this, ___start, ___delta, method) (( void (*) (List_1_t6860 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41978_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41979_gshared (List_1_t6860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41979(__this, ___index, method) (( void (*) (List_1_t6860 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41979_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41980_gshared (List_1_t6860 * __this, int32_t ___index, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define List_1_Insert_m41980(__this, ___index, ___item, method) (( void (*) (List_1_t6860 *, int32_t, ParseGeoPoint_t1247 , const MethodInfo*))List_1_Insert_m41980_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41981_gshared (List_1_t6860 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41981(__this, ___collection, method) (( void (*) (List_1_t6860 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41981_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41982_gshared (List_1_t6860 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41982(__this, ___index, ___collection, method) (( void (*) (List_1_t6860 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41982_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41983_gshared (List_1_t6860 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41983(__this, ___index, ___collection, method) (( void (*) (List_1_t6860 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41983_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41984_gshared (List_1_t6860 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41984(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6860 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41984_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Remove(T)
extern "C" bool List_1_Remove_m41985_gshared (List_1_t6860 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define List_1_Remove_m41985(__this, ___item, method) (( bool (*) (List_1_t6860 *, ParseGeoPoint_t1247 , const MethodInfo*))List_1_Remove_m41985_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41986_gshared (List_1_t6860 * __this, Predicate_1_t6866 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41986(__this, ___match, method) (( int32_t (*) (List_1_t6860 *, Predicate_1_t6866 *, const MethodInfo*))List_1_RemoveAll_m41986_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41987_gshared (List_1_t6860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41987(__this, ___index, method) (( void (*) (List_1_t6860 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41987_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41988_gshared (List_1_t6860 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41988(__this, ___index, ___count, method) (( void (*) (List_1_t6860 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41988_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Reverse()
extern "C" void List_1_Reverse_m41989_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_Reverse_m41989(__this, method) (( void (*) (List_1_t6860 *, const MethodInfo*))List_1_Reverse_m41989_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort()
extern "C" void List_1_Sort_m41990_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_Sort_m41990(__this, method) (( void (*) (List_1_t6860 *, const MethodInfo*))List_1_Sort_m41990_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41991_gshared (List_1_t6860 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41991(__this, ___comparer, method) (( void (*) (List_1_t6860 *, Object_t*, const MethodInfo*))List_1_Sort_m41991_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41992_gshared (List_1_t6860 * __this, Comparison_1_t6869 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41992(__this, ___comparison, method) (( void (*) (List_1_t6860 *, Comparison_1_t6869 *, const MethodInfo*))List_1_Sort_m41992_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseGeoPoint>::ToArray()
extern "C" ParseGeoPointU5BU5D_t6859* List_1_ToArray_m41993_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_ToArray_m41993(__this, method) (( ParseGeoPointU5BU5D_t6859* (*) (List_1_t6860 *, const MethodInfo*))List_1_ToArray_m41993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::TrimExcess()
extern "C" void List_1_TrimExcess_m41994_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41994(__this, method) (( void (*) (List_1_t6860 *, const MethodInfo*))List_1_TrimExcess_m41994_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41995_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41995(__this, method) (( int32_t (*) (List_1_t6860 *, const MethodInfo*))List_1_get_Capacity_m41995_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41996_gshared (List_1_t6860 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41996(__this, ___value, method) (( void (*) (List_1_t6860 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41996_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t List_1_get_Count_m41997_gshared (List_1_t6860 * __this, const MethodInfo* method);
#define List_1_get_Count_m41997(__this, method) (( int32_t (*) (List_1_t6860 *, const MethodInfo*))List_1_get_Count_m41997_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Item(System.Int32)
extern "C" ParseGeoPoint_t1247  List_1_get_Item_m41998_gshared (List_1_t6860 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41998(__this, ___index, method) (( ParseGeoPoint_t1247  (*) (List_1_t6860 *, int32_t, const MethodInfo*))List_1_get_Item_m41998_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41999_gshared (List_1_t6860 * __this, int32_t ___index, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define List_1_set_Item_m41999(__this, ___index, ___value, method) (( void (*) (List_1_t6860 *, int32_t, ParseGeoPoint_t1247 , const MethodInfo*))List_1_set_Item_m41999_gshared)(__this, ___index, ___value, method)
