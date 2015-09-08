#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>
struct List_1_t3335;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3333;
// System.Collections.Generic.IEnumerable`1<System.Configuration.ConfigurationProperty>
struct IEnumerable_1_t10328;
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t9158;
// System.Collections.Generic.IEnumerator`1<System.Configuration.ConfigurationProperty>
struct IEnumerator_1_t10329;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Configuration.ConfigurationProperty>
struct ICollection_1_t10330;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Configuration.ConfigurationProperty>
struct ReadOnlyCollection_1_t9160;
// System.Predicate`1<System.Configuration.ConfigurationProperty>
struct Predicate_1_t9161;
// System.Collections.Generic.IComparer`1<System.Configuration.ConfigurationProperty>
struct IComparer_1_t10331;
// System.Comparison`1<System.Configuration.ConfigurationProperty>
struct Comparison_1_t9162;
// System.Collections.Generic.List`1/Enumerator<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m12108(__this, method) (( void (*) (List_1_t3335 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67631(__this, ___collection, method) (( void (*) (List_1_t3335 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(System.Int32)
#define List_1__ctor_m67632(__this, ___capacity, method) (( void (*) (List_1_t3335 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(T[],System.Int32)
#define List_1__ctor_m67633(__this, ___data, ___size, method) (( void (*) (List_1_t3335 *, ConfigurationPropertyU5BU5D_t9158*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.cctor()
#define List_1__cctor_m67634(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67635(__this, method) (( Object_t* (*) (List_1_t3335 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67636(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3335 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67637(__this, method) (( Object_t * (*) (List_1_t3335 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67638(__this, ___item, method) (( int32_t (*) (List_1_t3335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67639(__this, ___item, method) (( bool (*) (List_1_t3335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67640(__this, ___item, method) (( int32_t (*) (List_1_t3335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67641(__this, ___index, ___item, method) (( void (*) (List_1_t3335 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67642(__this, ___item, method) (( void (*) (List_1_t3335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67643(__this, method) (( bool (*) (List_1_t3335 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67644(__this, method) (( bool (*) (List_1_t3335 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67645(__this, method) (( Object_t * (*) (List_1_t3335 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67646(__this, method) (( bool (*) (List_1_t3335 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67647(__this, method) (( bool (*) (List_1_t3335 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67648(__this, ___index, method) (( Object_t * (*) (List_1_t3335 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67649(__this, ___index, ___value, method) (( void (*) (List_1_t3335 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Add(T)
#define List_1_Add_m67650(__this, ___item, method) (( void (*) (List_1_t3335 *, ConfigurationProperty_t3333 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67651(__this, ___newCount, method) (( void (*) (List_1_t3335 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67652(__this, ___idx, ___count, method) (( void (*) (List_1_t3335 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67653(__this, ___collection, method) (( void (*) (List_1_t3335 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67654(__this, ___enumerable, method) (( void (*) (List_1_t3335 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67655(__this, ___collection, method) (( void (*) (List_1_t3335 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AsReadOnly()
#define List_1_AsReadOnly_m67656(__this, method) (( ReadOnlyCollection_1_t9160 * (*) (List_1_t3335 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Clear()
#define List_1_Clear_m67657(__this, method) (( void (*) (List_1_t3335 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Contains(T)
#define List_1_Contains_m67658(__this, ___item, method) (( bool (*) (List_1_t3335 *, ConfigurationProperty_t3333 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67659(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3335 *, ConfigurationPropertyU5BU5D_t9158*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Find(System.Predicate`1<T>)
#define List_1_Find_m67660(__this, ___match, method) (( ConfigurationProperty_t3333 * (*) (List_1_t3335 *, Predicate_1_t9161 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67661(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9161 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67662(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3335 *, int32_t, int32_t, Predicate_1_t9161 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetEnumerator()
#define List_1_GetEnumerator_m12109(__this, method) (( Enumerator_t3383  (*) (List_1_t3335 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67663(__this, ___index, ___count, method) (( List_1_t3335 * (*) (List_1_t3335 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::IndexOf(T)
#define List_1_IndexOf_m67664(__this, ___item, method) (( int32_t (*) (List_1_t3335 *, ConfigurationProperty_t3333 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67665(__this, ___start, ___delta, method) (( void (*) (List_1_t3335 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67666(__this, ___index, method) (( void (*) (List_1_t3335 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Insert(System.Int32,T)
#define List_1_Insert_m67667(__this, ___index, ___item, method) (( void (*) (List_1_t3335 *, int32_t, ConfigurationProperty_t3333 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67668(__this, ___collection, method) (( void (*) (List_1_t3335 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67669(__this, ___index, ___collection, method) (( void (*) (List_1_t3335 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67670(__this, ___index, ___collection, method) (( void (*) (List_1_t3335 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67671(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3335 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Remove(T)
#define List_1_Remove_m67672(__this, ___item, method) (( bool (*) (List_1_t3335 *, ConfigurationProperty_t3333 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67673(__this, ___match, method) (( int32_t (*) (List_1_t3335 *, Predicate_1_t9161 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67674(__this, ___index, method) (( void (*) (List_1_t3335 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67675(__this, ___index, ___count, method) (( void (*) (List_1_t3335 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Reverse()
#define List_1_Reverse_m67676(__this, method) (( void (*) (List_1_t3335 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort()
#define List_1_Sort_m67677(__this, method) (( void (*) (List_1_t3335 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67678(__this, ___comparer, method) (( void (*) (List_1_t3335 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67679(__this, ___comparison, method) (( void (*) (List_1_t3335 *, Comparison_1_t9162 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::ToArray()
#define List_1_ToArray_m67680(__this, method) (( ConfigurationPropertyU5BU5D_t9158* (*) (List_1_t3335 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::TrimExcess()
#define List_1_TrimExcess_m67681(__this, method) (( void (*) (List_1_t3335 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Capacity()
#define List_1_get_Capacity_m67682(__this, method) (( int32_t (*) (List_1_t3335 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67683(__this, ___value, method) (( void (*) (List_1_t3335 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Count()
#define List_1_get_Count_m67684(__this, method) (( int32_t (*) (List_1_t3335 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Item(System.Int32)
#define List_1_get_Item_m67685(__this, ___index, method) (( ConfigurationProperty_t3333 * (*) (List_1_t3335 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::set_Item(System.Int32,T)
#define List_1_set_Item_m67686(__this, ___index, ___value, method) (( void (*) (List_1_t3335 *, int32_t, ConfigurationProperty_t3333 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)
