#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2790;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t9618;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2910;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t9619;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t9620;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t8434;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8438;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t9621;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t8441;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_101.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m60856_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1__ctor_m60856(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1__ctor_m60856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60857_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60857(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1__ctor_m60857_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10142_gshared (List_1_t2790 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10142(__this, ___capacity, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1__ctor_m10142_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60858_gshared (List_1_t2790 * __this, UICharInfoU5BU5D_t2910* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60858(__this, ___data, ___size, method) (( void (*) (List_1_t2790 *, UICharInfoU5BU5D_t2910*, int32_t, const MethodInfo*))List_1__ctor_m60858_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m60859_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60859(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60859_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60860_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60860(__this, method) (( Object_t* (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60860_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60861_gshared (List_1_t2790 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60861(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2790 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60861_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60862_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60862(__this, method) (( Object_t * (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60862_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60863_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60863(__this, ___item, method) (( int32_t (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60863_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60864_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60864(__this, ___item, method) (( bool (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60864_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60865_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60865(__this, ___item, method) (( int32_t (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60865_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60866_gshared (List_1_t2790 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60866(__this, ___index, ___item, method) (( void (*) (List_1_t2790 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60866_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60867_gshared (List_1_t2790 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60867(__this, ___item, method) (( void (*) (List_1_t2790 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60867_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60868_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60868(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60868_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60869_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60869(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60869_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60870_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60870(__this, method) (( Object_t * (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60870_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60871_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60871(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60872_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60872(__this, method) (( bool (*) (List_1_t2790 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60872_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60873_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60873(__this, ___index, method) (( Object_t * (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60873_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60874_gshared (List_1_t2790 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60874(__this, ___index, ___value, method) (( void (*) (List_1_t2790 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60874_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m60875_gshared (List_1_t2790 * __this, UICharInfo_t1079  ___item, const MethodInfo* method);
#define List_1_Add_m60875(__this, ___item, method) (( void (*) (List_1_t2790 *, UICharInfo_t1079 , const MethodInfo*))List_1_Add_m60875_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60876_gshared (List_1_t2790 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60876(__this, ___newCount, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60876_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60877_gshared (List_1_t2790 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60877(__this, ___idx, ___count, method) (( void (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60877_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60878_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60878(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60878_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60879_gshared (List_1_t2790 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60879(__this, ___enumerable, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60879_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60880_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60880(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_AddRange_m60880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8434 * List_1_AsReadOnly_m60881_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60881(__this, method) (( ReadOnlyCollection_1_t8434 * (*) (List_1_t2790 *, const MethodInfo*))List_1_AsReadOnly_m60881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m60882_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_Clear_m60882(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_Clear_m60882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m60883_gshared (List_1_t2790 * __this, UICharInfo_t1079  ___item, const MethodInfo* method);
#define List_1_Contains_m60883(__this, ___item, method) (( bool (*) (List_1_t2790 *, UICharInfo_t1079 , const MethodInfo*))List_1_Contains_m60883_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60884_gshared (List_1_t2790 * __this, UICharInfoU5BU5D_t2910* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60884(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2790 *, UICharInfoU5BU5D_t2910*, int32_t, const MethodInfo*))List_1_CopyTo_m60884_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1079  List_1_Find_m60885_gshared (List_1_t2790 * __this, Predicate_1_t8438 * ___match, const MethodInfo* method);
#define List_1_Find_m60885(__this, ___match, method) (( UICharInfo_t1079  (*) (List_1_t2790 *, Predicate_1_t8438 *, const MethodInfo*))List_1_Find_m60885_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60886_gshared (Object_t * __this /* static, unused */, Predicate_1_t8438 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60886(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8438 *, const MethodInfo*))List_1_CheckMatch_m60886_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60887_gshared (List_1_t2790 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8438 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60887(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2790 *, int32_t, int32_t, Predicate_1_t8438 *, const MethodInfo*))List_1_GetIndex_m60887_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t8433  List_1_GetEnumerator_m60888_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60888(__this, method) (( Enumerator_t8433  (*) (List_1_t2790 *, const MethodInfo*))List_1_GetEnumerator_m60888_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2790 * List_1_GetRange_m60889_gshared (List_1_t2790 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60889(__this, ___index, ___count, method) (( List_1_t2790 * (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60889_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60890_gshared (List_1_t2790 * __this, UICharInfo_t1079  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60890(__this, ___item, method) (( int32_t (*) (List_1_t2790 *, UICharInfo_t1079 , const MethodInfo*))List_1_IndexOf_m60890_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60891_gshared (List_1_t2790 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60891(__this, ___start, ___delta, method) (( void (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60891_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60892_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60892(__this, ___index, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60893_gshared (List_1_t2790 * __this, int32_t ___index, UICharInfo_t1079  ___item, const MethodInfo* method);
#define List_1_Insert_m60893(__this, ___index, ___item, method) (( void (*) (List_1_t2790 *, int32_t, UICharInfo_t1079 , const MethodInfo*))List_1_Insert_m60893_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60894_gshared (List_1_t2790 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60894(__this, ___collection, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60895_gshared (List_1_t2790 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60895(__this, ___index, ___collection, method) (( void (*) (List_1_t2790 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60896_gshared (List_1_t2790 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60896(__this, ___index, ___collection, method) (( void (*) (List_1_t2790 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60897_gshared (List_1_t2790 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60897(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2790 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m60898_gshared (List_1_t2790 * __this, UICharInfo_t1079  ___item, const MethodInfo* method);
#define List_1_Remove_m60898(__this, ___item, method) (( bool (*) (List_1_t2790 *, UICharInfo_t1079 , const MethodInfo*))List_1_Remove_m60898_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60899_gshared (List_1_t2790 * __this, Predicate_1_t8438 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60899(__this, ___match, method) (( int32_t (*) (List_1_t2790 *, Predicate_1_t8438 *, const MethodInfo*))List_1_RemoveAll_m60899_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60900_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60900(__this, ___index, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60900_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60901_gshared (List_1_t2790 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60901(__this, ___index, ___count, method) (( void (*) (List_1_t2790 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60901_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m60902_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_Reverse_m60902(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_Reverse_m60902_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m60903_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_Sort_m60903(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_Sort_m60903_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60904_gshared (List_1_t2790 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60904(__this, ___comparer, method) (( void (*) (List_1_t2790 *, Object_t*, const MethodInfo*))List_1_Sort_m60904_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60905_gshared (List_1_t2790 * __this, Comparison_1_t8441 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60905(__this, ___comparison, method) (( void (*) (List_1_t2790 *, Comparison_1_t8441 *, const MethodInfo*))List_1_Sort_m60905_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2910* List_1_ToArray_m60906_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_ToArray_m60906(__this, method) (( UICharInfoU5BU5D_t2910* (*) (List_1_t2790 *, const MethodInfo*))List_1_ToArray_m60906_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60907_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60907(__this, method) (( void (*) (List_1_t2790 *, const MethodInfo*))List_1_TrimExcess_m60907_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60908_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60908(__this, method) (( int32_t (*) (List_1_t2790 *, const MethodInfo*))List_1_get_Capacity_m60908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60909_gshared (List_1_t2790 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60909(__this, ___value, method) (( void (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60909_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60910_gshared (List_1_t2790 * __this, const MethodInfo* method);
#define List_1_get_Count_m60910(__this, method) (( int32_t (*) (List_1_t2790 *, const MethodInfo*))List_1_get_Count_m60910_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1079  List_1_get_Item_m60911_gshared (List_1_t2790 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60911(__this, ___index, method) (( UICharInfo_t1079  (*) (List_1_t2790 *, int32_t, const MethodInfo*))List_1_get_Item_m60911_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60912_gshared (List_1_t2790 * __this, int32_t ___index, UICharInfo_t1079  ___value, const MethodInfo* method);
#define List_1_set_Item_m60912(__this, ___index, ___value, method) (( void (*) (List_1_t2790 *, int32_t, UICharInfo_t1079 , const MethodInfo*))List_1_set_Item_m60912_gshared)(__this, ___index, ___value, method)
