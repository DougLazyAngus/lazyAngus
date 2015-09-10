#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t978;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t9655;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t975;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t9654;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1114;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t6427;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t6428;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t9656;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t6430;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m6236_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1__ctor_m6236(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1__ctor_m6236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m33863_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m33863(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1__ctor_m33863_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10343_gshared (List_1_t978 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10343(__this, ___capacity, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1__ctor_m10343_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m33864_gshared (List_1_t978 * __this, UIVertexU5BU5D_t975* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m33864(__this, ___data, ___size, method) (( void (*) (List_1_t978 *, UIVertexU5BU5D_t975*, int32_t, const MethodInfo*))List_1__ctor_m33864_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m33865_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m33865(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m33865_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33866_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33866(__this, method) (( Object_t* (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33866_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m33867_gshared (List_1_t978 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m33867(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t978 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m33867_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m33868_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33868(__this, method) (( Object_t * (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m33868_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m33869_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m33869(__this, ___item, method) (( int32_t (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m33869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m33870_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m33870(__this, ___item, method) (( bool (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m33870_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m33871_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m33871(__this, ___item, method) (( int32_t (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m33871_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m33872_gshared (List_1_t978 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m33872(__this, ___index, ___item, method) (( void (*) (List_1_t978 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m33872_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m33873_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m33873(__this, ___item, method) (( void (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m33873_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33874_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33874(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m33875_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33875(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m33875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m33876_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m33876(__this, method) (( Object_t * (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m33876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m33877_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m33877(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m33877_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m33878_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m33878(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m33878_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m33879_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m33879(__this, ___index, method) (( Object_t * (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m33879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m33880_gshared (List_1_t978 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m33880(__this, ___index, ___value, method) (( void (*) (List_1_t978 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m33880_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m33881_gshared (List_1_t978 * __this, UIVertex_t976  ___item, const MethodInfo* method);
#define List_1_Add_m33881(__this, ___item, method) (( void (*) (List_1_t978 *, UIVertex_t976 , const MethodInfo*))List_1_Add_m33881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m33882_gshared (List_1_t978 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m33882(__this, ___newCount, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m33882_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m33883_gshared (List_1_t978 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m33883(__this, ___idx, ___count, method) (( void (*) (List_1_t978 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m33883_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m33884_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m33884(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_AddCollection_m33884_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m33885_gshared (List_1_t978 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m33885(__this, ___enumerable, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m33885_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m33886_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m33886(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_AddRange_m33886_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6427 * List_1_AsReadOnly_m33887_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m33887(__this, method) (( ReadOnlyCollection_1_t6427 * (*) (List_1_t978 *, const MethodInfo*))List_1_AsReadOnly_m33887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m33888_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_Clear_m33888(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_Clear_m33888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m33889_gshared (List_1_t978 * __this, UIVertex_t976  ___item, const MethodInfo* method);
#define List_1_Contains_m33889(__this, ___item, method) (( bool (*) (List_1_t978 *, UIVertex_t976 , const MethodInfo*))List_1_Contains_m33889_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m33890_gshared (List_1_t978 * __this, UIVertexU5BU5D_t975* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m33890(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t978 *, UIVertexU5BU5D_t975*, int32_t, const MethodInfo*))List_1_CopyTo_m33890_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t976  List_1_Find_m33891_gshared (List_1_t978 * __this, Predicate_1_t6428 * ___match, const MethodInfo* method);
#define List_1_Find_m33891(__this, ___match, method) (( UIVertex_t976  (*) (List_1_t978 *, Predicate_1_t6428 *, const MethodInfo*))List_1_Find_m33891_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m33892_gshared (Object_t * __this /* static, unused */, Predicate_1_t6428 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m33892(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6428 *, const MethodInfo*))List_1_CheckMatch_m33892_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m33893_gshared (List_1_t978 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6428 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m33893(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t978 *, int32_t, int32_t, Predicate_1_t6428 *, const MethodInfo*))List_1_GetIndex_m33893_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t6429  List_1_GetEnumerator_m33894_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m33894(__this, method) (( Enumerator_t6429  (*) (List_1_t978 *, const MethodInfo*))List_1_GetEnumerator_m33894_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t978 * List_1_GetRange_m33895_gshared (List_1_t978 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m33895(__this, ___index, ___count, method) (( List_1_t978 * (*) (List_1_t978 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m33895_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m33896_gshared (List_1_t978 * __this, UIVertex_t976  ___item, const MethodInfo* method);
#define List_1_IndexOf_m33896(__this, ___item, method) (( int32_t (*) (List_1_t978 *, UIVertex_t976 , const MethodInfo*))List_1_IndexOf_m33896_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m33897_gshared (List_1_t978 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m33897(__this, ___start, ___delta, method) (( void (*) (List_1_t978 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m33897_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m33898_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m33898(__this, ___index, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_CheckIndex_m33898_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m33899_gshared (List_1_t978 * __this, int32_t ___index, UIVertex_t976  ___item, const MethodInfo* method);
#define List_1_Insert_m33899(__this, ___index, ___item, method) (( void (*) (List_1_t978 *, int32_t, UIVertex_t976 , const MethodInfo*))List_1_Insert_m33899_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m33900_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m33900(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m33900_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m33901_gshared (List_1_t978 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m33901(__this, ___index, ___collection, method) (( void (*) (List_1_t978 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m33901_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m33902_gshared (List_1_t978 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m33902(__this, ___index, ___collection, method) (( void (*) (List_1_t978 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m33902_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m33903_gshared (List_1_t978 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m33903(__this, ___index, ___enumerable, method) (( void (*) (List_1_t978 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m33903_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m33904_gshared (List_1_t978 * __this, UIVertex_t976  ___item, const MethodInfo* method);
#define List_1_Remove_m33904(__this, ___item, method) (( bool (*) (List_1_t978 *, UIVertex_t976 , const MethodInfo*))List_1_Remove_m33904_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m33905_gshared (List_1_t978 * __this, Predicate_1_t6428 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m33905(__this, ___match, method) (( int32_t (*) (List_1_t978 *, Predicate_1_t6428 *, const MethodInfo*))List_1_RemoveAll_m33905_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m33906_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m33906(__this, ___index, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_RemoveAt_m33906_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m33907_gshared (List_1_t978 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m33907(__this, ___index, ___count, method) (( void (*) (List_1_t978 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m33907_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m33908_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_Reverse_m33908(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_Reverse_m33908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m33909_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_Sort_m33909(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_Sort_m33909_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m33910_gshared (List_1_t978 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m33910(__this, ___comparer, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_Sort_m33910_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m33911_gshared (List_1_t978 * __this, Comparison_1_t6430 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m33911(__this, ___comparison, method) (( void (*) (List_1_t978 *, Comparison_1_t6430 *, const MethodInfo*))List_1_Sort_m33911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t975* List_1_ToArray_m6280_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_ToArray_m6280(__this, method) (( UIVertexU5BU5D_t975* (*) (List_1_t978 *, const MethodInfo*))List_1_ToArray_m6280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m33912_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m33912(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_TrimExcess_m33912_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m6158_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m6158(__this, method) (( int32_t (*) (List_1_t978 *, const MethodInfo*))List_1_get_Capacity_m6158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m6159_gshared (List_1_t978 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m6159(__this, ___value, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_set_Capacity_m6159_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m33913_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_get_Count_m33913(__this, method) (( int32_t (*) (List_1_t978 *, const MethodInfo*))List_1_get_Count_m33913_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t976  List_1_get_Item_m33914_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m33914(__this, ___index, method) (( UIVertex_t976  (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_get_Item_m33914_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m33915_gshared (List_1_t978 * __this, int32_t ___index, UIVertex_t976  ___value, const MethodInfo* method);
#define List_1_set_Item_m33915(__this, ___index, ___value, method) (( void (*) (List_1_t978 *, int32_t, UIVertex_t976 , const MethodInfo*))List_1_set_Item_m33915_gshared)(__this, ___index, ___value, method)
