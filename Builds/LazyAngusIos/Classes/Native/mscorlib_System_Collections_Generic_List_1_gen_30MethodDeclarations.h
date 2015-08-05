#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t892;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t8917;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t889;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t8916;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1028;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t5770;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5771;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t8918;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t5773;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m5748_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1__ctor_m5748(__this, method) (( void (*) (List_1_t892 *, const MethodInfo*))List_1__ctor_m5748_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28411_gshared (List_1_t892 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28411(__this, ___collection, method) (( void (*) (List_1_t892 *, Object_t*, const MethodInfo*))List_1__ctor_m28411_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9866_gshared (List_1_t892 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9866(__this, ___capacity, method) (( void (*) (List_1_t892 *, int32_t, const MethodInfo*))List_1__ctor_m9866_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28412_gshared (List_1_t892 * __this, UIVertexU5BU5D_t889* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m28412(__this, ___data, ___size, method) (( void (*) (List_1_t892 *, UIVertexU5BU5D_t889*, int32_t, const MethodInfo*))List_1__ctor_m28412_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m28413_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28413(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28413_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28414_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28414(__this, method) (( Object_t* (*) (List_1_t892 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28415_gshared (List_1_t892 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28415(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t892 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28416_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28416(__this, method) (( Object_t * (*) (List_1_t892 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28416_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28417_gshared (List_1_t892 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28417(__this, ___item, method) (( int32_t (*) (List_1_t892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28417_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28418_gshared (List_1_t892 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28418(__this, ___item, method) (( bool (*) (List_1_t892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28418_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28419_gshared (List_1_t892 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28419(__this, ___item, method) (( int32_t (*) (List_1_t892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28420_gshared (List_1_t892 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28420(__this, ___index, ___item, method) (( void (*) (List_1_t892 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28420_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28421_gshared (List_1_t892 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28421(__this, ___item, method) (( void (*) (List_1_t892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28421_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28422_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28422(__this, method) (( bool (*) (List_1_t892 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28423_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28423(__this, method) (( bool (*) (List_1_t892 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28423_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28424_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28424(__this, method) (( Object_t * (*) (List_1_t892 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28425_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28425(__this, method) (( bool (*) (List_1_t892 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28426_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28426(__this, method) (( bool (*) (List_1_t892 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28426_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28427_gshared (List_1_t892 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28427(__this, ___index, method) (( Object_t * (*) (List_1_t892 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28427_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28428_gshared (List_1_t892 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28428(__this, ___index, ___value, method) (( void (*) (List_1_t892 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28428_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m28429_gshared (List_1_t892 * __this, UIVertex_t890  ___item, const MethodInfo* method);
#define List_1_Add_m28429(__this, ___item, method) (( void (*) (List_1_t892 *, UIVertex_t890 , const MethodInfo*))List_1_Add_m28429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28430_gshared (List_1_t892 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28430(__this, ___newCount, method) (( void (*) (List_1_t892 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28430_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28431_gshared (List_1_t892 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28431(__this, ___idx, ___count, method) (( void (*) (List_1_t892 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28431_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28432_gshared (List_1_t892 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28432(__this, ___collection, method) (( void (*) (List_1_t892 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28433_gshared (List_1_t892 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28433(__this, ___enumerable, method) (( void (*) (List_1_t892 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28433_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28434_gshared (List_1_t892 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28434(__this, ___collection, method) (( void (*) (List_1_t892 *, Object_t*, const MethodInfo*))List_1_AddRange_m28434_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5770 * List_1_AsReadOnly_m28435_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28435(__this, method) (( ReadOnlyCollection_1_t5770 * (*) (List_1_t892 *, const MethodInfo*))List_1_AsReadOnly_m28435_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m28436_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_Clear_m28436(__this, method) (( void (*) (List_1_t892 *, const MethodInfo*))List_1_Clear_m28436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m28437_gshared (List_1_t892 * __this, UIVertex_t890  ___item, const MethodInfo* method);
#define List_1_Contains_m28437(__this, ___item, method) (( bool (*) (List_1_t892 *, UIVertex_t890 , const MethodInfo*))List_1_Contains_m28437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28438_gshared (List_1_t892 * __this, UIVertexU5BU5D_t889* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28438(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t892 *, UIVertexU5BU5D_t889*, int32_t, const MethodInfo*))List_1_CopyTo_m28438_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t890  List_1_Find_m28439_gshared (List_1_t892 * __this, Predicate_1_t5771 * ___match, const MethodInfo* method);
#define List_1_Find_m28439(__this, ___match, method) (( UIVertex_t890  (*) (List_1_t892 *, Predicate_1_t5771 *, const MethodInfo*))List_1_Find_m28439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28440_gshared (Object_t * __this /* static, unused */, Predicate_1_t5771 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28440(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5771 *, const MethodInfo*))List_1_CheckMatch_m28440_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28441_gshared (List_1_t892 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5771 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28441(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t892 *, int32_t, int32_t, Predicate_1_t5771 *, const MethodInfo*))List_1_GetIndex_m28441_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5772  List_1_GetEnumerator_m28442_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28442(__this, method) (( Enumerator_t5772  (*) (List_1_t892 *, const MethodInfo*))List_1_GetEnumerator_m28442_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t892 * List_1_GetRange_m28443_gshared (List_1_t892 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28443(__this, ___index, ___count, method) (( List_1_t892 * (*) (List_1_t892 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28443_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28444_gshared (List_1_t892 * __this, UIVertex_t890  ___item, const MethodInfo* method);
#define List_1_IndexOf_m28444(__this, ___item, method) (( int32_t (*) (List_1_t892 *, UIVertex_t890 , const MethodInfo*))List_1_IndexOf_m28444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28445_gshared (List_1_t892 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28445(__this, ___start, ___delta, method) (( void (*) (List_1_t892 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28445_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28446_gshared (List_1_t892 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28446(__this, ___index, method) (( void (*) (List_1_t892 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28447_gshared (List_1_t892 * __this, int32_t ___index, UIVertex_t890  ___item, const MethodInfo* method);
#define List_1_Insert_m28447(__this, ___index, ___item, method) (( void (*) (List_1_t892 *, int32_t, UIVertex_t890 , const MethodInfo*))List_1_Insert_m28447_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28448_gshared (List_1_t892 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28448(__this, ___collection, method) (( void (*) (List_1_t892 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28448_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28449_gshared (List_1_t892 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28449(__this, ___index, ___collection, method) (( void (*) (List_1_t892 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28449_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28450_gshared (List_1_t892 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28450(__this, ___index, ___collection, method) (( void (*) (List_1_t892 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28450_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28451_gshared (List_1_t892 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28451(__this, ___index, ___enumerable, method) (( void (*) (List_1_t892 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28451_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m28452_gshared (List_1_t892 * __this, UIVertex_t890  ___item, const MethodInfo* method);
#define List_1_Remove_m28452(__this, ___item, method) (( bool (*) (List_1_t892 *, UIVertex_t890 , const MethodInfo*))List_1_Remove_m28452_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28453_gshared (List_1_t892 * __this, Predicate_1_t5771 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28453(__this, ___match, method) (( int32_t (*) (List_1_t892 *, Predicate_1_t5771 *, const MethodInfo*))List_1_RemoveAll_m28453_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28454_gshared (List_1_t892 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28454(__this, ___index, method) (( void (*) (List_1_t892 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28454_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28455_gshared (List_1_t892 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28455(__this, ___index, ___count, method) (( void (*) (List_1_t892 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28455_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m28456_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_Reverse_m28456(__this, method) (( void (*) (List_1_t892 *, const MethodInfo*))List_1_Reverse_m28456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m28457_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_Sort_m28457(__this, method) (( void (*) (List_1_t892 *, const MethodInfo*))List_1_Sort_m28457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28458_gshared (List_1_t892 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28458(__this, ___comparer, method) (( void (*) (List_1_t892 *, Object_t*, const MethodInfo*))List_1_Sort_m28458_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28459_gshared (List_1_t892 * __this, Comparison_1_t5773 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m28459(__this, ___comparison, method) (( void (*) (List_1_t892 *, Comparison_1_t5773 *, const MethodInfo*))List_1_Sort_m28459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t889* List_1_ToArray_m5792_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_ToArray_m5792(__this, method) (( UIVertexU5BU5D_t889* (*) (List_1_t892 *, const MethodInfo*))List_1_ToArray_m5792_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m28460_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28460(__this, method) (( void (*) (List_1_t892 *, const MethodInfo*))List_1_TrimExcess_m28460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5669_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m5669(__this, method) (( int32_t (*) (List_1_t892 *, const MethodInfo*))List_1_get_Capacity_m5669_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m5670_gshared (List_1_t892 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m5670(__this, ___value, method) (( void (*) (List_1_t892 *, int32_t, const MethodInfo*))List_1_set_Capacity_m5670_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m28461_gshared (List_1_t892 * __this, const MethodInfo* method);
#define List_1_get_Count_m28461(__this, method) (( int32_t (*) (List_1_t892 *, const MethodInfo*))List_1_get_Count_m28461_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t890  List_1_get_Item_m28462_gshared (List_1_t892 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28462(__this, ___index, method) (( UIVertex_t890  (*) (List_1_t892 *, int32_t, const MethodInfo*))List_1_get_Item_m28462_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28463_gshared (List_1_t892 * __this, int32_t ___index, UIVertex_t890  ___value, const MethodInfo* method);
#define List_1_set_Item_m28463(__this, ___index, ___value, method) (( void (*) (List_1_t892 *, int32_t, UIVertex_t890 , const MethodInfo*))List_1_set_Item_m28463_gshared)(__this, ___index, ___value, method)
