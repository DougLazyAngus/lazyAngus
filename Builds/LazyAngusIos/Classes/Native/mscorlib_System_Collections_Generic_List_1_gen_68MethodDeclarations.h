#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t4354;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t4357;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t10380;
// System.Net.Cookie[]
struct CookieU5BU5D_t9250;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t10381;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t10382;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t9251;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t9252;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t4716;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t9253;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m18158(__this, method) (( void (*) (List_1_t4354 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m68895(__this, ___collection, method) (( void (*) (List_1_t4354 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m68896(__this, ___capacity, method) (( void (*) (List_1_t4354 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(T[],System.Int32)
#define List_1__ctor_m68897(__this, ___data, ___size, method) (( void (*) (List_1_t4354 *, CookieU5BU5D_t9250*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m68898(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68899(__this, method) (( Object_t* (*) (List_1_t4354 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m68900(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4354 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68901(__this, method) (( Object_t * (*) (List_1_t4354 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m68902(__this, ___item, method) (( int32_t (*) (List_1_t4354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m68903(__this, ___item, method) (( bool (*) (List_1_t4354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m68904(__this, ___item, method) (( int32_t (*) (List_1_t4354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m68905(__this, ___index, ___item, method) (( void (*) (List_1_t4354 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m68906(__this, ___item, method) (( void (*) (List_1_t4354 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68907(__this, method) (( bool (*) (List_1_t4354 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68908(__this, method) (( bool (*) (List_1_t4354 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m68909(__this, method) (( Object_t * (*) (List_1_t4354 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m68910(__this, method) (( bool (*) (List_1_t4354 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m68911(__this, method) (( bool (*) (List_1_t4354 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m68912(__this, ___index, method) (( Object_t * (*) (List_1_t4354 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m68913(__this, ___index, ___value, method) (( void (*) (List_1_t4354 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m68914(__this, ___item, method) (( void (*) (List_1_t4354 *, Cookie_t4357 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m68915(__this, ___newCount, method) (( void (*) (List_1_t4354 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m68916(__this, ___idx, ___count, method) (( void (*) (List_1_t4354 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m68917(__this, ___collection, method) (( void (*) (List_1_t4354 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m68918(__this, ___enumerable, method) (( void (*) (List_1_t4354 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m68919(__this, ___collection, method) (( void (*) (List_1_t4354 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m68920(__this, method) (( ReadOnlyCollection_1_t9251 * (*) (List_1_t4354 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m68921(__this, method) (( void (*) (List_1_t4354 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m68922(__this, ___item, method) (( bool (*) (List_1_t4354 *, Cookie_t4357 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m68923(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4354 *, CookieU5BU5D_t9250*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m68924(__this, ___match, method) (( Cookie_t4357 * (*) (List_1_t4354 *, Predicate_1_t9252 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68925(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9252 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68926(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4354 *, int32_t, int32_t, Predicate_1_t9252 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m18159(__this, method) (( Enumerator_t4584  (*) (List_1_t4354 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68927(__this, ___index, ___count, method) (( List_1_t4354 * (*) (List_1_t4354 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m68928(__this, ___item, method) (( int32_t (*) (List_1_t4354 *, Cookie_t4357 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68929(__this, ___start, ___delta, method) (( void (*) (List_1_t4354 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68930(__this, ___index, method) (( void (*) (List_1_t4354 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m68931(__this, ___index, ___item, method) (( void (*) (List_1_t4354 *, int32_t, Cookie_t4357 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68932(__this, ___collection, method) (( void (*) (List_1_t4354 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68933(__this, ___index, ___collection, method) (( void (*) (List_1_t4354 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68934(__this, ___index, ___collection, method) (( void (*) (List_1_t4354 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68935(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4354 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m68936(__this, ___item, method) (( bool (*) (List_1_t4354 *, Cookie_t4357 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68937(__this, ___match, method) (( int32_t (*) (List_1_t4354 *, Predicate_1_t9252 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68938(__this, ___index, method) (( void (*) (List_1_t4354 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m68939(__this, ___index, ___count, method) (( void (*) (List_1_t4354 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m68940(__this, method) (( void (*) (List_1_t4354 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m68941(__this, method) (( void (*) (List_1_t4354 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18160(__this, ___comparer, method) (( void (*) (List_1_t4354 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68942(__this, ___comparison, method) (( void (*) (List_1_t4354 *, Comparison_1_t9253 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m68943(__this, method) (( CookieU5BU5D_t9250* (*) (List_1_t4354 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m68944(__this, method) (( void (*) (List_1_t4354 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m68945(__this, method) (( int32_t (*) (List_1_t4354 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68946(__this, ___value, method) (( void (*) (List_1_t4354 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m68947(__this, method) (( int32_t (*) (List_1_t4354 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m68948(__this, ___index, method) (( Cookie_t4357 * (*) (List_1_t4354 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m68949(__this, ___index, ___value, method) (( void (*) (List_1_t4354 *, int32_t, Cookie_t4357 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)
