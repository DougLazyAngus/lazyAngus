#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2806;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t10242;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2926;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t10243;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t10244;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t8998;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t9002;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t10245;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t9005;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_104.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m65453_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1__ctor_m65453(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1__ctor_m65453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m65454_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m65454(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1__ctor_m65454_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10274_gshared (List_1_t2806 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10274(__this, ___capacity, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1__ctor_m10274_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m65455_gshared (List_1_t2806 * __this, UICharInfoU5BU5D_t2926* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m65455(__this, ___data, ___size, method) (( void (*) (List_1_t2806 *, UICharInfoU5BU5D_t2926*, int32_t, const MethodInfo*))List_1__ctor_m65455_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m65456_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m65456(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m65456_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65457_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65457(__this, method) (( Object_t* (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m65458_gshared (List_1_t2806 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m65458(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2806 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m65458_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m65459_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m65459(__this, method) (( Object_t * (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m65459_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m65460_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m65460(__this, ___item, method) (( int32_t (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m65460_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m65461_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m65461(__this, ___item, method) (( bool (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m65461_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m65462_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m65462(__this, ___item, method) (( int32_t (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m65462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m65463_gshared (List_1_t2806 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m65463(__this, ___index, ___item, method) (( void (*) (List_1_t2806 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m65463_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m65464_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m65464(__this, ___item, method) (( void (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m65464_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65465_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65465(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m65466_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m65466(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m65466_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m65467_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m65467(__this, method) (( Object_t * (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m65467_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m65468_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m65468(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m65468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m65469_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m65469(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m65469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m65470_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m65470(__this, ___index, method) (( Object_t * (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m65470_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m65471_gshared (List_1_t2806 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m65471(__this, ___index, ___value, method) (( void (*) (List_1_t2806 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m65471_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m65472_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Add_m65472(__this, ___item, method) (( void (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_Add_m65472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m65473_gshared (List_1_t2806 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m65473(__this, ___newCount, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m65473_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m65474_gshared (List_1_t2806 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m65474(__this, ___idx, ___count, method) (( void (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m65474_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m65475_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m65475(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_AddCollection_m65475_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m65476_gshared (List_1_t2806 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m65476(__this, ___enumerable, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m65476_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m65477_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m65477(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_AddRange_m65477_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8998 * List_1_AsReadOnly_m65478_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m65478(__this, method) (( ReadOnlyCollection_1_t8998 * (*) (List_1_t2806 *, const MethodInfo*))List_1_AsReadOnly_m65478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m65479_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_Clear_m65479(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_Clear_m65479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m65480_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Contains_m65480(__this, ___item, method) (( bool (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_Contains_m65480_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m65481_gshared (List_1_t2806 * __this, UICharInfoU5BU5D_t2926* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m65481(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2806 *, UICharInfoU5BU5D_t2926*, int32_t, const MethodInfo*))List_1_CopyTo_m65481_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1095  List_1_Find_m65482_gshared (List_1_t2806 * __this, Predicate_1_t9002 * ___match, const MethodInfo* method);
#define List_1_Find_m65482(__this, ___match, method) (( UICharInfo_t1095  (*) (List_1_t2806 *, Predicate_1_t9002 *, const MethodInfo*))List_1_Find_m65482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m65483_gshared (Object_t * __this /* static, unused */, Predicate_1_t9002 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m65483(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9002 *, const MethodInfo*))List_1_CheckMatch_m65483_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m65484_gshared (List_1_t2806 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9002 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m65484(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2806 *, int32_t, int32_t, Predicate_1_t9002 *, const MethodInfo*))List_1_GetIndex_m65484_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t8997  List_1_GetEnumerator_m65485_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m65485(__this, method) (( Enumerator_t8997  (*) (List_1_t2806 *, const MethodInfo*))List_1_GetEnumerator_m65485_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2806 * List_1_GetRange_m65486_gshared (List_1_t2806 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m65486(__this, ___index, ___count, method) (( List_1_t2806 * (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m65486_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m65487_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_IndexOf_m65487(__this, ___item, method) (( int32_t (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_IndexOf_m65487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m65488_gshared (List_1_t2806 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m65488(__this, ___start, ___delta, method) (( void (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m65488_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m65489_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m65489(__this, ___index, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_CheckIndex_m65489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m65490_gshared (List_1_t2806 * __this, int32_t ___index, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Insert_m65490(__this, ___index, ___item, method) (( void (*) (List_1_t2806 *, int32_t, UICharInfo_t1095 , const MethodInfo*))List_1_Insert_m65490_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m65491_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m65491(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m65491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m65492_gshared (List_1_t2806 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m65492(__this, ___index, ___collection, method) (( void (*) (List_1_t2806 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m65492_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m65493_gshared (List_1_t2806 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m65493(__this, ___index, ___collection, method) (( void (*) (List_1_t2806 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m65493_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m65494_gshared (List_1_t2806 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m65494(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2806 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m65494_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m65495_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Remove_m65495(__this, ___item, method) (( bool (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_Remove_m65495_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m65496_gshared (List_1_t2806 * __this, Predicate_1_t9002 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m65496(__this, ___match, method) (( int32_t (*) (List_1_t2806 *, Predicate_1_t9002 *, const MethodInfo*))List_1_RemoveAll_m65496_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m65497_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m65497(__this, ___index, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_RemoveAt_m65497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m65498_gshared (List_1_t2806 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m65498(__this, ___index, ___count, method) (( void (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m65498_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m65499_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_Reverse_m65499(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_Reverse_m65499_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m65500_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_Sort_m65500(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_Sort_m65500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m65501_gshared (List_1_t2806 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m65501(__this, ___comparer, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_Sort_m65501_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m65502_gshared (List_1_t2806 * __this, Comparison_1_t9005 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m65502(__this, ___comparison, method) (( void (*) (List_1_t2806 *, Comparison_1_t9005 *, const MethodInfo*))List_1_Sort_m65502_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2926* List_1_ToArray_m65503_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_ToArray_m65503(__this, method) (( UICharInfoU5BU5D_t2926* (*) (List_1_t2806 *, const MethodInfo*))List_1_ToArray_m65503_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m65504_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m65504(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_TrimExcess_m65504_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m65505_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m65505(__this, method) (( int32_t (*) (List_1_t2806 *, const MethodInfo*))List_1_get_Capacity_m65505_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m65506_gshared (List_1_t2806 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m65506(__this, ___value, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_set_Capacity_m65506_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m65507_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_get_Count_m65507(__this, method) (( int32_t (*) (List_1_t2806 *, const MethodInfo*))List_1_get_Count_m65507_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1095  List_1_get_Item_m65508_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m65508(__this, ___index, method) (( UICharInfo_t1095  (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_get_Item_m65508_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m65509_gshared (List_1_t2806 * __this, int32_t ___index, UICharInfo_t1095  ___value, const MethodInfo* method);
#define List_1_set_Item_m65509(__this, ___index, ___value, method) (( void (*) (List_1_t2806 *, int32_t, UICharInfo_t1095 , const MethodInfo*))List_1_set_Item_m65509_gshared)(__this, ___index, ___value, method)
