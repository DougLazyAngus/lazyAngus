#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct List_1_t7434;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerable_1_t9281;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7151;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ICollection_1_t9282;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t7436;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t7437;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IComparer_1_t9283;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t7439;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_92MethodDeclarations.h"
#define List_1__ctor_m49057(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1__ctor_m48904_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m49058(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1__ctor_m48905_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Int32)
#define List_1__ctor_m49059(__this, ___capacity, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1__ctor_m48906_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m49060(__this, ___data, ___size, method) (( void (*) (List_1_t7434 *, KeyValuePair_2U5BU5D_t7433*, int32_t, const MethodInfo*))List_1__ctor_m48907_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.cctor()
#define List_1__cctor_m49061(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48908_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49062(__this, method) (( Object_t* (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48909_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m49063(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7434 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48910_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49064(__this, method) (( Object_t * (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48911_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m49065(__this, ___item, method) (( int32_t (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48912_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m49066(__this, ___item, method) (( bool (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48913_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m49067(__this, ___item, method) (( int32_t (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48914_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m49068(__this, ___index, ___item, method) (( void (*) (List_1_t7434 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48915_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m49069(__this, ___item, method) (( void (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48916_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49070(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48917_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49071(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48918_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m49072(__this, method) (( Object_t * (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48919_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m49073(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m49074(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48921_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m49075(__this, ___index, method) (( Object_t * (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48922_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m49076(__this, ___index, ___value, method) (( void (*) (List_1_t7434 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48923_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Add(T)
#define List_1_Add_m49077(__this, ___item, method) (( void (*) (List_1_t7434 *, KeyValuePair_2_t7146 , const MethodInfo*))List_1_Add_m48924_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49078(__this, ___newCount, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48925_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49079(__this, ___idx, ___count, method) (( void (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48926_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49080(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48927_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49081(__this, ___enumerable, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48928_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49082(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_AddRange_m48929_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AsReadOnly()
#define List_1_AsReadOnly_m49083(__this, method) (( ReadOnlyCollection_1_t7436 * (*) (List_1_t7434 *, const MethodInfo*))List_1_AsReadOnly_m48930_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Clear()
#define List_1_Clear_m49084(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_Clear_m48931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define List_1_Contains_m49085(__this, ___item, method) (( bool (*) (List_1_t7434 *, KeyValuePair_2_t7146 , const MethodInfo*))List_1_Contains_m48932_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49086(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7434 *, KeyValuePair_2U5BU5D_t7433*, int32_t, const MethodInfo*))List_1_CopyTo_m48933_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49087(__this, ___match, method) (( KeyValuePair_2_t7146  (*) (List_1_t7434 *, Predicate_1_t7437 *, const MethodInfo*))List_1_Find_m48934_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49088(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7437 *, const MethodInfo*))List_1_CheckMatch_m48935_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49089(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7434 *, int32_t, int32_t, Predicate_1_t7437 *, const MethodInfo*))List_1_GetIndex_m48936_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define List_1_GetEnumerator_m49090(__this, method) (( Enumerator_t7438  (*) (List_1_t7434 *, const MethodInfo*))List_1_GetEnumerator_m48937_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49091(__this, ___index, ___count, method) (( List_1_t7434 * (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48938_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define List_1_IndexOf_m49092(__this, ___item, method) (( int32_t (*) (List_1_t7434 *, KeyValuePair_2_t7146 , const MethodInfo*))List_1_IndexOf_m48939_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49093(__this, ___start, ___delta, method) (( void (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48940_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49094(__this, ___index, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Insert(System.Int32,T)
#define List_1_Insert_m49095(__this, ___index, ___item, method) (( void (*) (List_1_t7434 *, int32_t, KeyValuePair_2_t7146 , const MethodInfo*))List_1_Insert_m48942_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49096(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48943_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49097(__this, ___index, ___collection, method) (( void (*) (List_1_t7434 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48944_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49098(__this, ___index, ___collection, method) (( void (*) (List_1_t7434 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48945_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49099(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7434 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48946_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Remove(T)
#define List_1_Remove_m49100(__this, ___item, method) (( bool (*) (List_1_t7434 *, KeyValuePair_2_t7146 , const MethodInfo*))List_1_Remove_m48947_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49101(__this, ___match, method) (( int32_t (*) (List_1_t7434 *, Predicate_1_t7437 *, const MethodInfo*))List_1_RemoveAll_m48948_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49102(__this, ___index, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49103(__this, ___index, ___count, method) (( void (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48950_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Reverse()
#define List_1_Reverse_m49104(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_Reverse_m48951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort()
#define List_1_Sort_m49105(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_Sort_m48952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49106(__this, ___comparer, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_Sort_m48953_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49107(__this, ___comparison, method) (( void (*) (List_1_t7434 *, Comparison_1_t7439 *, const MethodInfo*))List_1_Sort_m48954_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::ToArray()
#define List_1_ToArray_m49108(__this, method) (( KeyValuePair_2U5BU5D_t7433* (*) (List_1_t7434 *, const MethodInfo*))List_1_ToArray_m48955_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::TrimExcess()
#define List_1_TrimExcess_m49109(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_TrimExcess_m48956_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Capacity()
#define List_1_get_Capacity_m49110(__this, method) (( int32_t (*) (List_1_t7434 *, const MethodInfo*))List_1_get_Capacity_m48957_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49111(__this, ___value, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48958_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define List_1_get_Count_m49112(__this, method) (( int32_t (*) (List_1_t7434 *, const MethodInfo*))List_1_get_Count_m48959_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define List_1_get_Item_m49113(__this, ___index, method) (( KeyValuePair_2_t7146  (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_get_Item_m48960_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49114(__this, ___index, ___value, method) (( void (*) (List_1_t7434 *, int32_t, KeyValuePair_2_t7146 , const MethodInfo*))List_1_set_Item_m48961_gshared)(__this, ___index, ___value, method)
