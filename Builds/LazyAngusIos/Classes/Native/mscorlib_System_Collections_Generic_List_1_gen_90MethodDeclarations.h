#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7297;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t9355;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t9356;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7299;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7300;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t9357;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7302;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_73.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_89MethodDeclarations.h"
#define List_1__ctor_m47100(__this, method) (( void (*) (List_1_t7297 *, const MethodInfo*))List_1__ctor_m46947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47101(__this, ___collection, method) (( void (*) (List_1_t7297 *, Object_t*, const MethodInfo*))List_1__ctor_m46948_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m47102(__this, ___capacity, method) (( void (*) (List_1_t7297 *, int32_t, const MethodInfo*))List_1__ctor_m46949_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47103(__this, ___data, ___size, method) (( void (*) (List_1_t7297 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))List_1__ctor_m46950_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m47104(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46951_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47105(__this, method) (( Object_t* (*) (List_1_t7297 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47106(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7297 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46953_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47107(__this, method) (( Object_t * (*) (List_1_t7297 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46954_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47108(__this, ___item, method) (( int32_t (*) (List_1_t7297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46955_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47109(__this, ___item, method) (( bool (*) (List_1_t7297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46956_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47110(__this, ___item, method) (( int32_t (*) (List_1_t7297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46957_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47111(__this, ___index, ___item, method) (( void (*) (List_1_t7297 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46958_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47112(__this, ___item, method) (( void (*) (List_1_t7297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46959_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47113(__this, method) (( bool (*) (List_1_t7297 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46960_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47114(__this, method) (( bool (*) (List_1_t7297 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46961_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47115(__this, method) (( Object_t * (*) (List_1_t7297 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47116(__this, method) (( bool (*) (List_1_t7297 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46963_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47117(__this, method) (( bool (*) (List_1_t7297 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46964_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47118(__this, ___index, method) (( Object_t * (*) (List_1_t7297 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46965_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47119(__this, ___index, ___value, method) (( void (*) (List_1_t7297 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46966_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m47120(__this, ___item, method) (( void (*) (List_1_t7297 *, KeyValuePair_2_t7183 , const MethodInfo*))List_1_Add_m46967_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47121(__this, ___newCount, method) (( void (*) (List_1_t7297 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46968_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47122(__this, ___idx, ___count, method) (( void (*) (List_1_t7297 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46969_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47123(__this, ___collection, method) (( void (*) (List_1_t7297 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46970_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47124(__this, ___enumerable, method) (( void (*) (List_1_t7297 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46971_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47125(__this, ___collection, method) (( void (*) (List_1_t7297 *, Object_t*, const MethodInfo*))List_1_AddRange_m46972_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m47126(__this, method) (( ReadOnlyCollection_1_t7299 * (*) (List_1_t7297 *, const MethodInfo*))List_1_AsReadOnly_m46973_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m47127(__this, method) (( void (*) (List_1_t7297 *, const MethodInfo*))List_1_Clear_m46974_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m47128(__this, ___item, method) (( bool (*) (List_1_t7297 *, KeyValuePair_2_t7183 , const MethodInfo*))List_1_Contains_m46975_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47129(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7297 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))List_1_CopyTo_m46976_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47130(__this, ___match, method) (( KeyValuePair_2_t7183  (*) (List_1_t7297 *, Predicate_1_t7300 *, const MethodInfo*))List_1_Find_m46977_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47131(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7300 *, const MethodInfo*))List_1_CheckMatch_m46978_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47132(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7297 *, int32_t, int32_t, Predicate_1_t7300 *, const MethodInfo*))List_1_GetIndex_m46979_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m47133(__this, method) (( Enumerator_t7301  (*) (List_1_t7297 *, const MethodInfo*))List_1_GetEnumerator_m46980_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47134(__this, ___index, ___count, method) (( List_1_t7297 * (*) (List_1_t7297 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46981_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m47135(__this, ___item, method) (( int32_t (*) (List_1_t7297 *, KeyValuePair_2_t7183 , const MethodInfo*))List_1_IndexOf_m46982_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47136(__this, ___start, ___delta, method) (( void (*) (List_1_t7297 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46983_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47137(__this, ___index, method) (( void (*) (List_1_t7297 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46984_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m47138(__this, ___index, ___item, method) (( void (*) (List_1_t7297 *, int32_t, KeyValuePair_2_t7183 , const MethodInfo*))List_1_Insert_m46985_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47139(__this, ___collection, method) (( void (*) (List_1_t7297 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46986_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47140(__this, ___index, ___collection, method) (( void (*) (List_1_t7297 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46987_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47141(__this, ___index, ___collection, method) (( void (*) (List_1_t7297 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46988_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47142(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7297 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46989_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m47143(__this, ___item, method) (( bool (*) (List_1_t7297 *, KeyValuePair_2_t7183 , const MethodInfo*))List_1_Remove_m46990_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47144(__this, ___match, method) (( int32_t (*) (List_1_t7297 *, Predicate_1_t7300 *, const MethodInfo*))List_1_RemoveAll_m46991_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47145(__this, ___index, method) (( void (*) (List_1_t7297 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46992_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47146(__this, ___index, ___count, method) (( void (*) (List_1_t7297 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46993_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m47147(__this, method) (( void (*) (List_1_t7297 *, const MethodInfo*))List_1_Reverse_m46994_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m47148(__this, method) (( void (*) (List_1_t7297 *, const MethodInfo*))List_1_Sort_m46995_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47149(__this, ___comparer, method) (( void (*) (List_1_t7297 *, Object_t*, const MethodInfo*))List_1_Sort_m46996_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47150(__this, ___comparison, method) (( void (*) (List_1_t7297 *, Comparison_1_t7302 *, const MethodInfo*))List_1_Sort_m46997_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m47151(__this, method) (( KeyValuePair_2U5BU5D_t7296* (*) (List_1_t7297 *, const MethodInfo*))List_1_ToArray_m46998_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m47152(__this, method) (( void (*) (List_1_t7297 *, const MethodInfo*))List_1_TrimExcess_m46999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m47153(__this, method) (( int32_t (*) (List_1_t7297 *, const MethodInfo*))List_1_get_Capacity_m47000_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47154(__this, ___value, method) (( void (*) (List_1_t7297 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47001_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m47155(__this, method) (( int32_t (*) (List_1_t7297 *, const MethodInfo*))List_1_get_Count_m47002_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m47156(__this, ___index, method) (( KeyValuePair_2_t7183  (*) (List_1_t7297 *, int32_t, const MethodInfo*))List_1_get_Item_m47003_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47157(__this, ___index, ___value, method) (( void (*) (List_1_t7297 *, int32_t, KeyValuePair_2_t7183 , const MethodInfo*))List_1_set_Item_m47004_gshared)(__this, ___index, ___value, method)
