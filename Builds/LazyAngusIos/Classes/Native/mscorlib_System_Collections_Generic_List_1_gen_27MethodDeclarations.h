#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t911;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t9603;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t6361;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t9604;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t9605;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t6365;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t6369;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t9606;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t871;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m6043_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1__ctor_m6043(__this, method) (( void (*) (List_1_t911 *, const MethodInfo*))List_1__ctor_m6043_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m32625_gshared (List_1_t911 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m32625(__this, ___collection, method) (( void (*) (List_1_t911 *, Object_t*, const MethodInfo*))List_1__ctor_m32625_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m32626_gshared (List_1_t911 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m32626(__this, ___capacity, method) (( void (*) (List_1_t911 *, int32_t, const MethodInfo*))List_1__ctor_m32626_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m32627_gshared (List_1_t911 * __this, RaycastResultU5BU5D_t6361* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m32627(__this, ___data, ___size, method) (( void (*) (List_1_t911 *, RaycastResultU5BU5D_t6361*, int32_t, const MethodInfo*))List_1__ctor_m32627_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m32628_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m32628(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m32628_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32629_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32629(__this, method) (( Object_t* (*) (List_1_t911 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m32630_gshared (List_1_t911 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m32630(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t911 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m32630_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m32631_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32631(__this, method) (( Object_t * (*) (List_1_t911 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m32631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m32632_gshared (List_1_t911 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m32632(__this, ___item, method) (( int32_t (*) (List_1_t911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m32632_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m32633_gshared (List_1_t911 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m32633(__this, ___item, method) (( bool (*) (List_1_t911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m32633_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m32634_gshared (List_1_t911 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m32634(__this, ___item, method) (( int32_t (*) (List_1_t911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m32634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m32635_gshared (List_1_t911 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m32635(__this, ___index, ___item, method) (( void (*) (List_1_t911 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m32635_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m32636_gshared (List_1_t911 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m32636(__this, ___item, method) (( void (*) (List_1_t911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m32636_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32637_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32637(__this, method) (( bool (*) (List_1_t911 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32637_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m32638_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32638(__this, method) (( bool (*) (List_1_t911 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m32638_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m32639_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m32639(__this, method) (( Object_t * (*) (List_1_t911 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m32639_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m32640_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m32640(__this, method) (( bool (*) (List_1_t911 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m32640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m32641_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m32641(__this, method) (( bool (*) (List_1_t911 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m32641_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m32642_gshared (List_1_t911 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m32642(__this, ___index, method) (( Object_t * (*) (List_1_t911 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m32642_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m32643_gshared (List_1_t911 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m32643(__this, ___index, ___value, method) (( void (*) (List_1_t911 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m32643_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m32644_gshared (List_1_t911 * __this, RaycastResult_t905  ___item, const MethodInfo* method);
#define List_1_Add_m32644(__this, ___item, method) (( void (*) (List_1_t911 *, RaycastResult_t905 , const MethodInfo*))List_1_Add_m32644_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m32645_gshared (List_1_t911 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m32645(__this, ___newCount, method) (( void (*) (List_1_t911 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m32645_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m32646_gshared (List_1_t911 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m32646(__this, ___idx, ___count, method) (( void (*) (List_1_t911 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m32646_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m32647_gshared (List_1_t911 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m32647(__this, ___collection, method) (( void (*) (List_1_t911 *, Object_t*, const MethodInfo*))List_1_AddCollection_m32647_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m32648_gshared (List_1_t911 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m32648(__this, ___enumerable, method) (( void (*) (List_1_t911 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m32648_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m32649_gshared (List_1_t911 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m32649(__this, ___collection, method) (( void (*) (List_1_t911 *, Object_t*, const MethodInfo*))List_1_AddRange_m32649_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6365 * List_1_AsReadOnly_m32650_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m32650(__this, method) (( ReadOnlyCollection_1_t6365 * (*) (List_1_t911 *, const MethodInfo*))List_1_AsReadOnly_m32650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m32651_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_Clear_m32651(__this, method) (( void (*) (List_1_t911 *, const MethodInfo*))List_1_Clear_m32651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m32652_gshared (List_1_t911 * __this, RaycastResult_t905  ___item, const MethodInfo* method);
#define List_1_Contains_m32652(__this, ___item, method) (( bool (*) (List_1_t911 *, RaycastResult_t905 , const MethodInfo*))List_1_Contains_m32652_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m32653_gshared (List_1_t911 * __this, RaycastResultU5BU5D_t6361* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m32653(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t911 *, RaycastResultU5BU5D_t6361*, int32_t, const MethodInfo*))List_1_CopyTo_m32653_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t905  List_1_Find_m32654_gshared (List_1_t911 * __this, Predicate_1_t6369 * ___match, const MethodInfo* method);
#define List_1_Find_m32654(__this, ___match, method) (( RaycastResult_t905  (*) (List_1_t911 *, Predicate_1_t6369 *, const MethodInfo*))List_1_Find_m32654_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m32655_gshared (Object_t * __this /* static, unused */, Predicate_1_t6369 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m32655(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6369 *, const MethodInfo*))List_1_CheckMatch_m32655_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m32656_gshared (List_1_t911 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6369 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m32656(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t911 *, int32_t, int32_t, Predicate_1_t6369 *, const MethodInfo*))List_1_GetIndex_m32656_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t6363  List_1_GetEnumerator_m32657_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m32657(__this, method) (( Enumerator_t6363  (*) (List_1_t911 *, const MethodInfo*))List_1_GetEnumerator_m32657_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t911 * List_1_GetRange_m32658_gshared (List_1_t911 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m32658(__this, ___index, ___count, method) (( List_1_t911 * (*) (List_1_t911 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m32658_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m32659_gshared (List_1_t911 * __this, RaycastResult_t905  ___item, const MethodInfo* method);
#define List_1_IndexOf_m32659(__this, ___item, method) (( int32_t (*) (List_1_t911 *, RaycastResult_t905 , const MethodInfo*))List_1_IndexOf_m32659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m32660_gshared (List_1_t911 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m32660(__this, ___start, ___delta, method) (( void (*) (List_1_t911 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m32660_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m32661_gshared (List_1_t911 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m32661(__this, ___index, method) (( void (*) (List_1_t911 *, int32_t, const MethodInfo*))List_1_CheckIndex_m32661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m32662_gshared (List_1_t911 * __this, int32_t ___index, RaycastResult_t905  ___item, const MethodInfo* method);
#define List_1_Insert_m32662(__this, ___index, ___item, method) (( void (*) (List_1_t911 *, int32_t, RaycastResult_t905 , const MethodInfo*))List_1_Insert_m32662_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m32663_gshared (List_1_t911 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m32663(__this, ___collection, method) (( void (*) (List_1_t911 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m32663_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m32664_gshared (List_1_t911 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m32664(__this, ___index, ___collection, method) (( void (*) (List_1_t911 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m32664_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m32665_gshared (List_1_t911 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m32665(__this, ___index, ___collection, method) (( void (*) (List_1_t911 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m32665_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m32666_gshared (List_1_t911 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m32666(__this, ___index, ___enumerable, method) (( void (*) (List_1_t911 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m32666_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m32667_gshared (List_1_t911 * __this, RaycastResult_t905  ___item, const MethodInfo* method);
#define List_1_Remove_m32667(__this, ___item, method) (( bool (*) (List_1_t911 *, RaycastResult_t905 , const MethodInfo*))List_1_Remove_m32667_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m32668_gshared (List_1_t911 * __this, Predicate_1_t6369 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m32668(__this, ___match, method) (( int32_t (*) (List_1_t911 *, Predicate_1_t6369 *, const MethodInfo*))List_1_RemoveAll_m32668_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m32669_gshared (List_1_t911 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m32669(__this, ___index, method) (( void (*) (List_1_t911 *, int32_t, const MethodInfo*))List_1_RemoveAt_m32669_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m32670_gshared (List_1_t911 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m32670(__this, ___index, ___count, method) (( void (*) (List_1_t911 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m32670_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m32671_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_Reverse_m32671(__this, method) (( void (*) (List_1_t911 *, const MethodInfo*))List_1_Reverse_m32671_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m32672_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_Sort_m32672(__this, method) (( void (*) (List_1_t911 *, const MethodInfo*))List_1_Sort_m32672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m32673_gshared (List_1_t911 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m32673(__this, ___comparer, method) (( void (*) (List_1_t911 *, Object_t*, const MethodInfo*))List_1_Sort_m32673_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m6004_gshared (List_1_t911 * __this, Comparison_1_t871 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m6004(__this, ___comparison, method) (( void (*) (List_1_t911 *, Comparison_1_t871 *, const MethodInfo*))List_1_Sort_m6004_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t6361* List_1_ToArray_m32674_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_ToArray_m32674(__this, method) (( RaycastResultU5BU5D_t6361* (*) (List_1_t911 *, const MethodInfo*))List_1_ToArray_m32674_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m32675_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m32675(__this, method) (( void (*) (List_1_t911 *, const MethodInfo*))List_1_TrimExcess_m32675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m32676_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m32676(__this, method) (( int32_t (*) (List_1_t911 *, const MethodInfo*))List_1_get_Capacity_m32676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m32677_gshared (List_1_t911 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m32677(__this, ___value, method) (( void (*) (List_1_t911 *, int32_t, const MethodInfo*))List_1_set_Capacity_m32677_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m32678_gshared (List_1_t911 * __this, const MethodInfo* method);
#define List_1_get_Count_m32678(__this, method) (( int32_t (*) (List_1_t911 *, const MethodInfo*))List_1_get_Count_m32678_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t905  List_1_get_Item_m32679_gshared (List_1_t911 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m32679(__this, ___index, method) (( RaycastResult_t905  (*) (List_1_t911 *, int32_t, const MethodInfo*))List_1_get_Item_m32679_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m32680_gshared (List_1_t911 * __this, int32_t ___index, RaycastResult_t905  ___value, const MethodInfo* method);
#define List_1_set_Item_m32680(__this, ___index, ___value, method) (( void (*) (List_1_t911 *, int32_t, RaycastResult_t905 , const MethodInfo*))List_1_set_Item_m32680_gshared)(__this, ___index, ___value, method)
