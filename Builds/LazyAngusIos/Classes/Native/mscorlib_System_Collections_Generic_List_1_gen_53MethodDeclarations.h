#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t3579;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t4316;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t4317;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t4318;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t3582;
// System.Single[]
struct SingleU5BU5D_t441;
// System.Predicate`1<System.Single>
struct Predicate_1_t3587;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t4319;
// System.Comparison`1<System.Single>
struct Comparison_1_t3591;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m21247_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1__ctor_m21247(__this, method) (( void (*) (List_1_t3579 *, const MethodInfo*))List_1__ctor_m21247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21248_gshared (List_1_t3579 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21248(__this, ___collection, method) (( void (*) (List_1_t3579 *, Object_t*, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21249_gshared (List_1_t3579 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21249(__this, ___capacity, method) (( void (*) (List_1_t3579 *, int32_t, const MethodInfo*))List_1__ctor_m21249_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m21250_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21250(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21250_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21251_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21251(__this, method) (( Object_t* (*) (List_1_t3579 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21251_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21252_gshared (List_1_t3579 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21252(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3579 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21252_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21253_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21253(__this, method) (( Object_t * (*) (List_1_t3579 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21253_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21254_gshared (List_1_t3579 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21254(__this, ___item, method) (( int32_t (*) (List_1_t3579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21254_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21255_gshared (List_1_t3579 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21255(__this, ___item, method) (( bool (*) (List_1_t3579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21255_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21256_gshared (List_1_t3579 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21256(__this, ___item, method) (( int32_t (*) (List_1_t3579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21256_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21257_gshared (List_1_t3579 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21257(__this, ___index, ___item, method) (( void (*) (List_1_t3579 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21257_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21258_gshared (List_1_t3579 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21258(__this, ___item, method) (( void (*) (List_1_t3579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21258_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21259_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21259(__this, method) (( bool (*) (List_1_t3579 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21260_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21260(__this, method) (( bool (*) (List_1_t3579 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21260_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21261_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21261(__this, method) (( Object_t * (*) (List_1_t3579 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21261_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21262_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21262(__this, method) (( bool (*) (List_1_t3579 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21263_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21263(__this, method) (( bool (*) (List_1_t3579 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21263_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21264_gshared (List_1_t3579 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21264(__this, ___index, method) (( Object_t * (*) (List_1_t3579 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21264_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21265_gshared (List_1_t3579 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21265(__this, ___index, ___value, method) (( void (*) (List_1_t3579 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21265_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m21266_gshared (List_1_t3579 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m21266(__this, ___item, method) (( void (*) (List_1_t3579 *, float, const MethodInfo*))List_1_Add_m21266_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21267_gshared (List_1_t3579 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21267(__this, ___newCount, method) (( void (*) (List_1_t3579 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21267_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21268_gshared (List_1_t3579 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21268(__this, ___collection, method) (( void (*) (List_1_t3579 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21268_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21269_gshared (List_1_t3579 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21269(__this, ___enumerable, method) (( void (*) (List_1_t3579 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21269_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21270_gshared (List_1_t3579 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21270(__this, ___collection, method) (( void (*) (List_1_t3579 *, Object_t*, const MethodInfo*))List_1_AddRange_m21270_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3582 * List_1_AsReadOnly_m21271_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21271(__this, method) (( ReadOnlyCollection_1_t3582 * (*) (List_1_t3579 *, const MethodInfo*))List_1_AsReadOnly_m21271_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m21272_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_Clear_m21272(__this, method) (( void (*) (List_1_t3579 *, const MethodInfo*))List_1_Clear_m21272_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m21273_gshared (List_1_t3579 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m21273(__this, ___item, method) (( bool (*) (List_1_t3579 *, float, const MethodInfo*))List_1_Contains_m21273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21274_gshared (List_1_t3579 * __this, SingleU5BU5D_t441* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21274(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3579 *, SingleU5BU5D_t441*, int32_t, const MethodInfo*))List_1_CopyTo_m21274_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m21275_gshared (List_1_t3579 * __this, Predicate_1_t3587 * ___match, const MethodInfo* method);
#define List_1_Find_m21275(__this, ___match, method) (( float (*) (List_1_t3579 *, Predicate_1_t3587 *, const MethodInfo*))List_1_Find_m21275_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21276_gshared (Object_t * __this /* static, unused */, Predicate_1_t3587 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21276(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3587 *, const MethodInfo*))List_1_CheckMatch_m21276_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21277_gshared (List_1_t3579 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3587 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21277(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3579 *, int32_t, int32_t, Predicate_1_t3587 *, const MethodInfo*))List_1_GetIndex_m21277_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t3580  List_1_GetEnumerator_m21278_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21278(__this, method) (( Enumerator_t3580  (*) (List_1_t3579 *, const MethodInfo*))List_1_GetEnumerator_m21278_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21279_gshared (List_1_t3579 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m21279(__this, ___item, method) (( int32_t (*) (List_1_t3579 *, float, const MethodInfo*))List_1_IndexOf_m21279_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21280_gshared (List_1_t3579 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21280(__this, ___start, ___delta, method) (( void (*) (List_1_t3579 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21280_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21281_gshared (List_1_t3579 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21281(__this, ___index, method) (( void (*) (List_1_t3579 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21281_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21282_gshared (List_1_t3579 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m21282(__this, ___index, ___item, method) (( void (*) (List_1_t3579 *, int32_t, float, const MethodInfo*))List_1_Insert_m21282_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21283_gshared (List_1_t3579 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21283(__this, ___collection, method) (( void (*) (List_1_t3579 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21283_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m21284_gshared (List_1_t3579 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m21284(__this, ___item, method) (( bool (*) (List_1_t3579 *, float, const MethodInfo*))List_1_Remove_m21284_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21285_gshared (List_1_t3579 * __this, Predicate_1_t3587 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21285(__this, ___match, method) (( int32_t (*) (List_1_t3579 *, Predicate_1_t3587 *, const MethodInfo*))List_1_RemoveAll_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21286_gshared (List_1_t3579 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21286(__this, ___index, method) (( void (*) (List_1_t3579 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21286_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m21287_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_Reverse_m21287(__this, method) (( void (*) (List_1_t3579 *, const MethodInfo*))List_1_Reverse_m21287_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m21288_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_Sort_m21288(__this, method) (( void (*) (List_1_t3579 *, const MethodInfo*))List_1_Sort_m21288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21289_gshared (List_1_t3579 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21289(__this, ___comparer, method) (( void (*) (List_1_t3579 *, Object_t*, const MethodInfo*))List_1_Sort_m21289_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21290_gshared (List_1_t3579 * __this, Comparison_1_t3591 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21290(__this, ___comparison, method) (( void (*) (List_1_t3579 *, Comparison_1_t3591 *, const MethodInfo*))List_1_Sort_m21290_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t441* List_1_ToArray_m21291_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_ToArray_m21291(__this, method) (( SingleU5BU5D_t441* (*) (List_1_t3579 *, const MethodInfo*))List_1_ToArray_m21291_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m21292_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21292(__this, method) (( void (*) (List_1_t3579 *, const MethodInfo*))List_1_TrimExcess_m21292_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21293_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21293(__this, method) (( int32_t (*) (List_1_t3579 *, const MethodInfo*))List_1_get_Capacity_m21293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21294_gshared (List_1_t3579 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21294(__this, ___value, method) (( void (*) (List_1_t3579 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21294_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m21295_gshared (List_1_t3579 * __this, const MethodInfo* method);
#define List_1_get_Count_m21295(__this, method) (( int32_t (*) (List_1_t3579 *, const MethodInfo*))List_1_get_Count_m21295_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m21296_gshared (List_1_t3579 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21296(__this, ___index, method) (( float (*) (List_1_t3579 *, int32_t, const MethodInfo*))List_1_get_Item_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21297_gshared (List_1_t3579 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m21297(__this, ___index, ___value, method) (( void (*) (List_1_t3579 *, int32_t, float, const MethodInfo*))List_1_set_Item_m21297_gshared)(__this, ___index, ___value, method)
