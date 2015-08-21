#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2787;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t9615;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2907;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t9616;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t9617;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t8431;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8435;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t9618;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t8438;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_101.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m60824_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1__ctor_m60824(__this, method) (( void (*) (List_1_t2787 *, const MethodInfo*))List_1__ctor_m60824_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60825_gshared (List_1_t2787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60825(__this, ___collection, method) (( void (*) (List_1_t2787 *, Object_t*, const MethodInfo*))List_1__ctor_m60825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10110_gshared (List_1_t2787 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10110(__this, ___capacity, method) (( void (*) (List_1_t2787 *, int32_t, const MethodInfo*))List_1__ctor_m10110_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60826_gshared (List_1_t2787 * __this, UICharInfoU5BU5D_t2907* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60826(__this, ___data, ___size, method) (( void (*) (List_1_t2787 *, UICharInfoU5BU5D_t2907*, int32_t, const MethodInfo*))List_1__ctor_m60826_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m60827_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60827(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60827_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60828_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60828(__this, method) (( Object_t* (*) (List_1_t2787 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60828_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60829_gshared (List_1_t2787 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60829(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2787 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60829_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60830_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60830(__this, method) (( Object_t * (*) (List_1_t2787 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60830_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60831_gshared (List_1_t2787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60831(__this, ___item, method) (( int32_t (*) (List_1_t2787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60832_gshared (List_1_t2787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60832(__this, ___item, method) (( bool (*) (List_1_t2787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60832_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60833_gshared (List_1_t2787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60833(__this, ___item, method) (( int32_t (*) (List_1_t2787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60833_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60834_gshared (List_1_t2787 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60834(__this, ___index, ___item, method) (( void (*) (List_1_t2787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60834_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60835_gshared (List_1_t2787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60835(__this, ___item, method) (( void (*) (List_1_t2787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60835_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60836_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60836(__this, method) (( bool (*) (List_1_t2787 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60836_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60837_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60837(__this, method) (( bool (*) (List_1_t2787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60837_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60838_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60838(__this, method) (( Object_t * (*) (List_1_t2787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60838_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60839_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60839(__this, method) (( bool (*) (List_1_t2787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60839_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60840_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60840(__this, method) (( bool (*) (List_1_t2787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60840_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60841_gshared (List_1_t2787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60841(__this, ___index, method) (( Object_t * (*) (List_1_t2787 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60842_gshared (List_1_t2787 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60842(__this, ___index, ___value, method) (( void (*) (List_1_t2787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60842_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m60843_gshared (List_1_t2787 * __this, UICharInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Add_m60843(__this, ___item, method) (( void (*) (List_1_t2787 *, UICharInfo_t1076 , const MethodInfo*))List_1_Add_m60843_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60844_gshared (List_1_t2787 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60844(__this, ___newCount, method) (( void (*) (List_1_t2787 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60844_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60845_gshared (List_1_t2787 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60845(__this, ___idx, ___count, method) (( void (*) (List_1_t2787 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60845_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60846_gshared (List_1_t2787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60846(__this, ___collection, method) (( void (*) (List_1_t2787 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60846_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60847_gshared (List_1_t2787 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60847(__this, ___enumerable, method) (( void (*) (List_1_t2787 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60847_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60848_gshared (List_1_t2787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60848(__this, ___collection, method) (( void (*) (List_1_t2787 *, Object_t*, const MethodInfo*))List_1_AddRange_m60848_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8431 * List_1_AsReadOnly_m60849_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60849(__this, method) (( ReadOnlyCollection_1_t8431 * (*) (List_1_t2787 *, const MethodInfo*))List_1_AsReadOnly_m60849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m60850_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_Clear_m60850(__this, method) (( void (*) (List_1_t2787 *, const MethodInfo*))List_1_Clear_m60850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m60851_gshared (List_1_t2787 * __this, UICharInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Contains_m60851(__this, ___item, method) (( bool (*) (List_1_t2787 *, UICharInfo_t1076 , const MethodInfo*))List_1_Contains_m60851_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60852_gshared (List_1_t2787 * __this, UICharInfoU5BU5D_t2907* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60852(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2787 *, UICharInfoU5BU5D_t2907*, int32_t, const MethodInfo*))List_1_CopyTo_m60852_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1076  List_1_Find_m60853_gshared (List_1_t2787 * __this, Predicate_1_t8435 * ___match, const MethodInfo* method);
#define List_1_Find_m60853(__this, ___match, method) (( UICharInfo_t1076  (*) (List_1_t2787 *, Predicate_1_t8435 *, const MethodInfo*))List_1_Find_m60853_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60854_gshared (Object_t * __this /* static, unused */, Predicate_1_t8435 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60854(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8435 *, const MethodInfo*))List_1_CheckMatch_m60854_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60855_gshared (List_1_t2787 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8435 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60855(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2787 *, int32_t, int32_t, Predicate_1_t8435 *, const MethodInfo*))List_1_GetIndex_m60855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t8430  List_1_GetEnumerator_m60856_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60856(__this, method) (( Enumerator_t8430  (*) (List_1_t2787 *, const MethodInfo*))List_1_GetEnumerator_m60856_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2787 * List_1_GetRange_m60857_gshared (List_1_t2787 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60857(__this, ___index, ___count, method) (( List_1_t2787 * (*) (List_1_t2787 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60857_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60858_gshared (List_1_t2787 * __this, UICharInfo_t1076  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60858(__this, ___item, method) (( int32_t (*) (List_1_t2787 *, UICharInfo_t1076 , const MethodInfo*))List_1_IndexOf_m60858_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60859_gshared (List_1_t2787 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60859(__this, ___start, ___delta, method) (( void (*) (List_1_t2787 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60859_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60860_gshared (List_1_t2787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60860(__this, ___index, method) (( void (*) (List_1_t2787 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60861_gshared (List_1_t2787 * __this, int32_t ___index, UICharInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Insert_m60861(__this, ___index, ___item, method) (( void (*) (List_1_t2787 *, int32_t, UICharInfo_t1076 , const MethodInfo*))List_1_Insert_m60861_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60862_gshared (List_1_t2787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60862(__this, ___collection, method) (( void (*) (List_1_t2787 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60862_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60863_gshared (List_1_t2787 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60863(__this, ___index, ___collection, method) (( void (*) (List_1_t2787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60863_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60864_gshared (List_1_t2787 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60864(__this, ___index, ___collection, method) (( void (*) (List_1_t2787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60864_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60865_gshared (List_1_t2787 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60865(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60865_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m60866_gshared (List_1_t2787 * __this, UICharInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Remove_m60866(__this, ___item, method) (( bool (*) (List_1_t2787 *, UICharInfo_t1076 , const MethodInfo*))List_1_Remove_m60866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60867_gshared (List_1_t2787 * __this, Predicate_1_t8435 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60867(__this, ___match, method) (( int32_t (*) (List_1_t2787 *, Predicate_1_t8435 *, const MethodInfo*))List_1_RemoveAll_m60867_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60868_gshared (List_1_t2787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60868(__this, ___index, method) (( void (*) (List_1_t2787 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60868_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60869_gshared (List_1_t2787 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60869(__this, ___index, ___count, method) (( void (*) (List_1_t2787 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60869_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m60870_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_Reverse_m60870(__this, method) (( void (*) (List_1_t2787 *, const MethodInfo*))List_1_Reverse_m60870_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m60871_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_Sort_m60871(__this, method) (( void (*) (List_1_t2787 *, const MethodInfo*))List_1_Sort_m60871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60872_gshared (List_1_t2787 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60872(__this, ___comparer, method) (( void (*) (List_1_t2787 *, Object_t*, const MethodInfo*))List_1_Sort_m60872_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60873_gshared (List_1_t2787 * __this, Comparison_1_t8438 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60873(__this, ___comparison, method) (( void (*) (List_1_t2787 *, Comparison_1_t8438 *, const MethodInfo*))List_1_Sort_m60873_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2907* List_1_ToArray_m60874_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_ToArray_m60874(__this, method) (( UICharInfoU5BU5D_t2907* (*) (List_1_t2787 *, const MethodInfo*))List_1_ToArray_m60874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60875_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60875(__this, method) (( void (*) (List_1_t2787 *, const MethodInfo*))List_1_TrimExcess_m60875_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60876_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60876(__this, method) (( int32_t (*) (List_1_t2787 *, const MethodInfo*))List_1_get_Capacity_m60876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60877_gshared (List_1_t2787 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60877(__this, ___value, method) (( void (*) (List_1_t2787 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60877_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60878_gshared (List_1_t2787 * __this, const MethodInfo* method);
#define List_1_get_Count_m60878(__this, method) (( int32_t (*) (List_1_t2787 *, const MethodInfo*))List_1_get_Count_m60878_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1076  List_1_get_Item_m60879_gshared (List_1_t2787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60879(__this, ___index, method) (( UICharInfo_t1076  (*) (List_1_t2787 *, int32_t, const MethodInfo*))List_1_get_Item_m60879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60880_gshared (List_1_t2787 * __this, int32_t ___index, UICharInfo_t1076  ___value, const MethodInfo* method);
#define List_1_set_Item_m60880(__this, ___index, ___value, method) (( void (*) (List_1_t2787 *, int32_t, UICharInfo_t1076 , const MethodInfo*))List_1_set_Item_m60880_gshared)(__this, ___index, ___value, method)
