#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t949;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t9015;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t946;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t9014;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1084;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t5849;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5850;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t9016;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t5852;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m5997_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1__ctor_m5997(__this, method) (( void (*) (List_1_t949 *, const MethodInfo*))List_1__ctor_m5997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m29197_gshared (List_1_t949 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m29197(__this, ___collection, method) (( void (*) (List_1_t949 *, Object_t*, const MethodInfo*))List_1__ctor_m29197_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10109_gshared (List_1_t949 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10109(__this, ___capacity, method) (( void (*) (List_1_t949 *, int32_t, const MethodInfo*))List_1__ctor_m10109_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m29198_gshared (List_1_t949 * __this, UIVertexU5BU5D_t946* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m29198(__this, ___data, ___size, method) (( void (*) (List_1_t949 *, UIVertexU5BU5D_t946*, int32_t, const MethodInfo*))List_1__ctor_m29198_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m29199_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m29199(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m29199_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29200_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29200(__this, method) (( Object_t* (*) (List_1_t949 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m29201_gshared (List_1_t949 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m29201(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t949 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m29201_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m29202_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29202(__this, method) (( Object_t * (*) (List_1_t949 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m29202_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m29203_gshared (List_1_t949 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m29203(__this, ___item, method) (( int32_t (*) (List_1_t949 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m29203_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m29204_gshared (List_1_t949 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m29204(__this, ___item, method) (( bool (*) (List_1_t949 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m29204_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m29205_gshared (List_1_t949 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m29205(__this, ___item, method) (( int32_t (*) (List_1_t949 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m29205_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m29206_gshared (List_1_t949 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m29206(__this, ___index, ___item, method) (( void (*) (List_1_t949 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m29206_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m29207_gshared (List_1_t949 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m29207(__this, ___item, method) (( void (*) (List_1_t949 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m29207_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29208_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29208(__this, method) (( bool (*) (List_1_t949 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29208_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m29209_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29209(__this, method) (( bool (*) (List_1_t949 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m29209_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m29210_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m29210(__this, method) (( Object_t * (*) (List_1_t949 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m29210_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m29211_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m29211(__this, method) (( bool (*) (List_1_t949 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m29211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m29212_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m29212(__this, method) (( bool (*) (List_1_t949 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m29212_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m29213_gshared (List_1_t949 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m29213(__this, ___index, method) (( Object_t * (*) (List_1_t949 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m29213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m29214_gshared (List_1_t949 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m29214(__this, ___index, ___value, method) (( void (*) (List_1_t949 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m29214_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m29215_gshared (List_1_t949 * __this, UIVertex_t947  ___item, const MethodInfo* method);
#define List_1_Add_m29215(__this, ___item, method) (( void (*) (List_1_t949 *, UIVertex_t947 , const MethodInfo*))List_1_Add_m29215_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m29216_gshared (List_1_t949 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m29216(__this, ___newCount, method) (( void (*) (List_1_t949 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m29216_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m29217_gshared (List_1_t949 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m29217(__this, ___idx, ___count, method) (( void (*) (List_1_t949 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m29217_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m29218_gshared (List_1_t949 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m29218(__this, ___collection, method) (( void (*) (List_1_t949 *, Object_t*, const MethodInfo*))List_1_AddCollection_m29218_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m29219_gshared (List_1_t949 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m29219(__this, ___enumerable, method) (( void (*) (List_1_t949 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m29219_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m29220_gshared (List_1_t949 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m29220(__this, ___collection, method) (( void (*) (List_1_t949 *, Object_t*, const MethodInfo*))List_1_AddRange_m29220_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5849 * List_1_AsReadOnly_m29221_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m29221(__this, method) (( ReadOnlyCollection_1_t5849 * (*) (List_1_t949 *, const MethodInfo*))List_1_AsReadOnly_m29221_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m29222_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_Clear_m29222(__this, method) (( void (*) (List_1_t949 *, const MethodInfo*))List_1_Clear_m29222_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m29223_gshared (List_1_t949 * __this, UIVertex_t947  ___item, const MethodInfo* method);
#define List_1_Contains_m29223(__this, ___item, method) (( bool (*) (List_1_t949 *, UIVertex_t947 , const MethodInfo*))List_1_Contains_m29223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m29224_gshared (List_1_t949 * __this, UIVertexU5BU5D_t946* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m29224(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t949 *, UIVertexU5BU5D_t946*, int32_t, const MethodInfo*))List_1_CopyTo_m29224_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t947  List_1_Find_m29225_gshared (List_1_t949 * __this, Predicate_1_t5850 * ___match, const MethodInfo* method);
#define List_1_Find_m29225(__this, ___match, method) (( UIVertex_t947  (*) (List_1_t949 *, Predicate_1_t5850 *, const MethodInfo*))List_1_Find_m29225_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m29226_gshared (Object_t * __this /* static, unused */, Predicate_1_t5850 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m29226(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5850 *, const MethodInfo*))List_1_CheckMatch_m29226_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m29227_gshared (List_1_t949 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5850 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m29227(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t949 *, int32_t, int32_t, Predicate_1_t5850 *, const MethodInfo*))List_1_GetIndex_m29227_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5851  List_1_GetEnumerator_m29228_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m29228(__this, method) (( Enumerator_t5851  (*) (List_1_t949 *, const MethodInfo*))List_1_GetEnumerator_m29228_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t949 * List_1_GetRange_m29229_gshared (List_1_t949 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m29229(__this, ___index, ___count, method) (( List_1_t949 * (*) (List_1_t949 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m29229_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m29230_gshared (List_1_t949 * __this, UIVertex_t947  ___item, const MethodInfo* method);
#define List_1_IndexOf_m29230(__this, ___item, method) (( int32_t (*) (List_1_t949 *, UIVertex_t947 , const MethodInfo*))List_1_IndexOf_m29230_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m29231_gshared (List_1_t949 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m29231(__this, ___start, ___delta, method) (( void (*) (List_1_t949 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m29231_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m29232_gshared (List_1_t949 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m29232(__this, ___index, method) (( void (*) (List_1_t949 *, int32_t, const MethodInfo*))List_1_CheckIndex_m29232_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m29233_gshared (List_1_t949 * __this, int32_t ___index, UIVertex_t947  ___item, const MethodInfo* method);
#define List_1_Insert_m29233(__this, ___index, ___item, method) (( void (*) (List_1_t949 *, int32_t, UIVertex_t947 , const MethodInfo*))List_1_Insert_m29233_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m29234_gshared (List_1_t949 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m29234(__this, ___collection, method) (( void (*) (List_1_t949 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m29234_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m29235_gshared (List_1_t949 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m29235(__this, ___index, ___collection, method) (( void (*) (List_1_t949 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m29235_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m29236_gshared (List_1_t949 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m29236(__this, ___index, ___collection, method) (( void (*) (List_1_t949 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m29236_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m29237_gshared (List_1_t949 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m29237(__this, ___index, ___enumerable, method) (( void (*) (List_1_t949 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m29237_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m29238_gshared (List_1_t949 * __this, UIVertex_t947  ___item, const MethodInfo* method);
#define List_1_Remove_m29238(__this, ___item, method) (( bool (*) (List_1_t949 *, UIVertex_t947 , const MethodInfo*))List_1_Remove_m29238_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m29239_gshared (List_1_t949 * __this, Predicate_1_t5850 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m29239(__this, ___match, method) (( int32_t (*) (List_1_t949 *, Predicate_1_t5850 *, const MethodInfo*))List_1_RemoveAll_m29239_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m29240_gshared (List_1_t949 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m29240(__this, ___index, method) (( void (*) (List_1_t949 *, int32_t, const MethodInfo*))List_1_RemoveAt_m29240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m29241_gshared (List_1_t949 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m29241(__this, ___index, ___count, method) (( void (*) (List_1_t949 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m29241_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m29242_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_Reverse_m29242(__this, method) (( void (*) (List_1_t949 *, const MethodInfo*))List_1_Reverse_m29242_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m29243_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_Sort_m29243(__this, method) (( void (*) (List_1_t949 *, const MethodInfo*))List_1_Sort_m29243_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m29244_gshared (List_1_t949 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m29244(__this, ___comparer, method) (( void (*) (List_1_t949 *, Object_t*, const MethodInfo*))List_1_Sort_m29244_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m29245_gshared (List_1_t949 * __this, Comparison_1_t5852 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m29245(__this, ___comparison, method) (( void (*) (List_1_t949 *, Comparison_1_t5852 *, const MethodInfo*))List_1_Sort_m29245_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t946* List_1_ToArray_m6040_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_ToArray_m6040(__this, method) (( UIVertexU5BU5D_t946* (*) (List_1_t949 *, const MethodInfo*))List_1_ToArray_m6040_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m29246_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m29246(__this, method) (( void (*) (List_1_t949 *, const MethodInfo*))List_1_TrimExcess_m29246_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5919_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m5919(__this, method) (( int32_t (*) (List_1_t949 *, const MethodInfo*))List_1_get_Capacity_m5919_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m5920_gshared (List_1_t949 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m5920(__this, ___value, method) (( void (*) (List_1_t949 *, int32_t, const MethodInfo*))List_1_set_Capacity_m5920_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m29247_gshared (List_1_t949 * __this, const MethodInfo* method);
#define List_1_get_Count_m29247(__this, method) (( int32_t (*) (List_1_t949 *, const MethodInfo*))List_1_get_Count_m29247_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t947  List_1_get_Item_m29248_gshared (List_1_t949 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m29248(__this, ___index, method) (( UIVertex_t947  (*) (List_1_t949 *, int32_t, const MethodInfo*))List_1_get_Item_m29248_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m29249_gshared (List_1_t949 * __this, int32_t ___index, UIVertex_t947  ___value, const MethodInfo* method);
#define List_1_set_Item_m29249(__this, ___index, ___value, method) (( void (*) (List_1_t949 *, int32_t, UIVertex_t947 , const MethodInfo*))List_1_set_Item_m29249_gshared)(__this, ___index, ___value, method)
