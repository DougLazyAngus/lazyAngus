#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2737;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t9514;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2857;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t9515;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t9516;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t8353;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8357;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t9517;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t8360;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_97.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m60035_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1__ctor_m60035(__this, method) (( void (*) (List_1_t2737 *, const MethodInfo*))List_1__ctor_m60035_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60036_gshared (List_1_t2737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60036(__this, ___collection, method) (( void (*) (List_1_t2737 *, Object_t*, const MethodInfo*))List_1__ctor_m60036_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9844_gshared (List_1_t2737 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9844(__this, ___capacity, method) (( void (*) (List_1_t2737 *, int32_t, const MethodInfo*))List_1__ctor_m9844_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60037_gshared (List_1_t2737 * __this, UICharInfoU5BU5D_t2857* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60037(__this, ___data, ___size, method) (( void (*) (List_1_t2737 *, UICharInfoU5BU5D_t2857*, int32_t, const MethodInfo*))List_1__ctor_m60037_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m60038_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60038(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60038_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60039_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60039(__this, method) (( Object_t* (*) (List_1_t2737 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60040_gshared (List_1_t2737 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60040(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2737 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60040_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60041_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60041(__this, method) (( Object_t * (*) (List_1_t2737 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60041_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60042_gshared (List_1_t2737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60042(__this, ___item, method) (( int32_t (*) (List_1_t2737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60042_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60043_gshared (List_1_t2737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60043(__this, ___item, method) (( bool (*) (List_1_t2737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60043_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60044_gshared (List_1_t2737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60044(__this, ___item, method) (( int32_t (*) (List_1_t2737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60044_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60045_gshared (List_1_t2737 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60045(__this, ___index, ___item, method) (( void (*) (List_1_t2737 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60045_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60046_gshared (List_1_t2737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60046(__this, ___item, method) (( void (*) (List_1_t2737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60046_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60047_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60047(__this, method) (( bool (*) (List_1_t2737 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60047_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60048_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60048(__this, method) (( bool (*) (List_1_t2737 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60048_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60049_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60049(__this, method) (( Object_t * (*) (List_1_t2737 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60049_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60050_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60050(__this, method) (( bool (*) (List_1_t2737 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60050_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60051_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60051(__this, method) (( bool (*) (List_1_t2737 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60051_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60052_gshared (List_1_t2737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60052(__this, ___index, method) (( Object_t * (*) (List_1_t2737 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60052_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60053_gshared (List_1_t2737 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60053(__this, ___index, ___value, method) (( void (*) (List_1_t2737 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60053_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m60054_gshared (List_1_t2737 * __this, UICharInfo_t1017  ___item, const MethodInfo* method);
#define List_1_Add_m60054(__this, ___item, method) (( void (*) (List_1_t2737 *, UICharInfo_t1017 , const MethodInfo*))List_1_Add_m60054_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60055_gshared (List_1_t2737 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60055(__this, ___newCount, method) (( void (*) (List_1_t2737 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60055_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60056_gshared (List_1_t2737 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60056(__this, ___idx, ___count, method) (( void (*) (List_1_t2737 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60056_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60057_gshared (List_1_t2737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60057(__this, ___collection, method) (( void (*) (List_1_t2737 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60057_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60058_gshared (List_1_t2737 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60058(__this, ___enumerable, method) (( void (*) (List_1_t2737 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60058_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60059_gshared (List_1_t2737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60059(__this, ___collection, method) (( void (*) (List_1_t2737 *, Object_t*, const MethodInfo*))List_1_AddRange_m60059_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8353 * List_1_AsReadOnly_m60060_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60060(__this, method) (( ReadOnlyCollection_1_t8353 * (*) (List_1_t2737 *, const MethodInfo*))List_1_AsReadOnly_m60060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m60061_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_Clear_m60061(__this, method) (( void (*) (List_1_t2737 *, const MethodInfo*))List_1_Clear_m60061_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m60062_gshared (List_1_t2737 * __this, UICharInfo_t1017  ___item, const MethodInfo* method);
#define List_1_Contains_m60062(__this, ___item, method) (( bool (*) (List_1_t2737 *, UICharInfo_t1017 , const MethodInfo*))List_1_Contains_m60062_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60063_gshared (List_1_t2737 * __this, UICharInfoU5BU5D_t2857* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60063(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2737 *, UICharInfoU5BU5D_t2857*, int32_t, const MethodInfo*))List_1_CopyTo_m60063_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1017  List_1_Find_m60064_gshared (List_1_t2737 * __this, Predicate_1_t8357 * ___match, const MethodInfo* method);
#define List_1_Find_m60064(__this, ___match, method) (( UICharInfo_t1017  (*) (List_1_t2737 *, Predicate_1_t8357 *, const MethodInfo*))List_1_Find_m60064_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60065_gshared (Object_t * __this /* static, unused */, Predicate_1_t8357 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60065(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8357 *, const MethodInfo*))List_1_CheckMatch_m60065_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60066_gshared (List_1_t2737 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8357 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60066(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2737 *, int32_t, int32_t, Predicate_1_t8357 *, const MethodInfo*))List_1_GetIndex_m60066_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t8352  List_1_GetEnumerator_m60067_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60067(__this, method) (( Enumerator_t8352  (*) (List_1_t2737 *, const MethodInfo*))List_1_GetEnumerator_m60067_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2737 * List_1_GetRange_m60068_gshared (List_1_t2737 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60068(__this, ___index, ___count, method) (( List_1_t2737 * (*) (List_1_t2737 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60068_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60069_gshared (List_1_t2737 * __this, UICharInfo_t1017  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60069(__this, ___item, method) (( int32_t (*) (List_1_t2737 *, UICharInfo_t1017 , const MethodInfo*))List_1_IndexOf_m60069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60070_gshared (List_1_t2737 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60070(__this, ___start, ___delta, method) (( void (*) (List_1_t2737 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60070_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60071_gshared (List_1_t2737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60071(__this, ___index, method) (( void (*) (List_1_t2737 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60071_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60072_gshared (List_1_t2737 * __this, int32_t ___index, UICharInfo_t1017  ___item, const MethodInfo* method);
#define List_1_Insert_m60072(__this, ___index, ___item, method) (( void (*) (List_1_t2737 *, int32_t, UICharInfo_t1017 , const MethodInfo*))List_1_Insert_m60072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60073_gshared (List_1_t2737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60073(__this, ___collection, method) (( void (*) (List_1_t2737 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60073_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60074_gshared (List_1_t2737 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60074(__this, ___index, ___collection, method) (( void (*) (List_1_t2737 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60074_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60075_gshared (List_1_t2737 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60075(__this, ___index, ___collection, method) (( void (*) (List_1_t2737 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60075_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60076_gshared (List_1_t2737 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60076(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2737 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60076_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m60077_gshared (List_1_t2737 * __this, UICharInfo_t1017  ___item, const MethodInfo* method);
#define List_1_Remove_m60077(__this, ___item, method) (( bool (*) (List_1_t2737 *, UICharInfo_t1017 , const MethodInfo*))List_1_Remove_m60077_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60078_gshared (List_1_t2737 * __this, Predicate_1_t8357 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60078(__this, ___match, method) (( int32_t (*) (List_1_t2737 *, Predicate_1_t8357 *, const MethodInfo*))List_1_RemoveAll_m60078_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60079_gshared (List_1_t2737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60079(__this, ___index, method) (( void (*) (List_1_t2737 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60079_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60080_gshared (List_1_t2737 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60080(__this, ___index, ___count, method) (( void (*) (List_1_t2737 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60080_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m60081_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_Reverse_m60081(__this, method) (( void (*) (List_1_t2737 *, const MethodInfo*))List_1_Reverse_m60081_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m60082_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_Sort_m60082(__this, method) (( void (*) (List_1_t2737 *, const MethodInfo*))List_1_Sort_m60082_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60083_gshared (List_1_t2737 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60083(__this, ___comparer, method) (( void (*) (List_1_t2737 *, Object_t*, const MethodInfo*))List_1_Sort_m60083_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60084_gshared (List_1_t2737 * __this, Comparison_1_t8360 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60084(__this, ___comparison, method) (( void (*) (List_1_t2737 *, Comparison_1_t8360 *, const MethodInfo*))List_1_Sort_m60084_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2857* List_1_ToArray_m60085_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_ToArray_m60085(__this, method) (( UICharInfoU5BU5D_t2857* (*) (List_1_t2737 *, const MethodInfo*))List_1_ToArray_m60085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60086_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60086(__this, method) (( void (*) (List_1_t2737 *, const MethodInfo*))List_1_TrimExcess_m60086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60087_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60087(__this, method) (( int32_t (*) (List_1_t2737 *, const MethodInfo*))List_1_get_Capacity_m60087_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60088_gshared (List_1_t2737 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60088(__this, ___value, method) (( void (*) (List_1_t2737 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60088_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60089_gshared (List_1_t2737 * __this, const MethodInfo* method);
#define List_1_get_Count_m60089(__this, method) (( int32_t (*) (List_1_t2737 *, const MethodInfo*))List_1_get_Count_m60089_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1017  List_1_get_Item_m60090_gshared (List_1_t2737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60090(__this, ___index, method) (( UICharInfo_t1017  (*) (List_1_t2737 *, int32_t, const MethodInfo*))List_1_get_Item_m60090_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60091_gshared (List_1_t2737 * __this, int32_t ___index, UICharInfo_t1017  ___value, const MethodInfo* method);
#define List_1_set_Item_m60091(__this, ___index, ___value, method) (( void (*) (List_1_t2737 *, int32_t, UICharInfo_t1017 , const MethodInfo*))List_1_set_Item_m60091_gshared)(__this, ___index, ___value, method)
