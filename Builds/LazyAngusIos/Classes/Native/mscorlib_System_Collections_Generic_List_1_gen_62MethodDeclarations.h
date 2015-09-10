#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>
struct List_1_t3342;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3340;
// System.Collections.Generic.IEnumerable`1<System.Configuration.ConfigurationProperty>
struct IEnumerable_1_t10335;
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t9165;
// System.Collections.Generic.IEnumerator`1<System.Configuration.ConfigurationProperty>
struct IEnumerator_1_t10336;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Configuration.ConfigurationProperty>
struct ICollection_1_t10337;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Configuration.ConfigurationProperty>
struct ReadOnlyCollection_1_t9167;
// System.Predicate`1<System.Configuration.ConfigurationProperty>
struct Predicate_1_t9168;
// System.Collections.Generic.IComparer`1<System.Configuration.ConfigurationProperty>
struct IComparer_1_t10338;
// System.Comparison`1<System.Configuration.ConfigurationProperty>
struct Comparison_1_t9169;
// System.Collections.Generic.List`1/Enumerator<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m12165(__this, method) (( void (*) (List_1_t3342 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67688(__this, ___collection, method) (( void (*) (List_1_t3342 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(System.Int32)
#define List_1__ctor_m67689(__this, ___capacity, method) (( void (*) (List_1_t3342 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.ctor(T[],System.Int32)
#define List_1__ctor_m67690(__this, ___data, ___size, method) (( void (*) (List_1_t3342 *, ConfigurationPropertyU5BU5D_t9165*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::.cctor()
#define List_1__cctor_m67691(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67692(__this, method) (( Object_t* (*) (List_1_t3342 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67693(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3342 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67694(__this, method) (( Object_t * (*) (List_1_t3342 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67695(__this, ___item, method) (( int32_t (*) (List_1_t3342 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67696(__this, ___item, method) (( bool (*) (List_1_t3342 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67697(__this, ___item, method) (( int32_t (*) (List_1_t3342 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67698(__this, ___index, ___item, method) (( void (*) (List_1_t3342 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67699(__this, ___item, method) (( void (*) (List_1_t3342 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67700(__this, method) (( bool (*) (List_1_t3342 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67701(__this, method) (( bool (*) (List_1_t3342 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67702(__this, method) (( Object_t * (*) (List_1_t3342 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67703(__this, method) (( bool (*) (List_1_t3342 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67704(__this, method) (( bool (*) (List_1_t3342 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67705(__this, ___index, method) (( Object_t * (*) (List_1_t3342 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67706(__this, ___index, ___value, method) (( void (*) (List_1_t3342 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Add(T)
#define List_1_Add_m67707(__this, ___item, method) (( void (*) (List_1_t3342 *, ConfigurationProperty_t3340 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67708(__this, ___newCount, method) (( void (*) (List_1_t3342 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67709(__this, ___idx, ___count, method) (( void (*) (List_1_t3342 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67710(__this, ___collection, method) (( void (*) (List_1_t3342 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67711(__this, ___enumerable, method) (( void (*) (List_1_t3342 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67712(__this, ___collection, method) (( void (*) (List_1_t3342 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::AsReadOnly()
#define List_1_AsReadOnly_m67713(__this, method) (( ReadOnlyCollection_1_t9167 * (*) (List_1_t3342 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Clear()
#define List_1_Clear_m67714(__this, method) (( void (*) (List_1_t3342 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Contains(T)
#define List_1_Contains_m67715(__this, ___item, method) (( bool (*) (List_1_t3342 *, ConfigurationProperty_t3340 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67716(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3342 *, ConfigurationPropertyU5BU5D_t9165*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Find(System.Predicate`1<T>)
#define List_1_Find_m67717(__this, ___match, method) (( ConfigurationProperty_t3340 * (*) (List_1_t3342 *, Predicate_1_t9168 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67718(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9168 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67719(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3342 *, int32_t, int32_t, Predicate_1_t9168 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetEnumerator()
#define List_1_GetEnumerator_m12166(__this, method) (( Enumerator_t3390  (*) (List_1_t3342 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67720(__this, ___index, ___count, method) (( List_1_t3342 * (*) (List_1_t3342 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::IndexOf(T)
#define List_1_IndexOf_m67721(__this, ___item, method) (( int32_t (*) (List_1_t3342 *, ConfigurationProperty_t3340 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67722(__this, ___start, ___delta, method) (( void (*) (List_1_t3342 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67723(__this, ___index, method) (( void (*) (List_1_t3342 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Insert(System.Int32,T)
#define List_1_Insert_m67724(__this, ___index, ___item, method) (( void (*) (List_1_t3342 *, int32_t, ConfigurationProperty_t3340 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67725(__this, ___collection, method) (( void (*) (List_1_t3342 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67726(__this, ___index, ___collection, method) (( void (*) (List_1_t3342 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67727(__this, ___index, ___collection, method) (( void (*) (List_1_t3342 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67728(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3342 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Remove(T)
#define List_1_Remove_m67729(__this, ___item, method) (( bool (*) (List_1_t3342 *, ConfigurationProperty_t3340 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67730(__this, ___match, method) (( int32_t (*) (List_1_t3342 *, Predicate_1_t9168 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67731(__this, ___index, method) (( void (*) (List_1_t3342 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67732(__this, ___index, ___count, method) (( void (*) (List_1_t3342 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Reverse()
#define List_1_Reverse_m67733(__this, method) (( void (*) (List_1_t3342 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort()
#define List_1_Sort_m67734(__this, method) (( void (*) (List_1_t3342 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67735(__this, ___comparer, method) (( void (*) (List_1_t3342 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67736(__this, ___comparison, method) (( void (*) (List_1_t3342 *, Comparison_1_t9169 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::ToArray()
#define List_1_ToArray_m67737(__this, method) (( ConfigurationPropertyU5BU5D_t9165* (*) (List_1_t3342 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::TrimExcess()
#define List_1_TrimExcess_m67738(__this, method) (( void (*) (List_1_t3342 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Capacity()
#define List_1_get_Capacity_m67739(__this, method) (( int32_t (*) (List_1_t3342 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67740(__this, ___value, method) (( void (*) (List_1_t3342 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Count()
#define List_1_get_Count_m67741(__this, method) (( int32_t (*) (List_1_t3342 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Item(System.Int32)
#define List_1_get_Item_m67742(__this, ___index, method) (( ConfigurationProperty_t3340 * (*) (List_1_t3342 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::set_Item(System.Int32,T)
#define List_1_set_Item_m67743(__this, ___index, ___value, method) (( void (*) (List_1_t3342 *, int32_t, ConfigurationProperty_t3340 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)
