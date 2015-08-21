#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2788;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t9619;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2908;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t9620;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1078;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t8440;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8444;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t9621;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t8447;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_102.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m60975_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1__ctor_m60975(__this, method) (( void (*) (List_1_t2788 *, const MethodInfo*))List_1__ctor_m60975_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60976_gshared (List_1_t2788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60976(__this, ___collection, method) (( void (*) (List_1_t2788 *, Object_t*, const MethodInfo*))List_1__ctor_m60976_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10110_gshared (List_1_t2788 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10110(__this, ___capacity, method) (( void (*) (List_1_t2788 *, int32_t, const MethodInfo*))List_1__ctor_m10110_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60977_gshared (List_1_t2788 * __this, UILineInfoU5BU5D_t2908* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60977(__this, ___data, ___size, method) (( void (*) (List_1_t2788 *, UILineInfoU5BU5D_t2908*, int32_t, const MethodInfo*))List_1__ctor_m60977_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m60978_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60978(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60978_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60979_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60979(__this, method) (( Object_t* (*) (List_1_t2788 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60979_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60980_gshared (List_1_t2788 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60980(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2788 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60980_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60981_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60981(__this, method) (( Object_t * (*) (List_1_t2788 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60981_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60982_gshared (List_1_t2788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60982(__this, ___item, method) (( int32_t (*) (List_1_t2788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60982_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60983_gshared (List_1_t2788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60983(__this, ___item, method) (( bool (*) (List_1_t2788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60983_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60984_gshared (List_1_t2788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60984(__this, ___item, method) (( int32_t (*) (List_1_t2788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60984_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60985_gshared (List_1_t2788 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60985(__this, ___index, ___item, method) (( void (*) (List_1_t2788 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60985_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60986_gshared (List_1_t2788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60986(__this, ___item, method) (( void (*) (List_1_t2788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60986_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60987_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60987(__this, method) (( bool (*) (List_1_t2788 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60987_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60988_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60988(__this, method) (( bool (*) (List_1_t2788 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60988_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60989_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60989(__this, method) (( Object_t * (*) (List_1_t2788 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60989_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60990_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60990(__this, method) (( bool (*) (List_1_t2788 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60990_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60991_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60991(__this, method) (( bool (*) (List_1_t2788 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60991_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60992_gshared (List_1_t2788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60992(__this, ___index, method) (( Object_t * (*) (List_1_t2788 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60992_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60993_gshared (List_1_t2788 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60993(__this, ___index, ___value, method) (( void (*) (List_1_t2788 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60993_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m60994_gshared (List_1_t2788 * __this, UILineInfo_t1074  ___item, const MethodInfo* method);
#define List_1_Add_m60994(__this, ___item, method) (( void (*) (List_1_t2788 *, UILineInfo_t1074 , const MethodInfo*))List_1_Add_m60994_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60995_gshared (List_1_t2788 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60995(__this, ___newCount, method) (( void (*) (List_1_t2788 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60996_gshared (List_1_t2788 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60996(__this, ___idx, ___count, method) (( void (*) (List_1_t2788 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60996_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60997_gshared (List_1_t2788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60997(__this, ___collection, method) (( void (*) (List_1_t2788 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60997_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60998_gshared (List_1_t2788 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60998(__this, ___enumerable, method) (( void (*) (List_1_t2788 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60998_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60999_gshared (List_1_t2788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60999(__this, ___collection, method) (( void (*) (List_1_t2788 *, Object_t*, const MethodInfo*))List_1_AddRange_m60999_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8440 * List_1_AsReadOnly_m61000_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m61000(__this, method) (( ReadOnlyCollection_1_t8440 * (*) (List_1_t2788 *, const MethodInfo*))List_1_AsReadOnly_m61000_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m61001_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_Clear_m61001(__this, method) (( void (*) (List_1_t2788 *, const MethodInfo*))List_1_Clear_m61001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m61002_gshared (List_1_t2788 * __this, UILineInfo_t1074  ___item, const MethodInfo* method);
#define List_1_Contains_m61002(__this, ___item, method) (( bool (*) (List_1_t2788 *, UILineInfo_t1074 , const MethodInfo*))List_1_Contains_m61002_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m61003_gshared (List_1_t2788 * __this, UILineInfoU5BU5D_t2908* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m61003(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2788 *, UILineInfoU5BU5D_t2908*, int32_t, const MethodInfo*))List_1_CopyTo_m61003_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1074  List_1_Find_m61004_gshared (List_1_t2788 * __this, Predicate_1_t8444 * ___match, const MethodInfo* method);
#define List_1_Find_m61004(__this, ___match, method) (( UILineInfo_t1074  (*) (List_1_t2788 *, Predicate_1_t8444 *, const MethodInfo*))List_1_Find_m61004_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m61005_gshared (Object_t * __this /* static, unused */, Predicate_1_t8444 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m61005(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8444 *, const MethodInfo*))List_1_CheckMatch_m61005_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m61006_gshared (List_1_t2788 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8444 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m61006(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2788 *, int32_t, int32_t, Predicate_1_t8444 *, const MethodInfo*))List_1_GetIndex_m61006_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t8439  List_1_GetEnumerator_m61007_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m61007(__this, method) (( Enumerator_t8439  (*) (List_1_t2788 *, const MethodInfo*))List_1_GetEnumerator_m61007_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2788 * List_1_GetRange_m61008_gshared (List_1_t2788 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m61008(__this, ___index, ___count, method) (( List_1_t2788 * (*) (List_1_t2788 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m61008_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m61009_gshared (List_1_t2788 * __this, UILineInfo_t1074  ___item, const MethodInfo* method);
#define List_1_IndexOf_m61009(__this, ___item, method) (( int32_t (*) (List_1_t2788 *, UILineInfo_t1074 , const MethodInfo*))List_1_IndexOf_m61009_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m61010_gshared (List_1_t2788 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m61010(__this, ___start, ___delta, method) (( void (*) (List_1_t2788 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m61010_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m61011_gshared (List_1_t2788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m61011(__this, ___index, method) (( void (*) (List_1_t2788 *, int32_t, const MethodInfo*))List_1_CheckIndex_m61011_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m61012_gshared (List_1_t2788 * __this, int32_t ___index, UILineInfo_t1074  ___item, const MethodInfo* method);
#define List_1_Insert_m61012(__this, ___index, ___item, method) (( void (*) (List_1_t2788 *, int32_t, UILineInfo_t1074 , const MethodInfo*))List_1_Insert_m61012_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m61013_gshared (List_1_t2788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m61013(__this, ___collection, method) (( void (*) (List_1_t2788 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m61013_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m61014_gshared (List_1_t2788 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m61014(__this, ___index, ___collection, method) (( void (*) (List_1_t2788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m61014_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m61015_gshared (List_1_t2788 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m61015(__this, ___index, ___collection, method) (( void (*) (List_1_t2788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m61015_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m61016_gshared (List_1_t2788 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m61016(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m61016_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m61017_gshared (List_1_t2788 * __this, UILineInfo_t1074  ___item, const MethodInfo* method);
#define List_1_Remove_m61017(__this, ___item, method) (( bool (*) (List_1_t2788 *, UILineInfo_t1074 , const MethodInfo*))List_1_Remove_m61017_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m61018_gshared (List_1_t2788 * __this, Predicate_1_t8444 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m61018(__this, ___match, method) (( int32_t (*) (List_1_t2788 *, Predicate_1_t8444 *, const MethodInfo*))List_1_RemoveAll_m61018_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m61019_gshared (List_1_t2788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m61019(__this, ___index, method) (( void (*) (List_1_t2788 *, int32_t, const MethodInfo*))List_1_RemoveAt_m61019_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m61020_gshared (List_1_t2788 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m61020(__this, ___index, ___count, method) (( void (*) (List_1_t2788 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m61020_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m61021_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_Reverse_m61021(__this, method) (( void (*) (List_1_t2788 *, const MethodInfo*))List_1_Reverse_m61021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m61022_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_Sort_m61022(__this, method) (( void (*) (List_1_t2788 *, const MethodInfo*))List_1_Sort_m61022_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m61023_gshared (List_1_t2788 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m61023(__this, ___comparer, method) (( void (*) (List_1_t2788 *, Object_t*, const MethodInfo*))List_1_Sort_m61023_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m61024_gshared (List_1_t2788 * __this, Comparison_1_t8447 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m61024(__this, ___comparison, method) (( void (*) (List_1_t2788 *, Comparison_1_t8447 *, const MethodInfo*))List_1_Sort_m61024_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2908* List_1_ToArray_m61025_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_ToArray_m61025(__this, method) (( UILineInfoU5BU5D_t2908* (*) (List_1_t2788 *, const MethodInfo*))List_1_ToArray_m61025_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m61026_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m61026(__this, method) (( void (*) (List_1_t2788 *, const MethodInfo*))List_1_TrimExcess_m61026_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m61027_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m61027(__this, method) (( int32_t (*) (List_1_t2788 *, const MethodInfo*))List_1_get_Capacity_m61027_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m61028_gshared (List_1_t2788 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m61028(__this, ___value, method) (( void (*) (List_1_t2788 *, int32_t, const MethodInfo*))List_1_set_Capacity_m61028_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m61029_gshared (List_1_t2788 * __this, const MethodInfo* method);
#define List_1_get_Count_m61029(__this, method) (( int32_t (*) (List_1_t2788 *, const MethodInfo*))List_1_get_Count_m61029_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1074  List_1_get_Item_m61030_gshared (List_1_t2788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m61030(__this, ___index, method) (( UILineInfo_t1074  (*) (List_1_t2788 *, int32_t, const MethodInfo*))List_1_get_Item_m61030_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m61031_gshared (List_1_t2788 * __this, int32_t ___index, UILineInfo_t1074  ___value, const MethodInfo* method);
#define List_1_set_Item_m61031(__this, ___index, ___value, method) (( void (*) (List_1_t2788 *, int32_t, UILineInfo_t1074 , const MethodInfo*))List_1_set_Item_m61031_gshared)(__this, ___index, ___value, method)
