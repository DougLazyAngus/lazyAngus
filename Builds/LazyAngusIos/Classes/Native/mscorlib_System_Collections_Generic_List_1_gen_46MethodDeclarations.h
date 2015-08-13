#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2147;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1413;
// System.Exception[]
struct ExceptionU5BU5D_t8332;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2148;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t9570;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1337;
// System.Predicate`1<System.Exception>
struct Predicate_1_t8333;
// System.Collections.Generic.IComparer`1<System.Exception>
struct IComparer_1_t9571;
// System.Comparison`1<System.Exception>
struct Comparison_1_t8335;
// System.Collections.Generic.List`1/Enumerator<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7793(__this, method) (( void (*) (List_1_t2147 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59573(__this, ___collection, method) (( void (*) (List_1_t2147 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
#define List_1__ctor_m59574(__this, ___capacity, method) (( void (*) (List_1_t2147 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(T[],System.Int32)
#define List_1__ctor_m59575(__this, ___data, ___size, method) (( void (*) (List_1_t2147 *, ExceptionU5BU5D_t8332*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.cctor()
#define List_1__cctor_m59576(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59577(__this, method) (( Object_t* (*) (List_1_t2147 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59578(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2147 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Exception>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59579(__this, method) (( Object_t * (*) (List_1_t2147 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59580(__this, ___item, method) (( int32_t (*) (List_1_t2147 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59581(__this, ___item, method) (( bool (*) (List_1_t2147 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59582(__this, ___item, method) (( int32_t (*) (List_1_t2147 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59583(__this, ___index, ___item, method) (( void (*) (List_1_t2147 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59584(__this, ___item, method) (( void (*) (List_1_t2147 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59585(__this, method) (( bool (*) (List_1_t2147 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59586(__this, method) (( bool (*) (List_1_t2147 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59587(__this, method) (( Object_t * (*) (List_1_t2147 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59588(__this, method) (( bool (*) (List_1_t2147 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59589(__this, method) (( bool (*) (List_1_t2147 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59590(__this, ___index, method) (( Object_t * (*) (List_1_t2147 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59591(__this, ___index, ___value, method) (( void (*) (List_1_t2147 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
#define List_1_Add_m59592(__this, ___item, method) (( void (*) (List_1_t2147 *, Exception_t57 *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59593(__this, ___newCount, method) (( void (*) (List_1_t2147 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59594(__this, ___idx, ___count, method) (( void (*) (List_1_t2147 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59595(__this, ___collection, method) (( void (*) (List_1_t2147 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59596(__this, ___enumerable, method) (( void (*) (List_1_t2147 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m7794(__this, ___collection, method) (( void (*) (List_1_t2147 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Exception>::AsReadOnly()
#define List_1_AsReadOnly_m59597(__this, method) (( ReadOnlyCollection_1_t1337 * (*) (List_1_t2147 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
#define List_1_Clear_m59598(__this, method) (( void (*) (List_1_t2147 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Contains(T)
#define List_1_Contains_m59599(__this, ___item, method) (( bool (*) (List_1_t2147 *, Exception_t57 *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59600(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2147 *, ExceptionU5BU5D_t8332*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Exception>::Find(System.Predicate`1<T>)
#define List_1_Find_m59601(__this, ___match, method) (( Exception_t57 * (*) (List_1_t2147 *, Predicate_1_t8333 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59602(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8333 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59603(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2147 *, int32_t, int32_t, Predicate_1_t8333 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Exception>::GetEnumerator()
#define List_1_GetEnumerator_m59604(__this, method) (( Enumerator_t8334  (*) (List_1_t2147 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59605(__this, ___index, ___count, method) (( List_1_t2147 * (*) (List_1_t2147 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::IndexOf(T)
#define List_1_IndexOf_m59606(__this, ___item, method) (( int32_t (*) (List_1_t2147 *, Exception_t57 *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59607(__this, ___start, ___delta, method) (( void (*) (List_1_t2147 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59608(__this, ___index, method) (( void (*) (List_1_t2147 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Insert(System.Int32,T)
#define List_1_Insert_m59609(__this, ___index, ___item, method) (( void (*) (List_1_t2147 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59610(__this, ___collection, method) (( void (*) (List_1_t2147 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59611(__this, ___index, ___collection, method) (( void (*) (List_1_t2147 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59612(__this, ___index, ___collection, method) (( void (*) (List_1_t2147 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59613(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2147 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Remove(T)
#define List_1_Remove_m59614(__this, ___item, method) (( bool (*) (List_1_t2147 *, Exception_t57 *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59615(__this, ___match, method) (( int32_t (*) (List_1_t2147 *, Predicate_1_t8333 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59616(__this, ___index, method) (( void (*) (List_1_t2147 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59617(__this, ___index, ___count, method) (( void (*) (List_1_t2147 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Reverse()
#define List_1_Reverse_m59618(__this, method) (( void (*) (List_1_t2147 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort()
#define List_1_Sort_m59619(__this, method) (( void (*) (List_1_t2147 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59620(__this, ___comparer, method) (( void (*) (List_1_t2147 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59621(__this, ___comparison, method) (( void (*) (List_1_t2147 *, Comparison_1_t8335 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
#define List_1_ToArray_m59622(__this, method) (( ExceptionU5BU5D_t8332* (*) (List_1_t2147 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::TrimExcess()
#define List_1_TrimExcess_m59623(__this, method) (( void (*) (List_1_t2147 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Capacity()
#define List_1_get_Capacity_m59624(__this, method) (( int32_t (*) (List_1_t2147 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59625(__this, ___value, method) (( void (*) (List_1_t2147 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
#define List_1_get_Count_m59626(__this, method) (( int32_t (*) (List_1_t2147 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
#define List_1_get_Item_m59627(__this, ___index, method) (( Exception_t57 * (*) (List_1_t2147 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Item(System.Int32,T)
#define List_1_set_Item_m59628(__this, ___index, ___value, method) (( void (*) (List_1_t2147 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)
