#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseACL>
struct List_1_t7537;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1233;
// System.Collections.Generic.IEnumerable`1<Parse.ParseACL>
struct IEnumerable_1_t9898;
// Parse.ParseACL[]
struct ParseACLU5BU5D_t7536;
// System.Collections.Generic.IEnumerator`1<Parse.ParseACL>
struct IEnumerator_1_t9847;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseACL>
struct ICollection_1_t9899;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseACL>
struct ReadOnlyCollection_1_t7538;
// System.Predicate`1<Parse.ParseACL>
struct Predicate_1_t7539;
// System.Collections.Generic.IComparer`1<Parse.ParseACL>
struct IComparer_1_t9900;
// System.Comparison`1<Parse.ParseACL>
struct Comparison_1_t7541;
// System.Collections.Generic.List`1/Enumerator<Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_73.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m48151(__this, method) (( void (*) (List_1_t7537 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48152(__this, ___collection, method) (( void (*) (List_1_t7537 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Int32)
#define List_1__ctor_m48153(__this, ___capacity, method) (( void (*) (List_1_t7537 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(T[],System.Int32)
#define List_1__ctor_m48154(__this, ___data, ___size, method) (( void (*) (List_1_t7537 *, ParseACLU5BU5D_t7536*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.cctor()
#define List_1__cctor_m48155(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48156(__this, method) (( Object_t* (*) (List_1_t7537 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48157(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7537 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48158(__this, method) (( Object_t * (*) (List_1_t7537 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48159(__this, ___item, method) (( int32_t (*) (List_1_t7537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48160(__this, ___item, method) (( bool (*) (List_1_t7537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48161(__this, ___item, method) (( int32_t (*) (List_1_t7537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48162(__this, ___index, ___item, method) (( void (*) (List_1_t7537 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48163(__this, ___item, method) (( void (*) (List_1_t7537 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48164(__this, method) (( bool (*) (List_1_t7537 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48165(__this, method) (( bool (*) (List_1_t7537 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48166(__this, method) (( Object_t * (*) (List_1_t7537 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48167(__this, method) (( bool (*) (List_1_t7537 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48168(__this, method) (( bool (*) (List_1_t7537 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48169(__this, ___index, method) (( Object_t * (*) (List_1_t7537 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48170(__this, ___index, ___value, method) (( void (*) (List_1_t7537 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Add(T)
#define List_1_Add_m48171(__this, ___item, method) (( void (*) (List_1_t7537 *, ParseACL_t1233 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48172(__this, ___newCount, method) (( void (*) (List_1_t7537 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48173(__this, ___idx, ___count, method) (( void (*) (List_1_t7537 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48174(__this, ___collection, method) (( void (*) (List_1_t7537 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48175(__this, ___enumerable, method) (( void (*) (List_1_t7537 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48176(__this, ___collection, method) (( void (*) (List_1_t7537 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::AsReadOnly()
#define List_1_AsReadOnly_m48177(__this, method) (( ReadOnlyCollection_1_t7538 * (*) (List_1_t7537 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Clear()
#define List_1_Clear_m48178(__this, method) (( void (*) (List_1_t7537 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Contains(T)
#define List_1_Contains_m48179(__this, ___item, method) (( bool (*) (List_1_t7537 *, ParseACL_t1233 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48180(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7537 *, ParseACLU5BU5D_t7536*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::Find(System.Predicate`1<T>)
#define List_1_Find_m48181(__this, ___match, method) (( ParseACL_t1233 * (*) (List_1_t7537 *, Predicate_1_t7539 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48182(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7539 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48183(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7537 *, int32_t, int32_t, Predicate_1_t7539 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetEnumerator()
#define List_1_GetEnumerator_m48184(__this, method) (( Enumerator_t7540  (*) (List_1_t7537 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48185(__this, ___index, ___count, method) (( List_1_t7537 * (*) (List_1_t7537 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::IndexOf(T)
#define List_1_IndexOf_m48186(__this, ___item, method) (( int32_t (*) (List_1_t7537 *, ParseACL_t1233 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48187(__this, ___start, ___delta, method) (( void (*) (List_1_t7537 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48188(__this, ___index, method) (( void (*) (List_1_t7537 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Insert(System.Int32,T)
#define List_1_Insert_m48189(__this, ___index, ___item, method) (( void (*) (List_1_t7537 *, int32_t, ParseACL_t1233 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48190(__this, ___collection, method) (( void (*) (List_1_t7537 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48191(__this, ___index, ___collection, method) (( void (*) (List_1_t7537 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48192(__this, ___index, ___collection, method) (( void (*) (List_1_t7537 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48193(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7537 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Remove(T)
#define List_1_Remove_m48194(__this, ___item, method) (( bool (*) (List_1_t7537 *, ParseACL_t1233 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48195(__this, ___match, method) (( int32_t (*) (List_1_t7537 *, Predicate_1_t7539 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48196(__this, ___index, method) (( void (*) (List_1_t7537 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48197(__this, ___index, ___count, method) (( void (*) (List_1_t7537 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Reverse()
#define List_1_Reverse_m48198(__this, method) (( void (*) (List_1_t7537 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort()
#define List_1_Sort_m48199(__this, method) (( void (*) (List_1_t7537 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48200(__this, ___comparer, method) (( void (*) (List_1_t7537 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48201(__this, ___comparison, method) (( void (*) (List_1_t7537 *, Comparison_1_t7541 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseACL>::ToArray()
#define List_1_ToArray_m48202(__this, method) (( ParseACLU5BU5D_t7536* (*) (List_1_t7537 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::TrimExcess()
#define List_1_TrimExcess_m48203(__this, method) (( void (*) (List_1_t7537 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Capacity()
#define List_1_get_Capacity_m48204(__this, method) (( int32_t (*) (List_1_t7537 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m48205(__this, ___value, method) (( void (*) (List_1_t7537 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Count()
#define List_1_get_Count_m48206(__this, method) (( int32_t (*) (List_1_t7537 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::get_Item(System.Int32)
#define List_1_get_Item_m48207(__this, ___index, method) (( ParseACL_t1233 * (*) (List_1_t7537 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Item(System.Int32,T)
#define List_1_set_Item_m48208(__this, ___index, ___value, method) (( void (*) (List_1_t7537 *, int32_t, ParseACL_t1233 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)
