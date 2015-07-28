#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t7617;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t9284;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7616;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7168;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t9285;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t7619;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7620;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t9286;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t7622;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_98MethodDeclarations.h"
#define List_1__ctor_m51310(__this, method) (( void (*) (List_1_t7617 *, const MethodInfo*))List_1__ctor_m51157_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m51311(__this, ___collection, method) (( void (*) (List_1_t7617 *, Object_t*, const MethodInfo*))List_1__ctor_m51158_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m51312(__this, ___capacity, method) (( void (*) (List_1_t7617 *, int32_t, const MethodInfo*))List_1__ctor_m51159_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m51313(__this, ___data, ___size, method) (( void (*) (List_1_t7617 *, KeyValuePair_2U5BU5D_t7616*, int32_t, const MethodInfo*))List_1__ctor_m51160_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m51314(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51161_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51315(__this, method) (( Object_t* (*) (List_1_t7617 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51162_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m51316(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7617 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51163_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51317(__this, method) (( Object_t * (*) (List_1_t7617 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m51318(__this, ___item, method) (( int32_t (*) (List_1_t7617 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51165_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m51319(__this, ___item, method) (( bool (*) (List_1_t7617 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51166_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m51320(__this, ___item, method) (( int32_t (*) (List_1_t7617 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51167_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m51321(__this, ___index, ___item, method) (( void (*) (List_1_t7617 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51168_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m51322(__this, ___item, method) (( void (*) (List_1_t7617 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51169_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51323(__this, method) (( bool (*) (List_1_t7617 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51324(__this, method) (( bool (*) (List_1_t7617 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m51325(__this, method) (( Object_t * (*) (List_1_t7617 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51172_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m51326(__this, method) (( bool (*) (List_1_t7617 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51173_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m51327(__this, method) (( bool (*) (List_1_t7617 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51174_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m51328(__this, ___index, method) (( Object_t * (*) (List_1_t7617 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m51329(__this, ___index, ___value, method) (( void (*) (List_1_t7617 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51176_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m51330(__this, ___item, method) (( void (*) (List_1_t7617 *, KeyValuePair_2_t7163 , const MethodInfo*))List_1_Add_m51177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m51331(__this, ___newCount, method) (( void (*) (List_1_t7617 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51178_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m51332(__this, ___idx, ___count, method) (( void (*) (List_1_t7617 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51179_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m51333(__this, ___collection, method) (( void (*) (List_1_t7617 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51180_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m51334(__this, ___enumerable, method) (( void (*) (List_1_t7617 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51181_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m51335(__this, ___collection, method) (( void (*) (List_1_t7617 *, Object_t*, const MethodInfo*))List_1_AddRange_m51182_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m51336(__this, method) (( ReadOnlyCollection_1_t7619 * (*) (List_1_t7617 *, const MethodInfo*))List_1_AsReadOnly_m51183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m51337(__this, method) (( void (*) (List_1_t7617 *, const MethodInfo*))List_1_Clear_m51184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m51338(__this, ___item, method) (( bool (*) (List_1_t7617 *, KeyValuePair_2_t7163 , const MethodInfo*))List_1_Contains_m51185_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m51339(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7617 *, KeyValuePair_2U5BU5D_t7616*, int32_t, const MethodInfo*))List_1_CopyTo_m51186_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m51340(__this, ___match, method) (( KeyValuePair_2_t7163  (*) (List_1_t7617 *, Predicate_1_t7620 *, const MethodInfo*))List_1_Find_m51187_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m51341(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7620 *, const MethodInfo*))List_1_CheckMatch_m51188_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m51342(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7617 *, int32_t, int32_t, Predicate_1_t7620 *, const MethodInfo*))List_1_GetIndex_m51189_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m51343(__this, method) (( Enumerator_t7621  (*) (List_1_t7617 *, const MethodInfo*))List_1_GetEnumerator_m51190_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m51344(__this, ___index, ___count, method) (( List_1_t7617 * (*) (List_1_t7617 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51191_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m51345(__this, ___item, method) (( int32_t (*) (List_1_t7617 *, KeyValuePair_2_t7163 , const MethodInfo*))List_1_IndexOf_m51192_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m51346(__this, ___start, ___delta, method) (( void (*) (List_1_t7617 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51193_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m51347(__this, ___index, method) (( void (*) (List_1_t7617 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51194_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m51348(__this, ___index, ___item, method) (( void (*) (List_1_t7617 *, int32_t, KeyValuePair_2_t7163 , const MethodInfo*))List_1_Insert_m51195_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m51349(__this, ___collection, method) (( void (*) (List_1_t7617 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51196_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m51350(__this, ___index, ___collection, method) (( void (*) (List_1_t7617 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51197_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m51351(__this, ___index, ___collection, method) (( void (*) (List_1_t7617 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51198_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m51352(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7617 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51199_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m51353(__this, ___item, method) (( bool (*) (List_1_t7617 *, KeyValuePair_2_t7163 , const MethodInfo*))List_1_Remove_m51200_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m51354(__this, ___match, method) (( int32_t (*) (List_1_t7617 *, Predicate_1_t7620 *, const MethodInfo*))List_1_RemoveAll_m51201_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m51355(__this, ___index, method) (( void (*) (List_1_t7617 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51202_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m51356(__this, ___index, ___count, method) (( void (*) (List_1_t7617 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51203_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m51357(__this, method) (( void (*) (List_1_t7617 *, const MethodInfo*))List_1_Reverse_m51204_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m51358(__this, method) (( void (*) (List_1_t7617 *, const MethodInfo*))List_1_Sort_m51205_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m51359(__this, ___comparer, method) (( void (*) (List_1_t7617 *, Object_t*, const MethodInfo*))List_1_Sort_m51206_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m51360(__this, ___comparison, method) (( void (*) (List_1_t7617 *, Comparison_1_t7622 *, const MethodInfo*))List_1_Sort_m51207_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m51361(__this, method) (( KeyValuePair_2U5BU5D_t7616* (*) (List_1_t7617 *, const MethodInfo*))List_1_ToArray_m51208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m51362(__this, method) (( void (*) (List_1_t7617 *, const MethodInfo*))List_1_TrimExcess_m51209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m51363(__this, method) (( int32_t (*) (List_1_t7617 *, const MethodInfo*))List_1_get_Capacity_m51210_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m51364(__this, ___value, method) (( void (*) (List_1_t7617 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51211_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m51365(__this, method) (( int32_t (*) (List_1_t7617 *, const MethodInfo*))List_1_get_Count_m51212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m51366(__this, ___index, method) (( KeyValuePair_2_t7163  (*) (List_1_t7617 *, int32_t, const MethodInfo*))List_1_get_Item_m51213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m51367(__this, ___index, ___value, method) (( void (*) (List_1_t7617 *, int32_t, KeyValuePair_2_t7163 , const MethodInfo*))List_1_set_Item_m51214_gshared)(__this, ___index, ___value, method)
