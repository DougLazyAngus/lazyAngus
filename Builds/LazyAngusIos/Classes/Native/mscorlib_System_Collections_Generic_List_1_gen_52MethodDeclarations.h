#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t3597;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t4329;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t4330;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t4331;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t3600;
// System.Single[]
struct SingleU5BU5D_t450;
// System.Predicate`1<System.Single>
struct Predicate_1_t3605;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t4332;
// System.Comparison`1<System.Single>
struct Comparison_1_t3609;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m21382_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1__ctor_m21382(__this, method) (( void (*) (List_1_t3597 *, const MethodInfo*))List_1__ctor_m21382_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21383_gshared (List_1_t3597 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21383(__this, ___collection, method) (( void (*) (List_1_t3597 *, Object_t*, const MethodInfo*))List_1__ctor_m21383_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21384_gshared (List_1_t3597 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21384(__this, ___capacity, method) (( void (*) (List_1_t3597 *, int32_t, const MethodInfo*))List_1__ctor_m21384_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m21385_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21385(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21385_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21386_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21386(__this, method) (( Object_t* (*) (List_1_t3597 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21386_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21387_gshared (List_1_t3597 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21387(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3597 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21387_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21388_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21388(__this, method) (( Object_t * (*) (List_1_t3597 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21388_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21389_gshared (List_1_t3597 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21389(__this, ___item, method) (( int32_t (*) (List_1_t3597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21389_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21390_gshared (List_1_t3597 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21390(__this, ___item, method) (( bool (*) (List_1_t3597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21390_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21391_gshared (List_1_t3597 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21391(__this, ___item, method) (( int32_t (*) (List_1_t3597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21391_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21392_gshared (List_1_t3597 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21392(__this, ___index, ___item, method) (( void (*) (List_1_t3597 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21392_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21393_gshared (List_1_t3597 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21393(__this, ___item, method) (( void (*) (List_1_t3597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21393_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21394_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21394(__this, method) (( bool (*) (List_1_t3597 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21394_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21395_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21395(__this, method) (( bool (*) (List_1_t3597 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21395_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21396_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21396(__this, method) (( Object_t * (*) (List_1_t3597 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21397_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21397(__this, method) (( bool (*) (List_1_t3597 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21398_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21398(__this, method) (( bool (*) (List_1_t3597 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21398_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21399_gshared (List_1_t3597 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21399(__this, ___index, method) (( Object_t * (*) (List_1_t3597 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21399_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21400_gshared (List_1_t3597 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21400(__this, ___index, ___value, method) (( void (*) (List_1_t3597 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21400_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m21401_gshared (List_1_t3597 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m21401(__this, ___item, method) (( void (*) (List_1_t3597 *, float, const MethodInfo*))List_1_Add_m21401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21402_gshared (List_1_t3597 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21402(__this, ___newCount, method) (( void (*) (List_1_t3597 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21402_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21403_gshared (List_1_t3597 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21403(__this, ___collection, method) (( void (*) (List_1_t3597 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21403_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21404_gshared (List_1_t3597 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21404(__this, ___enumerable, method) (( void (*) (List_1_t3597 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21404_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21405_gshared (List_1_t3597 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21405(__this, ___collection, method) (( void (*) (List_1_t3597 *, Object_t*, const MethodInfo*))List_1_AddRange_m21405_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3600 * List_1_AsReadOnly_m21406_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21406(__this, method) (( ReadOnlyCollection_1_t3600 * (*) (List_1_t3597 *, const MethodInfo*))List_1_AsReadOnly_m21406_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m21407_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_Clear_m21407(__this, method) (( void (*) (List_1_t3597 *, const MethodInfo*))List_1_Clear_m21407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m21408_gshared (List_1_t3597 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m21408(__this, ___item, method) (( bool (*) (List_1_t3597 *, float, const MethodInfo*))List_1_Contains_m21408_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21409_gshared (List_1_t3597 * __this, SingleU5BU5D_t450* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21409(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3597 *, SingleU5BU5D_t450*, int32_t, const MethodInfo*))List_1_CopyTo_m21409_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m21410_gshared (List_1_t3597 * __this, Predicate_1_t3605 * ___match, const MethodInfo* method);
#define List_1_Find_m21410(__this, ___match, method) (( float (*) (List_1_t3597 *, Predicate_1_t3605 *, const MethodInfo*))List_1_Find_m21410_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21411_gshared (Object_t * __this /* static, unused */, Predicate_1_t3605 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21411(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3605 *, const MethodInfo*))List_1_CheckMatch_m21411_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21412_gshared (List_1_t3597 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3605 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21412(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3597 *, int32_t, int32_t, Predicate_1_t3605 *, const MethodInfo*))List_1_GetIndex_m21412_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t3598  List_1_GetEnumerator_m21413_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21413(__this, method) (( Enumerator_t3598  (*) (List_1_t3597 *, const MethodInfo*))List_1_GetEnumerator_m21413_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21414_gshared (List_1_t3597 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m21414(__this, ___item, method) (( int32_t (*) (List_1_t3597 *, float, const MethodInfo*))List_1_IndexOf_m21414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21415_gshared (List_1_t3597 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21415(__this, ___start, ___delta, method) (( void (*) (List_1_t3597 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21415_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21416_gshared (List_1_t3597 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21416(__this, ___index, method) (( void (*) (List_1_t3597 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21417_gshared (List_1_t3597 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m21417(__this, ___index, ___item, method) (( void (*) (List_1_t3597 *, int32_t, float, const MethodInfo*))List_1_Insert_m21417_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21418_gshared (List_1_t3597 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21418(__this, ___collection, method) (( void (*) (List_1_t3597 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21418_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m21419_gshared (List_1_t3597 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m21419(__this, ___item, method) (( bool (*) (List_1_t3597 *, float, const MethodInfo*))List_1_Remove_m21419_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21420_gshared (List_1_t3597 * __this, Predicate_1_t3605 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21420(__this, ___match, method) (( int32_t (*) (List_1_t3597 *, Predicate_1_t3605 *, const MethodInfo*))List_1_RemoveAll_m21420_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21421_gshared (List_1_t3597 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21421(__this, ___index, method) (( void (*) (List_1_t3597 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21421_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m21422_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_Reverse_m21422(__this, method) (( void (*) (List_1_t3597 *, const MethodInfo*))List_1_Reverse_m21422_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m21423_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_Sort_m21423(__this, method) (( void (*) (List_1_t3597 *, const MethodInfo*))List_1_Sort_m21423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21424_gshared (List_1_t3597 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21424(__this, ___comparer, method) (( void (*) (List_1_t3597 *, Object_t*, const MethodInfo*))List_1_Sort_m21424_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21425_gshared (List_1_t3597 * __this, Comparison_1_t3609 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21425(__this, ___comparison, method) (( void (*) (List_1_t3597 *, Comparison_1_t3609 *, const MethodInfo*))List_1_Sort_m21425_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t450* List_1_ToArray_m21426_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_ToArray_m21426(__this, method) (( SingleU5BU5D_t450* (*) (List_1_t3597 *, const MethodInfo*))List_1_ToArray_m21426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m21427_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21427(__this, method) (( void (*) (List_1_t3597 *, const MethodInfo*))List_1_TrimExcess_m21427_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21428_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21428(__this, method) (( int32_t (*) (List_1_t3597 *, const MethodInfo*))List_1_get_Capacity_m21428_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21429_gshared (List_1_t3597 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21429(__this, ___value, method) (( void (*) (List_1_t3597 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21429_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m21430_gshared (List_1_t3597 * __this, const MethodInfo* method);
#define List_1_get_Count_m21430(__this, method) (( int32_t (*) (List_1_t3597 *, const MethodInfo*))List_1_get_Count_m21430_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m21431_gshared (List_1_t3597 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21431(__this, ___index, method) (( float (*) (List_1_t3597 *, int32_t, const MethodInfo*))List_1_get_Item_m21431_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21432_gshared (List_1_t3597 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m21432(__this, ___index, ___value, method) (( void (*) (List_1_t3597 *, int32_t, float, const MethodInfo*))List_1_set_Item_m21432_gshared)(__this, ___index, ___value, method)
