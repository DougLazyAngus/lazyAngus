#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t967;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t9055;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t964;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t9054;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1103;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t5881;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5882;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t9056;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t5884;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m6161_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1__ctor_m6161(__this, method) (( void (*) (List_1_t967 *, const MethodInfo*))List_1__ctor_m6161_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m29561_gshared (List_1_t967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m29561(__this, ___collection, method) (( void (*) (List_1_t967 *, Object_t*, const MethodInfo*))List_1__ctor_m29561_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10270_gshared (List_1_t967 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10270(__this, ___capacity, method) (( void (*) (List_1_t967 *, int32_t, const MethodInfo*))List_1__ctor_m10270_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m29562_gshared (List_1_t967 * __this, UIVertexU5BU5D_t964* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m29562(__this, ___data, ___size, method) (( void (*) (List_1_t967 *, UIVertexU5BU5D_t964*, int32_t, const MethodInfo*))List_1__ctor_m29562_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m29563_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m29563(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m29563_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29564_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29564(__this, method) (( Object_t* (*) (List_1_t967 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m29565_gshared (List_1_t967 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m29565(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t967 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m29565_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m29566_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29566(__this, method) (( Object_t * (*) (List_1_t967 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m29566_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m29567_gshared (List_1_t967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m29567(__this, ___item, method) (( int32_t (*) (List_1_t967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m29567_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m29568_gshared (List_1_t967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m29568(__this, ___item, method) (( bool (*) (List_1_t967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m29568_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m29569_gshared (List_1_t967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m29569(__this, ___item, method) (( int32_t (*) (List_1_t967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m29569_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m29570_gshared (List_1_t967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m29570(__this, ___index, ___item, method) (( void (*) (List_1_t967 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m29570_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m29571_gshared (List_1_t967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m29571(__this, ___item, method) (( void (*) (List_1_t967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m29571_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29572_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29572(__this, method) (( bool (*) (List_1_t967 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29572_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m29573_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29573(__this, method) (( bool (*) (List_1_t967 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m29573_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m29574_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m29574(__this, method) (( Object_t * (*) (List_1_t967 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m29574_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m29575_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m29575(__this, method) (( bool (*) (List_1_t967 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m29575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m29576_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m29576(__this, method) (( bool (*) (List_1_t967 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m29576_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m29577_gshared (List_1_t967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m29577(__this, ___index, method) (( Object_t * (*) (List_1_t967 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m29577_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m29578_gshared (List_1_t967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m29578(__this, ___index, ___value, method) (( void (*) (List_1_t967 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m29578_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m29579_gshared (List_1_t967 * __this, UIVertex_t965  ___item, const MethodInfo* method);
#define List_1_Add_m29579(__this, ___item, method) (( void (*) (List_1_t967 *, UIVertex_t965 , const MethodInfo*))List_1_Add_m29579_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m29580_gshared (List_1_t967 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m29580(__this, ___newCount, method) (( void (*) (List_1_t967 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m29580_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m29581_gshared (List_1_t967 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m29581(__this, ___idx, ___count, method) (( void (*) (List_1_t967 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m29581_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m29582_gshared (List_1_t967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m29582(__this, ___collection, method) (( void (*) (List_1_t967 *, Object_t*, const MethodInfo*))List_1_AddCollection_m29582_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m29583_gshared (List_1_t967 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m29583(__this, ___enumerable, method) (( void (*) (List_1_t967 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m29583_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m29584_gshared (List_1_t967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m29584(__this, ___collection, method) (( void (*) (List_1_t967 *, Object_t*, const MethodInfo*))List_1_AddRange_m29584_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5881 * List_1_AsReadOnly_m29585_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m29585(__this, method) (( ReadOnlyCollection_1_t5881 * (*) (List_1_t967 *, const MethodInfo*))List_1_AsReadOnly_m29585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m29586_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_Clear_m29586(__this, method) (( void (*) (List_1_t967 *, const MethodInfo*))List_1_Clear_m29586_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m29587_gshared (List_1_t967 * __this, UIVertex_t965  ___item, const MethodInfo* method);
#define List_1_Contains_m29587(__this, ___item, method) (( bool (*) (List_1_t967 *, UIVertex_t965 , const MethodInfo*))List_1_Contains_m29587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m29588_gshared (List_1_t967 * __this, UIVertexU5BU5D_t964* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m29588(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t967 *, UIVertexU5BU5D_t964*, int32_t, const MethodInfo*))List_1_CopyTo_m29588_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t965  List_1_Find_m29589_gshared (List_1_t967 * __this, Predicate_1_t5882 * ___match, const MethodInfo* method);
#define List_1_Find_m29589(__this, ___match, method) (( UIVertex_t965  (*) (List_1_t967 *, Predicate_1_t5882 *, const MethodInfo*))List_1_Find_m29589_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m29590_gshared (Object_t * __this /* static, unused */, Predicate_1_t5882 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m29590(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5882 *, const MethodInfo*))List_1_CheckMatch_m29590_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m29591_gshared (List_1_t967 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5882 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m29591(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t967 *, int32_t, int32_t, Predicate_1_t5882 *, const MethodInfo*))List_1_GetIndex_m29591_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5883  List_1_GetEnumerator_m29592_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m29592(__this, method) (( Enumerator_t5883  (*) (List_1_t967 *, const MethodInfo*))List_1_GetEnumerator_m29592_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t967 * List_1_GetRange_m29593_gshared (List_1_t967 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m29593(__this, ___index, ___count, method) (( List_1_t967 * (*) (List_1_t967 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m29593_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m29594_gshared (List_1_t967 * __this, UIVertex_t965  ___item, const MethodInfo* method);
#define List_1_IndexOf_m29594(__this, ___item, method) (( int32_t (*) (List_1_t967 *, UIVertex_t965 , const MethodInfo*))List_1_IndexOf_m29594_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m29595_gshared (List_1_t967 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m29595(__this, ___start, ___delta, method) (( void (*) (List_1_t967 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m29595_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m29596_gshared (List_1_t967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m29596(__this, ___index, method) (( void (*) (List_1_t967 *, int32_t, const MethodInfo*))List_1_CheckIndex_m29596_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m29597_gshared (List_1_t967 * __this, int32_t ___index, UIVertex_t965  ___item, const MethodInfo* method);
#define List_1_Insert_m29597(__this, ___index, ___item, method) (( void (*) (List_1_t967 *, int32_t, UIVertex_t965 , const MethodInfo*))List_1_Insert_m29597_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m29598_gshared (List_1_t967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m29598(__this, ___collection, method) (( void (*) (List_1_t967 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m29598_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m29599_gshared (List_1_t967 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m29599(__this, ___index, ___collection, method) (( void (*) (List_1_t967 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m29599_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m29600_gshared (List_1_t967 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m29600(__this, ___index, ___collection, method) (( void (*) (List_1_t967 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m29600_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m29601_gshared (List_1_t967 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m29601(__this, ___index, ___enumerable, method) (( void (*) (List_1_t967 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m29601_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m29602_gshared (List_1_t967 * __this, UIVertex_t965  ___item, const MethodInfo* method);
#define List_1_Remove_m29602(__this, ___item, method) (( bool (*) (List_1_t967 *, UIVertex_t965 , const MethodInfo*))List_1_Remove_m29602_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m29603_gshared (List_1_t967 * __this, Predicate_1_t5882 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m29603(__this, ___match, method) (( int32_t (*) (List_1_t967 *, Predicate_1_t5882 *, const MethodInfo*))List_1_RemoveAll_m29603_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m29604_gshared (List_1_t967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m29604(__this, ___index, method) (( void (*) (List_1_t967 *, int32_t, const MethodInfo*))List_1_RemoveAt_m29604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m29605_gshared (List_1_t967 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m29605(__this, ___index, ___count, method) (( void (*) (List_1_t967 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m29605_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m29606_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_Reverse_m29606(__this, method) (( void (*) (List_1_t967 *, const MethodInfo*))List_1_Reverse_m29606_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m29607_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_Sort_m29607(__this, method) (( void (*) (List_1_t967 *, const MethodInfo*))List_1_Sort_m29607_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m29608_gshared (List_1_t967 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m29608(__this, ___comparer, method) (( void (*) (List_1_t967 *, Object_t*, const MethodInfo*))List_1_Sort_m29608_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m29609_gshared (List_1_t967 * __this, Comparison_1_t5884 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m29609(__this, ___comparison, method) (( void (*) (List_1_t967 *, Comparison_1_t5884 *, const MethodInfo*))List_1_Sort_m29609_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t964* List_1_ToArray_m6205_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_ToArray_m6205(__this, method) (( UIVertexU5BU5D_t964* (*) (List_1_t967 *, const MethodInfo*))List_1_ToArray_m6205_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m29610_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m29610(__this, method) (( void (*) (List_1_t967 *, const MethodInfo*))List_1_TrimExcess_m29610_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m6083_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m6083(__this, method) (( int32_t (*) (List_1_t967 *, const MethodInfo*))List_1_get_Capacity_m6083_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m6084_gshared (List_1_t967 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m6084(__this, ___value, method) (( void (*) (List_1_t967 *, int32_t, const MethodInfo*))List_1_set_Capacity_m6084_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m29611_gshared (List_1_t967 * __this, const MethodInfo* method);
#define List_1_get_Count_m29611(__this, method) (( int32_t (*) (List_1_t967 *, const MethodInfo*))List_1_get_Count_m29611_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t965  List_1_get_Item_m29612_gshared (List_1_t967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m29612(__this, ___index, method) (( UIVertex_t965  (*) (List_1_t967 *, int32_t, const MethodInfo*))List_1_get_Item_m29612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m29613_gshared (List_1_t967 * __this, int32_t ___index, UIVertex_t965  ___value, const MethodInfo* method);
#define List_1_set_Item_m29613(__this, ___index, ___value, method) (( void (*) (List_1_t967 *, int32_t, UIVertex_t965 , const MethodInfo*))List_1_set_Item_m29613_gshared)(__this, ___index, ___value, method)
