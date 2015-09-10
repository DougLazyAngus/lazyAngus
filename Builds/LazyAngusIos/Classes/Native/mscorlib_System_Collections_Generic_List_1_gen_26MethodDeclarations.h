#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t868;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t869;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerable_1_t9589;
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t6342;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerator_1_t9590;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ICollection_1_t9591;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ReadOnlyCollection_1_t6344;
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t6345;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
struct IComparer_1_t9592;
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
struct Comparison_1_t6347;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5999(__this, method) (( void (*) (List_1_t868 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32278(__this, ___collection, method) (( void (*) (List_1_t868 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Int32)
#define List_1__ctor_m32279(__this, ___capacity, method) (( void (*) (List_1_t868 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(T[],System.Int32)
#define List_1__ctor_m32280(__this, ___data, ___size, method) (( void (*) (List_1_t868 *, BaseInputModuleU5BU5D_t6342*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
#define List_1__cctor_m32281(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32282(__this, method) (( Object_t* (*) (List_1_t868 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32283(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t868 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32284(__this, method) (( Object_t * (*) (List_1_t868 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32285(__this, ___item, method) (( int32_t (*) (List_1_t868 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32286(__this, ___item, method) (( bool (*) (List_1_t868 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32287(__this, ___item, method) (( int32_t (*) (List_1_t868 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32288(__this, ___index, ___item, method) (( void (*) (List_1_t868 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32289(__this, ___item, method) (( void (*) (List_1_t868 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32290(__this, method) (( bool (*) (List_1_t868 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32291(__this, method) (( bool (*) (List_1_t868 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32292(__this, method) (( Object_t * (*) (List_1_t868 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32293(__this, method) (( bool (*) (List_1_t868 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32294(__this, method) (( bool (*) (List_1_t868 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32295(__this, ___index, method) (( Object_t * (*) (List_1_t868 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32296(__this, ___index, ___value, method) (( void (*) (List_1_t868 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
#define List_1_Add_m32297(__this, ___item, method) (( void (*) (List_1_t868 *, BaseInputModule_t869 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32298(__this, ___newCount, method) (( void (*) (List_1_t868 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m32299(__this, ___idx, ___count, method) (( void (*) (List_1_t868 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32300(__this, ___collection, method) (( void (*) (List_1_t868 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32301(__this, ___enumerable, method) (( void (*) (List_1_t868 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32302(__this, ___collection, method) (( void (*) (List_1_t868 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AsReadOnly()
#define List_1_AsReadOnly_m32303(__this, method) (( ReadOnlyCollection_1_t6344 * (*) (List_1_t868 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
#define List_1_Clear_m32304(__this, method) (( void (*) (List_1_t868 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
#define List_1_Contains_m32305(__this, ___item, method) (( bool (*) (List_1_t868 *, BaseInputModule_t869 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32306(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t868 *, BaseInputModuleU5BU5D_t6342*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Find(System.Predicate`1<T>)
#define List_1_Find_m32307(__this, ___match, method) (( BaseInputModule_t869 * (*) (List_1_t868 *, Predicate_1_t6345 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32308(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6345 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32309(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t868 *, int32_t, int32_t, Predicate_1_t6345 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
#define List_1_GetEnumerator_m32310(__this, method) (( Enumerator_t6346  (*) (List_1_t868 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m32311(__this, ___index, ___count, method) (( List_1_t868 * (*) (List_1_t868 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
#define List_1_IndexOf_m32312(__this, ___item, method) (( int32_t (*) (List_1_t868 *, BaseInputModule_t869 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32313(__this, ___start, ___delta, method) (( void (*) (List_1_t868 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32314(__this, ___index, method) (( void (*) (List_1_t868 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
#define List_1_Insert_m32315(__this, ___index, ___item, method) (( void (*) (List_1_t868 *, int32_t, BaseInputModule_t869 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32316(__this, ___collection, method) (( void (*) (List_1_t868 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m32317(__this, ___index, ___collection, method) (( void (*) (List_1_t868 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m32318(__this, ___index, ___collection, method) (( void (*) (List_1_t868 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m32319(__this, ___index, ___enumerable, method) (( void (*) (List_1_t868 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
#define List_1_Remove_m32320(__this, ___item, method) (( bool (*) (List_1_t868 *, BaseInputModule_t869 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m32321(__this, ___match, method) (( int32_t (*) (List_1_t868 *, Predicate_1_t6345 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32322(__this, ___index, method) (( void (*) (List_1_t868 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m32323(__this, ___index, ___count, method) (( void (*) (List_1_t868 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Reverse()
#define List_1_Reverse_m32324(__this, method) (( void (*) (List_1_t868 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort()
#define List_1_Sort_m32325(__this, method) (( void (*) (List_1_t868 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32326(__this, ___comparer, method) (( void (*) (List_1_t868 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32327(__this, ___comparison, method) (( void (*) (List_1_t868 *, Comparison_1_t6347 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::ToArray()
#define List_1_ToArray_m32328(__this, method) (( BaseInputModuleU5BU5D_t6342* (*) (List_1_t868 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::TrimExcess()
#define List_1_TrimExcess_m32329(__this, method) (( void (*) (List_1_t868 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Capacity()
#define List_1_get_Capacity_m32330(__this, method) (( int32_t (*) (List_1_t868 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32331(__this, ___value, method) (( void (*) (List_1_t868 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
#define List_1_get_Count_m32332(__this, method) (( int32_t (*) (List_1_t868 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
#define List_1_get_Item_m32333(__this, ___index, method) (( BaseInputModule_t869 * (*) (List_1_t868 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#define List_1_set_Item_m32334(__this, ___index, ___value, method) (( void (*) (List_1_t868 *, int32_t, BaseInputModule_t869 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)
