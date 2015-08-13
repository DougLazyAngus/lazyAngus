#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2789;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t9607;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2909;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t9608;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t9609;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t8427;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8431;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t9610;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t8434;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_100.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m60735_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1__ctor_m60735(__this, method) (( void (*) (List_1_t2789 *, const MethodInfo*))List_1__ctor_m60735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60736_gshared (List_1_t2789 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60736(__this, ___collection, method) (( void (*) (List_1_t2789 *, Object_t*, const MethodInfo*))List_1__ctor_m60736_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10119_gshared (List_1_t2789 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10119(__this, ___capacity, method) (( void (*) (List_1_t2789 *, int32_t, const MethodInfo*))List_1__ctor_m10119_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60737_gshared (List_1_t2789 * __this, UICharInfoU5BU5D_t2909* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60737(__this, ___data, ___size, method) (( void (*) (List_1_t2789 *, UICharInfoU5BU5D_t2909*, int32_t, const MethodInfo*))List_1__ctor_m60737_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m60738_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60738(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60738_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60739_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60739(__this, method) (( Object_t* (*) (List_1_t2789 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60739_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60740_gshared (List_1_t2789 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60740(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2789 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60740_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60741_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60741(__this, method) (( Object_t * (*) (List_1_t2789 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60741_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60742_gshared (List_1_t2789 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60742(__this, ___item, method) (( int32_t (*) (List_1_t2789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60742_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60743_gshared (List_1_t2789 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60743(__this, ___item, method) (( bool (*) (List_1_t2789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60743_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60744_gshared (List_1_t2789 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60744(__this, ___item, method) (( int32_t (*) (List_1_t2789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60744_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60745_gshared (List_1_t2789 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60745(__this, ___index, ___item, method) (( void (*) (List_1_t2789 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60745_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60746_gshared (List_1_t2789 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60746(__this, ___item, method) (( void (*) (List_1_t2789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60746_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60747_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60747(__this, method) (( bool (*) (List_1_t2789 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60747_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60748_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60748(__this, method) (( bool (*) (List_1_t2789 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60748_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60749_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60749(__this, method) (( Object_t * (*) (List_1_t2789 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60749_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60750_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60750(__this, method) (( bool (*) (List_1_t2789 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60750_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60751_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60751(__this, method) (( bool (*) (List_1_t2789 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60751_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60752_gshared (List_1_t2789 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60752(__this, ___index, method) (( Object_t * (*) (List_1_t2789 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60752_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60753_gshared (List_1_t2789 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60753(__this, ___index, ___value, method) (( void (*) (List_1_t2789 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60753_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m60754_gshared (List_1_t2789 * __this, UICharInfo_t1078  ___item, const MethodInfo* method);
#define List_1_Add_m60754(__this, ___item, method) (( void (*) (List_1_t2789 *, UICharInfo_t1078 , const MethodInfo*))List_1_Add_m60754_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60755_gshared (List_1_t2789 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60755(__this, ___newCount, method) (( void (*) (List_1_t2789 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60755_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60756_gshared (List_1_t2789 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60756(__this, ___idx, ___count, method) (( void (*) (List_1_t2789 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60756_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60757_gshared (List_1_t2789 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60757(__this, ___collection, method) (( void (*) (List_1_t2789 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60757_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60758_gshared (List_1_t2789 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60758(__this, ___enumerable, method) (( void (*) (List_1_t2789 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60758_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60759_gshared (List_1_t2789 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60759(__this, ___collection, method) (( void (*) (List_1_t2789 *, Object_t*, const MethodInfo*))List_1_AddRange_m60759_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8427 * List_1_AsReadOnly_m60760_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60760(__this, method) (( ReadOnlyCollection_1_t8427 * (*) (List_1_t2789 *, const MethodInfo*))List_1_AsReadOnly_m60760_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m60761_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_Clear_m60761(__this, method) (( void (*) (List_1_t2789 *, const MethodInfo*))List_1_Clear_m60761_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m60762_gshared (List_1_t2789 * __this, UICharInfo_t1078  ___item, const MethodInfo* method);
#define List_1_Contains_m60762(__this, ___item, method) (( bool (*) (List_1_t2789 *, UICharInfo_t1078 , const MethodInfo*))List_1_Contains_m60762_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60763_gshared (List_1_t2789 * __this, UICharInfoU5BU5D_t2909* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60763(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2789 *, UICharInfoU5BU5D_t2909*, int32_t, const MethodInfo*))List_1_CopyTo_m60763_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1078  List_1_Find_m60764_gshared (List_1_t2789 * __this, Predicate_1_t8431 * ___match, const MethodInfo* method);
#define List_1_Find_m60764(__this, ___match, method) (( UICharInfo_t1078  (*) (List_1_t2789 *, Predicate_1_t8431 *, const MethodInfo*))List_1_Find_m60764_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60765_gshared (Object_t * __this /* static, unused */, Predicate_1_t8431 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60765(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8431 *, const MethodInfo*))List_1_CheckMatch_m60765_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60766_gshared (List_1_t2789 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8431 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60766(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2789 *, int32_t, int32_t, Predicate_1_t8431 *, const MethodInfo*))List_1_GetIndex_m60766_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t8426  List_1_GetEnumerator_m60767_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60767(__this, method) (( Enumerator_t8426  (*) (List_1_t2789 *, const MethodInfo*))List_1_GetEnumerator_m60767_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2789 * List_1_GetRange_m60768_gshared (List_1_t2789 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60768(__this, ___index, ___count, method) (( List_1_t2789 * (*) (List_1_t2789 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60768_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60769_gshared (List_1_t2789 * __this, UICharInfo_t1078  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60769(__this, ___item, method) (( int32_t (*) (List_1_t2789 *, UICharInfo_t1078 , const MethodInfo*))List_1_IndexOf_m60769_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60770_gshared (List_1_t2789 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60770(__this, ___start, ___delta, method) (( void (*) (List_1_t2789 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60770_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60771_gshared (List_1_t2789 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60771(__this, ___index, method) (( void (*) (List_1_t2789 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60771_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60772_gshared (List_1_t2789 * __this, int32_t ___index, UICharInfo_t1078  ___item, const MethodInfo* method);
#define List_1_Insert_m60772(__this, ___index, ___item, method) (( void (*) (List_1_t2789 *, int32_t, UICharInfo_t1078 , const MethodInfo*))List_1_Insert_m60772_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60773_gshared (List_1_t2789 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60773(__this, ___collection, method) (( void (*) (List_1_t2789 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60773_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60774_gshared (List_1_t2789 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60774(__this, ___index, ___collection, method) (( void (*) (List_1_t2789 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60774_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60775_gshared (List_1_t2789 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60775(__this, ___index, ___collection, method) (( void (*) (List_1_t2789 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60775_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60776_gshared (List_1_t2789 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60776(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2789 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60776_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m60777_gshared (List_1_t2789 * __this, UICharInfo_t1078  ___item, const MethodInfo* method);
#define List_1_Remove_m60777(__this, ___item, method) (( bool (*) (List_1_t2789 *, UICharInfo_t1078 , const MethodInfo*))List_1_Remove_m60777_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60778_gshared (List_1_t2789 * __this, Predicate_1_t8431 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60778(__this, ___match, method) (( int32_t (*) (List_1_t2789 *, Predicate_1_t8431 *, const MethodInfo*))List_1_RemoveAll_m60778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60779_gshared (List_1_t2789 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60779(__this, ___index, method) (( void (*) (List_1_t2789 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60779_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60780_gshared (List_1_t2789 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60780(__this, ___index, ___count, method) (( void (*) (List_1_t2789 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60780_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m60781_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_Reverse_m60781(__this, method) (( void (*) (List_1_t2789 *, const MethodInfo*))List_1_Reverse_m60781_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m60782_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_Sort_m60782(__this, method) (( void (*) (List_1_t2789 *, const MethodInfo*))List_1_Sort_m60782_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60783_gshared (List_1_t2789 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60783(__this, ___comparer, method) (( void (*) (List_1_t2789 *, Object_t*, const MethodInfo*))List_1_Sort_m60783_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60784_gshared (List_1_t2789 * __this, Comparison_1_t8434 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60784(__this, ___comparison, method) (( void (*) (List_1_t2789 *, Comparison_1_t8434 *, const MethodInfo*))List_1_Sort_m60784_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2909* List_1_ToArray_m60785_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_ToArray_m60785(__this, method) (( UICharInfoU5BU5D_t2909* (*) (List_1_t2789 *, const MethodInfo*))List_1_ToArray_m60785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60786_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60786(__this, method) (( void (*) (List_1_t2789 *, const MethodInfo*))List_1_TrimExcess_m60786_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60787_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60787(__this, method) (( int32_t (*) (List_1_t2789 *, const MethodInfo*))List_1_get_Capacity_m60787_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60788_gshared (List_1_t2789 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60788(__this, ___value, method) (( void (*) (List_1_t2789 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60788_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60789_gshared (List_1_t2789 * __this, const MethodInfo* method);
#define List_1_get_Count_m60789(__this, method) (( int32_t (*) (List_1_t2789 *, const MethodInfo*))List_1_get_Count_m60789_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1078  List_1_get_Item_m60790_gshared (List_1_t2789 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60790(__this, ___index, method) (( UICharInfo_t1078  (*) (List_1_t2789 *, int32_t, const MethodInfo*))List_1_get_Item_m60790_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60791_gshared (List_1_t2789 * __this, int32_t ___index, UICharInfo_t1078  ___value, const MethodInfo* method);
#define List_1_set_Item_m60791(__this, ___index, ___value, method) (( void (*) (List_1_t2789 *, int32_t, UICharInfo_t1078 , const MethodInfo*))List_1_set_Item_m60791_gshared)(__this, ___index, ___value, method)
