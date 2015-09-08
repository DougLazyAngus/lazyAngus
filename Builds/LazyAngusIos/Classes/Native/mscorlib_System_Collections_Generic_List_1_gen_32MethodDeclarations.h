#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t902;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t9611;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t507;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t9612;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t9613;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t6384;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t6385;
// System.Collections.Generic.IComparer`1<UnityEngine.GameObject>
struct IComparer_1_t9614;
// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t6387;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5980(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m33079(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m33080(__this, ___capacity, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(T[],System.Int32)
#define List_1__ctor_m33081(__this, ___data, ___size, method) (( void (*) (List_1_t902 *, GameObjectU5BU5D_t507*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m33082(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33083(__this, method) (( Object_t* (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m33084(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t902 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33085(__this, method) (( Object_t * (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m33086(__this, ___item, method) (( int32_t (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m33087(__this, ___item, method) (( bool (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m33088(__this, ___item, method) (( int32_t (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m33089(__this, ___index, ___item, method) (( void (*) (List_1_t902 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m33090(__this, ___item, method) (( void (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33091(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33092(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m33093(__this, method) (( Object_t * (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m33094(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m33095(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m33096(__this, ___index, method) (( Object_t * (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m33097(__this, ___index, ___value, method) (( void (*) (List_1_t902 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m33098(__this, ___item, method) (( void (*) (List_1_t902 *, GameObject_t352 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m33099(__this, ___newCount, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m33100(__this, ___idx, ___count, method) (( void (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m33101(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m33102(__this, ___enumerable, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m33103(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::AsReadOnly()
#define List_1_AsReadOnly_m33104(__this, method) (( ReadOnlyCollection_1_t6384 * (*) (List_1_t902 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m33105(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m33106(__this, ___item, method) (( bool (*) (List_1_t902 *, GameObject_t352 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m33107(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t902 *, GameObjectU5BU5D_t507*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::Find(System.Predicate`1<T>)
#define List_1_Find_m33108(__this, ___match, method) (( GameObject_t352 * (*) (List_1_t902 *, Predicate_1_t6385 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m33109(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6385 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m33110(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t902 *, int32_t, int32_t, Predicate_1_t6385 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m33111(__this, method) (( Enumerator_t6386  (*) (List_1_t902 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m33112(__this, ___index, ___count, method) (( List_1_t902 * (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m33113(__this, ___item, method) (( int32_t (*) (List_1_t902 *, GameObject_t352 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m33114(__this, ___start, ___delta, method) (( void (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m33115(__this, ___index, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m33116(__this, ___index, ___item, method) (( void (*) (List_1_t902 *, int32_t, GameObject_t352 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m33117(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m33118(__this, ___index, ___collection, method) (( void (*) (List_1_t902 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m33119(__this, ___index, ___collection, method) (( void (*) (List_1_t902 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m33120(__this, ___index, ___enumerable, method) (( void (*) (List_1_t902 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m33121(__this, ___item, method) (( bool (*) (List_1_t902 *, GameObject_t352 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m33122(__this, ___match, method) (( int32_t (*) (List_1_t902 *, Predicate_1_t6385 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m33123(__this, ___index, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m33124(__this, ___index, ___count, method) (( void (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Reverse()
#define List_1_Reverse_m33125(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort()
#define List_1_Sort_m33126(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m33127(__this, ___comparer, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m33128(__this, ___comparison, method) (( void (*) (List_1_t902 *, Comparison_1_t6387 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m33129(__this, method) (( GameObjectU5BU5D_t507* (*) (List_1_t902 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::TrimExcess()
#define List_1_TrimExcess_m33130(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m33131(__this, method) (( int32_t (*) (List_1_t902 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m33132(__this, ___value, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m33133(__this, method) (( int32_t (*) (List_1_t902 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m33134(__this, ___index, method) (( GameObject_t352 * (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m33135(__this, ___index, ___value, method) (( void (*) (List_1_t902 *, int32_t, GameObject_t352 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)
