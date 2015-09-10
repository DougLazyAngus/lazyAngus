#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct List_1_t2183;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1200;
// System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerable_1_t10222;
// System.Action`1<System.Threading.Tasks.Task>[]
struct Action_1U5BU5D_t8934;
// System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerator_1_t10223;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ICollection_1_t10224;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ReadOnlyCollection_1_t8935;
// System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>
struct Predicate_1_t8936;
// System.Collections.Generic.IComparer`1<System.Action`1<System.Threading.Tasks.Task>>
struct IComparer_1_t10225;
// System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>
struct Comparison_1_t8938;
// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_101.h"

// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m8040(__this, method) (( void (*) (List_1_t2183 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m64592(__this, ___collection, method) (( void (*) (List_1_t2183 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Int32)
#define List_1__ctor_m64593(__this, ___capacity, method) (( void (*) (List_1_t2183 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(T[],System.Int32)
#define List_1__ctor_m64594(__this, ___data, ___size, method) (( void (*) (List_1_t2183 *, Action_1U5BU5D_t8934*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.cctor()
#define List_1__cctor_m64595(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m64596(__this, method) (( Object_t* (*) (List_1_t2183 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m64597(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2183 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m64598(__this, method) (( Object_t * (*) (List_1_t2183 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m64599(__this, ___item, method) (( int32_t (*) (List_1_t2183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m64600(__this, ___item, method) (( bool (*) (List_1_t2183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m64601(__this, ___item, method) (( int32_t (*) (List_1_t2183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m64602(__this, ___index, ___item, method) (( void (*) (List_1_t2183 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m64603(__this, ___item, method) (( void (*) (List_1_t2183 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m64604(__this, method) (( bool (*) (List_1_t2183 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m64605(__this, method) (( bool (*) (List_1_t2183 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m64606(__this, method) (( Object_t * (*) (List_1_t2183 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m64607(__this, method) (( bool (*) (List_1_t2183 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m64608(__this, method) (( bool (*) (List_1_t2183 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m64609(__this, ___index, method) (( Object_t * (*) (List_1_t2183 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m64610(__this, ___index, ___value, method) (( void (*) (List_1_t2183 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Add(T)
#define List_1_Add_m64611(__this, ___item, method) (( void (*) (List_1_t2183 *, Action_1_t1200 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m64612(__this, ___newCount, method) (( void (*) (List_1_t2183 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m64613(__this, ___idx, ___count, method) (( void (*) (List_1_t2183 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m64614(__this, ___collection, method) (( void (*) (List_1_t2183 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m64615(__this, ___enumerable, method) (( void (*) (List_1_t2183 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m64616(__this, ___collection, method) (( void (*) (List_1_t2183 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AsReadOnly()
#define List_1_AsReadOnly_m64617(__this, method) (( ReadOnlyCollection_1_t8935 * (*) (List_1_t2183 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Clear()
#define List_1_Clear_m64618(__this, method) (( void (*) (List_1_t2183 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Contains(T)
#define List_1_Contains_m64619(__this, ___item, method) (( bool (*) (List_1_t2183 *, Action_1_t1200 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m64620(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2183 *, Action_1U5BU5D_t8934*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Find(System.Predicate`1<T>)
#define List_1_Find_m64621(__this, ___match, method) (( Action_1_t1200 * (*) (List_1_t2183 *, Predicate_1_t8936 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m64622(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8936 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m64623(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2183 *, int32_t, int32_t, Predicate_1_t8936 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator()
#define List_1_GetEnumerator_m64624(__this, method) (( Enumerator_t8937  (*) (List_1_t2183 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m64625(__this, ___index, ___count, method) (( List_1_t2183 * (*) (List_1_t2183 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::IndexOf(T)
#define List_1_IndexOf_m64626(__this, ___item, method) (( int32_t (*) (List_1_t2183 *, Action_1_t1200 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m64627(__this, ___start, ___delta, method) (( void (*) (List_1_t2183 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m64628(__this, ___index, method) (( void (*) (List_1_t2183 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Insert(System.Int32,T)
#define List_1_Insert_m64629(__this, ___index, ___item, method) (( void (*) (List_1_t2183 *, int32_t, Action_1_t1200 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m64630(__this, ___collection, method) (( void (*) (List_1_t2183 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m64631(__this, ___index, ___collection, method) (( void (*) (List_1_t2183 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m64632(__this, ___index, ___collection, method) (( void (*) (List_1_t2183 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m64633(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2183 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Remove(T)
#define List_1_Remove_m64634(__this, ___item, method) (( bool (*) (List_1_t2183 *, Action_1_t1200 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m64635(__this, ___match, method) (( int32_t (*) (List_1_t2183 *, Predicate_1_t8936 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m64636(__this, ___index, method) (( void (*) (List_1_t2183 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m64637(__this, ___index, ___count, method) (( void (*) (List_1_t2183 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Reverse()
#define List_1_Reverse_m64638(__this, method) (( void (*) (List_1_t2183 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort()
#define List_1_Sort_m64639(__this, method) (( void (*) (List_1_t2183 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m64640(__this, ___comparer, method) (( void (*) (List_1_t2183 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m64641(__this, ___comparison, method) (( void (*) (List_1_t2183 *, Comparison_1_t8938 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::ToArray()
#define List_1_ToArray_m64642(__this, method) (( Action_1U5BU5D_t8934* (*) (List_1_t2183 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::TrimExcess()
#define List_1_TrimExcess_m64643(__this, method) (( void (*) (List_1_t2183 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Capacity()
#define List_1_get_Capacity_m64644(__this, method) (( int32_t (*) (List_1_t2183 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m64645(__this, ___value, method) (( void (*) (List_1_t2183 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Count()
#define List_1_get_Count_m64646(__this, method) (( int32_t (*) (List_1_t2183 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Item(System.Int32)
#define List_1_get_Item_m64647(__this, ___index, method) (( Action_1_t1200 * (*) (List_1_t2183 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Item(System.Int32,T)
#define List_1_set_Item_m64648(__this, ___index, ___value, method) (( void (*) (List_1_t2183 *, int32_t, Action_1_t1200 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)
