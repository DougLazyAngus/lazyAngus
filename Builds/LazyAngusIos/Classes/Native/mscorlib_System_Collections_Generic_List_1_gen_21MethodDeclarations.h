#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t815;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1498;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3796;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t6239;
// System.Predicate`1<System.Int32>
struct Predicate_1_t6241;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5760;
// System.Comparison`1<System.Int32>
struct Comparison_1_t6245;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4420_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1__ctor_m4420(__this, method) (( void (*) (List_1_t815 *, const MethodInfo*))List_1__ctor_m4420_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m30835_gshared (List_1_t815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m30835(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, const MethodInfo*))List_1__ctor_m30835_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m30837_gshared (List_1_t815 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m30837(__this, ___capacity, method) (( void (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1__ctor_m30837_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m30839_gshared (List_1_t815 * __this, Int32U5BU5D_t484* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m30839(__this, ___data, ___size, method) (( void (*) (List_1_t815 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1__ctor_m30839_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m30841_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m30841(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m30841_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30843_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30843(__this, method) (( Object_t* (*) (List_1_t815 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30843_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m30845_gshared (List_1_t815 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m30845(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t815 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m30845_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m30847_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30847(__this, method) (( Object_t * (*) (List_1_t815 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m30847_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m30849_gshared (List_1_t815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m30849(__this, ___item, method) (( int32_t (*) (List_1_t815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m30849_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m30851_gshared (List_1_t815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m30851(__this, ___item, method) (( bool (*) (List_1_t815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m30851_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m30853_gshared (List_1_t815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m30853(__this, ___item, method) (( int32_t (*) (List_1_t815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m30853_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m30855_gshared (List_1_t815 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m30855(__this, ___index, ___item, method) (( void (*) (List_1_t815 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m30855_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m30857_gshared (List_1_t815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m30857(__this, ___item, method) (( void (*) (List_1_t815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m30857_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30859_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30859(__this, method) (( bool (*) (List_1_t815 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m30861_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30861(__this, method) (( bool (*) (List_1_t815 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m30861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m30863_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m30863(__this, method) (( Object_t * (*) (List_1_t815 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m30863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m30865_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m30865(__this, method) (( bool (*) (List_1_t815 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m30865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m30867_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m30867(__this, method) (( bool (*) (List_1_t815 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m30867_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m30869_gshared (List_1_t815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m30869(__this, ___index, method) (( Object_t * (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m30869_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m30871_gshared (List_1_t815 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m30871(__this, ___index, ___value, method) (( void (*) (List_1_t815 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m30871_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m30873_gshared (List_1_t815 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m30873(__this, ___item, method) (( void (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_Add_m30873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m30875_gshared (List_1_t815 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m30875(__this, ___newCount, method) (( void (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m30875_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m30877_gshared (List_1_t815 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m30877(__this, ___idx, ___count, method) (( void (*) (List_1_t815 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m30877_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m30879_gshared (List_1_t815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m30879(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, const MethodInfo*))List_1_AddCollection_m30879_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m30881_gshared (List_1_t815 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m30881(__this, ___enumerable, method) (( void (*) (List_1_t815 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m30881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m30883_gshared (List_1_t815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m30883(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, const MethodInfo*))List_1_AddRange_m30883_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6239 * List_1_AsReadOnly_m30885_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m30885(__this, method) (( ReadOnlyCollection_1_t6239 * (*) (List_1_t815 *, const MethodInfo*))List_1_AsReadOnly_m30885_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m30887_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_Clear_m30887(__this, method) (( void (*) (List_1_t815 *, const MethodInfo*))List_1_Clear_m30887_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m30889_gshared (List_1_t815 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m30889(__this, ___item, method) (( bool (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_Contains_m30889_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m30891_gshared (List_1_t815 * __this, Int32U5BU5D_t484* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m30891(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t815 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1_CopyTo_m30891_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m30893_gshared (List_1_t815 * __this, Predicate_1_t6241 * ___match, const MethodInfo* method);
#define List_1_Find_m30893(__this, ___match, method) (( int32_t (*) (List_1_t815 *, Predicate_1_t6241 *, const MethodInfo*))List_1_Find_m30893_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m30895_gshared (Object_t * __this /* static, unused */, Predicate_1_t6241 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m30895(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6241 *, const MethodInfo*))List_1_CheckMatch_m30895_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m30897_gshared (List_1_t815 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6241 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m30897(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t815 *, int32_t, int32_t, Predicate_1_t6241 *, const MethodInfo*))List_1_GetIndex_m30897_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6237  List_1_GetEnumerator_m30899_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m30899(__this, method) (( Enumerator_t6237  (*) (List_1_t815 *, const MethodInfo*))List_1_GetEnumerator_m30899_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t815 * List_1_GetRange_m30901_gshared (List_1_t815 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m30901(__this, ___index, ___count, method) (( List_1_t815 * (*) (List_1_t815 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m30901_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m30903_gshared (List_1_t815 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m30903(__this, ___item, method) (( int32_t (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_IndexOf_m30903_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m30905_gshared (List_1_t815 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m30905(__this, ___start, ___delta, method) (( void (*) (List_1_t815 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m30905_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m30907_gshared (List_1_t815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m30907(__this, ___index, method) (( void (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_CheckIndex_m30907_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m30909_gshared (List_1_t815 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m30909(__this, ___index, ___item, method) (( void (*) (List_1_t815 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m30909_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m30911_gshared (List_1_t815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m30911(__this, ___collection, method) (( void (*) (List_1_t815 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m30911_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m30913_gshared (List_1_t815 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m30913(__this, ___index, ___collection, method) (( void (*) (List_1_t815 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m30913_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m30915_gshared (List_1_t815 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m30915(__this, ___index, ___collection, method) (( void (*) (List_1_t815 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m30915_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m30917_gshared (List_1_t815 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m30917(__this, ___index, ___enumerable, method) (( void (*) (List_1_t815 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m30917_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m30919_gshared (List_1_t815 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m30919(__this, ___item, method) (( bool (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_Remove_m30919_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m30921_gshared (List_1_t815 * __this, Predicate_1_t6241 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m30921(__this, ___match, method) (( int32_t (*) (List_1_t815 *, Predicate_1_t6241 *, const MethodInfo*))List_1_RemoveAll_m30921_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m30923_gshared (List_1_t815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m30923(__this, ___index, method) (( void (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_RemoveAt_m30923_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m30925_gshared (List_1_t815 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m30925(__this, ___index, ___count, method) (( void (*) (List_1_t815 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m30925_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m30927_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_Reverse_m30927(__this, method) (( void (*) (List_1_t815 *, const MethodInfo*))List_1_Reverse_m30927_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m30929_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_Sort_m30929(__this, method) (( void (*) (List_1_t815 *, const MethodInfo*))List_1_Sort_m30929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m30931_gshared (List_1_t815 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m30931(__this, ___comparer, method) (( void (*) (List_1_t815 *, Object_t*, const MethodInfo*))List_1_Sort_m30931_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m30933_gshared (List_1_t815 * __this, Comparison_1_t6245 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m30933(__this, ___comparison, method) (( void (*) (List_1_t815 *, Comparison_1_t6245 *, const MethodInfo*))List_1_Sort_m30933_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t484* List_1_ToArray_m30935_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_ToArray_m30935(__this, method) (( Int32U5BU5D_t484* (*) (List_1_t815 *, const MethodInfo*))List_1_ToArray_m30935_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m30937_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m30937(__this, method) (( void (*) (List_1_t815 *, const MethodInfo*))List_1_TrimExcess_m30937_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m30939_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m30939(__this, method) (( int32_t (*) (List_1_t815 *, const MethodInfo*))List_1_get_Capacity_m30939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m30941_gshared (List_1_t815 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m30941(__this, ___value, method) (( void (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_set_Capacity_m30941_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m30943_gshared (List_1_t815 * __this, const MethodInfo* method);
#define List_1_get_Count_m30943(__this, method) (( int32_t (*) (List_1_t815 *, const MethodInfo*))List_1_get_Count_m30943_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m30945_gshared (List_1_t815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m30945(__this, ___index, method) (( int32_t (*) (List_1_t815 *, int32_t, const MethodInfo*))List_1_get_Item_m30945_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m30947_gshared (List_1_t815 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m30947(__this, ___index, ___value, method) (( void (*) (List_1_t815 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m30947_gshared)(__this, ___index, ___value, method)
