#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2810;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t10248;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2930;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t10249;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t10250;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t9004;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t9008;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t10251;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t9011;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_104.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m65478_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1__ctor_m65478(__this, method) (( void (*) (List_1_t2810 *, const MethodInfo*))List_1__ctor_m65478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m65479_gshared (List_1_t2810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m65479(__this, ___collection, method) (( void (*) (List_1_t2810 *, Object_t*, const MethodInfo*))List_1__ctor_m65479_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10287_gshared (List_1_t2810 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10287(__this, ___capacity, method) (( void (*) (List_1_t2810 *, int32_t, const MethodInfo*))List_1__ctor_m10287_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m65480_gshared (List_1_t2810 * __this, UICharInfoU5BU5D_t2930* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m65480(__this, ___data, ___size, method) (( void (*) (List_1_t2810 *, UICharInfoU5BU5D_t2930*, int32_t, const MethodInfo*))List_1__ctor_m65480_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m65481_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m65481(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m65481_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65482_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65482(__this, method) (( Object_t* (*) (List_1_t2810 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m65483_gshared (List_1_t2810 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m65483(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2810 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m65483_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m65484_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m65484(__this, method) (( Object_t * (*) (List_1_t2810 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m65484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m65485_gshared (List_1_t2810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m65485(__this, ___item, method) (( int32_t (*) (List_1_t2810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m65485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m65486_gshared (List_1_t2810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m65486(__this, ___item, method) (( bool (*) (List_1_t2810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m65486_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m65487_gshared (List_1_t2810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m65487(__this, ___item, method) (( int32_t (*) (List_1_t2810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m65487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m65488_gshared (List_1_t2810 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m65488(__this, ___index, ___item, method) (( void (*) (List_1_t2810 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m65488_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m65489_gshared (List_1_t2810 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m65489(__this, ___item, method) (( void (*) (List_1_t2810 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m65489_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65490_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65490(__this, method) (( bool (*) (List_1_t2810 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65490_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m65491_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m65491(__this, method) (( bool (*) (List_1_t2810 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m65491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m65492_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m65492(__this, method) (( Object_t * (*) (List_1_t2810 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m65492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m65493_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m65493(__this, method) (( bool (*) (List_1_t2810 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m65493_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m65494_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m65494(__this, method) (( bool (*) (List_1_t2810 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m65494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m65495_gshared (List_1_t2810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m65495(__this, ___index, method) (( Object_t * (*) (List_1_t2810 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m65495_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m65496_gshared (List_1_t2810 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m65496(__this, ___index, ___value, method) (( void (*) (List_1_t2810 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m65496_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m65497_gshared (List_1_t2810 * __this, UICharInfo_t1099  ___item, const MethodInfo* method);
#define List_1_Add_m65497(__this, ___item, method) (( void (*) (List_1_t2810 *, UICharInfo_t1099 , const MethodInfo*))List_1_Add_m65497_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m65498_gshared (List_1_t2810 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m65498(__this, ___newCount, method) (( void (*) (List_1_t2810 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m65498_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m65499_gshared (List_1_t2810 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m65499(__this, ___idx, ___count, method) (( void (*) (List_1_t2810 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m65499_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m65500_gshared (List_1_t2810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m65500(__this, ___collection, method) (( void (*) (List_1_t2810 *, Object_t*, const MethodInfo*))List_1_AddCollection_m65500_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m65501_gshared (List_1_t2810 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m65501(__this, ___enumerable, method) (( void (*) (List_1_t2810 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m65501_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m65502_gshared (List_1_t2810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m65502(__this, ___collection, method) (( void (*) (List_1_t2810 *, Object_t*, const MethodInfo*))List_1_AddRange_m65502_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9004 * List_1_AsReadOnly_m65503_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m65503(__this, method) (( ReadOnlyCollection_1_t9004 * (*) (List_1_t2810 *, const MethodInfo*))List_1_AsReadOnly_m65503_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m65504_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_Clear_m65504(__this, method) (( void (*) (List_1_t2810 *, const MethodInfo*))List_1_Clear_m65504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m65505_gshared (List_1_t2810 * __this, UICharInfo_t1099  ___item, const MethodInfo* method);
#define List_1_Contains_m65505(__this, ___item, method) (( bool (*) (List_1_t2810 *, UICharInfo_t1099 , const MethodInfo*))List_1_Contains_m65505_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m65506_gshared (List_1_t2810 * __this, UICharInfoU5BU5D_t2930* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m65506(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2810 *, UICharInfoU5BU5D_t2930*, int32_t, const MethodInfo*))List_1_CopyTo_m65506_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1099  List_1_Find_m65507_gshared (List_1_t2810 * __this, Predicate_1_t9008 * ___match, const MethodInfo* method);
#define List_1_Find_m65507(__this, ___match, method) (( UICharInfo_t1099  (*) (List_1_t2810 *, Predicate_1_t9008 *, const MethodInfo*))List_1_Find_m65507_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m65508_gshared (Object_t * __this /* static, unused */, Predicate_1_t9008 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m65508(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9008 *, const MethodInfo*))List_1_CheckMatch_m65508_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m65509_gshared (List_1_t2810 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9008 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m65509(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2810 *, int32_t, int32_t, Predicate_1_t9008 *, const MethodInfo*))List_1_GetIndex_m65509_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t9003  List_1_GetEnumerator_m65510_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m65510(__this, method) (( Enumerator_t9003  (*) (List_1_t2810 *, const MethodInfo*))List_1_GetEnumerator_m65510_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2810 * List_1_GetRange_m65511_gshared (List_1_t2810 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m65511(__this, ___index, ___count, method) (( List_1_t2810 * (*) (List_1_t2810 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m65511_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m65512_gshared (List_1_t2810 * __this, UICharInfo_t1099  ___item, const MethodInfo* method);
#define List_1_IndexOf_m65512(__this, ___item, method) (( int32_t (*) (List_1_t2810 *, UICharInfo_t1099 , const MethodInfo*))List_1_IndexOf_m65512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m65513_gshared (List_1_t2810 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m65513(__this, ___start, ___delta, method) (( void (*) (List_1_t2810 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m65513_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m65514_gshared (List_1_t2810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m65514(__this, ___index, method) (( void (*) (List_1_t2810 *, int32_t, const MethodInfo*))List_1_CheckIndex_m65514_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m65515_gshared (List_1_t2810 * __this, int32_t ___index, UICharInfo_t1099  ___item, const MethodInfo* method);
#define List_1_Insert_m65515(__this, ___index, ___item, method) (( void (*) (List_1_t2810 *, int32_t, UICharInfo_t1099 , const MethodInfo*))List_1_Insert_m65515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m65516_gshared (List_1_t2810 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m65516(__this, ___collection, method) (( void (*) (List_1_t2810 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m65516_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m65517_gshared (List_1_t2810 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m65517(__this, ___index, ___collection, method) (( void (*) (List_1_t2810 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m65517_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m65518_gshared (List_1_t2810 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m65518(__this, ___index, ___collection, method) (( void (*) (List_1_t2810 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m65518_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m65519_gshared (List_1_t2810 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m65519(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2810 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m65519_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m65520_gshared (List_1_t2810 * __this, UICharInfo_t1099  ___item, const MethodInfo* method);
#define List_1_Remove_m65520(__this, ___item, method) (( bool (*) (List_1_t2810 *, UICharInfo_t1099 , const MethodInfo*))List_1_Remove_m65520_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m65521_gshared (List_1_t2810 * __this, Predicate_1_t9008 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m65521(__this, ___match, method) (( int32_t (*) (List_1_t2810 *, Predicate_1_t9008 *, const MethodInfo*))List_1_RemoveAll_m65521_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m65522_gshared (List_1_t2810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m65522(__this, ___index, method) (( void (*) (List_1_t2810 *, int32_t, const MethodInfo*))List_1_RemoveAt_m65522_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m65523_gshared (List_1_t2810 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m65523(__this, ___index, ___count, method) (( void (*) (List_1_t2810 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m65523_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m65524_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_Reverse_m65524(__this, method) (( void (*) (List_1_t2810 *, const MethodInfo*))List_1_Reverse_m65524_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m65525_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_Sort_m65525(__this, method) (( void (*) (List_1_t2810 *, const MethodInfo*))List_1_Sort_m65525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m65526_gshared (List_1_t2810 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m65526(__this, ___comparer, method) (( void (*) (List_1_t2810 *, Object_t*, const MethodInfo*))List_1_Sort_m65526_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m65527_gshared (List_1_t2810 * __this, Comparison_1_t9011 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m65527(__this, ___comparison, method) (( void (*) (List_1_t2810 *, Comparison_1_t9011 *, const MethodInfo*))List_1_Sort_m65527_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2930* List_1_ToArray_m65528_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_ToArray_m65528(__this, method) (( UICharInfoU5BU5D_t2930* (*) (List_1_t2810 *, const MethodInfo*))List_1_ToArray_m65528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m65529_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m65529(__this, method) (( void (*) (List_1_t2810 *, const MethodInfo*))List_1_TrimExcess_m65529_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m65530_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m65530(__this, method) (( int32_t (*) (List_1_t2810 *, const MethodInfo*))List_1_get_Capacity_m65530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m65531_gshared (List_1_t2810 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m65531(__this, ___value, method) (( void (*) (List_1_t2810 *, int32_t, const MethodInfo*))List_1_set_Capacity_m65531_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m65532_gshared (List_1_t2810 * __this, const MethodInfo* method);
#define List_1_get_Count_m65532(__this, method) (( int32_t (*) (List_1_t2810 *, const MethodInfo*))List_1_get_Count_m65532_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1099  List_1_get_Item_m65533_gshared (List_1_t2810 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m65533(__this, ___index, method) (( UICharInfo_t1099  (*) (List_1_t2810 *, int32_t, const MethodInfo*))List_1_get_Item_m65533_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m65534_gshared (List_1_t2810 * __this, int32_t ___index, UICharInfo_t1099  ___value, const MethodInfo* method);
#define List_1_set_Item_m65534(__this, ___index, ___value, method) (( void (*) (List_1_t2810 *, int32_t, UICharInfo_t1099 , const MethodInfo*))List_1_set_Item_m65534_gshared)(__this, ___index, ___value, method)
