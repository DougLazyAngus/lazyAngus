#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1050;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t544;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Canvas>
struct IEnumerable_1_t9022;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t5863;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Canvas>
struct IEnumerator_1_t9023;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
struct ICollection_1_t9024;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Canvas>
struct ReadOnlyCollection_1_t5865;
// System.Predicate`1<UnityEngine.Canvas>
struct Predicate_1_t5866;
// System.Collections.Generic.IComparer`1<UnityEngine.Canvas>
struct IComparer_1_t9025;
// System.Comparison`1<UnityEngine.Canvas>
struct Comparison_1_t5868;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_43.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m29358(__this, method) (( void (*) (List_1_t1050 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29359(__this, ___collection, method) (( void (*) (List_1_t1050 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(System.Int32)
#define List_1__ctor_m29360(__this, ___capacity, method) (( void (*) (List_1_t1050 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(T[],System.Int32)
#define List_1__ctor_m29361(__this, ___data, ___size, method) (( void (*) (List_1_t1050 *, CanvasU5BU5D_t5863*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.cctor()
#define List_1__cctor_m29362(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29363(__this, method) (( Object_t* (*) (List_1_t1050 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29364(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1050 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29365(__this, method) (( Object_t * (*) (List_1_t1050 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29366(__this, ___item, method) (( int32_t (*) (List_1_t1050 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29367(__this, ___item, method) (( bool (*) (List_1_t1050 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29368(__this, ___item, method) (( int32_t (*) (List_1_t1050 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29369(__this, ___index, ___item, method) (( void (*) (List_1_t1050 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29370(__this, ___item, method) (( void (*) (List_1_t1050 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29371(__this, method) (( bool (*) (List_1_t1050 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29372(__this, method) (( bool (*) (List_1_t1050 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29373(__this, method) (( Object_t * (*) (List_1_t1050 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29374(__this, method) (( bool (*) (List_1_t1050 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29375(__this, method) (( bool (*) (List_1_t1050 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29376(__this, ___index, method) (( Object_t * (*) (List_1_t1050 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29377(__this, ___index, ___value, method) (( void (*) (List_1_t1050 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Add(T)
#define List_1_Add_m29378(__this, ___item, method) (( void (*) (List_1_t1050 *, Canvas_t544 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29379(__this, ___newCount, method) (( void (*) (List_1_t1050 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29380(__this, ___idx, ___count, method) (( void (*) (List_1_t1050 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29381(__this, ___collection, method) (( void (*) (List_1_t1050 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29382(__this, ___enumerable, method) (( void (*) (List_1_t1050 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29383(__this, ___collection, method) (( void (*) (List_1_t1050 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::AsReadOnly()
#define List_1_AsReadOnly_m29384(__this, method) (( ReadOnlyCollection_1_t5865 * (*) (List_1_t1050 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Clear()
#define List_1_Clear_m29385(__this, method) (( void (*) (List_1_t1050 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::Contains(T)
#define List_1_Contains_m29386(__this, ___item, method) (( bool (*) (List_1_t1050 *, Canvas_t544 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29387(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1050 *, CanvasU5BU5D_t5863*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Canvas>::Find(System.Predicate`1<T>)
#define List_1_Find_m29388(__this, ___match, method) (( Canvas_t544 * (*) (List_1_t1050 *, Predicate_1_t5866 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29389(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5866 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29390(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1050 *, int32_t, int32_t, Predicate_1_t5866 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::GetEnumerator()
#define List_1_GetEnumerator_m29391(__this, method) (( Enumerator_t5867  (*) (List_1_t1050 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29392(__this, ___index, ___count, method) (( List_1_t1050 * (*) (List_1_t1050 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::IndexOf(T)
#define List_1_IndexOf_m29393(__this, ___item, method) (( int32_t (*) (List_1_t1050 *, Canvas_t544 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29394(__this, ___start, ___delta, method) (( void (*) (List_1_t1050 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29395(__this, ___index, method) (( void (*) (List_1_t1050 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Insert(System.Int32,T)
#define List_1_Insert_m29396(__this, ___index, ___item, method) (( void (*) (List_1_t1050 *, int32_t, Canvas_t544 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29397(__this, ___collection, method) (( void (*) (List_1_t1050 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29398(__this, ___index, ___collection, method) (( void (*) (List_1_t1050 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29399(__this, ___index, ___collection, method) (( void (*) (List_1_t1050 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29400(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1050 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::Remove(T)
#define List_1_Remove_m29401(__this, ___item, method) (( bool (*) (List_1_t1050 *, Canvas_t544 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29402(__this, ___match, method) (( int32_t (*) (List_1_t1050 *, Predicate_1_t5866 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29403(__this, ___index, method) (( void (*) (List_1_t1050 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29404(__this, ___index, ___count, method) (( void (*) (List_1_t1050 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Reverse()
#define List_1_Reverse_m29405(__this, method) (( void (*) (List_1_t1050 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort()
#define List_1_Sort_m29406(__this, method) (( void (*) (List_1_t1050 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29407(__this, ___comparer, method) (( void (*) (List_1_t1050 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29408(__this, ___comparison, method) (( void (*) (List_1_t1050 *, Comparison_1_t5868 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Canvas>::ToArray()
#define List_1_ToArray_m29409(__this, method) (( CanvasU5BU5D_t5863* (*) (List_1_t1050 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::TrimExcess()
#define List_1_TrimExcess_m29410(__this, method) (( void (*) (List_1_t1050 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Capacity()
#define List_1_get_Capacity_m29411(__this, method) (( int32_t (*) (List_1_t1050 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29412(__this, ___value, method) (( void (*) (List_1_t1050 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Count()
#define List_1_get_Count_m29413(__this, method) (( int32_t (*) (List_1_t1050 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Item(System.Int32)
#define List_1_get_Item_m29414(__this, ___index, method) (( Canvas_t544 * (*) (List_1_t1050 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::set_Item(System.Int32,T)
#define List_1_set_Item_m29415(__this, ___index, ___value, method) (( void (*) (List_1_t1050 *, int32_t, Canvas_t544 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
