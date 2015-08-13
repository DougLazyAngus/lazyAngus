#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1049;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t674;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Canvas>
struct IEnumerable_1_t9011;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t5856;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Canvas>
struct IEnumerator_1_t9012;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
struct ICollection_1_t9013;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Canvas>
struct ReadOnlyCollection_1_t5858;
// System.Predicate`1<UnityEngine.Canvas>
struct Predicate_1_t5859;
// System.Collections.Generic.IComparer`1<UnityEngine.Canvas>
struct IComparer_1_t9014;
// System.Comparison`1<UnityEngine.Canvas>
struct Comparison_1_t5861;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m29237(__this, method) (( void (*) (List_1_t1049 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29238(__this, ___collection, method) (( void (*) (List_1_t1049 *, Object_t*, const MethodInfo*))List_1__ctor_m7470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(System.Int32)
#define List_1__ctor_m29239(__this, ___capacity, method) (( void (*) (List_1_t1049 *, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(T[],System.Int32)
#define List_1__ctor_m29240(__this, ___data, ___size, method) (( void (*) (List_1_t1049 *, CanvasU5BU5D_t5856*, int32_t, const MethodInfo*))List_1__ctor_m21571_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.cctor()
#define List_1__cctor_m29241(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21573_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29242(__this, method) (( Object_t* (*) (List_1_t1049 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29243(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1049 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29244(__this, method) (( Object_t * (*) (List_1_t1049 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29245(__this, ___item, method) (( int32_t (*) (List_1_t1049 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29246(__this, ___item, method) (( bool (*) (List_1_t1049 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29247(__this, ___item, method) (( int32_t (*) (List_1_t1049 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29248(__this, ___index, ___item, method) (( void (*) (List_1_t1049 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29249(__this, ___item, method) (( void (*) (List_1_t1049 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29250(__this, method) (( bool (*) (List_1_t1049 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29251(__this, method) (( bool (*) (List_1_t1049 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29252(__this, method) (( Object_t * (*) (List_1_t1049 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29253(__this, method) (( bool (*) (List_1_t1049 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29254(__this, method) (( bool (*) (List_1_t1049 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29255(__this, ___index, method) (( Object_t * (*) (List_1_t1049 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29256(__this, ___index, ___value, method) (( void (*) (List_1_t1049 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Add(T)
#define List_1_Add_m29257(__this, ___item, method) (( void (*) (List_1_t1049 *, Canvas_t674 *, const MethodInfo*))List_1_Add_m10356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29258(__this, ___newCount, method) (( void (*) (List_1_t1049 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29259(__this, ___idx, ___count, method) (( void (*) (List_1_t1049 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21593_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29260(__this, ___collection, method) (( void (*) (List_1_t1049 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29261(__this, ___enumerable, method) (( void (*) (List_1_t1049 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29262(__this, ___collection, method) (( void (*) (List_1_t1049 *, Object_t*, const MethodInfo*))List_1_AddRange_m21599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::AsReadOnly()
#define List_1_AsReadOnly_m29263(__this, method) (( ReadOnlyCollection_1_t5858 * (*) (List_1_t1049 *, const MethodInfo*))List_1_AsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Clear()
#define List_1_Clear_m29264(__this, method) (( void (*) (List_1_t1049 *, const MethodInfo*))List_1_Clear_m10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::Contains(T)
#define List_1_Contains_m29265(__this, ___item, method) (( bool (*) (List_1_t1049 *, Canvas_t674 *, const MethodInfo*))List_1_Contains_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29266(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1049 *, CanvasU5BU5D_t5856*, int32_t, const MethodInfo*))List_1_CopyTo_m10358_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Canvas>::Find(System.Predicate`1<T>)
#define List_1_Find_m29267(__this, ___match, method) (( Canvas_t674 * (*) (List_1_t1049 *, Predicate_1_t5859 *, const MethodInfo*))List_1_Find_m21606_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29268(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5859 *, const MethodInfo*))List_1_CheckMatch_m21608_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29269(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1049 *, int32_t, int32_t, Predicate_1_t5859 *, const MethodInfo*))List_1_GetIndex_m21610_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::GetEnumerator()
#define List_1_GetEnumerator_m29270(__this, method) (( Enumerator_t5860  (*) (List_1_t1049 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29271(__this, ___index, ___count, method) (( List_1_t1049 * (*) (List_1_t1049 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21612_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::IndexOf(T)
#define List_1_IndexOf_m29272(__this, ___item, method) (( int32_t (*) (List_1_t1049 *, Canvas_t674 *, const MethodInfo*))List_1_IndexOf_m10361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29273(__this, ___start, ___delta, method) (( void (*) (List_1_t1049 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21615_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29274(__this, ___index, method) (( void (*) (List_1_t1049 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Insert(System.Int32,T)
#define List_1_Insert_m29275(__this, ___index, ___item, method) (( void (*) (List_1_t1049 *, int32_t, Canvas_t674 *, const MethodInfo*))List_1_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29276(__this, ___collection, method) (( void (*) (List_1_t1049 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21620_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29277(__this, ___index, ___collection, method) (( void (*) (List_1_t1049 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29278(__this, ___index, ___collection, method) (( void (*) (List_1_t1049 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21624_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29279(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1049 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21626_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::Remove(T)
#define List_1_Remove_m29280(__this, ___item, method) (( bool (*) (List_1_t1049 *, Canvas_t674 *, const MethodInfo*))List_1_Remove_m10359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29281(__this, ___match, method) (( int32_t (*) (List_1_t1049 *, Predicate_1_t5859 *, const MethodInfo*))List_1_RemoveAll_m21629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29282(__this, ___index, method) (( void (*) (List_1_t1049 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29283(__this, ___index, ___count, method) (( void (*) (List_1_t1049 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Reverse()
#define List_1_Reverse_m29284(__this, method) (( void (*) (List_1_t1049 *, const MethodInfo*))List_1_Reverse_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort()
#define List_1_Sort_m29285(__this, method) (( void (*) (List_1_t1049 *, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29286(__this, ___comparer, method) (( void (*) (List_1_t1049 *, Object_t*, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29287(__this, ___comparison, method) (( void (*) (List_1_t1049 *, Comparison_1_t5861 *, const MethodInfo*))List_1_Sort_m21640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Canvas>::ToArray()
#define List_1_ToArray_m29288(__this, method) (( CanvasU5BU5D_t5856* (*) (List_1_t1049 *, const MethodInfo*))List_1_ToArray_m21642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::TrimExcess()
#define List_1_TrimExcess_m29289(__this, method) (( void (*) (List_1_t1049 *, const MethodInfo*))List_1_TrimExcess_m21644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Capacity()
#define List_1_get_Capacity_m29290(__this, method) (( int32_t (*) (List_1_t1049 *, const MethodInfo*))List_1_get_Capacity_m21646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29291(__this, ___value, method) (( void (*) (List_1_t1049 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Count()
#define List_1_get_Count_m29292(__this, method) (( int32_t (*) (List_1_t1049 *, const MethodInfo*))List_1_get_Count_m10340_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Item(System.Int32)
#define List_1_get_Item_m29293(__this, ___index, method) (( Canvas_t674 * (*) (List_1_t1049 *, int32_t, const MethodInfo*))List_1_get_Item_m10363_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::set_Item(System.Int32,T)
#define List_1_set_Item_m29294(__this, ___index, ___value, method) (( void (*) (List_1_t1049 *, int32_t, Canvas_t674 *, const MethodInfo*))List_1_set_Item_m10364_gshared)(__this, ___index, ___value, method)
