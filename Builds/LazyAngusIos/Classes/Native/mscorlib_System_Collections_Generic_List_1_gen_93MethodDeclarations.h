#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct List_1_t7422;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerable_1_t9269;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7421;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7139;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ICollection_1_t9270;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t7424;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t7425;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IComparer_1_t9271;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t7427;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_92MethodDeclarations.h"
#define List_1__ctor_m48979(__this, method) (( void (*) (List_1_t7422 *, const MethodInfo*))List_1__ctor_m48826_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48980(__this, ___collection, method) (( void (*) (List_1_t7422 *, Object_t*, const MethodInfo*))List_1__ctor_m48827_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Int32)
#define List_1__ctor_m48981(__this, ___capacity, method) (( void (*) (List_1_t7422 *, int32_t, const MethodInfo*))List_1__ctor_m48828_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48982(__this, ___data, ___size, method) (( void (*) (List_1_t7422 *, KeyValuePair_2U5BU5D_t7421*, int32_t, const MethodInfo*))List_1__ctor_m48829_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.cctor()
#define List_1__cctor_m48983(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48830_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48984(__this, method) (( Object_t* (*) (List_1_t7422 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48831_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48985(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7422 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48832_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48986(__this, method) (( Object_t * (*) (List_1_t7422 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48833_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48987(__this, ___item, method) (( int32_t (*) (List_1_t7422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48834_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48988(__this, ___item, method) (( bool (*) (List_1_t7422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48835_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48989(__this, ___item, method) (( int32_t (*) (List_1_t7422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48990(__this, ___index, ___item, method) (( void (*) (List_1_t7422 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48837_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48991(__this, ___item, method) (( void (*) (List_1_t7422 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48838_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48992(__this, method) (( bool (*) (List_1_t7422 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48839_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48993(__this, method) (( bool (*) (List_1_t7422 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48840_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48994(__this, method) (( Object_t * (*) (List_1_t7422 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48841_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48995(__this, method) (( bool (*) (List_1_t7422 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48842_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48996(__this, method) (( bool (*) (List_1_t7422 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48843_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48997(__this, ___index, method) (( Object_t * (*) (List_1_t7422 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48844_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48998(__this, ___index, ___value, method) (( void (*) (List_1_t7422 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48845_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Add(T)
#define List_1_Add_m48999(__this, ___item, method) (( void (*) (List_1_t7422 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Add_m48846_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49000(__this, ___newCount, method) (( void (*) (List_1_t7422 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48847_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49001(__this, ___idx, ___count, method) (( void (*) (List_1_t7422 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48848_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49002(__this, ___collection, method) (( void (*) (List_1_t7422 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48849_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49003(__this, ___enumerable, method) (( void (*) (List_1_t7422 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48850_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49004(__this, ___collection, method) (( void (*) (List_1_t7422 *, Object_t*, const MethodInfo*))List_1_AddRange_m48851_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AsReadOnly()
#define List_1_AsReadOnly_m49005(__this, method) (( ReadOnlyCollection_1_t7424 * (*) (List_1_t7422 *, const MethodInfo*))List_1_AsReadOnly_m48852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Clear()
#define List_1_Clear_m49006(__this, method) (( void (*) (List_1_t7422 *, const MethodInfo*))List_1_Clear_m48853_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define List_1_Contains_m49007(__this, ___item, method) (( bool (*) (List_1_t7422 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Contains_m48854_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49008(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7422 *, KeyValuePair_2U5BU5D_t7421*, int32_t, const MethodInfo*))List_1_CopyTo_m48855_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49009(__this, ___match, method) (( KeyValuePair_2_t7134  (*) (List_1_t7422 *, Predicate_1_t7425 *, const MethodInfo*))List_1_Find_m48856_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49010(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7425 *, const MethodInfo*))List_1_CheckMatch_m48857_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49011(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7422 *, int32_t, int32_t, Predicate_1_t7425 *, const MethodInfo*))List_1_GetIndex_m48858_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define List_1_GetEnumerator_m49012(__this, method) (( Enumerator_t7426  (*) (List_1_t7422 *, const MethodInfo*))List_1_GetEnumerator_m48859_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49013(__this, ___index, ___count, method) (( List_1_t7422 * (*) (List_1_t7422 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48860_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define List_1_IndexOf_m49014(__this, ___item, method) (( int32_t (*) (List_1_t7422 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_IndexOf_m48861_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49015(__this, ___start, ___delta, method) (( void (*) (List_1_t7422 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48862_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49016(__this, ___index, method) (( void (*) (List_1_t7422 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48863_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Insert(System.Int32,T)
#define List_1_Insert_m49017(__this, ___index, ___item, method) (( void (*) (List_1_t7422 *, int32_t, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Insert_m48864_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49018(__this, ___collection, method) (( void (*) (List_1_t7422 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48865_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49019(__this, ___index, ___collection, method) (( void (*) (List_1_t7422 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48866_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49020(__this, ___index, ___collection, method) (( void (*) (List_1_t7422 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48867_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49021(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7422 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48868_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Remove(T)
#define List_1_Remove_m49022(__this, ___item, method) (( bool (*) (List_1_t7422 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Remove_m48869_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49023(__this, ___match, method) (( int32_t (*) (List_1_t7422 *, Predicate_1_t7425 *, const MethodInfo*))List_1_RemoveAll_m48870_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49024(__this, ___index, method) (( void (*) (List_1_t7422 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48871_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49025(__this, ___index, ___count, method) (( void (*) (List_1_t7422 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48872_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Reverse()
#define List_1_Reverse_m49026(__this, method) (( void (*) (List_1_t7422 *, const MethodInfo*))List_1_Reverse_m48873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort()
#define List_1_Sort_m49027(__this, method) (( void (*) (List_1_t7422 *, const MethodInfo*))List_1_Sort_m48874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49028(__this, ___comparer, method) (( void (*) (List_1_t7422 *, Object_t*, const MethodInfo*))List_1_Sort_m48875_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49029(__this, ___comparison, method) (( void (*) (List_1_t7422 *, Comparison_1_t7427 *, const MethodInfo*))List_1_Sort_m48876_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::ToArray()
#define List_1_ToArray_m49030(__this, method) (( KeyValuePair_2U5BU5D_t7421* (*) (List_1_t7422 *, const MethodInfo*))List_1_ToArray_m48877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::TrimExcess()
#define List_1_TrimExcess_m49031(__this, method) (( void (*) (List_1_t7422 *, const MethodInfo*))List_1_TrimExcess_m48878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Capacity()
#define List_1_get_Capacity_m49032(__this, method) (( int32_t (*) (List_1_t7422 *, const MethodInfo*))List_1_get_Capacity_m48879_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49033(__this, ___value, method) (( void (*) (List_1_t7422 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48880_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define List_1_get_Count_m49034(__this, method) (( int32_t (*) (List_1_t7422 *, const MethodInfo*))List_1_get_Count_m48881_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define List_1_get_Item_m49035(__this, ___index, method) (( KeyValuePair_2_t7134  (*) (List_1_t7422 *, int32_t, const MethodInfo*))List_1_get_Item_m48882_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49036(__this, ___index, ___value, method) (( void (*) (List_1_t7422 *, int32_t, KeyValuePair_2_t7134 , const MethodInfo*))List_1_set_Item_m48883_gshared)(__this, ___index, ___value, method)
