#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t2973;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1400;
// System.Type[]
struct TypeU5BU5D_t1224;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t9739;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9734;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t9115;
// System.Predicate`1<System.Type>
struct Predicate_1_t9116;
// System.Collections.Generic.IComparer`1<System.Type>
struct IComparer_1_t10310;
// System.Comparison`1<System.Type>
struct Comparison_1_t9118;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_108.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10339(__this, method) (( void (*) (List_1_t2973 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67138(__this, ___collection, method) (( void (*) (List_1_t2973 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m67139(__this, ___capacity, method) (( void (*) (List_1_t2973 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(T[],System.Int32)
#define List_1__ctor_m67140(__this, ___data, ___size, method) (( void (*) (List_1_t2973 *, TypeU5BU5D_t1224*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m67141(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67142(__this, method) (( Object_t* (*) (List_1_t2973 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67143(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2973 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67144(__this, method) (( Object_t * (*) (List_1_t2973 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67145(__this, ___item, method) (( int32_t (*) (List_1_t2973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67146(__this, ___item, method) (( bool (*) (List_1_t2973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67147(__this, ___item, method) (( int32_t (*) (List_1_t2973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67148(__this, ___index, ___item, method) (( void (*) (List_1_t2973 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67149(__this, ___item, method) (( void (*) (List_1_t2973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67150(__this, method) (( bool (*) (List_1_t2973 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67151(__this, method) (( bool (*) (List_1_t2973 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67152(__this, method) (( Object_t * (*) (List_1_t2973 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67153(__this, method) (( bool (*) (List_1_t2973 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67154(__this, method) (( bool (*) (List_1_t2973 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67155(__this, ___index, method) (( Object_t * (*) (List_1_t2973 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67156(__this, ___index, ___value, method) (( void (*) (List_1_t2973 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m67157(__this, ___item, method) (( void (*) (List_1_t2973 *, Type_t *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67158(__this, ___newCount, method) (( void (*) (List_1_t2973 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67159(__this, ___idx, ___count, method) (( void (*) (List_1_t2973 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67160(__this, ___collection, method) (( void (*) (List_1_t2973 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67161(__this, ___enumerable, method) (( void (*) (List_1_t2973 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67162(__this, ___collection, method) (( void (*) (List_1_t2973 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m67163(__this, method) (( ReadOnlyCollection_1_t9115 * (*) (List_1_t2973 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m67164(__this, method) (( void (*) (List_1_t2973 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m67165(__this, ___item, method) (( bool (*) (List_1_t2973 *, Type_t *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67166(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2973 *, TypeU5BU5D_t1224*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m67167(__this, ___match, method) (( Type_t * (*) (List_1_t2973 *, Predicate_1_t9116 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67168(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9116 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67169(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2973 *, int32_t, int32_t, Predicate_1_t9116 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m67170(__this, method) (( Enumerator_t9117  (*) (List_1_t2973 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Type>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67171(__this, ___index, ___count, method) (( List_1_t2973 * (*) (List_1_t2973 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m67172(__this, ___item, method) (( int32_t (*) (List_1_t2973 *, Type_t *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67173(__this, ___start, ___delta, method) (( void (*) (List_1_t2973 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67174(__this, ___index, method) (( void (*) (List_1_t2973 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m67175(__this, ___index, ___item, method) (( void (*) (List_1_t2973 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67176(__this, ___collection, method) (( void (*) (List_1_t2973 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67177(__this, ___index, ___collection, method) (( void (*) (List_1_t2973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67178(__this, ___index, ___collection, method) (( void (*) (List_1_t2973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67179(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m67180(__this, ___item, method) (( bool (*) (List_1_t2973 *, Type_t *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67181(__this, ___match, method) (( int32_t (*) (List_1_t2973 *, Predicate_1_t9116 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67182(__this, ___index, method) (( void (*) (List_1_t2973 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67183(__this, ___index, ___count, method) (( void (*) (List_1_t2973 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m67184(__this, method) (( void (*) (List_1_t2973 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m67185(__this, method) (( void (*) (List_1_t2973 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67186(__this, ___comparer, method) (( void (*) (List_1_t2973 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67187(__this, ___comparison, method) (( void (*) (List_1_t2973 *, Comparison_1_t9118 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m10340(__this, method) (( TypeU5BU5D_t1224* (*) (List_1_t2973 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m67188(__this, method) (( void (*) (List_1_t2973 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m67189(__this, method) (( int32_t (*) (List_1_t2973 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67190(__this, ___value, method) (( void (*) (List_1_t2973 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m67191(__this, method) (( int32_t (*) (List_1_t2973 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m67192(__this, ___index, method) (( Type_t * (*) (List_1_t2973 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m67193(__this, ___index, ___value, method) (( void (*) (List_1_t2973 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)
