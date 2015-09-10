#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2818;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t10259;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2938;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t10260;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1108;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t9020;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t9024;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t10261;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t9027;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_105.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m65687_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1__ctor_m65687(__this, method) (( void (*) (List_1_t2818 *, const MethodInfo*))List_1__ctor_m65687_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m65688_gshared (List_1_t2818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m65688(__this, ___collection, method) (( void (*) (List_1_t2818 *, Object_t*, const MethodInfo*))List_1__ctor_m65688_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10345_gshared (List_1_t2818 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10345(__this, ___capacity, method) (( void (*) (List_1_t2818 *, int32_t, const MethodInfo*))List_1__ctor_m10345_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m65689_gshared (List_1_t2818 * __this, UILineInfoU5BU5D_t2938* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m65689(__this, ___data, ___size, method) (( void (*) (List_1_t2818 *, UILineInfoU5BU5D_t2938*, int32_t, const MethodInfo*))List_1__ctor_m65689_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m65690_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m65690(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m65690_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65691_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65691(__this, method) (( Object_t* (*) (List_1_t2818 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m65692_gshared (List_1_t2818 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m65692(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2818 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m65692_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m65693_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m65693(__this, method) (( Object_t * (*) (List_1_t2818 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m65693_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m65694_gshared (List_1_t2818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m65694(__this, ___item, method) (( int32_t (*) (List_1_t2818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m65694_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m65695_gshared (List_1_t2818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m65695(__this, ___item, method) (( bool (*) (List_1_t2818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m65695_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m65696_gshared (List_1_t2818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m65696(__this, ___item, method) (( int32_t (*) (List_1_t2818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m65696_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m65697_gshared (List_1_t2818 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m65697(__this, ___index, ___item, method) (( void (*) (List_1_t2818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m65697_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m65698_gshared (List_1_t2818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m65698(__this, ___item, method) (( void (*) (List_1_t2818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m65698_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65699_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65699(__this, method) (( bool (*) (List_1_t2818 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65699_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m65700_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m65700(__this, method) (( bool (*) (List_1_t2818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m65700_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m65701_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m65701(__this, method) (( Object_t * (*) (List_1_t2818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m65701_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m65702_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m65702(__this, method) (( bool (*) (List_1_t2818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m65702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m65703_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m65703(__this, method) (( bool (*) (List_1_t2818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m65703_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m65704_gshared (List_1_t2818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m65704(__this, ___index, method) (( Object_t * (*) (List_1_t2818 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m65704_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m65705_gshared (List_1_t2818 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m65705(__this, ___index, ___value, method) (( void (*) (List_1_t2818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m65705_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m65706_gshared (List_1_t2818 * __this, UILineInfo_t1104  ___item, const MethodInfo* method);
#define List_1_Add_m65706(__this, ___item, method) (( void (*) (List_1_t2818 *, UILineInfo_t1104 , const MethodInfo*))List_1_Add_m65706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m65707_gshared (List_1_t2818 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m65707(__this, ___newCount, method) (( void (*) (List_1_t2818 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m65707_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m65708_gshared (List_1_t2818 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m65708(__this, ___idx, ___count, method) (( void (*) (List_1_t2818 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m65708_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m65709_gshared (List_1_t2818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m65709(__this, ___collection, method) (( void (*) (List_1_t2818 *, Object_t*, const MethodInfo*))List_1_AddCollection_m65709_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m65710_gshared (List_1_t2818 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m65710(__this, ___enumerable, method) (( void (*) (List_1_t2818 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m65710_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m65711_gshared (List_1_t2818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m65711(__this, ___collection, method) (( void (*) (List_1_t2818 *, Object_t*, const MethodInfo*))List_1_AddRange_m65711_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9020 * List_1_AsReadOnly_m65712_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m65712(__this, method) (( ReadOnlyCollection_1_t9020 * (*) (List_1_t2818 *, const MethodInfo*))List_1_AsReadOnly_m65712_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m65713_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_Clear_m65713(__this, method) (( void (*) (List_1_t2818 *, const MethodInfo*))List_1_Clear_m65713_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m65714_gshared (List_1_t2818 * __this, UILineInfo_t1104  ___item, const MethodInfo* method);
#define List_1_Contains_m65714(__this, ___item, method) (( bool (*) (List_1_t2818 *, UILineInfo_t1104 , const MethodInfo*))List_1_Contains_m65714_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m65715_gshared (List_1_t2818 * __this, UILineInfoU5BU5D_t2938* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m65715(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2818 *, UILineInfoU5BU5D_t2938*, int32_t, const MethodInfo*))List_1_CopyTo_m65715_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1104  List_1_Find_m65716_gshared (List_1_t2818 * __this, Predicate_1_t9024 * ___match, const MethodInfo* method);
#define List_1_Find_m65716(__this, ___match, method) (( UILineInfo_t1104  (*) (List_1_t2818 *, Predicate_1_t9024 *, const MethodInfo*))List_1_Find_m65716_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m65717_gshared (Object_t * __this /* static, unused */, Predicate_1_t9024 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m65717(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9024 *, const MethodInfo*))List_1_CheckMatch_m65717_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m65718_gshared (List_1_t2818 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9024 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m65718(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2818 *, int32_t, int32_t, Predicate_1_t9024 *, const MethodInfo*))List_1_GetIndex_m65718_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t9019  List_1_GetEnumerator_m65719_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m65719(__this, method) (( Enumerator_t9019  (*) (List_1_t2818 *, const MethodInfo*))List_1_GetEnumerator_m65719_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2818 * List_1_GetRange_m65720_gshared (List_1_t2818 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m65720(__this, ___index, ___count, method) (( List_1_t2818 * (*) (List_1_t2818 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m65720_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m65721_gshared (List_1_t2818 * __this, UILineInfo_t1104  ___item, const MethodInfo* method);
#define List_1_IndexOf_m65721(__this, ___item, method) (( int32_t (*) (List_1_t2818 *, UILineInfo_t1104 , const MethodInfo*))List_1_IndexOf_m65721_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m65722_gshared (List_1_t2818 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m65722(__this, ___start, ___delta, method) (( void (*) (List_1_t2818 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m65722_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m65723_gshared (List_1_t2818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m65723(__this, ___index, method) (( void (*) (List_1_t2818 *, int32_t, const MethodInfo*))List_1_CheckIndex_m65723_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m65724_gshared (List_1_t2818 * __this, int32_t ___index, UILineInfo_t1104  ___item, const MethodInfo* method);
#define List_1_Insert_m65724(__this, ___index, ___item, method) (( void (*) (List_1_t2818 *, int32_t, UILineInfo_t1104 , const MethodInfo*))List_1_Insert_m65724_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m65725_gshared (List_1_t2818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m65725(__this, ___collection, method) (( void (*) (List_1_t2818 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m65725_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m65726_gshared (List_1_t2818 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m65726(__this, ___index, ___collection, method) (( void (*) (List_1_t2818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m65726_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m65727_gshared (List_1_t2818 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m65727(__this, ___index, ___collection, method) (( void (*) (List_1_t2818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m65727_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m65728_gshared (List_1_t2818 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m65728(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m65728_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m65729_gshared (List_1_t2818 * __this, UILineInfo_t1104  ___item, const MethodInfo* method);
#define List_1_Remove_m65729(__this, ___item, method) (( bool (*) (List_1_t2818 *, UILineInfo_t1104 , const MethodInfo*))List_1_Remove_m65729_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m65730_gshared (List_1_t2818 * __this, Predicate_1_t9024 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m65730(__this, ___match, method) (( int32_t (*) (List_1_t2818 *, Predicate_1_t9024 *, const MethodInfo*))List_1_RemoveAll_m65730_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m65731_gshared (List_1_t2818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m65731(__this, ___index, method) (( void (*) (List_1_t2818 *, int32_t, const MethodInfo*))List_1_RemoveAt_m65731_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m65732_gshared (List_1_t2818 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m65732(__this, ___index, ___count, method) (( void (*) (List_1_t2818 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m65732_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m65733_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_Reverse_m65733(__this, method) (( void (*) (List_1_t2818 *, const MethodInfo*))List_1_Reverse_m65733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m65734_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_Sort_m65734(__this, method) (( void (*) (List_1_t2818 *, const MethodInfo*))List_1_Sort_m65734_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m65735_gshared (List_1_t2818 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m65735(__this, ___comparer, method) (( void (*) (List_1_t2818 *, Object_t*, const MethodInfo*))List_1_Sort_m65735_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m65736_gshared (List_1_t2818 * __this, Comparison_1_t9027 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m65736(__this, ___comparison, method) (( void (*) (List_1_t2818 *, Comparison_1_t9027 *, const MethodInfo*))List_1_Sort_m65736_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2938* List_1_ToArray_m65737_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_ToArray_m65737(__this, method) (( UILineInfoU5BU5D_t2938* (*) (List_1_t2818 *, const MethodInfo*))List_1_ToArray_m65737_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m65738_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m65738(__this, method) (( void (*) (List_1_t2818 *, const MethodInfo*))List_1_TrimExcess_m65738_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m65739_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m65739(__this, method) (( int32_t (*) (List_1_t2818 *, const MethodInfo*))List_1_get_Capacity_m65739_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m65740_gshared (List_1_t2818 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m65740(__this, ___value, method) (( void (*) (List_1_t2818 *, int32_t, const MethodInfo*))List_1_set_Capacity_m65740_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m65741_gshared (List_1_t2818 * __this, const MethodInfo* method);
#define List_1_get_Count_m65741(__this, method) (( int32_t (*) (List_1_t2818 *, const MethodInfo*))List_1_get_Count_m65741_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1104  List_1_get_Item_m65742_gshared (List_1_t2818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m65742(__this, ___index, method) (( UILineInfo_t1104  (*) (List_1_t2818 *, int32_t, const MethodInfo*))List_1_get_Item_m65742_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m65743_gshared (List_1_t2818 * __this, int32_t ___index, UILineInfo_t1104  ___value, const MethodInfo* method);
#define List_1_set_Item_m65743(__this, ___index, ___value, method) (( void (*) (List_1_t2818 *, int32_t, UILineInfo_t1104 , const MethodInfo*))List_1_set_Item_m65743_gshared)(__this, ___index, ___value, method)
