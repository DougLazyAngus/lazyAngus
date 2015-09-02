#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t6461;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t6353;
// System.SByte[]
struct SByteU5BU5D_t4778;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6354;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9245;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.SByte>
struct ReadOnlyCollection_1_t6463;
// System.Predicate`1<System.SByte>
struct Predicate_1_t6468;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_t5381;
// System.Comparison`1<System.SByte>
struct Comparison_1_t6472;
// System.Collections.Generic.List`1/Enumerator<System.SByte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor()
extern "C" void List_1__ctor_m36891_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1__ctor_m36891(__this, method) (( void (*) (List_1_t6461 *, const MethodInfo*))List_1__ctor_m36891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36892_gshared (List_1_t6461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36892(__this, ___collection, method) (( void (*) (List_1_t6461 *, Object_t*, const MethodInfo*))List_1__ctor_m36892_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36893_gshared (List_1_t6461 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36893(__this, ___capacity, method) (( void (*) (List_1_t6461 *, int32_t, const MethodInfo*))List_1__ctor_m36893_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36894_gshared (List_1_t6461 * __this, SByteU5BU5D_t4778* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36894(__this, ___data, ___size, method) (( void (*) (List_1_t6461 *, SByteU5BU5D_t4778*, int32_t, const MethodInfo*))List_1__ctor_m36894_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.cctor()
extern "C" void List_1__cctor_m36895_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36895(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36895_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36896_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36896(__this, method) (( Object_t* (*) (List_1_t6461 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36896_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36897_gshared (List_1_t6461 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36897(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6461 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36897_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36898_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36898(__this, method) (( Object_t * (*) (List_1_t6461 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36898_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36899_gshared (List_1_t6461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36899(__this, ___item, method) (( int32_t (*) (List_1_t6461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36899_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36900_gshared (List_1_t6461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36900(__this, ___item, method) (( bool (*) (List_1_t6461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36900_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36901_gshared (List_1_t6461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36901(__this, ___item, method) (( int32_t (*) (List_1_t6461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36902_gshared (List_1_t6461 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36902(__this, ___index, ___item, method) (( void (*) (List_1_t6461 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36903_gshared (List_1_t6461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36903(__this, ___item, method) (( void (*) (List_1_t6461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36903_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36904_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36904(__this, method) (( bool (*) (List_1_t6461 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36905_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36905(__this, method) (( bool (*) (List_1_t6461 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36905_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36906_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36906(__this, method) (( Object_t * (*) (List_1_t6461 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36906_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36907_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36907(__this, method) (( bool (*) (List_1_t6461 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36907_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36908_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36908(__this, method) (( bool (*) (List_1_t6461 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36908_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36909_gshared (List_1_t6461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36909(__this, ___index, method) (( Object_t * (*) (List_1_t6461 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36909_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36910_gshared (List_1_t6461 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36910(__this, ___index, ___value, method) (( void (*) (List_1_t6461 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Add(T)
extern "C" void List_1_Add_m36911_gshared (List_1_t6461 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Add_m36911(__this, ___item, method) (( void (*) (List_1_t6461 *, int8_t, const MethodInfo*))List_1_Add_m36911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36912_gshared (List_1_t6461 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36912(__this, ___newCount, method) (( void (*) (List_1_t6461 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36912_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36913_gshared (List_1_t6461 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36913(__this, ___idx, ___count, method) (( void (*) (List_1_t6461 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36913_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36914_gshared (List_1_t6461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36914(__this, ___collection, method) (( void (*) (List_1_t6461 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36914_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36915_gshared (List_1_t6461 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36915(__this, ___enumerable, method) (( void (*) (List_1_t6461 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36915_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36916_gshared (List_1_t6461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36916(__this, ___collection, method) (( void (*) (List_1_t6461 *, Object_t*, const MethodInfo*))List_1_AddRange_m36916_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.SByte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6463 * List_1_AsReadOnly_m36917_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36917(__this, method) (( ReadOnlyCollection_1_t6463 * (*) (List_1_t6461 *, const MethodInfo*))List_1_AsReadOnly_m36917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Clear()
extern "C" void List_1_Clear_m36918_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_Clear_m36918(__this, method) (( void (*) (List_1_t6461 *, const MethodInfo*))List_1_Clear_m36918_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Contains(T)
extern "C" bool List_1_Contains_m36919_gshared (List_1_t6461 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Contains_m36919(__this, ___item, method) (( bool (*) (List_1_t6461 *, int8_t, const MethodInfo*))List_1_Contains_m36919_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36920_gshared (List_1_t6461 * __this, SByteU5BU5D_t4778* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36920(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6461 *, SByteU5BU5D_t4778*, int32_t, const MethodInfo*))List_1_CopyTo_m36920_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.SByte>::Find(System.Predicate`1<T>)
extern "C" int8_t List_1_Find_m36921_gshared (List_1_t6461 * __this, Predicate_1_t6468 * ___match, const MethodInfo* method);
#define List_1_Find_m36921(__this, ___match, method) (( int8_t (*) (List_1_t6461 *, Predicate_1_t6468 *, const MethodInfo*))List_1_Find_m36921_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36922_gshared (Object_t * __this /* static, unused */, Predicate_1_t6468 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36922(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6468 *, const MethodInfo*))List_1_CheckMatch_m36922_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36923_gshared (List_1_t6461 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6468 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36923(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6461 *, int32_t, int32_t, Predicate_1_t6468 *, const MethodInfo*))List_1_GetIndex_m36923_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.SByte>::GetEnumerator()
extern "C" Enumerator_t6462  List_1_GetEnumerator_m36924_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36924(__this, method) (( Enumerator_t6462  (*) (List_1_t6461 *, const MethodInfo*))List_1_GetEnumerator_m36924_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.SByte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6461 * List_1_GetRange_m36925_gshared (List_1_t6461 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36925(__this, ___index, ___count, method) (( List_1_t6461 * (*) (List_1_t6461 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36925_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36926_gshared (List_1_t6461 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36926(__this, ___item, method) (( int32_t (*) (List_1_t6461 *, int8_t, const MethodInfo*))List_1_IndexOf_m36926_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36927_gshared (List_1_t6461 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36927(__this, ___start, ___delta, method) (( void (*) (List_1_t6461 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36927_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36928_gshared (List_1_t6461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36928(__this, ___index, method) (( void (*) (List_1_t6461 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36928_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36929_gshared (List_1_t6461 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define List_1_Insert_m36929(__this, ___index, ___item, method) (( void (*) (List_1_t6461 *, int32_t, int8_t, const MethodInfo*))List_1_Insert_m36929_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36930_gshared (List_1_t6461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36930(__this, ___collection, method) (( void (*) (List_1_t6461 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36930_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36931_gshared (List_1_t6461 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36931(__this, ___index, ___collection, method) (( void (*) (List_1_t6461 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36931_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36932_gshared (List_1_t6461 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36932(__this, ___index, ___collection, method) (( void (*) (List_1_t6461 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36932_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36933_gshared (List_1_t6461 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36933(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6461 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36933_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Remove(T)
extern "C" bool List_1_Remove_m36934_gshared (List_1_t6461 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Remove_m36934(__this, ___item, method) (( bool (*) (List_1_t6461 *, int8_t, const MethodInfo*))List_1_Remove_m36934_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36935_gshared (List_1_t6461 * __this, Predicate_1_t6468 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36935(__this, ___match, method) (( int32_t (*) (List_1_t6461 *, Predicate_1_t6468 *, const MethodInfo*))List_1_RemoveAll_m36935_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36936_gshared (List_1_t6461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36936(__this, ___index, method) (( void (*) (List_1_t6461 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36936_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36937_gshared (List_1_t6461 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36937(__this, ___index, ___count, method) (( void (*) (List_1_t6461 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36937_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Reverse()
extern "C" void List_1_Reverse_m36938_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_Reverse_m36938(__this, method) (( void (*) (List_1_t6461 *, const MethodInfo*))List_1_Reverse_m36938_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort()
extern "C" void List_1_Sort_m36939_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_Sort_m36939(__this, method) (( void (*) (List_1_t6461 *, const MethodInfo*))List_1_Sort_m36939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36940_gshared (List_1_t6461 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36940(__this, ___comparer, method) (( void (*) (List_1_t6461 *, Object_t*, const MethodInfo*))List_1_Sort_m36940_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36941_gshared (List_1_t6461 * __this, Comparison_1_t6472 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36941(__this, ___comparison, method) (( void (*) (List_1_t6461 *, Comparison_1_t6472 *, const MethodInfo*))List_1_Sort_m36941_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.SByte>::ToArray()
extern "C" SByteU5BU5D_t4778* List_1_ToArray_m36942_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_ToArray_m36942(__this, method) (( SByteU5BU5D_t4778* (*) (List_1_t6461 *, const MethodInfo*))List_1_ToArray_m36942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::TrimExcess()
extern "C" void List_1_TrimExcess_m36943_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36943(__this, method) (( void (*) (List_1_t6461 *, const MethodInfo*))List_1_TrimExcess_m36943_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36944_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36944(__this, method) (( int32_t (*) (List_1_t6461 *, const MethodInfo*))List_1_get_Capacity_m36944_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36945_gshared (List_1_t6461 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36945(__this, ___value, method) (( void (*) (List_1_t6461 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36945_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Count()
extern "C" int32_t List_1_get_Count_m36946_gshared (List_1_t6461 * __this, const MethodInfo* method);
#define List_1_get_Count_m36946(__this, method) (( int32_t (*) (List_1_t6461 *, const MethodInfo*))List_1_get_Count_m36946_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t List_1_get_Item_m36947_gshared (List_1_t6461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36947(__this, ___index, method) (( int8_t (*) (List_1_t6461 *, int32_t, const MethodInfo*))List_1_get_Item_m36947_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36948_gshared (List_1_t6461 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36948(__this, ___index, ___value, method) (( void (*) (List_1_t6461 *, int32_t, int8_t, const MethodInfo*))List_1_set_Item_m36948_gshared)(__this, ___index, ___value, method)
