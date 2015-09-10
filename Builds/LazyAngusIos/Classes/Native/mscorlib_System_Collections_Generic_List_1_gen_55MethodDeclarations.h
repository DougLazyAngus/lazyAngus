#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2817;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t10255;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2937;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t10256;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t10257;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t9011;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t9015;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t10258;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t9018;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_104.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m65535_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1__ctor_m65535(__this, method) (( void (*) (List_1_t2817 *, const MethodInfo*))List_1__ctor_m65535_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m65536_gshared (List_1_t2817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m65536(__this, ___collection, method) (( void (*) (List_1_t2817 *, Object_t*, const MethodInfo*))List_1__ctor_m65536_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10344_gshared (List_1_t2817 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10344(__this, ___capacity, method) (( void (*) (List_1_t2817 *, int32_t, const MethodInfo*))List_1__ctor_m10344_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m65537_gshared (List_1_t2817 * __this, UICharInfoU5BU5D_t2937* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m65537(__this, ___data, ___size, method) (( void (*) (List_1_t2817 *, UICharInfoU5BU5D_t2937*, int32_t, const MethodInfo*))List_1__ctor_m65537_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m65538_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m65538(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m65538_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65539_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65539(__this, method) (( Object_t* (*) (List_1_t2817 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m65540_gshared (List_1_t2817 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m65540(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2817 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m65540_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m65541_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m65541(__this, method) (( Object_t * (*) (List_1_t2817 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m65541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m65542_gshared (List_1_t2817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m65542(__this, ___item, method) (( int32_t (*) (List_1_t2817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m65542_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m65543_gshared (List_1_t2817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m65543(__this, ___item, method) (( bool (*) (List_1_t2817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m65543_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m65544_gshared (List_1_t2817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m65544(__this, ___item, method) (( int32_t (*) (List_1_t2817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m65544_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m65545_gshared (List_1_t2817 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m65545(__this, ___index, ___item, method) (( void (*) (List_1_t2817 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m65545_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m65546_gshared (List_1_t2817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m65546(__this, ___item, method) (( void (*) (List_1_t2817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m65546_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65547_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65547(__this, method) (( bool (*) (List_1_t2817 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m65548_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m65548(__this, method) (( bool (*) (List_1_t2817 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m65548_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m65549_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m65549(__this, method) (( Object_t * (*) (List_1_t2817 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m65549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m65550_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m65550(__this, method) (( bool (*) (List_1_t2817 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m65550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m65551_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m65551(__this, method) (( bool (*) (List_1_t2817 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m65551_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m65552_gshared (List_1_t2817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m65552(__this, ___index, method) (( Object_t * (*) (List_1_t2817 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m65552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m65553_gshared (List_1_t2817 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m65553(__this, ___index, ___value, method) (( void (*) (List_1_t2817 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m65553_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m65554_gshared (List_1_t2817 * __this, UICharInfo_t1106  ___item, const MethodInfo* method);
#define List_1_Add_m65554(__this, ___item, method) (( void (*) (List_1_t2817 *, UICharInfo_t1106 , const MethodInfo*))List_1_Add_m65554_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m65555_gshared (List_1_t2817 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m65555(__this, ___newCount, method) (( void (*) (List_1_t2817 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m65555_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m65556_gshared (List_1_t2817 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m65556(__this, ___idx, ___count, method) (( void (*) (List_1_t2817 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m65556_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m65557_gshared (List_1_t2817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m65557(__this, ___collection, method) (( void (*) (List_1_t2817 *, Object_t*, const MethodInfo*))List_1_AddCollection_m65557_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m65558_gshared (List_1_t2817 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m65558(__this, ___enumerable, method) (( void (*) (List_1_t2817 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m65558_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m65559_gshared (List_1_t2817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m65559(__this, ___collection, method) (( void (*) (List_1_t2817 *, Object_t*, const MethodInfo*))List_1_AddRange_m65559_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9011 * List_1_AsReadOnly_m65560_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m65560(__this, method) (( ReadOnlyCollection_1_t9011 * (*) (List_1_t2817 *, const MethodInfo*))List_1_AsReadOnly_m65560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m65561_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_Clear_m65561(__this, method) (( void (*) (List_1_t2817 *, const MethodInfo*))List_1_Clear_m65561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m65562_gshared (List_1_t2817 * __this, UICharInfo_t1106  ___item, const MethodInfo* method);
#define List_1_Contains_m65562(__this, ___item, method) (( bool (*) (List_1_t2817 *, UICharInfo_t1106 , const MethodInfo*))List_1_Contains_m65562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m65563_gshared (List_1_t2817 * __this, UICharInfoU5BU5D_t2937* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m65563(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2817 *, UICharInfoU5BU5D_t2937*, int32_t, const MethodInfo*))List_1_CopyTo_m65563_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1106  List_1_Find_m65564_gshared (List_1_t2817 * __this, Predicate_1_t9015 * ___match, const MethodInfo* method);
#define List_1_Find_m65564(__this, ___match, method) (( UICharInfo_t1106  (*) (List_1_t2817 *, Predicate_1_t9015 *, const MethodInfo*))List_1_Find_m65564_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m65565_gshared (Object_t * __this /* static, unused */, Predicate_1_t9015 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m65565(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9015 *, const MethodInfo*))List_1_CheckMatch_m65565_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m65566_gshared (List_1_t2817 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9015 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m65566(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2817 *, int32_t, int32_t, Predicate_1_t9015 *, const MethodInfo*))List_1_GetIndex_m65566_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t9010  List_1_GetEnumerator_m65567_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m65567(__this, method) (( Enumerator_t9010  (*) (List_1_t2817 *, const MethodInfo*))List_1_GetEnumerator_m65567_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2817 * List_1_GetRange_m65568_gshared (List_1_t2817 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m65568(__this, ___index, ___count, method) (( List_1_t2817 * (*) (List_1_t2817 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m65568_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m65569_gshared (List_1_t2817 * __this, UICharInfo_t1106  ___item, const MethodInfo* method);
#define List_1_IndexOf_m65569(__this, ___item, method) (( int32_t (*) (List_1_t2817 *, UICharInfo_t1106 , const MethodInfo*))List_1_IndexOf_m65569_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m65570_gshared (List_1_t2817 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m65570(__this, ___start, ___delta, method) (( void (*) (List_1_t2817 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m65570_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m65571_gshared (List_1_t2817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m65571(__this, ___index, method) (( void (*) (List_1_t2817 *, int32_t, const MethodInfo*))List_1_CheckIndex_m65571_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m65572_gshared (List_1_t2817 * __this, int32_t ___index, UICharInfo_t1106  ___item, const MethodInfo* method);
#define List_1_Insert_m65572(__this, ___index, ___item, method) (( void (*) (List_1_t2817 *, int32_t, UICharInfo_t1106 , const MethodInfo*))List_1_Insert_m65572_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m65573_gshared (List_1_t2817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m65573(__this, ___collection, method) (( void (*) (List_1_t2817 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m65573_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m65574_gshared (List_1_t2817 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m65574(__this, ___index, ___collection, method) (( void (*) (List_1_t2817 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m65574_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m65575_gshared (List_1_t2817 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m65575(__this, ___index, ___collection, method) (( void (*) (List_1_t2817 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m65575_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m65576_gshared (List_1_t2817 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m65576(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2817 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m65576_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m65577_gshared (List_1_t2817 * __this, UICharInfo_t1106  ___item, const MethodInfo* method);
#define List_1_Remove_m65577(__this, ___item, method) (( bool (*) (List_1_t2817 *, UICharInfo_t1106 , const MethodInfo*))List_1_Remove_m65577_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m65578_gshared (List_1_t2817 * __this, Predicate_1_t9015 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m65578(__this, ___match, method) (( int32_t (*) (List_1_t2817 *, Predicate_1_t9015 *, const MethodInfo*))List_1_RemoveAll_m65578_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m65579_gshared (List_1_t2817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m65579(__this, ___index, method) (( void (*) (List_1_t2817 *, int32_t, const MethodInfo*))List_1_RemoveAt_m65579_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m65580_gshared (List_1_t2817 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m65580(__this, ___index, ___count, method) (( void (*) (List_1_t2817 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m65580_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m65581_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_Reverse_m65581(__this, method) (( void (*) (List_1_t2817 *, const MethodInfo*))List_1_Reverse_m65581_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m65582_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_Sort_m65582(__this, method) (( void (*) (List_1_t2817 *, const MethodInfo*))List_1_Sort_m65582_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m65583_gshared (List_1_t2817 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m65583(__this, ___comparer, method) (( void (*) (List_1_t2817 *, Object_t*, const MethodInfo*))List_1_Sort_m65583_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m65584_gshared (List_1_t2817 * __this, Comparison_1_t9018 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m65584(__this, ___comparison, method) (( void (*) (List_1_t2817 *, Comparison_1_t9018 *, const MethodInfo*))List_1_Sort_m65584_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2937* List_1_ToArray_m65585_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_ToArray_m65585(__this, method) (( UICharInfoU5BU5D_t2937* (*) (List_1_t2817 *, const MethodInfo*))List_1_ToArray_m65585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m65586_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m65586(__this, method) (( void (*) (List_1_t2817 *, const MethodInfo*))List_1_TrimExcess_m65586_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m65587_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m65587(__this, method) (( int32_t (*) (List_1_t2817 *, const MethodInfo*))List_1_get_Capacity_m65587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m65588_gshared (List_1_t2817 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m65588(__this, ___value, method) (( void (*) (List_1_t2817 *, int32_t, const MethodInfo*))List_1_set_Capacity_m65588_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m65589_gshared (List_1_t2817 * __this, const MethodInfo* method);
#define List_1_get_Count_m65589(__this, method) (( int32_t (*) (List_1_t2817 *, const MethodInfo*))List_1_get_Count_m65589_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1106  List_1_get_Item_m65590_gshared (List_1_t2817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m65590(__this, ___index, method) (( UICharInfo_t1106  (*) (List_1_t2817 *, int32_t, const MethodInfo*))List_1_get_Item_m65590_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m65591_gshared (List_1_t2817 * __this, int32_t ___index, UICharInfo_t1106  ___value, const MethodInfo* method);
#define List_1_set_Item_m65591(__this, ___index, ___value, method) (( void (*) (List_1_t2817 *, int32_t, UICharInfo_t1106 , const MethodInfo*))List_1_set_Item_m65591_gshared)(__this, ___index, ___value, method)
