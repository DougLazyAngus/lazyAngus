#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t887;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t8966;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t5786;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t8967;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t8968;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t5790;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5794;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t8969;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t847;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m5836_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1__ctor_m5836(__this, method) (( void (*) (List_1_t887 *, const MethodInfo*))List_1__ctor_m5836_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27994_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27994(__this, ___collection, method) (( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))List_1__ctor_m27994_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27995_gshared (List_1_t887 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27995(__this, ___capacity, method) (( void (*) (List_1_t887 *, int32_t, const MethodInfo*))List_1__ctor_m27995_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m27996_gshared (List_1_t887 * __this, RaycastResultU5BU5D_t5786* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m27996(__this, ___data, ___size, method) (( void (*) (List_1_t887 *, RaycastResultU5BU5D_t5786*, int32_t, const MethodInfo*))List_1__ctor_m27996_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m27997_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27997(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27997_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27998_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27998(__this, method) (( Object_t* (*) (List_1_t887 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27998_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27999_gshared (List_1_t887 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27999(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t887 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27999_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28000_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28000(__this, method) (( Object_t * (*) (List_1_t887 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28000_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28001_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28001(__this, ___item, method) (( int32_t (*) (List_1_t887 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28001_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28002_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28002(__this, ___item, method) (( bool (*) (List_1_t887 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28002_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28003_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28003(__this, ___item, method) (( int32_t (*) (List_1_t887 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28003_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28004_gshared (List_1_t887 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28004(__this, ___index, ___item, method) (( void (*) (List_1_t887 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28004_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28005_gshared (List_1_t887 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28005(__this, ___item, method) (( void (*) (List_1_t887 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28005_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28006_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28006(__this, method) (( bool (*) (List_1_t887 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28006_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28007_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28007(__this, method) (( bool (*) (List_1_t887 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28007_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28008_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28008(__this, method) (( Object_t * (*) (List_1_t887 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28009_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28009(__this, method) (( bool (*) (List_1_t887 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28009_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28010_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28010(__this, method) (( bool (*) (List_1_t887 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28010_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28011_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28011(__this, ___index, method) (( Object_t * (*) (List_1_t887 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28011_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28012_gshared (List_1_t887 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28012(__this, ___index, ___value, method) (( void (*) (List_1_t887 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28012_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m28013_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method);
#define List_1_Add_m28013(__this, ___item, method) (( void (*) (List_1_t887 *, RaycastResult_t881 , const MethodInfo*))List_1_Add_m28013_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28014_gshared (List_1_t887 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28014(__this, ___newCount, method) (( void (*) (List_1_t887 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28014_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28015_gshared (List_1_t887 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28015(__this, ___idx, ___count, method) (( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28015_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28016_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28016(__this, ___collection, method) (( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28016_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28017_gshared (List_1_t887 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28017(__this, ___enumerable, method) (( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28017_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28018_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28018(__this, ___collection, method) (( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))List_1_AddRange_m28018_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5790 * List_1_AsReadOnly_m28019_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28019(__this, method) (( ReadOnlyCollection_1_t5790 * (*) (List_1_t887 *, const MethodInfo*))List_1_AsReadOnly_m28019_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m28020_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_Clear_m28020(__this, method) (( void (*) (List_1_t887 *, const MethodInfo*))List_1_Clear_m28020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m28021_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method);
#define List_1_Contains_m28021(__this, ___item, method) (( bool (*) (List_1_t887 *, RaycastResult_t881 , const MethodInfo*))List_1_Contains_m28021_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28022_gshared (List_1_t887 * __this, RaycastResultU5BU5D_t5786* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28022(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t887 *, RaycastResultU5BU5D_t5786*, int32_t, const MethodInfo*))List_1_CopyTo_m28022_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t881  List_1_Find_m28023_gshared (List_1_t887 * __this, Predicate_1_t5794 * ___match, const MethodInfo* method);
#define List_1_Find_m28023(__this, ___match, method) (( RaycastResult_t881  (*) (List_1_t887 *, Predicate_1_t5794 *, const MethodInfo*))List_1_Find_m28023_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28024_gshared (Object_t * __this /* static, unused */, Predicate_1_t5794 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28024(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5794 *, const MethodInfo*))List_1_CheckMatch_m28024_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28025_gshared (List_1_t887 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5794 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28025(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t887 *, int32_t, int32_t, Predicate_1_t5794 *, const MethodInfo*))List_1_GetIndex_m28025_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t5788  List_1_GetEnumerator_m28026_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28026(__this, method) (( Enumerator_t5788  (*) (List_1_t887 *, const MethodInfo*))List_1_GetEnumerator_m28026_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t887 * List_1_GetRange_m28027_gshared (List_1_t887 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28027(__this, ___index, ___count, method) (( List_1_t887 * (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28027_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28028_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method);
#define List_1_IndexOf_m28028(__this, ___item, method) (( int32_t (*) (List_1_t887 *, RaycastResult_t881 , const MethodInfo*))List_1_IndexOf_m28028_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28029_gshared (List_1_t887 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28029(__this, ___start, ___delta, method) (( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28029_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28030_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28030(__this, ___index, method) (( void (*) (List_1_t887 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28030_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28031_gshared (List_1_t887 * __this, int32_t ___index, RaycastResult_t881  ___item, const MethodInfo* method);
#define List_1_Insert_m28031(__this, ___index, ___item, method) (( void (*) (List_1_t887 *, int32_t, RaycastResult_t881 , const MethodInfo*))List_1_Insert_m28031_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28032_gshared (List_1_t887 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28032(__this, ___collection, method) (( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28032_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28033_gshared (List_1_t887 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28033(__this, ___index, ___collection, method) (( void (*) (List_1_t887 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28033_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28034_gshared (List_1_t887 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28034(__this, ___index, ___collection, method) (( void (*) (List_1_t887 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28034_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28035_gshared (List_1_t887 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28035(__this, ___index, ___enumerable, method) (( void (*) (List_1_t887 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28035_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m28036_gshared (List_1_t887 * __this, RaycastResult_t881  ___item, const MethodInfo* method);
#define List_1_Remove_m28036(__this, ___item, method) (( bool (*) (List_1_t887 *, RaycastResult_t881 , const MethodInfo*))List_1_Remove_m28036_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28037_gshared (List_1_t887 * __this, Predicate_1_t5794 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28037(__this, ___match, method) (( int32_t (*) (List_1_t887 *, Predicate_1_t5794 *, const MethodInfo*))List_1_RemoveAll_m28037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28038_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28038(__this, ___index, method) (( void (*) (List_1_t887 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28038_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28039_gshared (List_1_t887 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28039(__this, ___index, ___count, method) (( void (*) (List_1_t887 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28039_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m28040_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_Reverse_m28040(__this, method) (( void (*) (List_1_t887 *, const MethodInfo*))List_1_Reverse_m28040_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m28041_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_Sort_m28041(__this, method) (( void (*) (List_1_t887 *, const MethodInfo*))List_1_Sort_m28041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28042_gshared (List_1_t887 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28042(__this, ___comparer, method) (( void (*) (List_1_t887 *, Object_t*, const MethodInfo*))List_1_Sort_m28042_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m5797_gshared (List_1_t887 * __this, Comparison_1_t847 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m5797(__this, ___comparison, method) (( void (*) (List_1_t887 *, Comparison_1_t847 *, const MethodInfo*))List_1_Sort_m5797_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t5786* List_1_ToArray_m28043_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_ToArray_m28043(__this, method) (( RaycastResultU5BU5D_t5786* (*) (List_1_t887 *, const MethodInfo*))List_1_ToArray_m28043_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m28044_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28044(__this, method) (( void (*) (List_1_t887 *, const MethodInfo*))List_1_TrimExcess_m28044_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28045_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m28045(__this, method) (( int32_t (*) (List_1_t887 *, const MethodInfo*))List_1_get_Capacity_m28045_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m28046_gshared (List_1_t887 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m28046(__this, ___value, method) (( void (*) (List_1_t887 *, int32_t, const MethodInfo*))List_1_set_Capacity_m28046_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m28047_gshared (List_1_t887 * __this, const MethodInfo* method);
#define List_1_get_Count_m28047(__this, method) (( int32_t (*) (List_1_t887 *, const MethodInfo*))List_1_get_Count_m28047_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t881  List_1_get_Item_m28048_gshared (List_1_t887 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28048(__this, ___index, method) (( RaycastResult_t881  (*) (List_1_t887 *, int32_t, const MethodInfo*))List_1_get_Item_m28048_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28049_gshared (List_1_t887 * __this, int32_t ___index, RaycastResult_t881  ___value, const MethodInfo* method);
#define List_1_set_Item_m28049(__this, ___index, ___value, method) (( void (*) (List_1_t887 *, int32_t, RaycastResult_t881 , const MethodInfo*))List_1_set_Item_m28049_gshared)(__this, ___index, ___value, method)
