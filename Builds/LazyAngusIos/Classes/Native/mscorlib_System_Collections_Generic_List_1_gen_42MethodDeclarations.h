#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t1012;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t1011;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t1074;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t6493;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
struct IEnumerator_1_t9692;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
struct ICollection_1_t9693;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
struct ReadOnlyCollection_1_t6495;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t1013;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>
struct IComparer_1_t9694;
// System.Comparison`1<UnityEngine.UI.Toggle>
struct Comparison_1_t6497;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6377(__this, method) (( void (*) (List_1_t1012 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m34835(__this, ___collection, method) (( void (*) (List_1_t1012 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
#define List_1__ctor_m34836(__this, ___capacity, method) (( void (*) (List_1_t1012 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(T[],System.Int32)
#define List_1__ctor_m34837(__this, ___data, ___size, method) (( void (*) (List_1_t1012 *, ToggleU5BU5D_t6493*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
#define List_1__cctor_m34838(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34839(__this, method) (( Object_t* (*) (List_1_t1012 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m34840(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1012 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34841(__this, method) (( Object_t * (*) (List_1_t1012 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m34842(__this, ___item, method) (( int32_t (*) (List_1_t1012 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m34843(__this, ___item, method) (( bool (*) (List_1_t1012 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m34844(__this, ___item, method) (( int32_t (*) (List_1_t1012 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m34845(__this, ___index, ___item, method) (( void (*) (List_1_t1012 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m34846(__this, ___item, method) (( void (*) (List_1_t1012 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34847(__this, method) (( bool (*) (List_1_t1012 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34848(__this, method) (( bool (*) (List_1_t1012 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m34849(__this, method) (( Object_t * (*) (List_1_t1012 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m34850(__this, method) (( bool (*) (List_1_t1012 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m34851(__this, method) (( bool (*) (List_1_t1012 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m34852(__this, ___index, method) (( Object_t * (*) (List_1_t1012 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m34853(__this, ___index, ___value, method) (( void (*) (List_1_t1012 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
#define List_1_Add_m34854(__this, ___item, method) (( void (*) (List_1_t1012 *, Toggle_t1011 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m34855(__this, ___newCount, method) (( void (*) (List_1_t1012 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m34856(__this, ___idx, ___count, method) (( void (*) (List_1_t1012 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m34857(__this, ___collection, method) (( void (*) (List_1_t1012 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m34858(__this, ___enumerable, method) (( void (*) (List_1_t1012 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m34859(__this, ___collection, method) (( void (*) (List_1_t1012 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
#define List_1_AsReadOnly_m34860(__this, method) (( ReadOnlyCollection_1_t6495 * (*) (List_1_t1012 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
#define List_1_Clear_m34861(__this, method) (( void (*) (List_1_t1012 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
#define List_1_Contains_m34862(__this, ___item, method) (( bool (*) (List_1_t1012 *, Toggle_t1011 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m34863(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1012 *, ToggleU5BU5D_t6493*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
#define List_1_Find_m6379(__this, ___match, method) (( Toggle_t1011 * (*) (List_1_t1012 *, Predicate_1_t1013 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m34864(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1013 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m34865(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1012 *, int32_t, int32_t, Predicate_1_t1013 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
#define List_1_GetEnumerator_m34866(__this, method) (( Enumerator_t6496  (*) (List_1_t1012 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m34867(__this, ___index, ___count, method) (( List_1_t1012 * (*) (List_1_t1012 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
#define List_1_IndexOf_m34868(__this, ___item, method) (( int32_t (*) (List_1_t1012 *, Toggle_t1011 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m34869(__this, ___start, ___delta, method) (( void (*) (List_1_t1012 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m34870(__this, ___index, method) (( void (*) (List_1_t1012 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
#define List_1_Insert_m34871(__this, ___index, ___item, method) (( void (*) (List_1_t1012 *, int32_t, Toggle_t1011 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m34872(__this, ___collection, method) (( void (*) (List_1_t1012 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m34873(__this, ___index, ___collection, method) (( void (*) (List_1_t1012 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m34874(__this, ___index, ___collection, method) (( void (*) (List_1_t1012 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m34875(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1012 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
#define List_1_Remove_m34876(__this, ___item, method) (( bool (*) (List_1_t1012 *, Toggle_t1011 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m34877(__this, ___match, method) (( int32_t (*) (List_1_t1012 *, Predicate_1_t1013 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m34878(__this, ___index, method) (( void (*) (List_1_t1012 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m34879(__this, ___index, ___count, method) (( void (*) (List_1_t1012 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
#define List_1_Reverse_m34880(__this, method) (( void (*) (List_1_t1012 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
#define List_1_Sort_m34881(__this, method) (( void (*) (List_1_t1012 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m34882(__this, ___comparer, method) (( void (*) (List_1_t1012 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m34883(__this, ___comparison, method) (( void (*) (List_1_t1012 *, Comparison_1_t6497 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
#define List_1_ToArray_m34884(__this, method) (( ToggleU5BU5D_t6493* (*) (List_1_t1012 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
#define List_1_TrimExcess_m34885(__this, method) (( void (*) (List_1_t1012 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
#define List_1_get_Capacity_m34886(__this, method) (( int32_t (*) (List_1_t1012 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m34887(__this, ___value, method) (( void (*) (List_1_t1012 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m34888(__this, method) (( int32_t (*) (List_1_t1012 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m34889(__this, ___index, method) (( Toggle_t1011 * (*) (List_1_t1012 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#define List_1_set_Item_m34890(__this, ___index, ___value, method) (( void (*) (List_1_t1012 *, int32_t, Toggle_t1011 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)
