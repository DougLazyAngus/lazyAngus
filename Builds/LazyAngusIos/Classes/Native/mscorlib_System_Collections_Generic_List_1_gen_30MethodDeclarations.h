#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t890;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t8914;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t887;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t8913;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1025;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t5767;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5768;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t8915;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t5770;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m5728_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1__ctor_m5728(__this, method) (( void (*) (List_1_t890 *, const MethodInfo*))List_1__ctor_m5728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28388_gshared (List_1_t890 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28388(__this, ___collection, method) (( void (*) (List_1_t890 *, Object_t*, const MethodInfo*))List_1__ctor_m28388_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9843_gshared (List_1_t890 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9843(__this, ___capacity, method) (( void (*) (List_1_t890 *, int32_t, const MethodInfo*))List_1__ctor_m9843_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28389_gshared (List_1_t890 * __this, UIVertexU5BU5D_t887* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m28389(__this, ___data, ___size, method) (( void (*) (List_1_t890 *, UIVertexU5BU5D_t887*, int32_t, const MethodInfo*))List_1__ctor_m28389_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m28390_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28390(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28390_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28391_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28391(__this, method) (( Object_t* (*) (List_1_t890 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28392_gshared (List_1_t890 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28392(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t890 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28392_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28393_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28393(__this, method) (( Object_t * (*) (List_1_t890 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28393_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28394_gshared (List_1_t890 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28394(__this, ___item, method) (( int32_t (*) (List_1_t890 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28394_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28395_gshared (List_1_t890 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28395(__this, ___item, method) (( bool (*) (List_1_t890 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28395_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28396_gshared (List_1_t890 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28396(__this, ___item, method) (( int32_t (*) (List_1_t890 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28396_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28397_gshared (List_1_t890 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28397(__this, ___index, ___item, method) (( void (*) (List_1_t890 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28397_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28398_gshared (List_1_t890 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28398(__this, ___item, method) (( void (*) (List_1_t890 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28398_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28399_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28399(__this, method) (( bool (*) (List_1_t890 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28400_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28400(__this, method) (( bool (*) (List_1_t890 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28400_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28401_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28401(__this, method) (( Object_t * (*) (List_1_t890 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28401_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28402_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28402(__this, method) (( bool (*) (List_1_t890 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28403_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28403(__this, method) (( bool (*) (List_1_t890 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28403_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28404_gshared (List_1_t890 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28404(__this, ___index, method) (( Object_t * (*) (List_1_t890 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28404_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28405_gshared (List_1_t890 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28405(__this, ___index, ___value, method) (( void (*) (List_1_t890 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28405_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m28406_gshared (List_1_t890 * __this, UIVertex_t888  ___item, const MethodInfo* method);
#define List_1_Add_m28406(__this, ___item, method) (( void (*) (List_1_t890 *, UIVertex_t888 , const MethodInfo*))List_1_Add_m28406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28407_gshared (List_1_t890 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28407(__this, ___newCount, method) (( void (*) (List_1_t890 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28407_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28408_gshared (List_1_t890 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28408(__this, ___idx, ___count, method) (( void (*) (List_1_t890 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28408_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28409_gshared (List_1_t890 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28409(__this, ___collection, method) (( void (*) (List_1_t890 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28409_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28410_gshared (List_1_t890 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28410(__this, ___enumerable, method) (( void (*) (List_1_t890 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28410_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28411_gshared (List_1_t890 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28411(__this, ___collection, method) (( void (*) (List_1_t890 *, Object_t*, const MethodInfo*))List_1_AddRange_m28411_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5767 * List_1_AsReadOnly_m28412_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28412(__this, method) (( ReadOnlyCollection_1_t5767 * (*) (List_1_t890 *, const MethodInfo*))List_1_AsReadOnly_m28412_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m28413_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_Clear_m28413(__this, method) (( void (*) (List_1_t890 *, const MethodInfo*))List_1_Clear_m28413_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m28414_gshared (List_1_t890 * __this, UIVertex_t888  ___item, const MethodInfo* method);
#define List_1_Contains_m28414(__this, ___item, method) (( bool (*) (List_1_t890 *, UIVertex_t888 , const MethodInfo*))List_1_Contains_m28414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28415_gshared (List_1_t890 * __this, UIVertexU5BU5D_t887* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28415(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t890 *, UIVertexU5BU5D_t887*, int32_t, const MethodInfo*))List_1_CopyTo_m28415_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t888  List_1_Find_m28416_gshared (List_1_t890 * __this, Predicate_1_t5768 * ___match, const MethodInfo* method);
#define List_1_Find_m28416(__this, ___match, method) (( UIVertex_t888  (*) (List_1_t890 *, Predicate_1_t5768 *, const MethodInfo*))List_1_Find_m28416_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28417_gshared (Object_t * __this /* static, unused */, Predicate_1_t5768 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28417(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5768 *, const MethodInfo*))List_1_CheckMatch_m28417_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28418_gshared (List_1_t890 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5768 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28418(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t890 *, int32_t, int32_t, Predicate_1_t5768 *, const MethodInfo*))List_1_GetIndex_m28418_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5769  List_1_GetEnumerator_m28419_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28419(__this, method) (( Enumerator_t5769  (*) (List_1_t890 *, const MethodInfo*))List_1_GetEnumerator_m28419_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t890 * List_1_GetRange_m28420_gshared (List_1_t890 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28420(__this, ___index, ___count, method) (( List_1_t890 * (*) (List_1_t890 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28420_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28421_gshared (List_1_t890 * __this, UIVertex_t888  ___item, const MethodInfo* method);
#define List_1_IndexOf_m28421(__this, ___item, method) (( int32_t (*) (List_1_t890 *, UIVertex_t888 , const MethodInfo*))List_1_IndexOf_m28421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28422_gshared (List_1_t890 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28422(__this, ___start, ___delta, method) (( void (*) (List_1_t890 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28422_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28423_gshared (List_1_t890 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28423(__this, ___index, method) (( void (*) (List_1_t890 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28423_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28424_gshared (List_1_t890 * __this, int32_t ___index, UIVertex_t888  ___item, const MethodInfo* method);
#define List_1_Insert_m28424(__this, ___index, ___item, method) (( void (*) (List_1_t890 *, int32_t, UIVertex_t888 , const MethodInfo*))List_1_Insert_m28424_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28425_gshared (List_1_t890 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28425(__this, ___collection, method) (( void (*) (List_1_t890 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28425_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28426_gshared (List_1_t890 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28426(__this, ___index, ___collection, method) (( void (*) (List_1_t890 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28426_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28427_gshared (List_1_t890 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28427(__this, ___index, ___collection, method) (( void (*) (List_1_t890 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28427_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28428_gshared (List_1_t890 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28428(__this, ___index, ___enumerable, method) (( void (*) (List_1_t890 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28428_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m28429_gshared (List_1_t890 * __this, UIVertex_t888  ___item, const MethodInfo* method);
#define List_1_Remove_m28429(__this, ___item, method) (( bool (*) (List_1_t890 *, UIVertex_t888 , const MethodInfo*))List_1_Remove_m28429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28430_gshared (List_1_t890 * __this, Predicate_1_t5768 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28430(__this, ___match, method) (( int32_t (*) (List_1_t890 *, Predicate_1_t5768 *, const MethodInfo*))List_1_RemoveAll_m28430_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28431_gshared (List_1_t890 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28431(__this, ___index, method) (( void (*) (List_1_t890 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28431_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28432_gshared (List_1_t890 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28432(__this, ___index, ___count, method) (( void (*) (List_1_t890 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28432_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m28433_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_Reverse_m28433(__this, method) (( void (*) (List_1_t890 *, const MethodInfo*))List_1_Reverse_m28433_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m28434_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_Sort_m28434(__this, method) (( void (*) (List_1_t890 *, const MethodInfo*))List_1_Sort_m28434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28435_gshared (List_1_t890 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28435(__this, ___comparer, method) (( void (*) (List_1_t890 *, Object_t*, const MethodInfo*))List_1_Sort_m28435_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28436_gshared (List_1_t890 * __this, Comparison_1_t5770 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m28436(__this, ___comparison, method) (( void (*) (List_1_t890 *, Comparison_1_t5770 *, const MethodInfo*))List_1_Sort_m28436_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t887* List_1_ToArray_m5772_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_ToArray_m5772(__this, method) (( UIVertexU5BU5D_t887* (*) (List_1_t890 *, const MethodInfo*))List_1_ToArray_m5772_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m28437_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28437(__this, method) (( void (*) (List_1_t890 *, const MethodInfo*))List_1_TrimExcess_m28437_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5649_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m5649(__this, method) (( int32_t (*) (List_1_t890 *, const MethodInfo*))List_1_get_Capacity_m5649_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m5650_gshared (List_1_t890 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m5650(__this, ___value, method) (( void (*) (List_1_t890 *, int32_t, const MethodInfo*))List_1_set_Capacity_m5650_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m28438_gshared (List_1_t890 * __this, const MethodInfo* method);
#define List_1_get_Count_m28438(__this, method) (( int32_t (*) (List_1_t890 *, const MethodInfo*))List_1_get_Count_m28438_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t888  List_1_get_Item_m28439_gshared (List_1_t890 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28439(__this, ___index, method) (( UIVertex_t888  (*) (List_1_t890 *, int32_t, const MethodInfo*))List_1_get_Item_m28439_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28440_gshared (List_1_t890 * __this, int32_t ___index, UIVertex_t888  ___value, const MethodInfo* method);
#define List_1_set_Item_m28440(__this, ___index, ___value, method) (( void (*) (List_1_t890 *, int32_t, UIVertex_t888 , const MethodInfo*))List_1_set_Item_m28440_gshared)(__this, ___index, ___value, method)
