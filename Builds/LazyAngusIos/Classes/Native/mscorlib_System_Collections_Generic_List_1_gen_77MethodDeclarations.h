#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t6405;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6346;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6347;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9178;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6407;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6409;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9244;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6413;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_60.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m36079_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1__ctor_m36079(__this, method) (( void (*) (List_1_t6405 *, const MethodInfo*))List_1__ctor_m36079_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36080_gshared (List_1_t6405 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36080(__this, ___collection, method) (( void (*) (List_1_t6405 *, Object_t*, const MethodInfo*))List_1__ctor_m36080_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36081_gshared (List_1_t6405 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36081(__this, ___capacity, method) (( void (*) (List_1_t6405 *, int32_t, const MethodInfo*))List_1__ctor_m36081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36082_gshared (List_1_t6405 * __this, ByteU5BU5D_t66* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36082(__this, ___data, ___size, method) (( void (*) (List_1_t6405 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1__ctor_m36082_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m36083_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36083(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36084_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36084(__this, method) (( Object_t* (*) (List_1_t6405 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36084_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36085_gshared (List_1_t6405 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36085(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6405 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36085_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36086_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36086(__this, method) (( Object_t * (*) (List_1_t6405 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36087_gshared (List_1_t6405 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36087(__this, ___item, method) (( int32_t (*) (List_1_t6405 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36087_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36088_gshared (List_1_t6405 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36088(__this, ___item, method) (( bool (*) (List_1_t6405 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36088_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36089_gshared (List_1_t6405 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36089(__this, ___item, method) (( int32_t (*) (List_1_t6405 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36090_gshared (List_1_t6405 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36090(__this, ___index, ___item, method) (( void (*) (List_1_t6405 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36091_gshared (List_1_t6405 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36091(__this, ___item, method) (( void (*) (List_1_t6405 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36091_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36092_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36092(__this, method) (( bool (*) (List_1_t6405 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36092_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36093_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36093(__this, method) (( bool (*) (List_1_t6405 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36093_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36094_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36094(__this, method) (( Object_t * (*) (List_1_t6405 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36094_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36095_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36095(__this, method) (( bool (*) (List_1_t6405 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36096_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36096(__this, method) (( bool (*) (List_1_t6405 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36097_gshared (List_1_t6405 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36097(__this, ___index, method) (( Object_t * (*) (List_1_t6405 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36098_gshared (List_1_t6405 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36098(__this, ___index, ___value, method) (( void (*) (List_1_t6405 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m36099_gshared (List_1_t6405 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m36099(__this, ___item, method) (( void (*) (List_1_t6405 *, uint8_t, const MethodInfo*))List_1_Add_m36099_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36100_gshared (List_1_t6405 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36100(__this, ___newCount, method) (( void (*) (List_1_t6405 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36100_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36101_gshared (List_1_t6405 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36101(__this, ___idx, ___count, method) (( void (*) (List_1_t6405 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36101_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36102_gshared (List_1_t6405 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36102(__this, ___collection, method) (( void (*) (List_1_t6405 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36102_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36103_gshared (List_1_t6405 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36103(__this, ___enumerable, method) (( void (*) (List_1_t6405 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36103_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36104_gshared (List_1_t6405 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36104(__this, ___collection, method) (( void (*) (List_1_t6405 *, Object_t*, const MethodInfo*))List_1_AddRange_m36104_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6407 * List_1_AsReadOnly_m36105_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36105(__this, method) (( ReadOnlyCollection_1_t6407 * (*) (List_1_t6405 *, const MethodInfo*))List_1_AsReadOnly_m36105_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m36106_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_Clear_m36106(__this, method) (( void (*) (List_1_t6405 *, const MethodInfo*))List_1_Clear_m36106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m36107_gshared (List_1_t6405 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m36107(__this, ___item, method) (( bool (*) (List_1_t6405 *, uint8_t, const MethodInfo*))List_1_Contains_m36107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36108_gshared (List_1_t6405 * __this, ByteU5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36108(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6405 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1_CopyTo_m36108_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m36109_gshared (List_1_t6405 * __this, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_Find_m36109(__this, ___match, method) (( uint8_t (*) (List_1_t6405 *, Predicate_1_t6409 *, const MethodInfo*))List_1_Find_m36109_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36110_gshared (Object_t * __this /* static, unused */, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36110(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6409 *, const MethodInfo*))List_1_CheckMatch_m36110_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36111_gshared (List_1_t6405 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36111(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6405 *, int32_t, int32_t, Predicate_1_t6409 *, const MethodInfo*))List_1_GetIndex_m36111_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6406  List_1_GetEnumerator_m36112_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36112(__this, method) (( Enumerator_t6406  (*) (List_1_t6405 *, const MethodInfo*))List_1_GetEnumerator_m36112_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6405 * List_1_GetRange_m36113_gshared (List_1_t6405 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36113(__this, ___index, ___count, method) (( List_1_t6405 * (*) (List_1_t6405 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36113_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36114_gshared (List_1_t6405 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36114(__this, ___item, method) (( int32_t (*) (List_1_t6405 *, uint8_t, const MethodInfo*))List_1_IndexOf_m36114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36115_gshared (List_1_t6405 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36115(__this, ___start, ___delta, method) (( void (*) (List_1_t6405 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36115_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36116_gshared (List_1_t6405 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36116(__this, ___index, method) (( void (*) (List_1_t6405 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36116_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36117_gshared (List_1_t6405 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m36117(__this, ___index, ___item, method) (( void (*) (List_1_t6405 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m36117_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36118_gshared (List_1_t6405 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36118(__this, ___collection, method) (( void (*) (List_1_t6405 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36118_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36119_gshared (List_1_t6405 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36119(__this, ___index, ___collection, method) (( void (*) (List_1_t6405 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36119_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36120_gshared (List_1_t6405 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36120(__this, ___index, ___collection, method) (( void (*) (List_1_t6405 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36120_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36121_gshared (List_1_t6405 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36121(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6405 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36121_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m36122_gshared (List_1_t6405 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m36122(__this, ___item, method) (( bool (*) (List_1_t6405 *, uint8_t, const MethodInfo*))List_1_Remove_m36122_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36123_gshared (List_1_t6405 * __this, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36123(__this, ___match, method) (( int32_t (*) (List_1_t6405 *, Predicate_1_t6409 *, const MethodInfo*))List_1_RemoveAll_m36123_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36124_gshared (List_1_t6405 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36124(__this, ___index, method) (( void (*) (List_1_t6405 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36124_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36125_gshared (List_1_t6405 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36125(__this, ___index, ___count, method) (( void (*) (List_1_t6405 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36125_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m36126_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_Reverse_m36126(__this, method) (( void (*) (List_1_t6405 *, const MethodInfo*))List_1_Reverse_m36126_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m36127_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_Sort_m36127(__this, method) (( void (*) (List_1_t6405 *, const MethodInfo*))List_1_Sort_m36127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36128_gshared (List_1_t6405 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36128(__this, ___comparer, method) (( void (*) (List_1_t6405 *, Object_t*, const MethodInfo*))List_1_Sort_m36128_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36129_gshared (List_1_t6405 * __this, Comparison_1_t6413 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36129(__this, ___comparison, method) (( void (*) (List_1_t6405 *, Comparison_1_t6413 *, const MethodInfo*))List_1_Sort_m36129_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t66* List_1_ToArray_m36130_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_ToArray_m36130(__this, method) (( ByteU5BU5D_t66* (*) (List_1_t6405 *, const MethodInfo*))List_1_ToArray_m36130_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m36131_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36131(__this, method) (( void (*) (List_1_t6405 *, const MethodInfo*))List_1_TrimExcess_m36131_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36132_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36132(__this, method) (( int32_t (*) (List_1_t6405 *, const MethodInfo*))List_1_get_Capacity_m36132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36133_gshared (List_1_t6405 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36133(__this, ___value, method) (( void (*) (List_1_t6405 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36133_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m36134_gshared (List_1_t6405 * __this, const MethodInfo* method);
#define List_1_get_Count_m36134(__this, method) (( int32_t (*) (List_1_t6405 *, const MethodInfo*))List_1_get_Count_m36134_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m36135_gshared (List_1_t6405 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36135(__this, ___index, method) (( uint8_t (*) (List_1_t6405 *, int32_t, const MethodInfo*))List_1_get_Item_m36135_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36136_gshared (List_1_t6405 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36136(__this, ___index, ___value, method) (( void (*) (List_1_t6405 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m36136_gshared)(__this, ___index, ___value, method)
