#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t900;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t9003;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t5815;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t9004;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t9005;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t5819;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5823;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t9006;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t860;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m5968_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1__ctor_m5968(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1__ctor_m5968_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28326_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28326(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1__ctor_m28326_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m28327_gshared (List_1_t900 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m28327(__this, ___capacity, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1__ctor_m28327_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28328_gshared (List_1_t900 * __this, RaycastResultU5BU5D_t5815* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m28328(__this, ___data, ___size, method) (( void (*) (List_1_t900 *, RaycastResultU5BU5D_t5815*, int32_t, const MethodInfo*))List_1__ctor_m28328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m28329_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28329(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28329_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28330_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28330(__this, method) (( Object_t* (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28331_gshared (List_1_t900 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28331(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t900 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28331_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28332_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28332(__this, method) (( Object_t * (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28332_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28333_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28333(__this, ___item, method) (( int32_t (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28333_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28334_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28334(__this, ___item, method) (( bool (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28334_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28335_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28335(__this, ___item, method) (( int32_t (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28335_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28336_gshared (List_1_t900 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28336(__this, ___index, ___item, method) (( void (*) (List_1_t900 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28336_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28337_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28337(__this, ___item, method) (( void (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28337_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28338_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28338(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28338_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28339_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28339(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28339_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28340_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28340(__this, method) (( Object_t * (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28341_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28341(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28342_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28342(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28343_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28343(__this, ___index, method) (( Object_t * (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28344_gshared (List_1_t900 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28344(__this, ___index, ___value, method) (( void (*) (List_1_t900 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28344_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m28345_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Add_m28345(__this, ___item, method) (( void (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_Add_m28345_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28346_gshared (List_1_t900 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28346(__this, ___newCount, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28346_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28347_gshared (List_1_t900 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28347(__this, ___idx, ___count, method) (( void (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28347_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28348_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28348(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28348_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28349_gshared (List_1_t900 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28349(__this, ___enumerable, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28349_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28350_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28350(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_AddRange_m28350_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5819 * List_1_AsReadOnly_m28351_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28351(__this, method) (( ReadOnlyCollection_1_t5819 * (*) (List_1_t900 *, const MethodInfo*))List_1_AsReadOnly_m28351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m28352_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_Clear_m28352(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_Clear_m28352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m28353_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Contains_m28353(__this, ___item, method) (( bool (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_Contains_m28353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28354_gshared (List_1_t900 * __this, RaycastResultU5BU5D_t5815* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28354(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t900 *, RaycastResultU5BU5D_t5815*, int32_t, const MethodInfo*))List_1_CopyTo_m28354_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t894  List_1_Find_m28355_gshared (List_1_t900 * __this, Predicate_1_t5823 * ___match, const MethodInfo* method);
#define List_1_Find_m28355(__this, ___match, method) (( RaycastResult_t894  (*) (List_1_t900 *, Predicate_1_t5823 *, const MethodInfo*))List_1_Find_m28355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28356_gshared (Object_t * __this /* static, unused */, Predicate_1_t5823 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28356(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5823 *, const MethodInfo*))List_1_CheckMatch_m28356_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28357_gshared (List_1_t900 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5823 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28357(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t900 *, int32_t, int32_t, Predicate_1_t5823 *, const MethodInfo*))List_1_GetIndex_m28357_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t5817  List_1_GetEnumerator_m28358_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28358(__this, method) (( Enumerator_t5817  (*) (List_1_t900 *, const MethodInfo*))List_1_GetEnumerator_m28358_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t900 * List_1_GetRange_m28359_gshared (List_1_t900 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28359(__this, ___index, ___count, method) (( List_1_t900 * (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28359_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28360_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_IndexOf_m28360(__this, ___item, method) (( int32_t (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_IndexOf_m28360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28361_gshared (List_1_t900 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28361(__this, ___start, ___delta, method) (( void (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28361_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28362_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28362(__this, ___index, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28362_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28363_gshared (List_1_t900 * __this, int32_t ___index, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Insert_m28363(__this, ___index, ___item, method) (( void (*) (List_1_t900 *, int32_t, RaycastResult_t894 , const MethodInfo*))List_1_Insert_m28363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28364_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28364(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28364_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28365_gshared (List_1_t900 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28365(__this, ___index, ___collection, method) (( void (*) (List_1_t900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28365_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28366_gshared (List_1_t900 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28366(__this, ___index, ___collection, method) (( void (*) (List_1_t900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28366_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28367_gshared (List_1_t900 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28367(__this, ___index, ___enumerable, method) (( void (*) (List_1_t900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28367_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m28368_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Remove_m28368(__this, ___item, method) (( bool (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_Remove_m28368_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28369_gshared (List_1_t900 * __this, Predicate_1_t5823 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28369(__this, ___match, method) (( int32_t (*) (List_1_t900 *, Predicate_1_t5823 *, const MethodInfo*))List_1_RemoveAll_m28369_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28370_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28370(__this, ___index, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28371_gshared (List_1_t900 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28371(__this, ___index, ___count, method) (( void (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28371_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m28372_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_Reverse_m28372(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_Reverse_m28372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m28373_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_Sort_m28373(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_Sort_m28373_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28374_gshared (List_1_t900 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28374(__this, ___comparer, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_Sort_m28374_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m5929_gshared (List_1_t900 * __this, Comparison_1_t860 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m5929(__this, ___comparison, method) (( void (*) (List_1_t900 *, Comparison_1_t860 *, const MethodInfo*))List_1_Sort_m5929_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t5815* List_1_ToArray_m28375_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_ToArray_m28375(__this, method) (( RaycastResultU5BU5D_t5815* (*) (List_1_t900 *, const MethodInfo*))List_1_ToArray_m28375_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m28376_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28376(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_TrimExcess_m28376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28377_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m28377(__this, method) (( int32_t (*) (List_1_t900 *, const MethodInfo*))List_1_get_Capacity_m28377_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m28378_gshared (List_1_t900 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m28378(__this, ___value, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_set_Capacity_m28378_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m28379_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_get_Count_m28379(__this, method) (( int32_t (*) (List_1_t900 *, const MethodInfo*))List_1_get_Count_m28379_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t894  List_1_get_Item_m28380_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28380(__this, ___index, method) (( RaycastResult_t894  (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_get_Item_m28380_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28381_gshared (List_1_t900 * __this, int32_t ___index, RaycastResult_t894  ___value, const MethodInfo* method);
#define List_1_set_Item_m28381(__this, ___index, ___value, method) (( void (*) (List_1_t900 *, int32_t, RaycastResult_t894 , const MethodInfo*))List_1_set_Item_m28381_gshared)(__this, ___index, ___value, method)
