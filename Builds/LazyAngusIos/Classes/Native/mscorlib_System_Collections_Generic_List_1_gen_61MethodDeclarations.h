#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t3973;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t3971;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t9621;
// System.Net.Cookie[]
struct CookieU5BU5D_t8565;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t9622;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t9623;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t8566;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t8567;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t4276;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t8568;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m14840(__this, method) (( void (*) (List_1_t3973 *, const MethodInfo*))List_1__ctor_m3471_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m62996(__this, ___collection, method) (( void (*) (List_1_t3973 *, Object_t*, const MethodInfo*))List_1__ctor_m7211_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m62997(__this, ___capacity, method) (( void (*) (List_1_t3973 *, int32_t, const MethodInfo*))List_1__ctor_m21311_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(T[],System.Int32)
#define List_1__ctor_m62998(__this, ___data, ___size, method) (( void (*) (List_1_t3973 *, CookieU5BU5D_t8565*, int32_t, const MethodInfo*))List_1__ctor_m21313_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m62999(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21315_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63000(__this, method) (( Object_t* (*) (List_1_t3973 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10104_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m63001(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3973 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10087_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m63002(__this, method) (( Object_t * (*) (List_1_t3973 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10083_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m63003(__this, ___item, method) (( int32_t (*) (List_1_t3973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10092_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m63004(__this, ___item, method) (( bool (*) (List_1_t3973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10094_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m63005(__this, ___item, method) (( int32_t (*) (List_1_t3973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10095_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m63006(__this, ___index, ___item, method) (( void (*) (List_1_t3973 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10096_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m63007(__this, ___item, method) (( void (*) (List_1_t3973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10097_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63008(__this, method) (( bool (*) (List_1_t3973 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m63009(__this, method) (( bool (*) (List_1_t3973 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m63010(__this, method) (( Object_t * (*) (List_1_t3973 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m63011(__this, method) (( bool (*) (List_1_t3973 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m63012(__this, method) (( bool (*) (List_1_t3973 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10089_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m63013(__this, ___index, method) (( Object_t * (*) (List_1_t3973 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10090_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m63014(__this, ___index, ___value, method) (( void (*) (List_1_t3973 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10091_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m63015(__this, ___item, method) (( void (*) (List_1_t3973 *, Cookie_t3971 *, const MethodInfo*))List_1_Add_m10100_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m63016(__this, ___newCount, method) (( void (*) (List_1_t3973 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21333_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m63017(__this, ___idx, ___count, method) (( void (*) (List_1_t3973 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21335_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m63018(__this, ___collection, method) (( void (*) (List_1_t3973 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21337_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m63019(__this, ___enumerable, method) (( void (*) (List_1_t3973 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21339_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m63020(__this, ___collection, method) (( void (*) (List_1_t3973 *, Object_t*, const MethodInfo*))List_1_AddRange_m21341_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m63021(__this, method) (( ReadOnlyCollection_1_t8566 * (*) (List_1_t3973 *, const MethodInfo*))List_1_AsReadOnly_m21343_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m63022(__this, method) (( void (*) (List_1_t3973 *, const MethodInfo*))List_1_Clear_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m63023(__this, ___item, method) (( bool (*) (List_1_t3973 *, Cookie_t3971 *, const MethodInfo*))List_1_Contains_m10101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m63024(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3973 *, CookieU5BU5D_t8565*, int32_t, const MethodInfo*))List_1_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m63025(__this, ___match, method) (( Cookie_t3971 * (*) (List_1_t3973 *, Predicate_1_t8567 *, const MethodInfo*))List_1_Find_m21348_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m63026(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8567 *, const MethodInfo*))List_1_CheckMatch_m21350_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m63027(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3973 *, int32_t, int32_t, Predicate_1_t8567 *, const MethodInfo*))List_1_GetIndex_m21352_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m14841(__this, method) (( Enumerator_t4152  (*) (List_1_t3973 *, const MethodInfo*))List_1_GetEnumerator_m3627_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m63028(__this, ___index, ___count, method) (( List_1_t3973 * (*) (List_1_t3973 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21354_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m63029(__this, ___item, method) (( int32_t (*) (List_1_t3973 *, Cookie_t3971 *, const MethodInfo*))List_1_IndexOf_m10105_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m63030(__this, ___start, ___delta, method) (( void (*) (List_1_t3973 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21357_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m63031(__this, ___index, method) (( void (*) (List_1_t3973 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21359_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m63032(__this, ___index, ___item, method) (( void (*) (List_1_t3973 *, int32_t, Cookie_t3971 *, const MethodInfo*))List_1_Insert_m10106_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m63033(__this, ___collection, method) (( void (*) (List_1_t3973 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21362_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m63034(__this, ___index, ___collection, method) (( void (*) (List_1_t3973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21364_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m63035(__this, ___index, ___collection, method) (( void (*) (List_1_t3973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21366_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m63036(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21368_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m63037(__this, ___item, method) (( bool (*) (List_1_t3973 *, Cookie_t3971 *, const MethodInfo*))List_1_Remove_m10103_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m63038(__this, ___match, method) (( int32_t (*) (List_1_t3973 *, Predicate_1_t8567 *, const MethodInfo*))List_1_RemoveAll_m21371_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m63039(__this, ___index, method) (( void (*) (List_1_t3973 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m63040(__this, ___index, ___count, method) (( void (*) (List_1_t3973 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21374_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m63041(__this, method) (( void (*) (List_1_t3973 *, const MethodInfo*))List_1_Reverse_m21376_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m63042(__this, method) (( void (*) (List_1_t3973 *, const MethodInfo*))List_1_Sort_m21378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m14842(__this, ___comparer, method) (( void (*) (List_1_t3973 *, Object_t*, const MethodInfo*))List_1_Sort_m21380_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m63043(__this, ___comparison, method) (( void (*) (List_1_t3973 *, Comparison_1_t8568 *, const MethodInfo*))List_1_Sort_m21382_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m63044(__this, method) (( CookieU5BU5D_t8565* (*) (List_1_t3973 *, const MethodInfo*))List_1_ToArray_m21384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m63045(__this, method) (( void (*) (List_1_t3973 *, const MethodInfo*))List_1_TrimExcess_m21386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m63046(__this, method) (( int32_t (*) (List_1_t3973 *, const MethodInfo*))List_1_get_Capacity_m21388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m63047(__this, ___value, method) (( void (*) (List_1_t3973 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21390_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m63048(__this, method) (( int32_t (*) (List_1_t3973 *, const MethodInfo*))List_1_get_Count_m10084_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m63049(__this, ___index, method) (( Cookie_t3971 * (*) (List_1_t3973 *, int32_t, const MethodInfo*))List_1_get_Item_m10107_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m63050(__this, ___index, ___value, method) (( void (*) (List_1_t3973 *, int32_t, Cookie_t3971 *, const MethodInfo*))List_1_set_Item_m10108_gshared)(__this, ___index, ___value, method)
