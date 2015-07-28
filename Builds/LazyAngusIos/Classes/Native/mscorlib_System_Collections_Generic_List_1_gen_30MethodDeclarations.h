#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t883;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t8906;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t880;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t8905;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1018;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t5759;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5760;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t8907;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t5762;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m5682_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1__ctor_m5682(__this, method) (( void (*) (List_1_t883 *, const MethodInfo*))List_1__ctor_m5682_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28341_gshared (List_1_t883 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28341(__this, ___collection, method) (( void (*) (List_1_t883 *, Object_t*, const MethodInfo*))List_1__ctor_m28341_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9797_gshared (List_1_t883 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9797(__this, ___capacity, method) (( void (*) (List_1_t883 *, int32_t, const MethodInfo*))List_1__ctor_m9797_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28342_gshared (List_1_t883 * __this, UIVertexU5BU5D_t880* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m28342(__this, ___data, ___size, method) (( void (*) (List_1_t883 *, UIVertexU5BU5D_t880*, int32_t, const MethodInfo*))List_1__ctor_m28342_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m28343_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28343(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28343_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28344_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28344(__this, method) (( Object_t* (*) (List_1_t883 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28344_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28345_gshared (List_1_t883 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28345(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t883 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28346_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28346(__this, method) (( Object_t * (*) (List_1_t883 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28347_gshared (List_1_t883 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28347(__this, ___item, method) (( int32_t (*) (List_1_t883 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28347_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28348_gshared (List_1_t883 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28348(__this, ___item, method) (( bool (*) (List_1_t883 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28348_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28349_gshared (List_1_t883 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28349(__this, ___item, method) (( int32_t (*) (List_1_t883 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28350_gshared (List_1_t883 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28350(__this, ___index, ___item, method) (( void (*) (List_1_t883 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28350_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28351_gshared (List_1_t883 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28351(__this, ___item, method) (( void (*) (List_1_t883 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28351_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28352_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28352(__this, method) (( bool (*) (List_1_t883 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28353_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28353(__this, method) (( bool (*) (List_1_t883 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28353_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28354_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28354(__this, method) (( Object_t * (*) (List_1_t883 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28355_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28355(__this, method) (( bool (*) (List_1_t883 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28356_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28356(__this, method) (( bool (*) (List_1_t883 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28356_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28357_gshared (List_1_t883 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28357(__this, ___index, method) (( Object_t * (*) (List_1_t883 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28358_gshared (List_1_t883 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28358(__this, ___index, ___value, method) (( void (*) (List_1_t883 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m28359_gshared (List_1_t883 * __this, UIVertex_t881  ___item, const MethodInfo* method);
#define List_1_Add_m28359(__this, ___item, method) (( void (*) (List_1_t883 *, UIVertex_t881 , const MethodInfo*))List_1_Add_m28359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28360_gshared (List_1_t883 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28360(__this, ___newCount, method) (( void (*) (List_1_t883 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28360_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28361_gshared (List_1_t883 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28361(__this, ___idx, ___count, method) (( void (*) (List_1_t883 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28361_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28362_gshared (List_1_t883 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28362(__this, ___collection, method) (( void (*) (List_1_t883 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28362_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28363_gshared (List_1_t883 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28363(__this, ___enumerable, method) (( void (*) (List_1_t883 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28363_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28364_gshared (List_1_t883 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28364(__this, ___collection, method) (( void (*) (List_1_t883 *, Object_t*, const MethodInfo*))List_1_AddRange_m28364_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5759 * List_1_AsReadOnly_m28365_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28365(__this, method) (( ReadOnlyCollection_1_t5759 * (*) (List_1_t883 *, const MethodInfo*))List_1_AsReadOnly_m28365_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m28366_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_Clear_m28366(__this, method) (( void (*) (List_1_t883 *, const MethodInfo*))List_1_Clear_m28366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m28367_gshared (List_1_t883 * __this, UIVertex_t881  ___item, const MethodInfo* method);
#define List_1_Contains_m28367(__this, ___item, method) (( bool (*) (List_1_t883 *, UIVertex_t881 , const MethodInfo*))List_1_Contains_m28367_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28368_gshared (List_1_t883 * __this, UIVertexU5BU5D_t880* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28368(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t883 *, UIVertexU5BU5D_t880*, int32_t, const MethodInfo*))List_1_CopyTo_m28368_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t881  List_1_Find_m28369_gshared (List_1_t883 * __this, Predicate_1_t5760 * ___match, const MethodInfo* method);
#define List_1_Find_m28369(__this, ___match, method) (( UIVertex_t881  (*) (List_1_t883 *, Predicate_1_t5760 *, const MethodInfo*))List_1_Find_m28369_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28370_gshared (Object_t * __this /* static, unused */, Predicate_1_t5760 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28370(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5760 *, const MethodInfo*))List_1_CheckMatch_m28370_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28371_gshared (List_1_t883 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5760 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28371(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t883 *, int32_t, int32_t, Predicate_1_t5760 *, const MethodInfo*))List_1_GetIndex_m28371_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5761  List_1_GetEnumerator_m28372_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28372(__this, method) (( Enumerator_t5761  (*) (List_1_t883 *, const MethodInfo*))List_1_GetEnumerator_m28372_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t883 * List_1_GetRange_m28373_gshared (List_1_t883 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28373(__this, ___index, ___count, method) (( List_1_t883 * (*) (List_1_t883 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28373_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28374_gshared (List_1_t883 * __this, UIVertex_t881  ___item, const MethodInfo* method);
#define List_1_IndexOf_m28374(__this, ___item, method) (( int32_t (*) (List_1_t883 *, UIVertex_t881 , const MethodInfo*))List_1_IndexOf_m28374_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28375_gshared (List_1_t883 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28375(__this, ___start, ___delta, method) (( void (*) (List_1_t883 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28375_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28376_gshared (List_1_t883 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28376(__this, ___index, method) (( void (*) (List_1_t883 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28376_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28377_gshared (List_1_t883 * __this, int32_t ___index, UIVertex_t881  ___item, const MethodInfo* method);
#define List_1_Insert_m28377(__this, ___index, ___item, method) (( void (*) (List_1_t883 *, int32_t, UIVertex_t881 , const MethodInfo*))List_1_Insert_m28377_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28378_gshared (List_1_t883 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28378(__this, ___collection, method) (( void (*) (List_1_t883 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28378_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28379_gshared (List_1_t883 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28379(__this, ___index, ___collection, method) (( void (*) (List_1_t883 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28380_gshared (List_1_t883 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28380(__this, ___index, ___collection, method) (( void (*) (List_1_t883 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28380_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28381_gshared (List_1_t883 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28381(__this, ___index, ___enumerable, method) (( void (*) (List_1_t883 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28381_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m28382_gshared (List_1_t883 * __this, UIVertex_t881  ___item, const MethodInfo* method);
#define List_1_Remove_m28382(__this, ___item, method) (( bool (*) (List_1_t883 *, UIVertex_t881 , const MethodInfo*))List_1_Remove_m28382_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28383_gshared (List_1_t883 * __this, Predicate_1_t5760 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28383(__this, ___match, method) (( int32_t (*) (List_1_t883 *, Predicate_1_t5760 *, const MethodInfo*))List_1_RemoveAll_m28383_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28384_gshared (List_1_t883 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28384(__this, ___index, method) (( void (*) (List_1_t883 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28384_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28385_gshared (List_1_t883 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28385(__this, ___index, ___count, method) (( void (*) (List_1_t883 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28385_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m28386_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_Reverse_m28386(__this, method) (( void (*) (List_1_t883 *, const MethodInfo*))List_1_Reverse_m28386_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m28387_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_Sort_m28387(__this, method) (( void (*) (List_1_t883 *, const MethodInfo*))List_1_Sort_m28387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28388_gshared (List_1_t883 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28388(__this, ___comparer, method) (( void (*) (List_1_t883 *, Object_t*, const MethodInfo*))List_1_Sort_m28388_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28389_gshared (List_1_t883 * __this, Comparison_1_t5762 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m28389(__this, ___comparison, method) (( void (*) (List_1_t883 *, Comparison_1_t5762 *, const MethodInfo*))List_1_Sort_m28389_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t880* List_1_ToArray_m5726_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_ToArray_m5726(__this, method) (( UIVertexU5BU5D_t880* (*) (List_1_t883 *, const MethodInfo*))List_1_ToArray_m5726_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m28390_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28390(__this, method) (( void (*) (List_1_t883 *, const MethodInfo*))List_1_TrimExcess_m28390_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5602_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m5602(__this, method) (( int32_t (*) (List_1_t883 *, const MethodInfo*))List_1_get_Capacity_m5602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m5603_gshared (List_1_t883 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m5603(__this, ___value, method) (( void (*) (List_1_t883 *, int32_t, const MethodInfo*))List_1_set_Capacity_m5603_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m28391_gshared (List_1_t883 * __this, const MethodInfo* method);
#define List_1_get_Count_m28391(__this, method) (( int32_t (*) (List_1_t883 *, const MethodInfo*))List_1_get_Count_m28391_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t881  List_1_get_Item_m28392_gshared (List_1_t883 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28392(__this, ___index, method) (( UIVertex_t881  (*) (List_1_t883 *, int32_t, const MethodInfo*))List_1_get_Item_m28392_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28393_gshared (List_1_t883 * __this, int32_t ___index, UIVertex_t881  ___value, const MethodInfo* method);
#define List_1_set_Item_m28393(__this, ___index, ___value, method) (( void (*) (List_1_t883 *, int32_t, UIVertex_t881 , const MethodInfo*))List_1_set_Item_m28393_gshared)(__this, ___index, ___value, method)
