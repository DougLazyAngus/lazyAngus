#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t8218;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t10028;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8217;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7823;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t10029;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t8220;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t8221;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t10030;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t8223;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_103MethodDeclarations.h"
#define List_1__ctor_m56077(__this, method) (( void (*) (List_1_t8218 *, const MethodInfo*))List_1__ctor_m55924_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m56078(__this, ___collection, method) (( void (*) (List_1_t8218 *, Object_t*, const MethodInfo*))List_1__ctor_m55925_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m56079(__this, ___capacity, method) (( void (*) (List_1_t8218 *, int32_t, const MethodInfo*))List_1__ctor_m55926_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m56080(__this, ___data, ___size, method) (( void (*) (List_1_t8218 *, KeyValuePair_2U5BU5D_t8217*, int32_t, const MethodInfo*))List_1__ctor_m55927_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m56081(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55928_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56082(__this, method) (( Object_t* (*) (List_1_t8218 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m56083(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8218 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56084(__this, method) (( Object_t * (*) (List_1_t8218 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55931_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m56085(__this, ___item, method) (( int32_t (*) (List_1_t8218 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55932_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m56086(__this, ___item, method) (( bool (*) (List_1_t8218 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55933_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m56087(__this, ___item, method) (( int32_t (*) (List_1_t8218 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55934_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m56088(__this, ___index, ___item, method) (( void (*) (List_1_t8218 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55935_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m56089(__this, ___item, method) (( void (*) (List_1_t8218 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55936_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56090(__this, method) (( bool (*) (List_1_t8218 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55937_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56091(__this, method) (( bool (*) (List_1_t8218 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55938_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m56092(__this, method) (( Object_t * (*) (List_1_t8218 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55939_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m56093(__this, method) (( bool (*) (List_1_t8218 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55940_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m56094(__this, method) (( bool (*) (List_1_t8218 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55941_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m56095(__this, ___index, method) (( Object_t * (*) (List_1_t8218 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55942_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m56096(__this, ___index, ___value, method) (( void (*) (List_1_t8218 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55943_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m56097(__this, ___item, method) (( void (*) (List_1_t8218 *, KeyValuePair_2_t7818 , const MethodInfo*))List_1_Add_m55944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m56098(__this, ___newCount, method) (( void (*) (List_1_t8218 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55945_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m56099(__this, ___idx, ___count, method) (( void (*) (List_1_t8218 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55946_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m56100(__this, ___collection, method) (( void (*) (List_1_t8218 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55947_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m56101(__this, ___enumerable, method) (( void (*) (List_1_t8218 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m56102(__this, ___collection, method) (( void (*) (List_1_t8218 *, Object_t*, const MethodInfo*))List_1_AddRange_m55949_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m56103(__this, method) (( ReadOnlyCollection_1_t8220 * (*) (List_1_t8218 *, const MethodInfo*))List_1_AsReadOnly_m55950_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m56104(__this, method) (( void (*) (List_1_t8218 *, const MethodInfo*))List_1_Clear_m55951_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m56105(__this, ___item, method) (( bool (*) (List_1_t8218 *, KeyValuePair_2_t7818 , const MethodInfo*))List_1_Contains_m55952_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m56106(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8218 *, KeyValuePair_2U5BU5D_t8217*, int32_t, const MethodInfo*))List_1_CopyTo_m55953_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m56107(__this, ___match, method) (( KeyValuePair_2_t7818  (*) (List_1_t8218 *, Predicate_1_t8221 *, const MethodInfo*))List_1_Find_m55954_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m56108(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8221 *, const MethodInfo*))List_1_CheckMatch_m55955_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m56109(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8218 *, int32_t, int32_t, Predicate_1_t8221 *, const MethodInfo*))List_1_GetIndex_m55956_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m56110(__this, method) (( Enumerator_t8222  (*) (List_1_t8218 *, const MethodInfo*))List_1_GetEnumerator_m55957_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m56111(__this, ___index, ___count, method) (( List_1_t8218 * (*) (List_1_t8218 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55958_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m56112(__this, ___item, method) (( int32_t (*) (List_1_t8218 *, KeyValuePair_2_t7818 , const MethodInfo*))List_1_IndexOf_m55959_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m56113(__this, ___start, ___delta, method) (( void (*) (List_1_t8218 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55960_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m56114(__this, ___index, method) (( void (*) (List_1_t8218 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55961_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m56115(__this, ___index, ___item, method) (( void (*) (List_1_t8218 *, int32_t, KeyValuePair_2_t7818 , const MethodInfo*))List_1_Insert_m55962_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m56116(__this, ___collection, method) (( void (*) (List_1_t8218 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55963_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m56117(__this, ___index, ___collection, method) (( void (*) (List_1_t8218 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55964_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m56118(__this, ___index, ___collection, method) (( void (*) (List_1_t8218 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55965_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m56119(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8218 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55966_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m56120(__this, ___item, method) (( bool (*) (List_1_t8218 *, KeyValuePair_2_t7818 , const MethodInfo*))List_1_Remove_m55967_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m56121(__this, ___match, method) (( int32_t (*) (List_1_t8218 *, Predicate_1_t8221 *, const MethodInfo*))List_1_RemoveAll_m55968_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m56122(__this, ___index, method) (( void (*) (List_1_t8218 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55969_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m56123(__this, ___index, ___count, method) (( void (*) (List_1_t8218 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m56124(__this, method) (( void (*) (List_1_t8218 *, const MethodInfo*))List_1_Reverse_m55971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m56125(__this, method) (( void (*) (List_1_t8218 *, const MethodInfo*))List_1_Sort_m55972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m56126(__this, ___comparer, method) (( void (*) (List_1_t8218 *, Object_t*, const MethodInfo*))List_1_Sort_m55973_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m56127(__this, ___comparison, method) (( void (*) (List_1_t8218 *, Comparison_1_t8223 *, const MethodInfo*))List_1_Sort_m55974_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m56128(__this, method) (( KeyValuePair_2U5BU5D_t8217* (*) (List_1_t8218 *, const MethodInfo*))List_1_ToArray_m55975_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m56129(__this, method) (( void (*) (List_1_t8218 *, const MethodInfo*))List_1_TrimExcess_m55976_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m56130(__this, method) (( int32_t (*) (List_1_t8218 *, const MethodInfo*))List_1_get_Capacity_m55977_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m56131(__this, ___value, method) (( void (*) (List_1_t8218 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55978_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m56132(__this, method) (( int32_t (*) (List_1_t8218 *, const MethodInfo*))List_1_get_Count_m55979_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m56133(__this, ___index, method) (( KeyValuePair_2_t7818  (*) (List_1_t8218 *, int32_t, const MethodInfo*))List_1_get_Item_m55980_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m56134(__this, ___index, ___value, method) (( void (*) (List_1_t8218 *, int32_t, KeyValuePair_2_t7818 , const MethodInfo*))List_1_set_Item_m55981_gshared)(__this, ___index, ___value, method)
