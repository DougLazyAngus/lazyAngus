#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2731;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t9507;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2851;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t9508;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t9509;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t8346;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8350;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t9510;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t8353;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_97.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m59988_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1__ctor_m59988(__this, method) (( void (*) (List_1_t2731 *, const MethodInfo*))List_1__ctor_m59988_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m59989_gshared (List_1_t2731 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m59989(__this, ___collection, method) (( void (*) (List_1_t2731 *, Object_t*, const MethodInfo*))List_1__ctor_m59989_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9798_gshared (List_1_t2731 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9798(__this, ___capacity, method) (( void (*) (List_1_t2731 *, int32_t, const MethodInfo*))List_1__ctor_m9798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m59990_gshared (List_1_t2731 * __this, UICharInfoU5BU5D_t2851* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m59990(__this, ___data, ___size, method) (( void (*) (List_1_t2731 *, UICharInfoU5BU5D_t2851*, int32_t, const MethodInfo*))List_1__ctor_m59990_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m59991_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m59991(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m59991_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59992_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59992(__this, method) (( Object_t* (*) (List_1_t2731 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59992_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m59993_gshared (List_1_t2731 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m59993(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2731 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m59993_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m59994_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59994(__this, method) (( Object_t * (*) (List_1_t2731 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m59994_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m59995_gshared (List_1_t2731 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m59995(__this, ___item, method) (( int32_t (*) (List_1_t2731 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m59995_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m59996_gshared (List_1_t2731 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m59996(__this, ___item, method) (( bool (*) (List_1_t2731 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m59996_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m59997_gshared (List_1_t2731 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m59997(__this, ___item, method) (( int32_t (*) (List_1_t2731 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m59997_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m59998_gshared (List_1_t2731 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m59998(__this, ___index, ___item, method) (( void (*) (List_1_t2731 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m59998_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m59999_gshared (List_1_t2731 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m59999(__this, ___item, method) (( void (*) (List_1_t2731 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m59999_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60000_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60000(__this, method) (( bool (*) (List_1_t2731 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60001_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60001(__this, method) (( bool (*) (List_1_t2731 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60001_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60002_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60002(__this, method) (( Object_t * (*) (List_1_t2731 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60002_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60003_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60003(__this, method) (( bool (*) (List_1_t2731 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60003_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60004_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60004(__this, method) (( bool (*) (List_1_t2731 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60004_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60005_gshared (List_1_t2731 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60005(__this, ___index, method) (( Object_t * (*) (List_1_t2731 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60005_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60006_gshared (List_1_t2731 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60006(__this, ___index, ___value, method) (( void (*) (List_1_t2731 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60006_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m60007_gshared (List_1_t2731 * __this, UICharInfo_t1011  ___item, const MethodInfo* method);
#define List_1_Add_m60007(__this, ___item, method) (( void (*) (List_1_t2731 *, UICharInfo_t1011 , const MethodInfo*))List_1_Add_m60007_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60008_gshared (List_1_t2731 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60008(__this, ___newCount, method) (( void (*) (List_1_t2731 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60008_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60009_gshared (List_1_t2731 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60009(__this, ___idx, ___count, method) (( void (*) (List_1_t2731 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60009_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60010_gshared (List_1_t2731 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60010(__this, ___collection, method) (( void (*) (List_1_t2731 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60010_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60011_gshared (List_1_t2731 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60011(__this, ___enumerable, method) (( void (*) (List_1_t2731 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60011_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60012_gshared (List_1_t2731 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60012(__this, ___collection, method) (( void (*) (List_1_t2731 *, Object_t*, const MethodInfo*))List_1_AddRange_m60012_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8346 * List_1_AsReadOnly_m60013_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60013(__this, method) (( ReadOnlyCollection_1_t8346 * (*) (List_1_t2731 *, const MethodInfo*))List_1_AsReadOnly_m60013_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m60014_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_Clear_m60014(__this, method) (( void (*) (List_1_t2731 *, const MethodInfo*))List_1_Clear_m60014_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m60015_gshared (List_1_t2731 * __this, UICharInfo_t1011  ___item, const MethodInfo* method);
#define List_1_Contains_m60015(__this, ___item, method) (( bool (*) (List_1_t2731 *, UICharInfo_t1011 , const MethodInfo*))List_1_Contains_m60015_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60016_gshared (List_1_t2731 * __this, UICharInfoU5BU5D_t2851* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60016(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2731 *, UICharInfoU5BU5D_t2851*, int32_t, const MethodInfo*))List_1_CopyTo_m60016_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1011  List_1_Find_m60017_gshared (List_1_t2731 * __this, Predicate_1_t8350 * ___match, const MethodInfo* method);
#define List_1_Find_m60017(__this, ___match, method) (( UICharInfo_t1011  (*) (List_1_t2731 *, Predicate_1_t8350 *, const MethodInfo*))List_1_Find_m60017_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60018_gshared (Object_t * __this /* static, unused */, Predicate_1_t8350 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60018(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8350 *, const MethodInfo*))List_1_CheckMatch_m60018_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60019_gshared (List_1_t2731 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8350 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60019(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2731 *, int32_t, int32_t, Predicate_1_t8350 *, const MethodInfo*))List_1_GetIndex_m60019_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t8345  List_1_GetEnumerator_m60020_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60020(__this, method) (( Enumerator_t8345  (*) (List_1_t2731 *, const MethodInfo*))List_1_GetEnumerator_m60020_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2731 * List_1_GetRange_m60021_gshared (List_1_t2731 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60021(__this, ___index, ___count, method) (( List_1_t2731 * (*) (List_1_t2731 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60021_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60022_gshared (List_1_t2731 * __this, UICharInfo_t1011  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60022(__this, ___item, method) (( int32_t (*) (List_1_t2731 *, UICharInfo_t1011 , const MethodInfo*))List_1_IndexOf_m60022_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60023_gshared (List_1_t2731 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60023(__this, ___start, ___delta, method) (( void (*) (List_1_t2731 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60024_gshared (List_1_t2731 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60024(__this, ___index, method) (( void (*) (List_1_t2731 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60024_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60025_gshared (List_1_t2731 * __this, int32_t ___index, UICharInfo_t1011  ___item, const MethodInfo* method);
#define List_1_Insert_m60025(__this, ___index, ___item, method) (( void (*) (List_1_t2731 *, int32_t, UICharInfo_t1011 , const MethodInfo*))List_1_Insert_m60025_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60026_gshared (List_1_t2731 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60026(__this, ___collection, method) (( void (*) (List_1_t2731 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60026_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60027_gshared (List_1_t2731 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60027(__this, ___index, ___collection, method) (( void (*) (List_1_t2731 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60027_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60028_gshared (List_1_t2731 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60028(__this, ___index, ___collection, method) (( void (*) (List_1_t2731 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60028_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60029_gshared (List_1_t2731 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60029(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2731 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60029_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m60030_gshared (List_1_t2731 * __this, UICharInfo_t1011  ___item, const MethodInfo* method);
#define List_1_Remove_m60030(__this, ___item, method) (( bool (*) (List_1_t2731 *, UICharInfo_t1011 , const MethodInfo*))List_1_Remove_m60030_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60031_gshared (List_1_t2731 * __this, Predicate_1_t8350 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60031(__this, ___match, method) (( int32_t (*) (List_1_t2731 *, Predicate_1_t8350 *, const MethodInfo*))List_1_RemoveAll_m60031_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60032_gshared (List_1_t2731 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60032(__this, ___index, method) (( void (*) (List_1_t2731 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60032_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60033_gshared (List_1_t2731 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60033(__this, ___index, ___count, method) (( void (*) (List_1_t2731 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60033_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m60034_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_Reverse_m60034(__this, method) (( void (*) (List_1_t2731 *, const MethodInfo*))List_1_Reverse_m60034_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m60035_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_Sort_m60035(__this, method) (( void (*) (List_1_t2731 *, const MethodInfo*))List_1_Sort_m60035_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60036_gshared (List_1_t2731 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60036(__this, ___comparer, method) (( void (*) (List_1_t2731 *, Object_t*, const MethodInfo*))List_1_Sort_m60036_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60037_gshared (List_1_t2731 * __this, Comparison_1_t8353 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60037(__this, ___comparison, method) (( void (*) (List_1_t2731 *, Comparison_1_t8353 *, const MethodInfo*))List_1_Sort_m60037_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2851* List_1_ToArray_m60038_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_ToArray_m60038(__this, method) (( UICharInfoU5BU5D_t2851* (*) (List_1_t2731 *, const MethodInfo*))List_1_ToArray_m60038_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60039_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60039(__this, method) (( void (*) (List_1_t2731 *, const MethodInfo*))List_1_TrimExcess_m60039_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60040_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60040(__this, method) (( int32_t (*) (List_1_t2731 *, const MethodInfo*))List_1_get_Capacity_m60040_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60041_gshared (List_1_t2731 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60041(__this, ___value, method) (( void (*) (List_1_t2731 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60041_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60042_gshared (List_1_t2731 * __this, const MethodInfo* method);
#define List_1_get_Count_m60042(__this, method) (( int32_t (*) (List_1_t2731 *, const MethodInfo*))List_1_get_Count_m60042_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1011  List_1_get_Item_m60043_gshared (List_1_t2731 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60043(__this, ___index, method) (( UICharInfo_t1011  (*) (List_1_t2731 *, int32_t, const MethodInfo*))List_1_get_Item_m60043_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60044_gshared (List_1_t2731 * __this, int32_t ___index, UICharInfo_t1011  ___value, const MethodInfo* method);
#define List_1_set_Item_m60044(__this, ___index, ___value, method) (( void (*) (List_1_t2731 *, int32_t, UICharInfo_t1011 , const MethodInfo*))List_1_set_Item_m60044_gshared)(__this, ___index, ___value, method)
