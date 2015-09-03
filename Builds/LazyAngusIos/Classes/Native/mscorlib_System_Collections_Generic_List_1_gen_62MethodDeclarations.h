#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>
struct List_1_t3331;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3329;
// System.Collections.Generic.IEnumerable`1<System.Configuration.ConfigurationProperty>
struct IEnumerable_1_t10322;
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t9152;
// System.Collections.Generic.IEnumerator`1<System.Configuration.ConfigurationProperty>
struct IEnumerator_1_t10323;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Configuration.ConfigurationProperty>
struct ICollection_1_t10324;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Configuration.ConfigurationProperty>
struct ReadOnlyCollection_1_t9154;
// System.Predicate`1<System.Configuration.ConfigurationProperty>
struct Predicate_1_t9155;
// System.Collections.Generic.IComparer`1<System.Configuration.ConfigurationProperty>
struct IComparer_1_t10325;
// System.Comparison`1<System.Configuration.ConfigurationProperty>
struct Comparison_1_t9156;
// System.Collections.Generic.List`1/Enumerator<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m12095(__this, method) (( void (*) (List_1_t3331 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67606(__this, ___collection, method) (( void (*) (List_1_t3331 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(System.Int32)
#define List_1__ctor_m67607(__this, ___capacity, method) (( void (*) (List_1_t3331 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(T[],System.Int32)
#define List_1__ctor_m67608(__this, ___data, ___size, method) (( void (*) (List_1_t3331 *, ConfigurationPropertyU5BU5D_t9152*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.cctor()
#define List_1__cctor_m67609(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67610(__this, method) (( Object_t* (*) (List_1_t3331 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67611(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3331 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67612(__this, method) (( Object_t * (*) (List_1_t3331 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67613(__this, ___item, method) (( int32_t (*) (List_1_t3331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67614(__this, ___item, method) (( bool (*) (List_1_t3331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67615(__this, ___item, method) (( int32_t (*) (List_1_t3331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67616(__this, ___index, ___item, method) (( void (*) (List_1_t3331 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67617(__this, ___item, method) (( void (*) (List_1_t3331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67618(__this, method) (( bool (*) (List_1_t3331 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67619(__this, method) (( bool (*) (List_1_t3331 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67620(__this, method) (( Object_t * (*) (List_1_t3331 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67621(__this, method) (( bool (*) (List_1_t3331 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67622(__this, method) (( bool (*) (List_1_t3331 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67623(__this, ___index, method) (( Object_t * (*) (List_1_t3331 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67624(__this, ___index, ___value, method) (( void (*) (List_1_t3331 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Add(T)
#define List_1_Add_m67625(__this, ___item, method) (( void (*) (List_1_t3331 *, ConfigurationProperty_t3329 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67626(__this, ___newCount, method) (( void (*) (List_1_t3331 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67627(__this, ___idx, ___count, method) (( void (*) (List_1_t3331 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67628(__this, ___collection, method) (( void (*) (List_1_t3331 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67629(__this, ___enumerable, method) (( void (*) (List_1_t3331 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67630(__this, ___collection, method) (( void (*) (List_1_t3331 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AsReadOnly()
#define List_1_AsReadOnly_m67631(__this, method) (( ReadOnlyCollection_1_t9154 * (*) (List_1_t3331 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Clear()
#define List_1_Clear_m67632(__this, method) (( void (*) (List_1_t3331 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Contains(T)
#define List_1_Contains_m67633(__this, ___item, method) (( bool (*) (List_1_t3331 *, ConfigurationProperty_t3329 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67634(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3331 *, ConfigurationPropertyU5BU5D_t9152*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Find(System.Predicate`1<T>)
#define List_1_Find_m67635(__this, ___match, method) (( ConfigurationProperty_t3329 * (*) (List_1_t3331 *, Predicate_1_t9155 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67636(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9155 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67637(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3331 *, int32_t, int32_t, Predicate_1_t9155 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetEnumerator()
#define List_1_GetEnumerator_m12096(__this, method) (( Enumerator_t3379  (*) (List_1_t3331 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67638(__this, ___index, ___count, method) (( List_1_t3331 * (*) (List_1_t3331 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::IndexOf(T)
#define List_1_IndexOf_m67639(__this, ___item, method) (( int32_t (*) (List_1_t3331 *, ConfigurationProperty_t3329 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67640(__this, ___start, ___delta, method) (( void (*) (List_1_t3331 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67641(__this, ___index, method) (( void (*) (List_1_t3331 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Insert(System.Int32,T)
#define List_1_Insert_m67642(__this, ___index, ___item, method) (( void (*) (List_1_t3331 *, int32_t, ConfigurationProperty_t3329 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67643(__this, ___collection, method) (( void (*) (List_1_t3331 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67644(__this, ___index, ___collection, method) (( void (*) (List_1_t3331 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67645(__this, ___index, ___collection, method) (( void (*) (List_1_t3331 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67646(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3331 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Remove(T)
#define List_1_Remove_m67647(__this, ___item, method) (( bool (*) (List_1_t3331 *, ConfigurationProperty_t3329 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67648(__this, ___match, method) (( int32_t (*) (List_1_t3331 *, Predicate_1_t9155 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67649(__this, ___index, method) (( void (*) (List_1_t3331 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67650(__this, ___index, ___count, method) (( void (*) (List_1_t3331 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Reverse()
#define List_1_Reverse_m67651(__this, method) (( void (*) (List_1_t3331 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort()
#define List_1_Sort_m67652(__this, method) (( void (*) (List_1_t3331 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67653(__this, ___comparer, method) (( void (*) (List_1_t3331 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67654(__this, ___comparison, method) (( void (*) (List_1_t3331 *, Comparison_1_t9156 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::ToArray()
#define List_1_ToArray_m67655(__this, method) (( ConfigurationPropertyU5BU5D_t9152* (*) (List_1_t3331 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::TrimExcess()
#define List_1_TrimExcess_m67656(__this, method) (( void (*) (List_1_t3331 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Capacity()
#define List_1_get_Capacity_m67657(__this, method) (( int32_t (*) (List_1_t3331 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67658(__this, ___value, method) (( void (*) (List_1_t3331 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Count()
#define List_1_get_Count_m67659(__this, method) (( int32_t (*) (List_1_t3331 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Item(System.Int32)
#define List_1_get_Item_m67660(__this, ___index, method) (( ConfigurationProperty_t3329 * (*) (List_1_t3331 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::set_Item(System.Int32,T)
#define List_1_set_Item_m67661(__this, ___index, ___value, method) (( void (*) (List_1_t3331 *, int32_t, ConfigurationProperty_t3329 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)
