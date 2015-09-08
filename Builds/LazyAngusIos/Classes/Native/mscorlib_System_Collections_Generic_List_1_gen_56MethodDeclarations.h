#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2808;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t10247;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2928;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t10248;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1098;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t9008;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t9012;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t10249;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t9015;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_105.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m65618_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1__ctor_m65618(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1__ctor_m65618_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m65619_gshared (List_1_t2808 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m65619(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1__ctor_m65619_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10288_gshared (List_1_t2808 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10288(__this, ___capacity, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1__ctor_m10288_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m65620_gshared (List_1_t2808 * __this, UILineInfoU5BU5D_t2928* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m65620(__this, ___data, ___size, method) (( void (*) (List_1_t2808 *, UILineInfoU5BU5D_t2928*, int32_t, const MethodInfo*))List_1__ctor_m65620_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m65621_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m65621(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m65621_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65622_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65622(__this, method) (( Object_t* (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m65623_gshared (List_1_t2808 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m65623(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2808 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m65623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m65624_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m65624(__this, method) (( Object_t * (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m65624_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m65625_gshared (List_1_t2808 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m65625(__this, ___item, method) (( int32_t (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m65625_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m65626_gshared (List_1_t2808 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m65626(__this, ___item, method) (( bool (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m65626_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m65627_gshared (List_1_t2808 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m65627(__this, ___item, method) (( int32_t (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m65627_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m65628_gshared (List_1_t2808 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m65628(__this, ___index, ___item, method) (( void (*) (List_1_t2808 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m65628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m65629_gshared (List_1_t2808 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m65629(__this, ___item, method) (( void (*) (List_1_t2808 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m65629_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65630_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65630(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65630_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m65631_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m65631(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m65631_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m65632_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m65632(__this, method) (( Object_t * (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m65632_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m65633_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m65633(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m65633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m65634_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m65634(__this, method) (( bool (*) (List_1_t2808 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m65634_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m65635_gshared (List_1_t2808 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m65635(__this, ___index, method) (( Object_t * (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m65635_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m65636_gshared (List_1_t2808 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m65636(__this, ___index, ___value, method) (( void (*) (List_1_t2808 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m65636_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m65637_gshared (List_1_t2808 * __this, UILineInfo_t1094  ___item, const MethodInfo* method);
#define List_1_Add_m65637(__this, ___item, method) (( void (*) (List_1_t2808 *, UILineInfo_t1094 , const MethodInfo*))List_1_Add_m65637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m65638_gshared (List_1_t2808 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m65638(__this, ___newCount, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m65638_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m65639_gshared (List_1_t2808 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m65639(__this, ___idx, ___count, method) (( void (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m65639_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m65640_gshared (List_1_t2808 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m65640(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_AddCollection_m65640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m65641_gshared (List_1_t2808 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m65641(__this, ___enumerable, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m65641_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m65642_gshared (List_1_t2808 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m65642(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_AddRange_m65642_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9008 * List_1_AsReadOnly_m65643_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m65643(__this, method) (( ReadOnlyCollection_1_t9008 * (*) (List_1_t2808 *, const MethodInfo*))List_1_AsReadOnly_m65643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m65644_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_Clear_m65644(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_Clear_m65644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m65645_gshared (List_1_t2808 * __this, UILineInfo_t1094  ___item, const MethodInfo* method);
#define List_1_Contains_m65645(__this, ___item, method) (( bool (*) (List_1_t2808 *, UILineInfo_t1094 , const MethodInfo*))List_1_Contains_m65645_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m65646_gshared (List_1_t2808 * __this, UILineInfoU5BU5D_t2928* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m65646(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2808 *, UILineInfoU5BU5D_t2928*, int32_t, const MethodInfo*))List_1_CopyTo_m65646_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1094  List_1_Find_m65647_gshared (List_1_t2808 * __this, Predicate_1_t9012 * ___match, const MethodInfo* method);
#define List_1_Find_m65647(__this, ___match, method) (( UILineInfo_t1094  (*) (List_1_t2808 *, Predicate_1_t9012 *, const MethodInfo*))List_1_Find_m65647_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m65648_gshared (Object_t * __this /* static, unused */, Predicate_1_t9012 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m65648(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9012 *, const MethodInfo*))List_1_CheckMatch_m65648_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m65649_gshared (List_1_t2808 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9012 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m65649(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2808 *, int32_t, int32_t, Predicate_1_t9012 *, const MethodInfo*))List_1_GetIndex_m65649_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t9007  List_1_GetEnumerator_m65650_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m65650(__this, method) (( Enumerator_t9007  (*) (List_1_t2808 *, const MethodInfo*))List_1_GetEnumerator_m65650_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2808 * List_1_GetRange_m65651_gshared (List_1_t2808 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m65651(__this, ___index, ___count, method) (( List_1_t2808 * (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m65651_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m65652_gshared (List_1_t2808 * __this, UILineInfo_t1094  ___item, const MethodInfo* method);
#define List_1_IndexOf_m65652(__this, ___item, method) (( int32_t (*) (List_1_t2808 *, UILineInfo_t1094 , const MethodInfo*))List_1_IndexOf_m65652_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m65653_gshared (List_1_t2808 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m65653(__this, ___start, ___delta, method) (( void (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m65653_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m65654_gshared (List_1_t2808 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m65654(__this, ___index, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_CheckIndex_m65654_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m65655_gshared (List_1_t2808 * __this, int32_t ___index, UILineInfo_t1094  ___item, const MethodInfo* method);
#define List_1_Insert_m65655(__this, ___index, ___item, method) (( void (*) (List_1_t2808 *, int32_t, UILineInfo_t1094 , const MethodInfo*))List_1_Insert_m65655_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m65656_gshared (List_1_t2808 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m65656(__this, ___collection, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m65656_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m65657_gshared (List_1_t2808 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m65657(__this, ___index, ___collection, method) (( void (*) (List_1_t2808 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m65657_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m65658_gshared (List_1_t2808 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m65658(__this, ___index, ___collection, method) (( void (*) (List_1_t2808 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m65658_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m65659_gshared (List_1_t2808 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m65659(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2808 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m65659_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m65660_gshared (List_1_t2808 * __this, UILineInfo_t1094  ___item, const MethodInfo* method);
#define List_1_Remove_m65660(__this, ___item, method) (( bool (*) (List_1_t2808 *, UILineInfo_t1094 , const MethodInfo*))List_1_Remove_m65660_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m65661_gshared (List_1_t2808 * __this, Predicate_1_t9012 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m65661(__this, ___match, method) (( int32_t (*) (List_1_t2808 *, Predicate_1_t9012 *, const MethodInfo*))List_1_RemoveAll_m65661_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m65662_gshared (List_1_t2808 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m65662(__this, ___index, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_RemoveAt_m65662_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m65663_gshared (List_1_t2808 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m65663(__this, ___index, ___count, method) (( void (*) (List_1_t2808 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m65663_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m65664_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_Reverse_m65664(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_Reverse_m65664_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m65665_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_Sort_m65665(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_Sort_m65665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m65666_gshared (List_1_t2808 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m65666(__this, ___comparer, method) (( void (*) (List_1_t2808 *, Object_t*, const MethodInfo*))List_1_Sort_m65666_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m65667_gshared (List_1_t2808 * __this, Comparison_1_t9015 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m65667(__this, ___comparison, method) (( void (*) (List_1_t2808 *, Comparison_1_t9015 *, const MethodInfo*))List_1_Sort_m65667_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2928* List_1_ToArray_m65668_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_ToArray_m65668(__this, method) (( UILineInfoU5BU5D_t2928* (*) (List_1_t2808 *, const MethodInfo*))List_1_ToArray_m65668_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m65669_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m65669(__this, method) (( void (*) (List_1_t2808 *, const MethodInfo*))List_1_TrimExcess_m65669_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m65670_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m65670(__this, method) (( int32_t (*) (List_1_t2808 *, const MethodInfo*))List_1_get_Capacity_m65670_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m65671_gshared (List_1_t2808 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m65671(__this, ___value, method) (( void (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_set_Capacity_m65671_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m65672_gshared (List_1_t2808 * __this, const MethodInfo* method);
#define List_1_get_Count_m65672(__this, method) (( int32_t (*) (List_1_t2808 *, const MethodInfo*))List_1_get_Count_m65672_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1094  List_1_get_Item_m65673_gshared (List_1_t2808 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m65673(__this, ___index, method) (( UILineInfo_t1094  (*) (List_1_t2808 *, int32_t, const MethodInfo*))List_1_get_Item_m65673_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m65674_gshared (List_1_t2808 * __this, int32_t ___index, UILineInfo_t1094  ___value, const MethodInfo* method);
#define List_1_set_Item_m65674(__this, ___index, ___value, method) (( void (*) (List_1_t2808 *, int32_t, UILineInfo_t1094 , const MethodInfo*))List_1_set_Item_m65674_gshared)(__this, ___index, ___value, method)
