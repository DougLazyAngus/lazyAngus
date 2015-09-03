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
struct IEnumerable_1_t9590;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t6348;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t9591;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t9592;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t6352;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t6356;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t9593;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t860;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m5972_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1__ctor_m5972(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1__ctor_m5972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m32543_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m32543(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1__ctor_m32543_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m32544_gshared (List_1_t900 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m32544(__this, ___capacity, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1__ctor_m32544_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m32545_gshared (List_1_t900 * __this, RaycastResultU5BU5D_t6348* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m32545(__this, ___data, ___size, method) (( void (*) (List_1_t900 *, RaycastResultU5BU5D_t6348*, int32_t, const MethodInfo*))List_1__ctor_m32545_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m32546_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m32546(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m32546_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32547_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32547(__this, method) (( Object_t* (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32547_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m32548_gshared (List_1_t900 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m32548(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t900 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m32548_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m32549_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32549(__this, method) (( Object_t * (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m32549_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m32550_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m32550(__this, ___item, method) (( int32_t (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m32550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m32551_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m32551(__this, ___item, method) (( bool (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m32551_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m32552_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m32552(__this, ___item, method) (( int32_t (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m32552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m32553_gshared (List_1_t900 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m32553(__this, ___index, ___item, method) (( void (*) (List_1_t900 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m32553_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m32554_gshared (List_1_t900 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m32554(__this, ___item, method) (( void (*) (List_1_t900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m32554_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32555_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32555(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32555_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m32556_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32556(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m32556_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m32557_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m32557(__this, method) (( Object_t * (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m32557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m32558_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m32558(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m32558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m32559_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m32559(__this, method) (( bool (*) (List_1_t900 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m32559_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m32560_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m32560(__this, ___index, method) (( Object_t * (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m32560_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m32561_gshared (List_1_t900 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m32561(__this, ___index, ___value, method) (( void (*) (List_1_t900 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m32561_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m32562_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Add_m32562(__this, ___item, method) (( void (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_Add_m32562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m32563_gshared (List_1_t900 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m32563(__this, ___newCount, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m32563_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m32564_gshared (List_1_t900 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m32564(__this, ___idx, ___count, method) (( void (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m32564_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m32565_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m32565(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_AddCollection_m32565_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m32566_gshared (List_1_t900 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m32566(__this, ___enumerable, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m32566_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m32567_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m32567(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_AddRange_m32567_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6352 * List_1_AsReadOnly_m32568_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m32568(__this, method) (( ReadOnlyCollection_1_t6352 * (*) (List_1_t900 *, const MethodInfo*))List_1_AsReadOnly_m32568_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m32569_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_Clear_m32569(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_Clear_m32569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m32570_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Contains_m32570(__this, ___item, method) (( bool (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_Contains_m32570_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m32571_gshared (List_1_t900 * __this, RaycastResultU5BU5D_t6348* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m32571(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t900 *, RaycastResultU5BU5D_t6348*, int32_t, const MethodInfo*))List_1_CopyTo_m32571_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t894  List_1_Find_m32572_gshared (List_1_t900 * __this, Predicate_1_t6356 * ___match, const MethodInfo* method);
#define List_1_Find_m32572(__this, ___match, method) (( RaycastResult_t894  (*) (List_1_t900 *, Predicate_1_t6356 *, const MethodInfo*))List_1_Find_m32572_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m32573_gshared (Object_t * __this /* static, unused */, Predicate_1_t6356 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m32573(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6356 *, const MethodInfo*))List_1_CheckMatch_m32573_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m32574_gshared (List_1_t900 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6356 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m32574(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t900 *, int32_t, int32_t, Predicate_1_t6356 *, const MethodInfo*))List_1_GetIndex_m32574_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t6350  List_1_GetEnumerator_m32575_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m32575(__this, method) (( Enumerator_t6350  (*) (List_1_t900 *, const MethodInfo*))List_1_GetEnumerator_m32575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t900 * List_1_GetRange_m32576_gshared (List_1_t900 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m32576(__this, ___index, ___count, method) (( List_1_t900 * (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m32576_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m32577_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_IndexOf_m32577(__this, ___item, method) (( int32_t (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_IndexOf_m32577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m32578_gshared (List_1_t900 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m32578(__this, ___start, ___delta, method) (( void (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m32578_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m32579_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m32579(__this, ___index, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_CheckIndex_m32579_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m32580_gshared (List_1_t900 * __this, int32_t ___index, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Insert_m32580(__this, ___index, ___item, method) (( void (*) (List_1_t900 *, int32_t, RaycastResult_t894 , const MethodInfo*))List_1_Insert_m32580_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m32581_gshared (List_1_t900 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m32581(__this, ___collection, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m32581_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m32582_gshared (List_1_t900 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m32582(__this, ___index, ___collection, method) (( void (*) (List_1_t900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m32582_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m32583_gshared (List_1_t900 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m32583(__this, ___index, ___collection, method) (( void (*) (List_1_t900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m32583_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m32584_gshared (List_1_t900 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m32584(__this, ___index, ___enumerable, method) (( void (*) (List_1_t900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m32584_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m32585_gshared (List_1_t900 * __this, RaycastResult_t894  ___item, const MethodInfo* method);
#define List_1_Remove_m32585(__this, ___item, method) (( bool (*) (List_1_t900 *, RaycastResult_t894 , const MethodInfo*))List_1_Remove_m32585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m32586_gshared (List_1_t900 * __this, Predicate_1_t6356 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m32586(__this, ___match, method) (( int32_t (*) (List_1_t900 *, Predicate_1_t6356 *, const MethodInfo*))List_1_RemoveAll_m32586_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m32587_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m32587(__this, ___index, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_RemoveAt_m32587_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m32588_gshared (List_1_t900 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m32588(__this, ___index, ___count, method) (( void (*) (List_1_t900 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m32588_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m32589_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_Reverse_m32589(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_Reverse_m32589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m32590_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_Sort_m32590(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_Sort_m32590_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m32591_gshared (List_1_t900 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m32591(__this, ___comparer, method) (( void (*) (List_1_t900 *, Object_t*, const MethodInfo*))List_1_Sort_m32591_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m5933_gshared (List_1_t900 * __this, Comparison_1_t860 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m5933(__this, ___comparison, method) (( void (*) (List_1_t900 *, Comparison_1_t860 *, const MethodInfo*))List_1_Sort_m5933_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t6348* List_1_ToArray_m32592_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_ToArray_m32592(__this, method) (( RaycastResultU5BU5D_t6348* (*) (List_1_t900 *, const MethodInfo*))List_1_ToArray_m32592_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m32593_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m32593(__this, method) (( void (*) (List_1_t900 *, const MethodInfo*))List_1_TrimExcess_m32593_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m32594_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m32594(__this, method) (( int32_t (*) (List_1_t900 *, const MethodInfo*))List_1_get_Capacity_m32594_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m32595_gshared (List_1_t900 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m32595(__this, ___value, method) (( void (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_set_Capacity_m32595_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m32596_gshared (List_1_t900 * __this, const MethodInfo* method);
#define List_1_get_Count_m32596(__this, method) (( int32_t (*) (List_1_t900 *, const MethodInfo*))List_1_get_Count_m32596_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t894  List_1_get_Item_m32597_gshared (List_1_t900 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m32597(__this, ___index, method) (( RaycastResult_t894  (*) (List_1_t900 *, int32_t, const MethodInfo*))List_1_get_Item_m32597_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m32598_gshared (List_1_t900 * __this, int32_t ___index, RaycastResult_t894  ___value, const MethodInfo* method);
#define List_1_set_Item_m32598(__this, ___index, ___value, method) (( void (*) (List_1_t900 *, int32_t, RaycastResult_t894 , const MethodInfo*))List_1_set_Item_m32598_gshared)(__this, ___index, ___value, method)
