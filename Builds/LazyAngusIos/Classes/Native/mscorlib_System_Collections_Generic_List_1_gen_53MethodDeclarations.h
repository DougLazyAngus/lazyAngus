#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2790;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t9611;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2910;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t9612;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1080;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t8436;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8440;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t9613;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t8443;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_101.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m60887_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1__ctor_m60887(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1__ctor_m60887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60888_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60888(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1__ctor_m60888_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10120_gshared (List_1_t2790 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10120(__this, ___capacity, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1__ctor_m10120_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60889_gshared (List_1_t2790 * __this, UILineInfoU5BU5D_t2910* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60889(__this, ___data, ___size, method) (( void (*) (List_1_t2790 *, UILineInfoU5BU5D_t2910*, int32_t, const MethodInfo*))List_1__ctor_m60889_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m60890_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60890(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60890_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60891_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60891(__this, method) (( Object_t* (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60892_gshared (List_1_t2790 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60892(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2790 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60892_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60893_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60893(__this, method) (( Object_t * (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60893_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60894_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60894(__this, ___item, method) (( int32_t (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60894_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60895_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60895(__this, ___item, method) (( bool (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60895_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60896_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60896(__this, ___item, method) (( int32_t (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60896_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60897_gshared (List_1_t2790 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60897(__this, ___index, ___item, method) (( void (*) (List_1_t2790 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60897_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60898_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60898(__this, ___item, method) (( void (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60898_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60899_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60899(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60900_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60900(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60900_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60901_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60901(__this, method) (( Object_t * (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60901_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60902_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60902(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60903_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60903(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60903_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60904_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60904(__this, ___index, method) (( Object_t * (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60904_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60905_gshared (List_1_t2790 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60905(__this, ___index, ___value, method) (( void (*) (List_1_t2790 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60905_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m60906_gshared (List_1_t2790 * __this, UILineInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Add_m60906(__this, ___item, method) (( void (*) (List_1_t2790 *, UILineInfo_t1076 , const MethodInfo*))List_1_Add_m60906_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60907_gshared (List_1_t2790 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60907(__this, ___newCount, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60907_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60908_gshared (List_1_t2790 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60908(__this, ___idx, ___count, method) (( void (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60908_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60909_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60909(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60909_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60910_gshared (List_1_t2790 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60910(__this, ___enumerable, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60910_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60911_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60911(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_AddRange_m60911_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8436 * List_1_AsReadOnly_m60912_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60912(__this, method) (( ReadOnlyCollection_1_t8436 * (*) (List_1_t2790 *, const MethodInfo*))List_1_AsReadOnly_m60912_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m60913_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_Clear_m60913(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_Clear_m60913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m60914_gshared (List_1_t2790 * __this, UILineInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Contains_m60914(__this, ___item, method) (( bool (*) (List_1_t2790 *, UILineInfo_t1076 , const MethodInfo*))List_1_Contains_m60914_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60915_gshared (List_1_t2790 * __this, UILineInfoU5BU5D_t2910* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60915(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2790 *, UILineInfoU5BU5D_t2910*, int32_t, const MethodInfo*))List_1_CopyTo_m60915_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1076  List_1_Find_m60916_gshared (List_1_t2790 * __this, Predicate_1_t8440 * ___match, const MethodInfo* method);
#define List_1_Find_m60916(__this, ___match, method) (( UILineInfo_t1076  (*) (List_1_t2790 *, Predicate_1_t8440 *, const MethodInfo*))List_1_Find_m60916_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60917_gshared (Object_t * __this /* static, unused */, Predicate_1_t8440 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60917(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8440 *, const MethodInfo*))List_1_CheckMatch_m60917_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60918_gshared (List_1_t2790 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8440 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60918(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2790 *, int32_t, int32_t, Predicate_1_t8440 *, const MethodInfo*))List_1_GetIndex_m60918_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t8435  List_1_GetEnumerator_m60919_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60919(__this, method) (( Enumerator_t8435  (*) (List_1_t2790 *, const MethodInfo*))List_1_GetEnumerator_m60919_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2790 * List_1_GetRange_m60920_gshared (List_1_t2790 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60920(__this, ___index, ___count, method) (( List_1_t2790 * (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60920_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60921_gshared (List_1_t2790 * __this, UILineInfo_t1076  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60921(__this, ___item, method) (( int32_t (*) (List_1_t2790 *, UILineInfo_t1076 , const MethodInfo*))List_1_IndexOf_m60921_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60922_gshared (List_1_t2790 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60922(__this, ___start, ___delta, method) (( void (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60922_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60923_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60923(__this, ___index, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60923_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60924_gshared (List_1_t2790 * __this, int32_t ___index, UILineInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Insert_m60924(__this, ___index, ___item, method) (( void (*) (List_1_t2790 *, int32_t, UILineInfo_t1076 , const MethodInfo*))List_1_Insert_m60924_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60925_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60925(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60925_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60926_gshared (List_1_t2790 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60926(__this, ___index, ___collection, method) (( void (*) (List_1_t2790 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60926_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60927_gshared (List_1_t2790 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60927(__this, ___index, ___collection, method) (( void (*) (List_1_t2790 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60927_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60928_gshared (List_1_t2790 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60928(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2790 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60928_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m60929_gshared (List_1_t2790 * __this, UILineInfo_t1076  ___item, const MethodInfo* method);
#define List_1_Remove_m60929(__this, ___item, method) (( bool (*) (List_1_t2790 *, UILineInfo_t1076 , const MethodInfo*))List_1_Remove_m60929_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60930_gshared (List_1_t2790 * __this, Predicate_1_t8440 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60930(__this, ___match, method) (( int32_t (*) (List_1_t2790 *, Predicate_1_t8440 *, const MethodInfo*))List_1_RemoveAll_m60930_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60931_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60931(__this, ___index, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60931_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60932_gshared (List_1_t2790 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60932(__this, ___index, ___count, method) (( void (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60932_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m60933_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_Reverse_m60933(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_Reverse_m60933_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m60934_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_Sort_m60934(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_Sort_m60934_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60935_gshared (List_1_t2790 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60935(__this, ___comparer, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_Sort_m60935_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60936_gshared (List_1_t2790 * __this, Comparison_1_t8443 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60936(__this, ___comparison, method) (( void (*) (List_1_t2790 *, Comparison_1_t8443 *, const MethodInfo*))List_1_Sort_m60936_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2910* List_1_ToArray_m60937_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_ToArray_m60937(__this, method) (( UILineInfoU5BU5D_t2910* (*) (List_1_t2790 *, const MethodInfo*))List_1_ToArray_m60937_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60938_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60938(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_TrimExcess_m60938_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60939_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60939(__this, method) (( int32_t (*) (List_1_t2790 *, const MethodInfo*))List_1_get_Capacity_m60939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60940_gshared (List_1_t2790 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60940(__this, ___value, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60940_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60941_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_get_Count_m60941(__this, method) (( int32_t (*) (List_1_t2790 *, const MethodInfo*))List_1_get_Count_m60941_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1076  List_1_get_Item_m60942_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60942(__this, ___index, method) (( UILineInfo_t1076  (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_get_Item_m60942_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60943_gshared (List_1_t2790 * __this, int32_t ___index, UILineInfo_t1076  ___value, const MethodInfo* method);
#define List_1_set_Item_m60943(__this, ___index, ___value, method) (( void (*) (List_1_t2790 *, int32_t, UILineInfo_t1076 , const MethodInfo*))List_1_set_Item_m60943_gshared)(__this, ___index, ___value, method)
