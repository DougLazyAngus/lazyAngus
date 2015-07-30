#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t2716;
// System.Object
struct Object_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t2717;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>
struct IEnumerable_1_t9510;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t8345;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>
struct IEnumerator_1_t9511;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>
struct ICollection_1_t9512;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
struct ReadOnlyCollection_1_t8347;
// System.Predicate`1<UnityEngine.Rigidbody2D>
struct Predicate_1_t8348;
// System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>
struct IComparer_1_t9513;
// System.Comparison`1<UnityEngine.Rigidbody2D>
struct Comparison_1_t8350;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9842(__this, method) (( void (*) (List_1_t2716 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59927(__this, ___collection, method) (( void (*) (List_1_t2716 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Int32)
#define List_1__ctor_m59928(__this, ___capacity, method) (( void (*) (List_1_t2716 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(T[],System.Int32)
#define List_1__ctor_m59929(__this, ___data, ___size, method) (( void (*) (List_1_t2716 *, Rigidbody2DU5BU5D_t8345*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.cctor()
#define List_1__cctor_m59930(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59931(__this, method) (( Object_t* (*) (List_1_t2716 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59932(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2716 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59933(__this, method) (( Object_t * (*) (List_1_t2716 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59934(__this, ___item, method) (( int32_t (*) (List_1_t2716 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59935(__this, ___item, method) (( bool (*) (List_1_t2716 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59936(__this, ___item, method) (( int32_t (*) (List_1_t2716 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59937(__this, ___index, ___item, method) (( void (*) (List_1_t2716 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59938(__this, ___item, method) (( void (*) (List_1_t2716 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59939(__this, method) (( bool (*) (List_1_t2716 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59940(__this, method) (( bool (*) (List_1_t2716 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59941(__this, method) (( Object_t * (*) (List_1_t2716 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59942(__this, method) (( bool (*) (List_1_t2716 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59943(__this, method) (( bool (*) (List_1_t2716 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59944(__this, ___index, method) (( Object_t * (*) (List_1_t2716 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59945(__this, ___index, ___value, method) (( void (*) (List_1_t2716 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
#define List_1_Add_m59946(__this, ___item, method) (( void (*) (List_1_t2716 *, Rigidbody2D_t2717 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59947(__this, ___newCount, method) (( void (*) (List_1_t2716 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59948(__this, ___idx, ___count, method) (( void (*) (List_1_t2716 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59949(__this, ___collection, method) (( void (*) (List_1_t2716 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59950(__this, ___enumerable, method) (( void (*) (List_1_t2716 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59951(__this, ___collection, method) (( void (*) (List_1_t2716 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AsReadOnly()
#define List_1_AsReadOnly_m59952(__this, method) (( ReadOnlyCollection_1_t8347 * (*) (List_1_t2716 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
#define List_1_Clear_m59953(__this, method) (( void (*) (List_1_t2716 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
#define List_1_Contains_m59954(__this, ___item, method) (( bool (*) (List_1_t2716 *, Rigidbody2D_t2717 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59955(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2716 *, Rigidbody2DU5BU5D_t8345*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Find(System.Predicate`1<T>)
#define List_1_Find_m59956(__this, ___match, method) (( Rigidbody2D_t2717 * (*) (List_1_t2716 *, Predicate_1_t8348 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59957(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8348 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59958(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2716 *, int32_t, int32_t, Predicate_1_t8348 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
#define List_1_GetEnumerator_m59959(__this, method) (( Enumerator_t8349  (*) (List_1_t2716 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59960(__this, ___index, ___count, method) (( List_1_t2716 * (*) (List_1_t2716 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::IndexOf(T)
#define List_1_IndexOf_m59961(__this, ___item, method) (( int32_t (*) (List_1_t2716 *, Rigidbody2D_t2717 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59962(__this, ___start, ___delta, method) (( void (*) (List_1_t2716 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59963(__this, ___index, method) (( void (*) (List_1_t2716 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
#define List_1_Insert_m59964(__this, ___index, ___item, method) (( void (*) (List_1_t2716 *, int32_t, Rigidbody2D_t2717 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59965(__this, ___collection, method) (( void (*) (List_1_t2716 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59966(__this, ___index, ___collection, method) (( void (*) (List_1_t2716 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59967(__this, ___index, ___collection, method) (( void (*) (List_1_t2716 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59968(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2716 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
#define List_1_Remove_m59969(__this, ___item, method) (( bool (*) (List_1_t2716 *, Rigidbody2D_t2717 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59970(__this, ___match, method) (( int32_t (*) (List_1_t2716 *, Predicate_1_t8348 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59971(__this, ___index, method) (( void (*) (List_1_t2716 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59972(__this, ___index, ___count, method) (( void (*) (List_1_t2716 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Reverse()
#define List_1_Reverse_m59973(__this, method) (( void (*) (List_1_t2716 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort()
#define List_1_Sort_m59974(__this, method) (( void (*) (List_1_t2716 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59975(__this, ___comparer, method) (( void (*) (List_1_t2716 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59976(__this, ___comparison, method) (( void (*) (List_1_t2716 *, Comparison_1_t8350 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::ToArray()
#define List_1_ToArray_m59977(__this, method) (( Rigidbody2DU5BU5D_t8345* (*) (List_1_t2716 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::TrimExcess()
#define List_1_TrimExcess_m59978(__this, method) (( void (*) (List_1_t2716 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Capacity()
#define List_1_get_Capacity_m59979(__this, method) (( int32_t (*) (List_1_t2716 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59980(__this, ___value, method) (( void (*) (List_1_t2716 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Count()
#define List_1_get_Count_m59981(__this, method) (( int32_t (*) (List_1_t2716 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
#define List_1_get_Item_m59982(__this, ___index, method) (( Rigidbody2D_t2717 * (*) (List_1_t2716 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#define List_1_set_Item_m59983(__this, ___index, ___value, method) (( void (*) (List_1_t2716 *, int32_t, Rigidbody2D_t2717 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)
