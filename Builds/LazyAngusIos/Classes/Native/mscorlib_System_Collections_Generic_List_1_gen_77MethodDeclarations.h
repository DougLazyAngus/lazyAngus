#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int16>
struct List_1_t6476;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int16>
struct IEnumerable_1_t6328;
// System.Int16[]
struct Int16U5BU5D_t4884;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_t6329;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9206;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int16>
struct ReadOnlyCollection_1_t6478;
// System.Predicate`1<System.Int16>
struct Predicate_1_t6483;
// System.Collections.Generic.IComparer`1<System.Int16>
struct IComparer_1_t5363;
// System.Comparison`1<System.Int16>
struct Comparison_1_t6487;
// System.Collections.Generic.List`1/Enumerator<System.Int16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_60.h"

// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor()
extern "C" void List_1__ctor_m37109_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1__ctor_m37109(__this, method) (( void (*) (List_1_t6476 *, const MethodInfo*))List_1__ctor_m37109_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37110_gshared (List_1_t6476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37110(__this, ___collection, method) (( void (*) (List_1_t6476 *, Object_t*, const MethodInfo*))List_1__ctor_m37110_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37111_gshared (List_1_t6476 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37111(__this, ___capacity, method) (( void (*) (List_1_t6476 *, int32_t, const MethodInfo*))List_1__ctor_m37111_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37112_gshared (List_1_t6476 * __this, Int16U5BU5D_t4884* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37112(__this, ___data, ___size, method) (( void (*) (List_1_t6476 *, Int16U5BU5D_t4884*, int32_t, const MethodInfo*))List_1__ctor_m37112_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.cctor()
extern "C" void List_1__cctor_m37113_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37113(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37113_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37114_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37114(__this, method) (( Object_t* (*) (List_1_t6476 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37114_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37115_gshared (List_1_t6476 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37115(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6476 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37115_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37116_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37116(__this, method) (( Object_t * (*) (List_1_t6476 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37116_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37117_gshared (List_1_t6476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37117(__this, ___item, method) (( int32_t (*) (List_1_t6476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37117_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37118_gshared (List_1_t6476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37118(__this, ___item, method) (( bool (*) (List_1_t6476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37119_gshared (List_1_t6476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37119(__this, ___item, method) (( int32_t (*) (List_1_t6476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37119_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37120_gshared (List_1_t6476 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37120(__this, ___index, ___item, method) (( void (*) (List_1_t6476 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37120_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37121_gshared (List_1_t6476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37121(__this, ___item, method) (( void (*) (List_1_t6476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37121_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37122_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37122(__this, method) (( bool (*) (List_1_t6476 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37123_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37123(__this, method) (( bool (*) (List_1_t6476 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37123_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37124_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37124(__this, method) (( Object_t * (*) (List_1_t6476 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37125_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37125(__this, method) (( bool (*) (List_1_t6476 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37125_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37126_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37126(__this, method) (( bool (*) (List_1_t6476 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37126_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37127_gshared (List_1_t6476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37127(__this, ___index, method) (( Object_t * (*) (List_1_t6476 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37128_gshared (List_1_t6476 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37128(__this, ___index, ___value, method) (( void (*) (List_1_t6476 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37128_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Add(T)
extern "C" void List_1_Add_m37129_gshared (List_1_t6476 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Add_m37129(__this, ___item, method) (( void (*) (List_1_t6476 *, int16_t, const MethodInfo*))List_1_Add_m37129_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37130_gshared (List_1_t6476 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37130(__this, ___newCount, method) (( void (*) (List_1_t6476 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37130_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37131_gshared (List_1_t6476 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37131(__this, ___idx, ___count, method) (( void (*) (List_1_t6476 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37131_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37132_gshared (List_1_t6476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37132(__this, ___collection, method) (( void (*) (List_1_t6476 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37132_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37133_gshared (List_1_t6476 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37133(__this, ___enumerable, method) (( void (*) (List_1_t6476 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37133_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37134_gshared (List_1_t6476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37134(__this, ___collection, method) (( void (*) (List_1_t6476 *, Object_t*, const MethodInfo*))List_1_AddRange_m37134_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6478 * List_1_AsReadOnly_m37135_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37135(__this, method) (( ReadOnlyCollection_1_t6478 * (*) (List_1_t6476 *, const MethodInfo*))List_1_AsReadOnly_m37135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Clear()
extern "C" void List_1_Clear_m37136_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_Clear_m37136(__this, method) (( void (*) (List_1_t6476 *, const MethodInfo*))List_1_Clear_m37136_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Contains(T)
extern "C" bool List_1_Contains_m37137_gshared (List_1_t6476 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Contains_m37137(__this, ___item, method) (( bool (*) (List_1_t6476 *, int16_t, const MethodInfo*))List_1_Contains_m37137_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37138_gshared (List_1_t6476 * __this, Int16U5BU5D_t4884* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37138(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6476 *, Int16U5BU5D_t4884*, int32_t, const MethodInfo*))List_1_CopyTo_m37138_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int16>::Find(System.Predicate`1<T>)
extern "C" int16_t List_1_Find_m37139_gshared (List_1_t6476 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method);
#define List_1_Find_m37139(__this, ___match, method) (( int16_t (*) (List_1_t6476 *, Predicate_1_t6483 *, const MethodInfo*))List_1_Find_m37139_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37140_gshared (Object_t * __this /* static, unused */, Predicate_1_t6483 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37140(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6483 *, const MethodInfo*))List_1_CheckMatch_m37140_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37141_gshared (List_1_t6476 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6483 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37141(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6476 *, int32_t, int32_t, Predicate_1_t6483 *, const MethodInfo*))List_1_GetIndex_m37141_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int16>::GetEnumerator()
extern "C" Enumerator_t6477  List_1_GetEnumerator_m37142_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37142(__this, method) (( Enumerator_t6477  (*) (List_1_t6476 *, const MethodInfo*))List_1_GetEnumerator_m37142_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6476 * List_1_GetRange_m37143_gshared (List_1_t6476 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37143(__this, ___index, ___count, method) (( List_1_t6476 * (*) (List_1_t6476 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37143_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37144_gshared (List_1_t6476 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37144(__this, ___item, method) (( int32_t (*) (List_1_t6476 *, int16_t, const MethodInfo*))List_1_IndexOf_m37144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37145_gshared (List_1_t6476 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37145(__this, ___start, ___delta, method) (( void (*) (List_1_t6476 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37145_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37146_gshared (List_1_t6476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37146(__this, ___index, method) (( void (*) (List_1_t6476 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37146_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37147_gshared (List_1_t6476 * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define List_1_Insert_m37147(__this, ___index, ___item, method) (( void (*) (List_1_t6476 *, int32_t, int16_t, const MethodInfo*))List_1_Insert_m37147_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37148_gshared (List_1_t6476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37148(__this, ___collection, method) (( void (*) (List_1_t6476 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37149_gshared (List_1_t6476 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37149(__this, ___index, ___collection, method) (( void (*) (List_1_t6476 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37149_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37150_gshared (List_1_t6476 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37150(__this, ___index, ___collection, method) (( void (*) (List_1_t6476 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37150_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37151_gshared (List_1_t6476 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37151(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6476 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37151_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Remove(T)
extern "C" bool List_1_Remove_m37152_gshared (List_1_t6476 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Remove_m37152(__this, ___item, method) (( bool (*) (List_1_t6476 *, int16_t, const MethodInfo*))List_1_Remove_m37152_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37153_gshared (List_1_t6476 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37153(__this, ___match, method) (( int32_t (*) (List_1_t6476 *, Predicate_1_t6483 *, const MethodInfo*))List_1_RemoveAll_m37153_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37154_gshared (List_1_t6476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37154(__this, ___index, method) (( void (*) (List_1_t6476 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37154_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37155_gshared (List_1_t6476 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37155(__this, ___index, ___count, method) (( void (*) (List_1_t6476 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37155_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Reverse()
extern "C" void List_1_Reverse_m37156_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_Reverse_m37156(__this, method) (( void (*) (List_1_t6476 *, const MethodInfo*))List_1_Reverse_m37156_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort()
extern "C" void List_1_Sort_m37157_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_Sort_m37157(__this, method) (( void (*) (List_1_t6476 *, const MethodInfo*))List_1_Sort_m37157_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37158_gshared (List_1_t6476 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37158(__this, ___comparer, method) (( void (*) (List_1_t6476 *, Object_t*, const MethodInfo*))List_1_Sort_m37158_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37159_gshared (List_1_t6476 * __this, Comparison_1_t6487 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37159(__this, ___comparison, method) (( void (*) (List_1_t6476 *, Comparison_1_t6487 *, const MethodInfo*))List_1_Sort_m37159_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int16>::ToArray()
extern "C" Int16U5BU5D_t4884* List_1_ToArray_m37160_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_ToArray_m37160(__this, method) (( Int16U5BU5D_t4884* (*) (List_1_t6476 *, const MethodInfo*))List_1_ToArray_m37160_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::TrimExcess()
extern "C" void List_1_TrimExcess_m37161_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37161(__this, method) (( void (*) (List_1_t6476 *, const MethodInfo*))List_1_TrimExcess_m37161_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37162_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37162(__this, method) (( int32_t (*) (List_1_t6476 *, const MethodInfo*))List_1_get_Capacity_m37162_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37163_gshared (List_1_t6476 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37163(__this, ___value, method) (( void (*) (List_1_t6476 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37163_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Count()
extern "C" int32_t List_1_get_Count_m37164_gshared (List_1_t6476 * __this, const MethodInfo* method);
#define List_1_get_Count_m37164(__this, method) (( int32_t (*) (List_1_t6476 *, const MethodInfo*))List_1_get_Count_m37164_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int16>::get_Item(System.Int32)
extern "C" int16_t List_1_get_Item_m37165_gshared (List_1_t6476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37165(__this, ___index, method) (( int16_t (*) (List_1_t6476 *, int32_t, const MethodInfo*))List_1_get_Item_m37165_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37166_gshared (List_1_t6476 * __this, int32_t ___index, int16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37166(__this, ___index, ___value, method) (( void (*) (List_1_t6476 *, int32_t, int16_t, const MethodInfo*))List_1_set_Item_m37166_gshared)(__this, ___index, ___value, method)
